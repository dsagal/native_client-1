/*
 * Copyright 2009, Google Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met:
 *
 *     * Redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above
 * copyright notice, this list of conditions and the following disclaimer
 * in the documentation and/or other materials provided with the
 * distribution.
 *     * Neither the name of Google Inc. nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "native_client/src/shared/platform/nacl_check.h"
#include "native_client/src/trusted/service_runtime/nacl_globals.h"
#include "native_client/src/trusted/service_runtime/sel_ldr.h"
#include "native_client/src/trusted/service_runtime/springboard.h"
#include "native_client/src/trusted/service_runtime/tramp.h"
#include "native_client/src/trusted/service_runtime/arch/arm/sel_ldr_arm.h"


/* NOTE(robertm): the trampoline organization for ARM is currenly assuming
 * NACL_TRAMPOLINE_SIZE == 32. This is contrary to the bundle size
 * which is 16. The reason for this is tramp.S which has a payload
 * 5 instr + one data item
 */

/*
 * Install a syscall trampoline at target_addr.  NB: Thread-safe.
 * The code being patched is from tramp.S
 */
void  NaClPatchOneTrampoline(struct NaClApp *nap,
                             uintptr_t      target_addr) {
  struct NaClPatchInfo  patch_info;

  UNREFERENCED_PARAMETER(nap);
  /*
   * in ARM we do not need to patch ds, cs segments.
   * by default we initialize the target for trampoline code as NaClSyscallSeg,
   * so there is no point to patch address of NaClSyscallSeg
   */
  patch_info.num_abs16 = 0;
  patch_info.num_rel32 = 0;
  patch_info.num_abs32 = 0;

  patch_info.dst = target_addr;
  patch_info.src = (uintptr_t) &NaCl_trampoline_seg_code;
  patch_info.nbytes = ((uintptr_t) &NaCl_trampoline_seg_end
                       - (uintptr_t) &NaCl_trampoline_seg_code);

  NaClApplyPatchToMemory(&patch_info);
}


static void NaClFillMemoryRegionWithHalt(void *start, size_t size) {
  uint32_t *inst = (uint32_t *) start;
  uint32_t i;

  CHECK(0 == size % NACL_HALT_LEN);
  /* check that the region start is 4 bytes alligned */
  CHECK(0 == (uint32_t)start % NACL_HALT_LEN);

  for (i = 0; i < (size / NACL_HALT_LEN); i++)
    inst[i] = NACL_HALT_OPCODE;
}


void NaClFillTrampolineRegion(struct NaClApp *nap) {
  NaClFillMemoryRegionWithHalt((void *)(nap->mem_start + NACL_TRAMPOLINE_START),
                               NACL_TRAMPOLINE_SIZE);
}


/*
 * fill from static_text_end to end of that page with halt
 * instruction, which is NACL_HALT_LEN in size.
 */
void NaClFillEndOfTextRegion(struct NaClApp *nap) {
  size_t page_pad;

  if (nap->use_shm_for_dynamic_text) {
    page_pad = (NaClRoundAllocPage(nap->static_text_end)
                - nap->static_text_end);
    page_pad += nap->dynamic_text_end - nap->dynamic_text_start;
  } else {
    page_pad = NaClRoundPage(nap->static_text_end) - nap->static_text_end;
    CHECK(page_pad < NACL_PAGESIZE);
  }

  NaClLog(4,
          "Filling with halts: %08"PRIxPTR", %08"PRIxS" bytes\n",
          nap->mem_start + nap->static_text_end,
          page_pad);

  NaClFillMemoryRegionWithHalt((void *)(nap->mem_start + nap->static_text_end),
                               page_pad);

  nap->static_text_end += page_pad;
}

/*
 * patch a tls hook, which is used by nacl module for obtaining its tls pointer,
 * to the end of trampoline region minus one slot.
 * The code being patched is from nacl_tls_tramp.S
 */
void NaClLoadTlsHook(struct NaClApp *nap) {
  struct NaClPatchInfo  patch_info;
  struct NaClPatch      abs32;
  const uintptr_t       tls_hook_addr = NACL_TRAMPOLINE_END -
                                        2 * NACL_SYSCALL_BLOCK_SIZE;
  NaClLog(2, "Installing tls hook at 0x%08"PRIxPTR"\n", tls_hook_addr);

  patch_info.rel32 = 0;
  patch_info.num_rel32 = 0;
  patch_info.abs32 = &abs32;
  patch_info.num_abs32 = 0;
  patch_info.abs16 = 0;
  patch_info.num_abs16 = 0;
  patch_info.dst = nap->mem_start + tls_hook_addr;
  patch_info.src = (uintptr_t) &NaClReadTP_start;
  patch_info.nbytes = ((uintptr_t) &NaClReadTP_end
                       - (uintptr_t) &NaClReadTP_start);

  CHECK(patch_info.nbytes <= NACL_SYSCALL_BLOCK_SIZE);

  NaClApplyPatchToMemory(&patch_info);
}

/*
 * patch in springboard.S code into space in place of
 * the last syscall in the trampoline region.
 * The code being patched is from springboard.S
 */

void  NaClLoadSpringboard(struct NaClApp  *nap) {
  struct NaClPatchInfo  patch_info;
  struct NaClPatch      abs32;
  const uintptr_t       springboard_addr = NACL_TRAMPOLINE_END -
                                           NACL_SYSCALL_BLOCK_SIZE;
  NaClLog(2, "Installing springboard at 0x%08"PRIxPTR"\n", springboard_addr);

  patch_info.rel32 = 0;
  patch_info.num_rel32 = 0;
  patch_info.abs32 = &abs32;
  patch_info.num_abs32 = 0;
  patch_info.abs16 = 0;
  patch_info.num_abs16 = 0;
  patch_info.dst = nap->mem_start + springboard_addr;
  patch_info.src = (uintptr_t) &NaCl_springboard;
  patch_info.nbytes = ((uintptr_t) &NaCl_springboard_end
                       - (uintptr_t) &NaCl_springboard);

  NaClApplyPatchToMemory(&patch_info);

  nap->springboard_addr = springboard_addr + NACL_HALT_LEN; /* skip the hlt */
}
