/*
 * Copyright 2013 The Native Client Authors.  All rights reserved.
 * Use of this source code is governed by a BSD-style license that can
 * be found in the LICENSE file.
 */

// DO NOT EDIT: GENERATED CODE


#ifndef NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_ARM_GEN_ARM32_DECODE_H_
#define NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_ARM_GEN_ARM32_DECODE_H_

#include "native_client/src/trusted/validator_arm/decode.h"
#include "native_client/src/trusted/validator_arm/gen/arm32_decode_actuals.h"

namespace nacl_arm_dec {

// Defines a decoder class selector for instructions.
class Arm32DecoderState : DecoderState {
 public:
   explicit Arm32DecoderState();

   // Parses the given instruction, returning the decoder to use.
   virtual const ClassDecoder& decode(const Instruction) const;

 private:

  // The following list of methods correspond to each decoder table,
  // and implements the pattern matching of the corresponding bit
  // patterns. After matching the corresponding bit patterns, they
  // either call other methods in this list (corresponding to another
  // decoder table), or they return the instance field that implements
  // the class decoder that should be used to decode the particular
  // instruction.

  inline const ClassDecoder& decode_ARMv7(
      const Instruction inst) const;

  inline const ClassDecoder& decode_advanced_simd_data_processing_instructions(
      const Instruction inst) const;

  inline const ClassDecoder& decode_advanced_simd_element_or_structure_load_store_instructions(
      const Instruction inst) const;

  inline const ClassDecoder& decode_branch_branch_with_link_and_block_data_transfer(
      const Instruction inst) const;

  inline const ClassDecoder& decode_coprocessor_instructions_and_supervisor_call(
      const Instruction inst) const;

  inline const ClassDecoder& decode_data_processing_and_miscellaneous_instructions(
      const Instruction inst) const;

  inline const ClassDecoder& decode_data_processing_immediate(
      const Instruction inst) const;

  inline const ClassDecoder& decode_data_processing_register(
      const Instruction inst) const;

  inline const ClassDecoder& decode_data_processing_register_shifted_register(
      const Instruction inst) const;

  inline const ClassDecoder& decode_extension_register_load_store_instructions(
      const Instruction inst) const;

  inline const ClassDecoder& decode_extra_load_store_instructions(
      const Instruction inst) const;

  inline const ClassDecoder& decode_floating_point_data_processing_instructions(
      const Instruction inst) const;

  inline const ClassDecoder& decode_halfword_multiply_and_multiply_accumulate(
      const Instruction inst) const;

  inline const ClassDecoder& decode_load_store_word_and_unsigned_byte(
      const Instruction inst) const;

  inline const ClassDecoder& decode_media_instructions(
      const Instruction inst) const;

  inline const ClassDecoder& decode_memory_hints_advanced_simd_instructions_and_miscellaneous_instructions(
      const Instruction inst) const;

  inline const ClassDecoder& decode_miscellaneous_instructions(
      const Instruction inst) const;

  inline const ClassDecoder& decode_msr_immediate_and_hints(
      const Instruction inst) const;

  inline const ClassDecoder& decode_multiply_and_multiply_accumulate(
      const Instruction inst) const;

  inline const ClassDecoder& decode_other_floating_point_data_processing_instructions(
      const Instruction inst) const;

  inline const ClassDecoder& decode_packing_unpacking_saturation_and_reversal(
      const Instruction inst) const;

  inline const ClassDecoder& decode_parallel_addition_and_subtraction_signed(
      const Instruction inst) const;

  inline const ClassDecoder& decode_parallel_addition_and_subtraction_unsigned(
      const Instruction inst) const;

  inline const ClassDecoder& decode_saturating_addition_and_subtraction(
      const Instruction inst) const;

  inline const ClassDecoder& decode_signed_multiply_signed_and_unsigned_divide(
      const Instruction inst) const;

  inline const ClassDecoder& decode_simd_dp_1imm(
      const Instruction inst) const;

  inline const ClassDecoder& decode_simd_dp_2misc(
      const Instruction inst) const;

  inline const ClassDecoder& decode_simd_dp_2scalar(
      const Instruction inst) const;

  inline const ClassDecoder& decode_simd_dp_2shift(
      const Instruction inst) const;

  inline const ClassDecoder& decode_simd_dp_3diff(
      const Instruction inst) const;

  inline const ClassDecoder& decode_simd_dp_3same(
      const Instruction inst) const;

  inline const ClassDecoder& decode_synchronization_primitives(
      const Instruction inst) const;

  inline const ClassDecoder& decode_transfer_between_arm_core_and_extension_register_8_16_and_32_bit(
      const Instruction inst) const;

  inline const ClassDecoder& decode_transfer_between_arm_core_and_extension_registers_64_bit(
      const Instruction inst) const;

  inline const ClassDecoder& decode_unconditional_instructions(
      const Instruction inst) const;

  // The following fields define the set of class decoders
  // that can be returned by the API function "decode". They
  // are created once as instance fields, and then returned
  // by the table methods above. This speeds up the code since
  // the class decoders need to only be built once (and reused
  // for each call to "decode").
  const Actual_ADC_immediate_cccc0010101snnnnddddiiiiiiiiiiii_case_1 Actual_ADC_immediate_cccc0010101snnnnddddiiiiiiiiiiii_case_1_instance_;
  const Actual_ADC_register_cccc0000101snnnnddddiiiiitt0mmmm_case_1 Actual_ADC_register_cccc0000101snnnnddddiiiiitt0mmmm_case_1_instance_;
  const Actual_ADC_register_shifted_register_cccc0000101snnnnddddssss0tt1mmmm_case_1 Actual_ADC_register_shifted_register_cccc0000101snnnnddddssss0tt1mmmm_case_1_instance_;
  const Actual_ADD_immediate_cccc0010100snnnnddddiiiiiiiiiiii_case_1 Actual_ADD_immediate_cccc0010100snnnnddddiiiiiiiiiiii_case_1_instance_;
  const Actual_ADR_A1_cccc001010001111ddddiiiiiiiiiiii_case_1 Actual_ADR_A1_cccc001010001111ddddiiiiiiiiiiii_case_1_instance_;
  const Actual_ASR_immediate_cccc0001101s0000ddddiiiii100mmmm_case_1 Actual_ASR_immediate_cccc0001101s0000ddddiiiii100mmmm_case_1_instance_;
  const Actual_ASR_register_cccc0001101s0000ddddmmmm0101nnnn_case_1 Actual_ASR_register_cccc0001101s0000ddddmmmm0101nnnn_case_1_instance_;
  const Actual_BFC_cccc0111110mmmmmddddlllll0011111_case_1 Actual_BFC_cccc0111110mmmmmddddlllll0011111_case_1_instance_;
  const Actual_BFI_cccc0111110mmmmmddddlllll001nnnn_case_1 Actual_BFI_cccc0111110mmmmmddddlllll001nnnn_case_1_instance_;
  const Actual_BIC_immediate_cccc0011110snnnnddddiiiiiiiiiiii_case_1 Actual_BIC_immediate_cccc0011110snnnnddddiiiiiiiiiiii_case_1_instance_;
  const Actual_BKPT_cccc00010010iiiiiiiiiiii0111iiii_case_1 Actual_BKPT_cccc00010010iiiiiiiiiiii0111iiii_case_1_instance_;
  const Actual_BLX_immediate_1111101hiiiiiiiiiiiiiiiiiiiiiiii_case_1 Actual_BLX_immediate_1111101hiiiiiiiiiiiiiiiiiiiiiiii_case_1_instance_;
  const Actual_BLX_register_cccc000100101111111111110011mmmm_case_1 Actual_BLX_register_cccc000100101111111111110011mmmm_case_1_instance_;
  const Actual_BL_BLX_immediate_cccc1011iiiiiiiiiiiiiiiiiiiiiiii_case_1 Actual_BL_BLX_immediate_cccc1011iiiiiiiiiiiiiiiiiiiiiiii_case_1_instance_;
  const Actual_B_cccc1010iiiiiiiiiiiiiiiiiiiiiiii_case_1 Actual_B_cccc1010iiiiiiiiiiiiiiiiiiiiiiii_case_1_instance_;
  const Actual_Bx_cccc000100101111111111110001mmmm_case_1 Actual_Bx_cccc000100101111111111110001mmmm_case_1_instance_;
  const Actual_CLZ_cccc000101101111dddd11110001mmmm_case_1 Actual_CLZ_cccc000101101111dddd11110001mmmm_case_1_instance_;
  const Actual_CMN_immediate_cccc00110111nnnn0000iiiiiiiiiiii_case_1 Actual_CMN_immediate_cccc00110111nnnn0000iiiiiiiiiiii_case_1_instance_;
  const Actual_CMN_register_cccc00010111nnnn0000iiiiitt0mmmm_case_1 Actual_CMN_register_cccc00010111nnnn0000iiiiitt0mmmm_case_1_instance_;
  const Actual_CMN_register_shifted_register_cccc00010111nnnn0000ssss0tt1mmmm_case_1 Actual_CMN_register_shifted_register_cccc00010111nnnn0000ssss0tt1mmmm_case_1_instance_;
  const Actual_CVT_between_half_precision_and_single_precision_111100111d11ss10dddd011p00m0mmmm_case_1 Actual_CVT_between_half_precision_and_single_precision_111100111d11ss10dddd011p00m0mmmm_case_1_instance_;
  const Actual_DMB_1111010101111111111100000101xxxx_case_1 Actual_DMB_1111010101111111111100000101xxxx_case_1_instance_;
  const Actual_ISB_1111010101111111111100000110xxxx_case_1 Actual_ISB_1111010101111111111100000110xxxx_case_1_instance_;
  const Actual_LDMDA_LDMFA_cccc100000w1nnnnrrrrrrrrrrrrrrrr_case_1 Actual_LDMDA_LDMFA_cccc100000w1nnnnrrrrrrrrrrrrrrrr_case_1_instance_;
  const Actual_LDRB_immediate_cccc010pu1w1nnnnttttiiiiiiiiiiii_case_1 Actual_LDRB_immediate_cccc010pu1w1nnnnttttiiiiiiiiiiii_case_1_instance_;
  const Actual_LDRB_literal_cccc0101u1011111ttttiiiiiiiiiiii_case_1 Actual_LDRB_literal_cccc0101u1011111ttttiiiiiiiiiiii_case_1_instance_;
  const Actual_LDRB_register_cccc011pu1w1nnnnttttiiiiitt0mmmm_case_1 Actual_LDRB_register_cccc011pu1w1nnnnttttiiiiitt0mmmm_case_1_instance_;
  const Actual_LDRD_immediate_cccc000pu1w0nnnnttttiiii1101iiii_case_1 Actual_LDRD_immediate_cccc000pu1w0nnnnttttiiii1101iiii_case_1_instance_;
  const Actual_LDRD_literal_cccc0001u1001111ttttiiii1101iiii_case_1 Actual_LDRD_literal_cccc0001u1001111ttttiiii1101iiii_case_1_instance_;
  const Actual_LDRD_register_cccc000pu0w0nnnntttt00001101mmmm_case_1 Actual_LDRD_register_cccc000pu0w0nnnntttt00001101mmmm_case_1_instance_;
  const Actual_LDREXB_cccc00011101nnnntttt111110011111_case_1 Actual_LDREXB_cccc00011101nnnntttt111110011111_case_1_instance_;
  const Actual_LDREXD_cccc00011011nnnntttt111110011111_case_1 Actual_LDREXD_cccc00011011nnnntttt111110011111_case_1_instance_;
  const Actual_LDRH_immediate_cccc000pu1w1nnnnttttiiii1011iiii_case_1 Actual_LDRH_immediate_cccc000pu1w1nnnnttttiiii1011iiii_case_1_instance_;
  const Actual_LDRH_literal_cccc000pu1w11111ttttiiii1011iiii_case_1 Actual_LDRH_literal_cccc000pu1w11111ttttiiii1011iiii_case_1_instance_;
  const Actual_LDRH_register_cccc000pu0w1nnnntttt00001011mmmm_case_1 Actual_LDRH_register_cccc000pu0w1nnnntttt00001011mmmm_case_1_instance_;
  const Actual_LDR_immediate_cccc010pu0w1nnnnttttiiiiiiiiiiii_case_1 Actual_LDR_immediate_cccc010pu0w1nnnnttttiiiiiiiiiiii_case_1_instance_;
  const Actual_LDR_literal_cccc0101u0011111ttttiiiiiiiiiiii_case_1 Actual_LDR_literal_cccc0101u0011111ttttiiiiiiiiiiii_case_1_instance_;
  const Actual_LDR_register_cccc011pu0w1nnnnttttiiiiitt0mmmm_case_1 Actual_LDR_register_cccc011pu0w1nnnnttttiiiiitt0mmmm_case_1_instance_;
  const Actual_LSL_immediate_cccc0001101s0000ddddiiiii000mmmm_case_1 Actual_LSL_immediate_cccc0001101s0000ddddiiiii000mmmm_case_1_instance_;
  const Actual_MLA_A1_cccc0000001sddddaaaammmm1001nnnn_case_1 Actual_MLA_A1_cccc0000001sddddaaaammmm1001nnnn_case_1_instance_;
  const Actual_MLS_A1_cccc00000110ddddaaaammmm1001nnnn_case_1 Actual_MLS_A1_cccc00000110ddddaaaammmm1001nnnn_case_1_instance_;
  const Actual_MOVE_scalar_to_ARM_core_register_cccc1110iii1nnnntttt1011nii10000_case_1 Actual_MOVE_scalar_to_ARM_core_register_cccc1110iii1nnnntttt1011nii10000_case_1_instance_;
  const Actual_MOVT_cccc00110100iiiiddddiiiiiiiiiiii_case_1 Actual_MOVT_cccc00110100iiiiddddiiiiiiiiiiii_case_1_instance_;
  const Actual_MOV_immediate_A1_cccc0011101s0000ddddiiiiiiiiiiii_case_1 Actual_MOV_immediate_A1_cccc0011101s0000ddddiiiiiiiiiiii_case_1_instance_;
  const Actual_MRS_cccc00010r001111dddd000000000000_case_1 Actual_MRS_cccc00010r001111dddd000000000000_case_1_instance_;
  const Actual_MSR_immediate_cccc00110010mm001111iiiiiiiiiiii_case_1 Actual_MSR_immediate_cccc00110010mm001111iiiiiiiiiiii_case_1_instance_;
  const Actual_MSR_register_cccc00010010mm00111100000000nnnn_case_1 Actual_MSR_register_cccc00010010mm00111100000000nnnn_case_1_instance_;
  const Actual_MUL_A1_cccc0000000sdddd0000mmmm1001nnnn_case_1 Actual_MUL_A1_cccc0000000sdddd0000mmmm1001nnnn_case_1_instance_;
  const Actual_NOP_cccc0011001000001111000000000000_case_1 Actual_NOP_cccc0011001000001111000000000000_case_1_instance_;
  const Actual_ORR_immediate_cccc0011100snnnnddddiiiiiiiiiiii_case_1 Actual_ORR_immediate_cccc0011100snnnnddddiiiiiiiiiiii_case_1_instance_;
  const Actual_PKH_cccc01101000nnnnddddiiiiit01mmmm_case_1 Actual_PKH_cccc01101000nnnnddddiiiiit01mmmm_case_1_instance_;
  const Actual_PLD_PLDW_immediate_11110101ur01nnnn1111iiiiiiiiiiii_case_1 Actual_PLD_PLDW_immediate_11110101ur01nnnn1111iiiiiiiiiiii_case_1_instance_;
  const Actual_PLD_PLDW_register_11110111u001nnnn1111iiiiitt0mmmm_case_1 Actual_PLD_PLDW_register_11110111u001nnnn1111iiiiitt0mmmm_case_1_instance_;
  const Actual_PLD_literal_11110101u10111111111iiiiiiiiiiii_case_1 Actual_PLD_literal_11110101u10111111111iiiiiiiiiiii_case_1_instance_;
  const Actual_PLI_immediate_literal_11110100u101nnnn1111iiiiiiiiiiii_case_1 Actual_PLI_immediate_literal_11110100u101nnnn1111iiiiiiiiiiii_case_1_instance_;
  const Actual_PLI_register_11110110u101nnnn1111iiiiitt0mmmm_case_1 Actual_PLI_register_11110110u101nnnn1111iiiiitt0mmmm_case_1_instance_;
  const Actual_SBFX_cccc0111101wwwwwddddlllll101nnnn_case_1 Actual_SBFX_cccc0111101wwwwwddddlllll101nnnn_case_1_instance_;
  const Actual_SDIV_cccc01110001dddd1111mmmm0001nnnn_case_1 Actual_SDIV_cccc01110001dddd1111mmmm0001nnnn_case_1_instance_;
  const Actual_SMLAD_cccc01110000ddddaaaammmm00m1nnnn_case_1 Actual_SMLAD_cccc01110000ddddaaaammmm00m1nnnn_case_1_instance_;
  const Actual_SMLALBB_SMLALBT_SMLALTB_SMLALTT_cccc00010100hhhhllllmmmm1xx0nnnn_case_1 Actual_SMLALBB_SMLALBT_SMLALTB_SMLALTT_cccc00010100hhhhllllmmmm1xx0nnnn_case_1_instance_;
  const Actual_SMLALD_cccc01110100hhhhllllmmmm00m1nnnn_case_1 Actual_SMLALD_cccc01110100hhhhllllmmmm00m1nnnn_case_1_instance_;
  const Actual_SMLAL_A1_cccc0000111shhhhllllmmmm1001nnnn_case_1 Actual_SMLAL_A1_cccc0000111shhhhllllmmmm1001nnnn_case_1_instance_;
  const Actual_SMULBB_SMULBT_SMULTB_SMULTT_cccc00010110dddd0000mmmm1xx0nnnn_case_1 Actual_SMULBB_SMULBT_SMULTB_SMULTT_cccc00010110dddd0000mmmm1xx0nnnn_case_1_instance_;
  const Actual_SMULL_A1_cccc0000110shhhhllllmmmm1001nnnn_case_1 Actual_SMULL_A1_cccc0000110shhhhllllmmmm1001nnnn_case_1_instance_;
  const Actual_STMDA_STMED_cccc100000w0nnnnrrrrrrrrrrrrrrrr_case_1 Actual_STMDA_STMED_cccc100000w0nnnnrrrrrrrrrrrrrrrr_case_1_instance_;
  const Actual_STRB_immediate_cccc010pu1w0nnnnttttiiiiiiiiiiii_case_1 Actual_STRB_immediate_cccc010pu1w0nnnnttttiiiiiiiiiiii_case_1_instance_;
  const Actual_STRB_register_cccc011pu1w0nnnnttttiiiiitt0mmmm_case_1 Actual_STRB_register_cccc011pu1w0nnnnttttiiiiitt0mmmm_case_1_instance_;
  const Actual_STRD_immediate_cccc000pu1w0nnnnttttiiii1111iiii_case_1 Actual_STRD_immediate_cccc000pu1w0nnnnttttiiii1111iiii_case_1_instance_;
  const Actual_STRD_register_cccc000pu0w0nnnntttt00001111mmmm_case_1 Actual_STRD_register_cccc000pu0w0nnnntttt00001111mmmm_case_1_instance_;
  const Actual_STREXB_cccc00011100nnnndddd11111001tttt_case_1 Actual_STREXB_cccc00011100nnnndddd11111001tttt_case_1_instance_;
  const Actual_STREXD_cccc00011010nnnndddd11111001tttt_case_1 Actual_STREXD_cccc00011010nnnndddd11111001tttt_case_1_instance_;
  const Actual_STRH_immediate_cccc000pu1w0nnnnttttiiii1011iiii_case_1 Actual_STRH_immediate_cccc000pu1w0nnnnttttiiii1011iiii_case_1_instance_;
  const Actual_STRH_register_cccc000pu0w0nnnntttt00001011mmmm_case_1 Actual_STRH_register_cccc000pu0w0nnnntttt00001011mmmm_case_1_instance_;
  const Actual_STR_immediate_cccc010pu0w0nnnnttttiiiiiiiiiiii_case_1 Actual_STR_immediate_cccc010pu0w0nnnnttttiiiiiiiiiiii_case_1_instance_;
  const Actual_STR_register_cccc011pd0w0nnnnttttiiiiitt0mmmm_case_1 Actual_STR_register_cccc011pd0w0nnnnttttiiiiitt0mmmm_case_1_instance_;
  const Actual_SWP_SWPB_cccc00010b00nnnntttt00001001tttt_case_1 Actual_SWP_SWPB_cccc00010b00nnnntttt00001001tttt_case_1_instance_;
  const Actual_SXTAB16_cccc01101000nnnnddddrr000111mmmm_case_1 Actual_SXTAB16_cccc01101000nnnnddddrr000111mmmm_case_1_instance_;
  const Actual_TST_immediate_cccc00110001nnnn0000iiiiiiiiiiii_case_1 Actual_TST_immediate_cccc00110001nnnn0000iiiiiiiiiiii_case_1_instance_;
  const Actual_UDF_cccc01111111iiiiiiiiiiii1111iiii_case_1 Actual_UDF_cccc01111111iiiiiiiiiiii1111iiii_case_1_instance_;
  const Actual_Unnamed_11110100xx11xxxxxxxxxxxxxxxxxxxx_case_1 Actual_Unnamed_11110100xx11xxxxxxxxxxxxxxxxxxxx_case_1_instance_;
  const Actual_Unnamed_case_1 Actual_Unnamed_case_1_instance_;
  const Actual_VABAL_A2_1111001u1dssnnnndddd0101n0m0mmmm_case_1 Actual_VABAL_A2_1111001u1dssnnnndddd0101n0m0mmmm_case_1_instance_;
  const Actual_VABA_1111001u0dssnnnndddd0111nqm1mmmm_case_1 Actual_VABA_1111001u0dssnnnndddd0111nqm1mmmm_case_1_instance_;
  const Actual_VABD_floating_point_111100110d1snnnndddd1101nqm0mmmm_case_1 Actual_VABD_floating_point_111100110d1snnnndddd1101nqm0mmmm_case_1_instance_;
  const Actual_VABS_A1_111100111d11ss01dddd0f110qm0mmmm_case_1 Actual_VABS_A1_111100111d11ss01dddd0f110qm0mmmm_case_1_instance_;
  const Actual_VABS_A1_111100111d11ss01dddd0f110qm0mmmm_case_2 Actual_VABS_A1_111100111d11ss01dddd0f110qm0mmmm_case_2_instance_;
  const Actual_VABS_cccc11101d110000dddd101s11m0mmmm_case_1 Actual_VABS_cccc11101d110000dddd101s11m0mmmm_case_1_instance_;
  const Actual_VADDHN_111100101dssnnnndddd0100n0m0mmmm_case_1 Actual_VADDHN_111100101dssnnnndddd0100n0m0mmmm_case_1_instance_;
  const Actual_VADDL_VADDW_1111001u1dssnnnndddd000pn0m0mmmm_case_1 Actual_VADDL_VADDW_1111001u1dssnnnndddd000pn0m0mmmm_case_1_instance_;
  const Actual_VADD_floating_point_cccc11100d11nnnndddd101sn0m0mmmm_case_1 Actual_VADD_floating_point_cccc11100d11nnnndddd101sn0m0mmmm_case_1_instance_;
  const Actual_VADD_integer_111100100dssnnnndddd1000nqm0mmmm_case_1 Actual_VADD_integer_111100100dssnnnndddd1000nqm0mmmm_case_1_instance_;
  const Actual_VBIC_immediate_1111001i1d000mmmddddcccc0q11mmmm_case_1 Actual_VBIC_immediate_1111001i1d000mmmddddcccc0q11mmmm_case_1_instance_;
  const Actual_VCNT_111100111d11ss00dddd01010qm0mmmm_case_1 Actual_VCNT_111100111d11ss00dddd01010qm0mmmm_case_1_instance_;
  const Actual_VCVT_VCVTR_between_floating_point_and_integer_Floating_point_cccc11101d111ooodddd101sp1m0mmmm_case_1 Actual_VCVT_VCVTR_between_floating_point_and_integer_Floating_point_cccc11101d111ooodddd101sp1m0mmmm_case_1_instance_;
  const Actual_VCVT_between_floating_point_and_fixed_point_1111001u1diiiiiidddd111p0qm1mmmm_case_1 Actual_VCVT_between_floating_point_and_fixed_point_1111001u1diiiiiidddd111p0qm1mmmm_case_1_instance_;
  const Actual_VCVT_between_floating_point_and_fixed_point_Floating_point_cccc11101d111o1udddd101fx1i0iiii_case_1 Actual_VCVT_between_floating_point_and_fixed_point_Floating_point_cccc11101d111o1udddd101fx1i0iiii_case_1_instance_;
  const Actual_VDUP_ARM_core_register_cccc11101bq0ddddtttt1011d0e10000_case_1 Actual_VDUP_ARM_core_register_cccc11101bq0ddddtttt1011d0e10000_case_1_instance_;
  const Actual_VDUP_scalar_111100111d11iiiidddd11000qm0mmmm_case_1 Actual_VDUP_scalar_111100111d11iiiidddd11000qm0mmmm_case_1_instance_;
  const Actual_VEXT_111100101d11nnnnddddiiiinqm0mmmm_case_1 Actual_VEXT_111100101d11nnnnddddiiiinqm0mmmm_case_1_instance_;
  const Actual_VLD1_multiple_single_elements_111101000d10nnnnddddttttssaammmm_case_1 Actual_VLD1_multiple_single_elements_111101000d10nnnnddddttttssaammmm_case_1_instance_;
  const Actual_VLD1_single_element_to_all_lanes_111101001d10nnnndddd1100sstammmm_case_1 Actual_VLD1_single_element_to_all_lanes_111101001d10nnnndddd1100sstammmm_case_1_instance_;
  const Actual_VLD1_single_element_to_one_lane_111101001d10nnnnddddss00aaaammmm_case_1 Actual_VLD1_single_element_to_one_lane_111101001d10nnnnddddss00aaaammmm_case_1_instance_;
  const Actual_VLD2_multiple_2_element_structures_111101000d10nnnnddddttttssaammmm_case_1 Actual_VLD2_multiple_2_element_structures_111101000d10nnnnddddttttssaammmm_case_1_instance_;
  const Actual_VLD2_single_2_element_structure_to_all_lanes_111101001d10nnnndddd1101sstammmm_case_1 Actual_VLD2_single_2_element_structure_to_all_lanes_111101001d10nnnndddd1101sstammmm_case_1_instance_;
  const Actual_VLD2_single_2_element_structure_to_one_lane_111101001d10nnnnddddss01aaaammmm_case_1 Actual_VLD2_single_2_element_structure_to_one_lane_111101001d10nnnnddddss01aaaammmm_case_1_instance_;
  const Actual_VLD3_multiple_3_element_structures_111101000d10nnnnddddttttssaammmm_case_1 Actual_VLD3_multiple_3_element_structures_111101000d10nnnnddddttttssaammmm_case_1_instance_;
  const Actual_VLD3_single_3_element_structure_to_all_lanes_111101001d10nnnndddd1110sstammmm_case_1 Actual_VLD3_single_3_element_structure_to_all_lanes_111101001d10nnnndddd1110sstammmm_case_1_instance_;
  const Actual_VLD3_single_3_element_structure_to_one_lane_111101001d10nnnnddddss10aaaammmm_case_1 Actual_VLD3_single_3_element_structure_to_one_lane_111101001d10nnnnddddss10aaaammmm_case_1_instance_;
  const Actual_VLD4_multiple_4_element_structures_111101000d10nnnnddddttttssaammmm_case_1 Actual_VLD4_multiple_4_element_structures_111101000d10nnnnddddttttssaammmm_case_1_instance_;
  const Actual_VLD4_single_4_element_structure_to_all_lanes_111101001d10nnnndddd1111sstammmm_case_1 Actual_VLD4_single_4_element_structure_to_all_lanes_111101001d10nnnndddd1111sstammmm_case_1_instance_;
  const Actual_VLD4_single_4_element_structure_to_one_lane_111101001d10nnnnddddss11aaaammmm_case_1 Actual_VLD4_single_4_element_structure_to_one_lane_111101001d10nnnnddddss11aaaammmm_case_1_instance_;
  const Actual_VLDM_cccc110pudw1nnnndddd1010iiiiiiii_case_1 Actual_VLDM_cccc110pudw1nnnndddd1010iiiiiiii_case_1_instance_;
  const Actual_VLDM_cccc110pudw1nnnndddd1011iiiiiiii_case_1 Actual_VLDM_cccc110pudw1nnnndddd1011iiiiiiii_case_1_instance_;
  const Actual_VLDR_cccc1101ud01nnnndddd1010iiiiiiii_case_1 Actual_VLDR_cccc1101ud01nnnndddd1010iiiiiiii_case_1_instance_;
  const Actual_VMLAL_by_scalar_A2_1111001u1dssnnnndddd0p10n1m0mmmm_case_1 Actual_VMLAL_by_scalar_A2_1111001u1dssnnnndddd0p10n1m0mmmm_case_1_instance_;
  const Actual_VMLA_by_scalar_A1_1111001q1dssnnnndddd0p0fn1m0mmmm_case_1 Actual_VMLA_by_scalar_A1_1111001q1dssnnnndddd0p0fn1m0mmmm_case_1_instance_;
  const Actual_VMLA_by_scalar_A1_1111001q1dssnnnndddd0p0fn1m0mmmm_case_2 Actual_VMLA_by_scalar_A1_1111001q1dssnnnndddd0p0fn1m0mmmm_case_2_instance_;
  const Actual_VMOVN_111100111d11ss10dddd001000m0mmmm_case_1 Actual_VMOVN_111100111d11ss10dddd001000m0mmmm_case_1_instance_;
  const Actual_VMOV_ARM_core_register_to_scalar_cccc11100ii0ddddtttt1011dii10000_case_1 Actual_VMOV_ARM_core_register_to_scalar_cccc11100ii0ddddtttt1011dii10000_case_1_instance_;
  const Actual_VMOV_between_ARM_core_register_and_single_precision_register_cccc1110000onnnntttt1010n0010000_case_1 Actual_VMOV_between_ARM_core_register_and_single_precision_register_cccc1110000onnnntttt1010n0010000_case_1_instance_;
  const Actual_VMOV_between_two_ARM_core_registers_and_a_doubleword_extension_register_cccc1100010otttttttt101100m1mmmm_case_1 Actual_VMOV_between_two_ARM_core_registers_and_a_doubleword_extension_register_cccc1100010otttttttt101100m1mmmm_case_1_instance_;
  const Actual_VMOV_between_two_ARM_core_registers_and_two_single_precision_registers_cccc1100010otttttttt101000m1mmmm_case_1 Actual_VMOV_between_two_ARM_core_registers_and_two_single_precision_registers_cccc1100010otttttttt101000m1mmmm_case_1_instance_;
  const Actual_VMOV_immediate_A1_1111001m1d000mmmddddcccc0qp1mmmm_case_1 Actual_VMOV_immediate_A1_1111001m1d000mmmddddcccc0qp1mmmm_case_1_instance_;
  const Actual_VMRS_cccc111011110001tttt101000010000_case_1 Actual_VMRS_cccc111011110001tttt101000010000_case_1_instance_;
  const Actual_VMSR_cccc111011100001tttt101000010000_case_1 Actual_VMSR_cccc111011100001tttt101000010000_case_1_instance_;
  const Actual_VMULL_polynomial_A2_1111001u1dssnnnndddd11p0n0m0mmmm_case_1 Actual_VMULL_polynomial_A2_1111001u1dssnnnndddd11p0n0m0mmmm_case_1_instance_;
  const Actual_VMUL_polynomial_A1_1111001u0dssnnnndddd1001nqm1mmmm_case_1 Actual_VMUL_polynomial_A1_1111001u0dssnnnndddd1001nqm1mmmm_case_1_instance_;
  const Actual_VMVN_immediate_1111001i1d000mmmddddcccc0q11mmmm_case_1 Actual_VMVN_immediate_1111001i1d000mmmddddcccc0q11mmmm_case_1_instance_;
  const Actual_VPADD_floating_point_111100110d0snnnndddd1101nqm0mmmm_case_1 Actual_VPADD_floating_point_111100110d0snnnndddd1101nqm0mmmm_case_1_instance_;
  const Actual_VPADD_integer_111100100dssnnnndddd1011n0m1mmmm_case_1 Actual_VPADD_integer_111100100dssnnnndddd1011n0m1mmmm_case_1_instance_;
  const Actual_VPOP_cccc11001d111101dddd1010iiiiiiii_case_1 Actual_VPOP_cccc11001d111101dddd1010iiiiiiii_case_1_instance_;
  const Actual_VPOP_cccc11001d111101dddd1011iiiiiiii_case_1 Actual_VPOP_cccc11001d111101dddd1011iiiiiiii_case_1_instance_;
  const Actual_VQDMLAL_VQDMLSL_A1_111100101dssnnnndddd10p1n0m0mmmm_case_1 Actual_VQDMLAL_VQDMLSL_A1_111100101dssnnnndddd10p1n0m0mmmm_case_1_instance_;
  const Actual_VQDMULH_A1_111100100dssnnnndddd1011nqm0mmmm_case_1 Actual_VQDMULH_A1_111100100dssnnnndddd1011nqm0mmmm_case_1_instance_;
  const Actual_VQMOVN_111100111d11ss10dddd0010ppm0mmmm_case_1 Actual_VQMOVN_111100111d11ss10dddd0010ppm0mmmm_case_1_instance_;
  const Actual_VQRSHRN_1111001u1diiiiiidddd100p01m1mmmm_case_1 Actual_VQRSHRN_1111001u1diiiiiidddd100p01m1mmmm_case_1_instance_;
  const Actual_VQSHL_VQSHLU_immediate_1111001u1diiiiiidddd011plqm1mmmm_case_1 Actual_VQSHL_VQSHLU_immediate_1111001u1diiiiiidddd011plqm1mmmm_case_1_instance_;
  const Actual_VREV16_111100111d11ss00dddd000ppqm0mmmm_case_1 Actual_VREV16_111100111d11ss00dddd000ppqm0mmmm_case_1_instance_;
  const Actual_VRSHRN_111100101diiiiiidddd100001m1mmmm_case_1 Actual_VRSHRN_111100101diiiiiidddd100001m1mmmm_case_1_instance_;
  const Actual_VRSHR_1111001u1diiiiiidddd0010lqm1mmmm_case_1 Actual_VRSHR_1111001u1diiiiiidddd0010lqm1mmmm_case_1_instance_;
  const Actual_VSHLL_A1_or_VMOVL_1111001u1diiiiiidddd101000m1mmmm_case_1 Actual_VSHLL_A1_or_VMOVL_1111001u1diiiiiidddd101000m1mmmm_case_1_instance_;
  const Actual_VSHLL_A2_111100111d11ss10dddd001100m0mmmm_case_1 Actual_VSHLL_A2_111100111d11ss10dddd001100m0mmmm_case_1_instance_;
  const Actual_VSTM_cccc110pudw0nnnndddd1010iiiiiiii_case_1 Actual_VSTM_cccc110pudw0nnnndddd1010iiiiiiii_case_1_instance_;
  const Actual_VSTM_cccc110pudw0nnnndddd1011iiiiiiii_case_1 Actual_VSTM_cccc110pudw0nnnndddd1011iiiiiiii_case_1_instance_;
  const Actual_VSTR_cccc1101ud00nnnndddd1010iiiiiiii_case_1 Actual_VSTR_cccc1101ud00nnnndddd1010iiiiiiii_case_1_instance_;
  const Actual_VSWP_111100111d11ss10dddd00000qm0mmmm_case_1 Actual_VSWP_111100111d11ss10dddd00000qm0mmmm_case_1_instance_;
  const Actual_VTBL_VTBX_111100111d11nnnndddd10ccnpm0mmmm_case_1 Actual_VTBL_VTBX_111100111d11nnnndddd10ccnpm0mmmm_case_1_instance_;
  const Actual_VTRN_111100111d11ss10dddd00001qm0mmmm_case_1 Actual_VTRN_111100111d11ss10dddd00001qm0mmmm_case_1_instance_;
  const Actual_VUZP_111100111d11ss10dddd00010qm0mmmm_case_1 Actual_VUZP_111100111d11ss10dddd00010qm0mmmm_case_1_instance_;
  const NotImplemented not_implemented_;
};

}  // namespace nacl_arm_dec
#endif  // NATIVE_CLIENT_SRC_TRUSTED_VALIDATOR_ARM_GEN_ARM32_DECODE_H_
