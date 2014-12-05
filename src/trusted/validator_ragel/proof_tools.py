# Copyright (c) 2014 The Native Client Authors. All rights reserved.
# Use of this source code is governed by a BSD-style license that can be
# found in the LICENSE file.

"""Tools and utilities for creating proofs about tries."""

import itertools
import multiprocessing
import optparse

import spec
import trie
import validator


class Operands(object):
  """Contains parts of the disassembly of a single instruction.

  Also holds the implied restriction state.
  input_rr means that register must have the MSB 32 bits 0 before the
  instruction executes. Such a register can be used by this instruction
  as the index register for a memory operation in x86_64. There can
  only be one memory operand per instruction. Some AVX instructions allow
  a vector register to be used as an index register, impling multiple
  index values. However, we currently have no way to sandbox such instructions.
  output_rr means that the instruction produces a restricted register, i.e
  zeroes out the top 32 bits of a register.

  Can also hold partial information about an instruction while incrementally
  building up a full instruction.

  e.g. vaddpd 0x0(%r15,%r11,8),%ymm3,%ymm2 in ATT syntax is represented as:
    -> disasms: ('vaddpd', '0x0(%r15,%r11,8)', '%ymm3',  '%ymm2')
    -> input_rr: r11 (for x86_64) (or None for x86_32)
    -> output_rr: None

  When building up partial state, could be:
  e.g. just (disasms: ('0x0(%r15,%r11,8)', '%ymm3),
             input_rr: '%r111', output_rr: None) from example above.
  """
  __slots__ = ('disasms', 'input_rr', 'output_rr')

  def __init__(self, disasms=(), input_rr=None, output_rr=None):
    assert isinstance(disasms, tuple), disasms
    self.disasms = disasms
    self.input_rr = input_rr
    self.output_rr = output_rr

  def __repr__(self):
    return str((self.disasms, self.input_rr, self.output_rr))

  def __eq__(self, other):
    return (self.disasms == other.disasms and
            self.input_rr == other.input_rr and
            self.output_rr == other.output_rr)

  def __hash__(self):
    return hash((self.disasms,
                 self.input_rr,
                 self.output_rr))


def MergeOperands(ops1, ops2):
  """Combine two different Operands (disassembly parts and implications)."""
  assert ops1.input_rr is None or ops2.input_rr is None
  assert ops1.output_rr is None or ops2.output_rr is None
  return Operands(ops1.disasms + ops2.disasms,
                  ops1.input_rr if ops1.input_rr else ops2.input_rr,
                  ops1.output_rr if ops1.output_rr else ops2.output_rr)


def AllXMMOperands(bitness):
  """Returns the set of all XMM registers as individual Operands objects."""
  assert bitness in (32, 64), bitness
  return set([Operands(disasms=('%xmm{}'.format(i),))
              for i in xrange(8 if bitness == 32 else 16)])


def AllYMMOperands(bitness):
  """Returns the set of all YMM registers as individual Operands objects."""
  assert bitness in (32, 64), bitness
  return set([Operands(disasms=('%ymm{}'.format(i),))
              for i in xrange(8 if bitness == 32 else 16)])


def GprOperands(bitness, operand_size, is_write_for_64_bit=True):
  """Returns all gpr operands as an operand set.
  Args:
    bitness: architecture bitness to distinguish x86_32/x86_64: (32, 64)
    operand_size: size of register to be used in write.
    is_write_for_64_bit: if bitness == 64, exclude special
                         registers rsp, rbp, r15 for sandbox reasons.
  """
  regs = []
  if operand_size == 16 and bitness == 32:
    regs = ['%ax', '%bx', '%cx', '%dx', '%bp', '%sp', '%di', '%si']
  elif operand_size == 32 and bitness == 32:
    regs = ['%eax', '%ebp', '%ebx', '%ecx', '%edi', '%edx', '%esi', '%esp']
  elif bitness == 64 and operand_size == 32:
    regs = ['%eax', '%ebx', '%ecx', '%edi', '%edx', '%esi',
            '%r8d', '%r9d', '%r10d', '%r11d', '%r12d', '%r13d', '%r14d']
    # Don't include '%ebp', '%esp', '%r15d' in allowed registers when
    # is_write_for_64_bit == True.
    if is_write_for_64_bit == False:
      regs += ['%esp', '%ebp', '%r15d']
  else:
    raise AssertionError("Unimplemented")
  return set([Operands(disasms=(reg,)) for reg in regs])


def MnemonicOp(name):
  """Returns the mnemonic as an operand set."""
  assert isinstance(name, str)
  return set([Operands(disasms=(name,))])

def ImmOp():
  """Returns an immediate as an operand set."""
  # When walking the DFA, immediates are currently returned as 0x0.
  return set([Operands(disasms=('$0x0',))])

def LockPrefix():
  """Returns the lock prefix as an operand set."""
  return set([Operands(disasms=('lock',))])

def MemoryOperandsTemplate(disp, base, index, scale, bitness):
  """Returns all the possible different memory operands using given parameters.

  Returns list of Operands instances.
  e.g. for disp='0x0', base='%eax', index='%ebx', scale=2
   [ '(%ebx)',  # Base Register Only
     '0x0',  # Displacement Only
     '(%ebx,%eax',2)',  # Base Register + Index register * scale.
     '0x0(,%eax,2)',  # Displacement + Index Register * scale.
     '0x0(%ebx)',  # Displacement + Base Register.
     '0x0(%ebx,%eax,2),  # Displacement + Base Register + Index Register * scale
   ]

  Note that Base register must be used for x86_64.
  Within the returned Operands objects, the input RR is set to the
  index register if the index is used for x86_64.

  Args:
    disp: displacement to use in memory operand.
    base: string register name to use for base register in addressing.
    index: string register name to use for index register in addressing.
    scale: integer scale to use to multiply index register by in addressing.
    bitness: 32 or 64
  Returns:
    list of Operands instances representing all ways to use the parameters.
  """
  assert bitness in (32, 64), bitness

  input_rr = None
  # Note: %riz is a fake register that always reads 0. It is allowed as an
  # index register (though it is redundant). However, because it is always
  # 0, we don't encode that it needs to be restricted.
  if bitness == 64 and index != '%riz':
    input_rr = index

  base_only_encoding = []
  # There is no way to encode base without displacement with ebp/rbp.
  # Have to use 0x0+%ebp.
  if base not in ('%ebp', '%rbp'):
    base_only_encoding = [Operands(disasms=('({})'.format(base),))]

  base_plus_index_scale_encoding = []
  # There is no way to encode base without displacement with ebp/rbp.
  # Have to use 0x0+%ebp.
  if base not in ('%ebp', '%rbp'):
    base_plus_index_scale_encoding = [
        Operands(disasms=('({},{},{})'.format(base, index, scale),),
                 input_rr=input_rr)]

  disp_only_encoding = [Operands(disasms=(disp,))]

  disp_plus_index_scale_encoding = [
      Operands(disasms=('{}(,{},{})'.format(disp, index, scale),),
               input_rr=input_rr)]

  disp_plus_base_encoding = [
      Operands(disasms=('{}({})'.format(disp, base),))]

  disp_plus_base_plus_index_scale_encoding = [
      Operands(
          disasms=('{}({},{},{})'.format(disp, base, index, scale),),
          input_rr=input_rr)]


  # Redundant %eiz/%riz encoding isn't available with scale == 1.
  if (base in ('%esp', '%rsp') and
      index in ('%eiz', '%riz') and
      scale == 1):
    return []

  if bitness == 32:
    return (base_only_encoding +
            disp_only_encoding +
            base_plus_index_scale_encoding +
            disp_plus_index_scale_encoding +
            disp_plus_base_encoding +
            disp_plus_base_plus_index_scale_encoding)
  else:
    # Note: x86_64 allows rip relative addressing (x86_32 doesn't_).
    # However, not all of the different addressing modes are available
    # for rip relative addressing (only disp + rip).  This is
    # MOD==b'00, RM==b'101
    if base == '%rip':
      return disp_plus_base_encoding
    else:
      # x86_64 memory disasms must always include base register, so the
      # Disp() and DispPlusIndexScale() options available for x86_32 aren't
      # permitted.
      return (base_only_encoding +
              disp_plus_base_encoding +
              base_plus_index_scale_encoding +
              disp_plus_base_plus_index_scale_encoding)


def AllMemoryOperands(bitness):
  """The set of all possible memory operands as individual Operands objects."""
  assert bitness in (32, 64), bitness
  displacements = ['0x0']
  scales = [1, 2, 4, 8]
  if bitness == 32:
    bases = set(['%eax', '%ebp', '%ebx', '%ecx',
                 '%edi', '%edx', '%esi', '%esp'])
    indexes = (bases | set(['%eiz'])) - set(['%esp'])
  elif bitness == 64:
    indexes = set(['%rax', '%rbx', '%rcx', '%rdi', '%rdx',
                   '%rsi', '%r8', '%r9', '%r10', '%r11',
                   '%r12', '%r13', '%r14', '%r15', '%riz'])
    bases = set(['%rsp', '%rbp', '%r15', '%rip'])

  result = set()
  for (d, b, i, s) in itertools.product(displacements, bases, indexes, scales):
    result.update(MemoryOperandsTemplate(disp=d, base=b, index=i, scale=s,
                                         bitness=bitness))
  return result


def OpsProd(*args):
  """A version of itertools.product that builds Operands.

  e.g.

  XMM = (Operands(disasms=('%xmm1',)), Operands(disasms=('%xmm2',)))
  REG = (Operands(disasms=('%rax',)), Operands(disasms=('%rbx',)))

  OpsProd(XMM, REG) ->
    set([Operands(disasms=('%xmm1', '%rax')),
         Operands(disasms=('%xmm1', '%rbx')),
         Operands(disasms=('%xmm2', '%rax')),
         Operands(disasms=('%xmm2', '%rbx'))])

  Args:
    *args: each input is a collection of Operands.
  Returns:
    set of Operands instances, where each instance is a merge of Operands
    objects, one taken from each input iterator.
  """
  result = set([Operands()])
  for pool in args:
    result = set([MergeOperands(x, y) for (x,y) in
                 itertools.product(result, pool)])
  return result


def GetRRInfoFromTrie(trie_state, bitness):
  """Convert rr info from trie to format suitable for Operands instance."""
  input_rr = trie_state.input_rr
  output_rr = trie_state.output_rr
  if bitness == 32:
    assert not input_rr, input_rr
    assert not output_rr, output_rr
  if input_rr == 'any_nonspecial' or not input_rr:
    input_rr = None
  if output_rr == 'None' or not output_rr:
    output_rr = None
  return input_rr, output_rr


def Disassemble((bitness, (byte_tuple, accept_info1, accept_info2))):
  """Disassembles byte sequence and returns it in old or new trie."""
  global the_validator
  old_trie_set = set()
  new_trie_set = set()
  disassembly = the_validator.DisassembleChunk(
      ''.join([chr(int(x)) for x in byte_tuple]),
      bitness=bitness)
  assert len(disassembly) == 1
  prefixes, mnemonic, operands = (spec.ParseInstruction(disassembly[0]))
  full_operands = tuple(prefixes + [mnemonic] + operands)
  if accept_info1 is not None:
    input_rr, output_rr = GetRRInfoFromTrie(accept_info1, bitness)
    old_trie_set.add(Operands(disasms=full_operands,
                              input_rr=input_rr,
                              output_rr=output_rr))
  if accept_info2 is not None:
    input_rr, output_rr = GetRRInfoFromTrie(accept_info2, bitness)
    new_trie_set.add(Operands(disasms=full_operands,
                              input_rr=input_rr,
                              output_rr=output_rr))
  return old_trie_set, new_trie_set


def ParseStandardOpts():
  """Parses a standard set of options for validator proofs from command line."""
  parser = optparse.OptionParser(
      usage='%prog --bitness=[32,64] --old=path1 --new=path2')
  parser.add_option('--old', help='Path of the old trie')
  parser.add_option('--new', help='Path of the new trie')
  parser.add_option('--bitness', choices=['32', '64'])
  parser.add_option('--validator_dll', help='Path of the validator library')
  parser.add_option('--decoder_dll', help='Path of the decoder library')
  options, _ = parser.parse_args()
  return options


def RunProof(standard_opts, proof_func):
  """Validates that trie diffs conform to to a proof.

  Args:
    standard_opts: command line options describing the two tries to be diffed,
                   arch type, etc. (as returned by ParseStandardOpts)
    proof_func: Callback of (TrieDiffSet, bitness) to run to prove the diff.
  Returns:
    None
  """
  # The validator itself must be passed to the other processes as a global
  # as it is c object that must be passed via forking and not as an argument
  # which means the validator must support being via pickled.
  global the_validator
  the_validator = validator.Validator(
      validator_dll=standard_opts.validator_dll,
      decoder_dll=standard_opts.decoder_dll)
  bitness = int(standard_opts.bitness)
  adds = set()
  removes = set()
  tasks = itertools.izip(itertools.repeat(bitness),
                         trie.DiffTrieFiles(standard_opts.new,
                                            standard_opts.old))
  pool = multiprocessing.Pool()
  results = pool.imap_unordered(Disassemble, tasks, chunksize=10000)
  for new, old in results:
    adds |= new
    removes |= old
  proof_func((adds, removes), bitness)


def AssertDiffSetEquals((adds, removes),
                        expected_adds, expected_removes):
  """Assert that diffs is composed of expected_adds and expected_removes."""
  if adds != expected_adds:
    raise AssertionError('falsely added instructions: ',
                         adds - expected_adds,
                         'unadded instructions: ',
                         expected_adds - adds)

  if removes != expected_removes:
    raise AssertionError('falsely removed instructions: ',
                         removes - expected_removes,
                         'missing instructions: ',
                         expected_removes - removes)

