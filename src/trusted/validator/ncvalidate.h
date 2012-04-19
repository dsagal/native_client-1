/*
 * Copyright (c) 2012 The Native Client Authors. All rights reserved.
 * Use of this source code is governed by a BSD-style license that can be
 * found in the LICENSE file.
 */

#ifndef NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_X86_NCVALIDATE_H__
#define NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_X86_NCVALIDATE_H__

/* Defines the API to the native client validation code.
 *
 * Note that the API is designed to use the NACL_SUBARCH_NAME
 * macro. This macro encapsulates the target architecture the
 * code is being compiled for into the name of the function.
 * This lets the API call different functions based on the
 * target architecture the code is being compiled for. It also allows
 * the maintainers of the compiled libraries to change the implementation
 * without having to update the API callers.
 *
 * The macro NACL_SUBARCH_NAME(name, arch, subarch) prepends "NaCl_"
 * to the function name, and suffixes it with the architecture and
 * corresponding subarchitecture (with underscores separating it).
 * Hence, for example, NACL_SUBARCH_NAME(ApplyValidator, x86, 64)
 * would generate the function name NaCL_ApplyValidator_x86_64.
 */
/* TODO(bradchen): Cleanup the interface to the validator. There
 * are too many combinations of different calls and input parameters,
 * making this interface hard to understand and hard to modify.
 */

#include "native_client/src/include/nacl_base.h"
#include "native_client/src/shared/utils/types.h"
#include "native_client/src/trusted/validator/cpufeatures.h"

EXTERN_C_BEGIN

struct NaClValidationCache;

/* Defines the API to select the validator kind.
 * So far only the ARM architecture has a non-default validator kind
 *
 * NaClSBKind can be architecture specific, but requries more
 * scaffolding. So it is probably not worth while to split up the flag.
 */
enum NaClSBKind {
  NACL_SB_DEFAULT         = 0,
  NACL_SB_ARM_THUMB2      = 1
};

/* Defines possible validation status values. */
typedef enum NaClValidationStatus {
  /* The call to the validator succeeded. */
  NaClValidationSucceeded,
  /* The call to the validator failed (Reason unspecified) */
  NaClValidationFailed,
  /* The call to the validator failed, due to not enough memory. */
  NaClValidationFailedOutOfMemory,
  /* The call to the validator failed, due to it not being implemented yet. */
  NaClValidationFailedNotImplemented,
  /* The call to the validator failed, because the CPU is not supported. */
  NaClValidationFailedCpuNotSupported,
  /* The call to the validator failed, due to segment alignment issues. */
  NaClValidationFailedSegmentationIssue
} NaClValidationStatus;

/* Applies the validator, as defined by sel_ldr. That is, run the
 * validator where performance is critical.
 * Parameters are:
 *    local_cpu: True if local cpu rules should be applied.
 *           Otherwise, assume no cpu specific rules.
 *    guest_addr - The virtual pc to assume with the beginning address of the
 *           code segment. Typically, this is the corresponding addresss that
 *           will be used by objdump.
 *    data - The contents of the code segment to be validated.
 *    size - The size of the code segment to be validated.
 *    stubout_mode - Whether the validator should stub out disallowed
 *           instructions. This applies the validator silently, stubbing out
 *           instructions that may not validate with a suitable halt
 *           instruction. Note: The return status of NaClValidationSucceeded in
 *           this case does not necessarily imply that all illegal instructions
 *           have been stubbed out. It is the responsibility of the caller to
 *           call the validator a second time to see if the stubbed code is
 *           valid. Typically used as the first step of a stubout tool (either
 *           in sel_ldr or command-line tool).
 *    readonly_text - If code should be considered read-only.
 *    cpu_features - The CPU features to support while validating.
 *    cache - Pointer to NaCl validation cache.
 */
extern NaClValidationStatus NACL_SUBARCH_NAME(ApplyValidator,
                                              NACL_TARGET_ARCH,
                                              NACL_TARGET_SUBARCH)(
    enum NaClSBKind         sb_kind,
    uintptr_t               guest_addr,
    uint8_t                 *data,
    size_t                  size,
    int                     stubout_mode,
    int                     readonly_text,
    const NaClCPUFeatures   *cpu_features,
    struct NaClValidationCache *cache);

/* Applies the validator, as used in a command-line tool to report issues.
 * Note: This is intentionally separated from ApplyValidator, since it need
 * not be performance critical.
 * Parameters are:
 *    local_cpu: True if local cpu rules should be applied.
 *           Otherwise, assume no cpu specific rules.
 *    guest_addr - The virtual pc to assume with the beginning address of the
 *           code segment. Typically, this is the corresponding addresss that
 *           will be used by objdump.
 *    data - The contents of the code segment to be validated.
 *    size - The size of the code segment to be validated.
 *    cpu_features - The CPU features to support while validating.
 */
extern NaClValidationStatus NACL_SUBARCH_NAME(ApplyValidatorVerbosely,
                                              NACL_TARGET_ARCH,
                                              NACL_TARGET_SUBARCH)(
    enum NaClSBKind         sb_kind,
    uintptr_t               guest_addr,
    uint8_t                 *data,
    size_t                  size,
    const NaClCPUFeatures   *cpu_features);

/* Applies validator to new code segment, assuming that it was updated
 * from the previously validated old code segment. Assumes that instruction
 * sizes are the same. Only allows changes in branches that don't change
 * instruction sizes.
 * Parameters are:
 *    guest_addr - The virtual pc to assume with the beginning address of the
 *           code segment. Typically, this is the corresponding addresss that
 *           will be used by objdump.
 *    data_old - The contents of the original code segment.
 *    data_new - The contents of the new code segment that should be validated.
 *    size - The size of the passed code segments.
 *    cpu_features - The CPU features to support while validating.
 */
extern NaClValidationStatus NACL_SUBARCH_NAME(ApplyValidatorCodeReplacement,
                                              NACL_TARGET_ARCH,
                                              NACL_TARGET_SUBARCH)(
      enum NaClSBKind       sb_kind,
      uintptr_t             guest_addr,
      uint8_t               *data_old,
      uint8_t               *data_new,
      size_t                size,
      const NaClCPUFeatures *cpu_features);

/* Runs the validator to copy code from an existing code segment to a new
 * code segment.
 *
 * Note: Current implementations uses the instruction decoders, which may
 * require that the code segment match native client rules.
 *
 * Parameters are:
 *    guest_addr - The virtual pc to assume with the beginning address of the
 *           code segment. Typically, this is the corresponding addresss that
 *           will be used by objdump.
 *    data_old - The contents of the original code segment.
 *    data_new - The addres of the new code segment for which the original
 *           code segment should be copied into.
 *    size - The size of the passed code segments.
 *    cpu_features - The CPU features to support while validating.
 */
extern NaClValidationStatus NACL_SUBARCH_NAME(ApplyValidatorCopy,
                                              NACL_TARGET_ARCH,
                                              NACL_TARGET_SUBARCH)(
    enum NaClSBKind       sb_kind,
    uintptr_t             guest_addr,
    uint8_t               *data_old,
    uint8_t               *data_new,
    size_t                size,
    const NaClCPUFeatures *cpu_features);

EXTERN_C_END

#endif  /*  NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_X86_NCVALIDATE_H__ */
