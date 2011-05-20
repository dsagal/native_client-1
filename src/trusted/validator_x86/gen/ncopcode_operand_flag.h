/* /gen/ncopcode_operand_flag.h
 * THIS FILE IS AUTO_GENERATED DO NOT EDIT.
 *
 * This file was auto-generated by enum_gen.py
 * from file ncopcode_operand_flag.enum
 */

#ifndef _GEN_NCOPCODE_OPERAND_FLAG_H__
#define _GEN_NCOPCODE_OPERAND_FLAG_H__

#include "native_client/src/include/portability.h"

EXTERN_C_BEGIN
typedef enum NaClOpFlag {
  OpUse = 0,
  OpSet = 1,
  OpDest = 2,
  OpAddress = 3,
  OpImplicit = 4,
  OperandNear = 5,
  OperandFar = 6,
  OperandRelative = 7,
  OperandZeroExtends_v = 8,
  OperandSignExtends_v = 9,
  AllowGOperandWithOpcodeInModRm = 10,
  NaClOpFlagEnumSize = 11, /* special size marker */
} NaClOpFlag;

/* Returns the name of an NaClOpFlag constant. */
extern const char* NaClOpFlagName(NaClOpFlag name);

EXTERN_C_END

#endif /* _GEN_NCOPCODE_OPERAND_FLAG_H__ */
