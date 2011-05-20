/* /gen/ncopcode_opcode_flags.h
 * THIS FILE IS AUTO_GENERATED DO NOT EDIT.
 *
 * This file was auto-generated by enum_gen.py
 * from file ncopcode_opcode_flags.enum
 */

#ifndef _GEN_NCOPCODE_OPCODE_FLAGS_H__
#define _GEN_NCOPCODE_OPCODE_FLAGS_H__

#include "native_client/src/include/portability.h"

EXTERN_C_BEGIN
typedef enum NaClIFlag {
  OpcodeUsesRexW = 0,
  OpcodeHasRexR = 1,
  OpcodeInModRm = 2,
  Opcode0F0F = 3,
  OpcodeInModRmRm = 4,
  OpcodeLtC0InModRm = 5,
  ModRmModIs0x3 = 6,
  ModRmModIsnt0x3 = 7,
  ModRmRegSOperand = 8,
  OpcodeUsesModRm = 9,
  OpcodeHasImmed = 10,
  OpcodeHasImmed_b = 11,
  OpcodeHasImmed_w = 12,
  OpcodeHasImmed_v = 13,
  OpcodeHasImmed_p = 14,
  OpcodeHasImmed_o = 15,
  OpcodeHasImmed_z = 16,
  OpcodeHasImmed2_b = 17,
  OpcodeHasImmed2_w = 18,
  OpcodeHasImmed2_v = 19,
  OpcodeHasImmed_Addr = 20,
  OpcodePlusR = 21,
  OpcodePlusI = 22,
  OpcodeRex = 23,
  OpcodeLegacy = 24,
  OpcodeLockable = 25,
  OpcodeAllowsRep = 26,
  OpcodeAllowsRepne = 27,
  OpcodeAllowsData16 = 28,
  SizeIgnoresData16 = 29,
  Opcode32Only = 30,
  Opcode64Only = 31,
  OperandSize_b = 32,
  OperandSize_w = 33,
  OperandSize_v = 34,
  OperandSize_o = 35,
  AddressSize_w = 36,
  AddressSize_v = 37,
  AddressSize_o = 38,
  NaClIllegal = 39,
  OperandSizeDefaultIs64 = 40,
  OperandSizeForce64 = 41,
  LongMode = 42,
  IgnorePrefixDATA16 = 43,
  IgnorePrefixSEGCS = 44,
  NaClIFlagEnumSize = 45, /* special size marker */
} NaClIFlag;

/* Returns the name of an NaClIFlag constant. */
extern const char* NaClIFlagName(NaClIFlag name);

EXTERN_C_END

#endif /* _GEN_NCOPCODE_OPCODE_FLAGS_H__ */
