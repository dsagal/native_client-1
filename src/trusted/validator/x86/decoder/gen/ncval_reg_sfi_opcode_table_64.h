/*
 * THIS FILE IS AUTO-GENERATED. DO NOT EDIT.
 * Compiled for x86-64 bit mode.
 *
 * You must include ncopcode_desc.h before this file.
 */

static const NaClOp g_Operands[336] = {
  /* 0 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Eb" },
  /* 1 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gb" },
  /* 2 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Ev" },
  /* 3 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gv" },
  /* 4 */ { G_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Gb" },
  /* 5 */ { E_Operand, NACL_OPFLAG(OpUse), "$Eb" },
  /* 6 */ { G_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Gv" },
  /* 7 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ev" },
  /* 8 */ { RegAL, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "%al" },
  /* 9 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 10 */ { RegREAX, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$rAXv" },
  /* 11 */ { I_Operand, NACL_OPFLAG(OpUse), "$Iz" },
  /* 12 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Ev" },
  /* 13 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gv" },
  /* 14 */ { G_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Gv" },
  /* 15 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ev" },
  /* 16 */ { RegREAX, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$rAXv" },
  /* 17 */ { I_Operand, NACL_OPFLAG(OpUse), "$Iz" },
  /* 18 */ { E_Operand, NACL_OPFLAG(OpUse), "$Eb" },
  /* 19 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gb" },
  /* 20 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ev" },
  /* 21 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gv" },
  /* 22 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gb" },
  /* 23 */ { E_Operand, NACL_OPFLAG(OpUse), "$Eb" },
  /* 24 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gv" },
  /* 25 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ev" },
  /* 26 */ { RegAL, NACL_OPFLAG(OpUse), "%al" },
  /* 27 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 28 */ { RegREAX, NACL_OPFLAG(OpUse), "$rAXv" },
  /* 29 */ { I_Operand, NACL_OPFLAG(OpUse), "$Iz" },
  /* 30 */ { RegRSP, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OpImplicit), "{%rsp}" },
  /* 31 */ { G_OpcodeBase, NACL_OPFLAG(OpUse), "$r8v" },
  /* 32 */ { RegRSP, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OpImplicit), "{%rsp}" },
  /* 33 */ { G_OpcodeBase, NACL_OPFLAG(OpSet), "$r8v" },
  /* 34 */ { G_Operand, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Gv" },
  /* 35 */ { Ev_Operand, NACL_OPFLAG(OpUse), "$Ed" },
  /* 36 */ { RegRSP, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OpImplicit), "{%rsp}" },
  /* 37 */ { I_Operand, NACL_OPFLAG(OpUse), "$Iz" },
  /* 38 */ { G_Operand, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Gv" },
  /* 39 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ev" },
  /* 40 */ { I_Operand, NACL_OPFLAG(OpUse), "$Iz" },
  /* 41 */ { RegRSP, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OpImplicit), "{%rsp}" },
  /* 42 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 43 */ { G_Operand, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Gv" },
  /* 44 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ev" },
  /* 45 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 46 */ { RegRIP, NACL_OPFLAG(OpSet), "%rip" },
  /* 47 */ { J_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OperandNear) | NACL_OPFLAG(OperandRelative), "$Jb" },
  /* 48 */ { E_Operand, NACL_OPFLAG(OpUse), "$Eb" },
  /* 49 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 50 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Eb" },
  /* 51 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 52 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Ev" },
  /* 53 */ { I_Operand, NACL_OPFLAG(OpUse), "$Iz" },
  /* 54 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Ev" },
  /* 55 */ { I_Operand, NACL_OPFLAG(OpUse), "$Iz" },
  /* 56 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Ev" },
  /* 57 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 58 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Ev" },
  /* 59 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 60 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Eb" },
  /* 61 */ { G_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Gb" },
  /* 62 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Ev" },
  /* 63 */ { G_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Gv" },
  /* 64 */ { E_Operand, NACL_OPFLAG(OpSet), "$Eb" },
  /* 65 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gb" },
  /* 66 */ { E_Operand, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Ev" },
  /* 67 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gv" },
  /* 68 */ { G_Operand, NACL_OPFLAG(OpSet), "$Gb" },
  /* 69 */ { E_Operand, NACL_OPFLAG(OpUse), "$Eb" },
  /* 70 */ { G_Operand, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Gv" },
  /* 71 */ { M_Operand, NACL_OPFLAG(OpAddress), "$M" },
  /* 72 */ { RegRSP, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OpImplicit), "{%rsp}" },
  /* 73 */ { E_Operand, NACL_OPFLAG(OpSet), "$Ev" },
  /* 74 */ { G_OpcodeBase, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$r8v" },
  /* 75 */ { RegREAX, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$rAXv" },
  /* 76 */ { RegRAX, NACL_OPFLAG(OpSet), "%rax" },
  /* 77 */ { RegEAX, NACL_OPFLAG(OpUse), "%eax" },
  /* 78 */ { RegEAX, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandSignExtends_v), "%eax" },
  /* 79 */ { RegAX, NACL_OPFLAG(OpUse), "%ax" },
  /* 80 */ { RegAX, NACL_OPFLAG(OpSet), "%ax" },
  /* 81 */ { RegAL, NACL_OPFLAG(OpUse), "%al" },
  /* 82 */ { RegRDX, NACL_OPFLAG(OpSet), "%rdx" },
  /* 83 */ { RegRAX, NACL_OPFLAG(OpUse), "%rax" },
  /* 84 */ { RegEDX, NACL_OPFLAG(OpSet), "%edx" },
  /* 85 */ { RegEAX, NACL_OPFLAG(OpUse), "%eax" },
  /* 86 */ { RegDX, NACL_OPFLAG(OpSet), "%dx" },
  /* 87 */ { RegAX, NACL_OPFLAG(OpUse), "%ax" },
  /* 88 */ { RegAL, NACL_OPFLAG(OpSet), "%al" },
  /* 89 */ { O_Operand, NACL_OPFLAG(OpUse), "$Ob" },
  /* 90 */ { RegREAX, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$rAXv" },
  /* 91 */ { O_Operand, NACL_OPFLAG(OpUse), "$Ov" },
  /* 92 */ { O_Operand, NACL_OPFLAG(OpSet), "$Ob" },
  /* 93 */ { RegAL, NACL_OPFLAG(OpUse), "%al" },
  /* 94 */ { O_Operand, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Ov" },
  /* 95 */ { RegREAX, NACL_OPFLAG(OpUse), "$rAXv" },
  /* 96 */ { RegES_EDI, NACL_OPFLAG(OpSet), "$Yb" },
  /* 97 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xb" },
  /* 98 */ { RegES_EDI, NACL_OPFLAG(OpSet), "$Yvq" },
  /* 99 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xvq" },
  /* 100 */ { RegES_EDI, NACL_OPFLAG(OpSet), "$Yvd" },
  /* 101 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xvd" },
  /* 102 */ { RegES_EDI, NACL_OPFLAG(OpSet), "$Yvw" },
  /* 103 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xvw" },
  /* 104 */ { RegES_EDI, NACL_OPFLAG(OpUse), "$Yb" },
  /* 105 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xb" },
  /* 106 */ { RegES_EDI, NACL_OPFLAG(OpUse), "$Yvq" },
  /* 107 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xvq" },
  /* 108 */ { RegES_EDI, NACL_OPFLAG(OpUse), "$Yvd" },
  /* 109 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xvd" },
  /* 110 */ { RegES_EDI, NACL_OPFLAG(OpUse), "$Yvw" },
  /* 111 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xvw" },
  /* 112 */ { RegES_EDI, NACL_OPFLAG(OpSet), "$Yb" },
  /* 113 */ { RegAL, NACL_OPFLAG(OpUse), "%al" },
  /* 114 */ { RegES_EDI, NACL_OPFLAG(OpSet), "$Yvq" },
  /* 115 */ { RegRAX, NACL_OPFLAG(OpUse), "$rAXvq" },
  /* 116 */ { RegES_EDI, NACL_OPFLAG(OpSet), "$Yvd" },
  /* 117 */ { RegEAX, NACL_OPFLAG(OpUse), "$rAXvd" },
  /* 118 */ { RegES_EDI, NACL_OPFLAG(OpSet), "$Yvw" },
  /* 119 */ { RegAX, NACL_OPFLAG(OpUse), "$rAXvw" },
  /* 120 */ { RegAL, NACL_OPFLAG(OpSet), "%al" },
  /* 121 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xb" },
  /* 122 */ { RegRAX, NACL_OPFLAG(OpSet), "$rAXvq" },
  /* 123 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xvq" },
  /* 124 */ { RegEAX, NACL_OPFLAG(OpSet), "$rAXvd" },
  /* 125 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xvd" },
  /* 126 */ { RegAX, NACL_OPFLAG(OpSet), "$rAXvw" },
  /* 127 */ { RegDS_ESI, NACL_OPFLAG(OpUse), "$Xvw" },
  /* 128 */ { RegAL, NACL_OPFLAG(OpUse), "%al" },
  /* 129 */ { RegES_EDI, NACL_OPFLAG(OpUse), "$Yb" },
  /* 130 */ { RegRAX, NACL_OPFLAG(OpUse), "$rAXvq" },
  /* 131 */ { RegES_EDI, NACL_OPFLAG(OpUse), "$Yvq" },
  /* 132 */ { RegEAX, NACL_OPFLAG(OpUse), "$rAXvd" },
  /* 133 */ { RegES_EDI, NACL_OPFLAG(OpUse), "$Yvd" },
  /* 134 */ { RegAX, NACL_OPFLAG(OpUse), "$rAXvw" },
  /* 135 */ { RegES_EDI, NACL_OPFLAG(OpUse), "$Yvw" },
  /* 136 */ { G_OpcodeBase, NACL_OPFLAG(OpSet), "$r8b" },
  /* 137 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 138 */ { G_OpcodeBase, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$r8v" },
  /* 139 */ { I_Operand, NACL_OPFLAG(OpUse), "$Iv" },
  /* 140 */ { E_Operand, NACL_OPFLAG(OpSet), "$Eb" },
  /* 141 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 142 */ { E_Operand, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Ev" },
  /* 143 */ { I_Operand, NACL_OPFLAG(OpUse), "$Iz" },
  /* 144 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Eb" },
  /* 145 */ { Const_1, NACL_OPFLAG(OpUse), "1" },
  /* 146 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Ev" },
  /* 147 */ { Const_1, NACL_OPFLAG(OpUse), "1" },
  /* 148 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Eb" },
  /* 149 */ { RegCL, NACL_OPFLAG(OpUse), "%cl" },
  /* 150 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Ev" },
  /* 151 */ { RegCL, NACL_OPFLAG(OpUse), "%cl" },
  /* 152 */ { Mv_Operand, NACL_OPFLAG(OpUse), "$Md" },
  /* 153 */ { Mw_Operand, NACL_OPFLAG(OpSet), "$Mw" },
  /* 154 */ { M_Operand, NACL_OPFLAG(OpSet), "$M" },
  /* 155 */ { Mw_Operand, NACL_OPFLAG(OpUse), "$Mw" },
  /* 156 */ { M_Operand, NACL_OPFLAG(OpUse), "$M" },
  /* 157 */ { Mv_Operand, NACL_OPFLAG(OpSet), "$Md" },
  /* 158 */ { Mo_Operand, NACL_OPFLAG(OpUse), "$Mq" },
  /* 159 */ { Mo_Operand, NACL_OPFLAG(OpSet), "$Mq" },
  /* 160 */ { RegRIP, NACL_OPFLAG(OpSet), "%rip" },
  /* 161 */ { RegRCX, NACL_OPFLAG(OpUse), "%rcx" },
  /* 162 */ { J_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OperandNear) | NACL_OPFLAG(OperandRelative), "$Jb" },
  /* 163 */ { RegRIP, NACL_OPFLAG(OpSet), "%rip" },
  /* 164 */ { RegECX, NACL_OPFLAG(OpUse), "%ecx" },
  /* 165 */ { J_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OperandNear) | NACL_OPFLAG(OperandRelative), "$Jb" },
  /* 166 */ { RegRIP, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OpImplicit), "{%rip}" },
  /* 167 */ { RegRSP, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OpImplicit), "{%rsp}" },
  /* 168 */ { J_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OperandNear) | NACL_OPFLAG(OperandRelative), "$Jzd" },
  /* 169 */ { RegRIP, NACL_OPFLAG(OpSet), "%rip" },
  /* 170 */ { J_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OperandNear) | NACL_OPFLAG(OperandRelative), "$Jzd" },
  /* 171 */ { RegAX, NACL_OPFLAG(OpSet), "%ax" },
  /* 172 */ { RegAL, NACL_OPFLAG(OpUse), "%al" },
  /* 173 */ { E_Operand, NACL_OPFLAG(OpUse), "$Eb" },
  /* 174 */ { RegREDX, NACL_OPFLAG(OpSet), "%redx" },
  /* 175 */ { RegREAX, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "%reax" },
  /* 176 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ev" },
  /* 177 */ { RegRSP, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OpImplicit), "{%rsp}" },
  /* 178 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ev" },
  /* 179 */ { RegRIP, NACL_OPFLAG(OpSet), "%rip" },
  /* 180 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OperandNear), "$Ev" },
  /* 181 */ { RegRIP, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OpImplicit), "{%rip}" },
  /* 182 */ { RegRSP, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet) | NACL_OPFLAG(OpImplicit), "{%rsp}" },
  /* 183 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OperandNear), "$Ev" },
  /* 184 */ { Ew_Operand, NACL_OPFLAG(OpUse), "$Ew" },
  /* 185 */ { Mb_Operand, NACL_EMPTY_OPFLAGS, "$Mb" },
  /* 186 */ { Mmx_G_Operand, NACL_EMPTY_OPFLAGS, "$Pq" },
  /* 187 */ { Mmx_E_Operand, NACL_EMPTY_OPFLAGS, "$Qq" },
  /* 188 */ { I_Operand, NACL_EMPTY_OPFLAGS, "$Ib" },
  /* 189 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wps" },
  /* 190 */ { Xmm_E_Operand, NACL_OPFLAG(OpSet), "$Wps" },
  /* 191 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$VRq" },
  /* 192 */ { Xmm_Eo_Operand, NACL_OPFLAG(OpUse), "$Wq" },
  /* 193 */ { Mmx_E_Operand, NACL_OPFLAG(OpUse), "$Qq" },
  /* 194 */ { Mdq_Operand, NACL_OPFLAG(OpSet), "$Mdq" },
  /* 195 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wss" },
  /* 196 */ { RegEAX, NACL_OPFLAG(OpSet), "%eax" },
  /* 197 */ { RegEDX, NACL_OPFLAG(OpSet), "%edx" },
  /* 198 */ { G_Operand, NACL_OPFLAG(OpSet), "$Gv" },
  /* 199 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ev" },
  /* 200 */ { Gv_Operand, NACL_OPFLAG(OpSet), "$Gd" },
  /* 201 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$VRps" },
  /* 202 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wdq" },
  /* 203 */ { Mmx_E_Operand, NACL_OPFLAG(OpUse), "$Qd" },
  /* 204 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ed/q/q" },
  /* 205 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ed/q/d" },
  /* 206 */ { Mmx_E_Operand, NACL_OPFLAG(OpUse), "$Qq" },
  /* 207 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 208 */ { Mmx_E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$PRq" },
  /* 209 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 210 */ { E_Operand, NACL_OPFLAG(OpSet), "$Ed/q/q" },
  /* 211 */ { E_Operand, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Ed/q/d" },
  /* 212 */ { Mmx_E_Operand, NACL_OPFLAG(OpSet), "$Qq" },
  /* 213 */ { RegEBX, NACL_OPFLAG(OpSet), "%ebx" },
  /* 214 */ { RegEDX, NACL_OPFLAG(OpSet), "%edx" },
  /* 215 */ { RegEAX, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "%eax" },
  /* 216 */ { RegECX, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "%ecx" },
  /* 217 */ { E_Operand, NACL_OPFLAG(OpSet), "$Ev" },
  /* 218 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gv" },
  /* 219 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 220 */ { E_Operand, NACL_OPFLAG(OpSet), "$Ev" },
  /* 221 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gv" },
  /* 222 */ { RegCL, NACL_OPFLAG(OpUse), "%cl" },
  /* 223 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Ev" },
  /* 224 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gv" },
  /* 225 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 226 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Ev" },
  /* 227 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gv" },
  /* 228 */ { RegCL, NACL_OPFLAG(OpUse), "%cl" },
  /* 229 */ { Mb_Operand, NACL_OPFLAG(OpUse), "$Mb" },
  /* 230 */ { RegAL, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "%al" },
  /* 231 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Eb" },
  /* 232 */ { G_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Gb" },
  /* 233 */ { RegREAX, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$rAXv" },
  /* 234 */ { E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Ev" },
  /* 235 */ { G_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Gv" },
  /* 236 */ { G_Operand, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Gv" },
  /* 237 */ { Eb_Operand, NACL_OPFLAG(OpUse), "$Eb" },
  /* 238 */ { G_Operand, NACL_OPFLAG(OpSet) | NACL_OPFLAG(OperandZeroExtends_v), "$Gv" },
  /* 239 */ { Ew_Operand, NACL_OPFLAG(OpUse), "$Ew" },
  /* 240 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wps" },
  /* 241 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 242 */ { M_Operand, NACL_OPFLAG(OpSet), "$Md/q" },
  /* 243 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gd/q" },
  /* 244 */ { E_Operand, NACL_OPFLAG(OpUse), "$Rd/q/Mw" },
  /* 245 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 246 */ { Gv_Operand, NACL_OPFLAG(OpSet), "$Gd" },
  /* 247 */ { Mmx_E_Operand, NACL_OPFLAG(OpUse), "$PRq" },
  /* 248 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 249 */ { RegRDX, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "%rdx" },
  /* 250 */ { RegEAX, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "%eax" },
  /* 251 */ { Mdq_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Mdq" },
  /* 252 */ { RegEDX, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "%edx" },
  /* 253 */ { RegEAX, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "%eax" },
  /* 254 */ { Mo_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Mq" },
  /* 255 */ { G_OpcodeBase, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$r8vq" },
  /* 256 */ { G_OpcodeBase, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$r8vd" },
  /* 257 */ { RegDS_EDI, NACL_OPFLAG(OpSet), "$Zvd" },
  /* 258 */ { Mmx_E_Operand, NACL_OPFLAG(OpUse), "$PRq" },
  /* 259 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wsd" },
  /* 260 */ { Xmm_E_Operand, NACL_OPFLAG(OpSet), "$Wsd" },
  /* 261 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ed/q" },
  /* 262 */ { G_Operand, NACL_OPFLAG(OpSet), "$Gd/q" },
  /* 263 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wsd" },
  /* 264 */ { Xmm_Eo_Operand, NACL_OPFLAG(OpUse), "$Wq" },
  /* 265 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 266 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$VRq" },
  /* 267 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 268 */ { I2_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 269 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$VRdq" },
  /* 270 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wsd" },
  /* 271 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 272 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wpd" },
  /* 273 */ { Mdq_Operand, NACL_OPFLAG(OpUse), "$Mdq" },
  /* 274 */ { Xmm_E_Operand, NACL_OPFLAG(OpSet), "$Wss" },
  /* 275 */ { G_Operand, NACL_OPFLAG(OpSet), "$Gd/q" },
  /* 276 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wss" },
  /* 277 */ { Xmm_E_Operand, NACL_OPFLAG(OpSet), "$Wdq" },
  /* 278 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wss" },
  /* 279 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 280 */ { Xmm_E_Operand, NACL_OPFLAG(OpSet), "$Wpd" },
  /* 281 */ { Gv_Operand, NACL_OPFLAG(OpSet), "$Gd" },
  /* 282 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$VRpd" },
  /* 283 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wdq" },
  /* 284 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 285 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$VRdq" },
  /* 286 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 287 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wpd" },
  /* 288 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 289 */ { Gv_Operand, NACL_OPFLAG(OpSet), "$Gd" },
  /* 290 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$VRdq" },
  /* 291 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 292 */ { Xmm_Eo_Operand, NACL_OPFLAG(OpSet), "$Wq" },
  /* 293 */ { RegDS_EDI, NACL_OPFLAG(OpSet), "$Zvd" },
  /* 294 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$VRdq" },
  /* 295 */ { G_Operand, NACL_OPFLAG(OpSet), "$Gv" },
  /* 296 */ { M_Operand, NACL_OPFLAG(OpUse), "$Mv" },
  /* 297 */ { M_Operand, NACL_OPFLAG(OpSet), "$Mv" },
  /* 298 */ { G_Operand, NACL_OPFLAG(OpUse), "$Gv" },
  /* 299 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Udq/Mq" },
  /* 300 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Udq/Md" },
  /* 301 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Udq/Mw" },
  /* 302 */ { Gv_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Gd" },
  /* 303 */ { E_Operand, NACL_OPFLAG(OpUse), "$Eb" },
  /* 304 */ { Gv_Operand, NACL_OPFLAG(OpUse) | NACL_OPFLAG(OpSet), "$Gd" },
  /* 305 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ev" },
  /* 306 */ { Ev_Operand, NACL_OPFLAG(OpSet), "$Rd/Mb" },
  /* 307 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 308 */ { Ev_Operand, NACL_OPFLAG(OpSet), "$Rd/Mw" },
  /* 309 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 310 */ { E_Operand, NACL_OPFLAG(OpSet), "$Ed/q/q" },
  /* 311 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 312 */ { E_Operand, NACL_OPFLAG(OpSet), "$Ed/q/d" },
  /* 313 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 314 */ { Ev_Operand, NACL_OPFLAG(OpSet), "$Ed" },
  /* 315 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 316 */ { E_Operand, NACL_OPFLAG(OpUse), "$Rd/q/Mb" },
  /* 317 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 318 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Udq/Md" },
  /* 319 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 320 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ed/q/q" },
  /* 321 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 322 */ { E_Operand, NACL_OPFLAG(OpUse), "$Ed/q/d" },
  /* 323 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 324 */ { RegREAX, NACL_OPFLAG(OpSet), "$rAXv" },
  /* 325 */ { RegREDX, NACL_OPFLAG(OpSet), "$rDXv" },
  /* 326 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wdq" },
  /* 327 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 328 */ { RegRECX, NACL_OPFLAG(OpSet), "$rCXv" },
  /* 329 */ { RegREAX, NACL_OPFLAG(OpSet), "$rAXv" },
  /* 330 */ { RegREDX, NACL_OPFLAG(OpSet), "$rDXv" },
  /* 331 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wdq" },
  /* 332 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
  /* 333 */ { RegRECX, NACL_OPFLAG(OpSet), "$rCXv" },
  /* 334 */ { Xmm_E_Operand, NACL_OPFLAG(OpUse), "$Wdq" },
  /* 335 */ { I_Operand, NACL_OPFLAG(OpUse), "$Ib" },
};

static const NaClInst g_Opcodes[585] = {
  /* 0 */
  { NACLi_INVALID,
    NACL_EMPTY_IFLAGS,
    InstInvalid, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 1 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstAdd, 0x00, 2, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 2 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstAdd, 0x00, 2, 2, NACL_OPCODE_NULL_OFFSET  },
  /* 3 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstAdd, 0x00, 2, 4, NACL_OPCODE_NULL_OFFSET  },
  /* 4 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstAdd, 0x00, 2, 6, NACL_OPCODE_NULL_OFFSET  },
  /* 5 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable),
    InstAdd, 0x00, 2, 8, NACL_OPCODE_NULL_OFFSET  },
  /* 6 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstAdd, 0x00, 2, 10, NACL_OPCODE_NULL_OFFSET  },
  /* 7 */
  { NACLi_INVALID,
    NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 8 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstOr, 0x00, 2, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 9 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstOr, 0x00, 2, 2, NACL_OPCODE_NULL_OFFSET  },
  /* 10 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstOr, 0x00, 2, 4, NACL_OPCODE_NULL_OFFSET  },
  /* 11 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstOr, 0x00, 2, 6, NACL_OPCODE_NULL_OFFSET  },
  /* 12 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable),
    InstOr, 0x00, 2, 8, NACL_OPCODE_NULL_OFFSET  },
  /* 13 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstOr, 0x00, 2, 10, NACL_OPCODE_NULL_OFFSET  },
  /* 14 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 15 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 12, NACL_OPCODE_NULL_OFFSET  },
  /* 16 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 4, NACL_OPCODE_NULL_OFFSET  },
  /* 17 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 14, NACL_OPCODE_NULL_OFFSET  },
  /* 18 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 8, NACL_OPCODE_NULL_OFFSET  },
  /* 19 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 16, NACL_OPCODE_NULL_OFFSET  },
  /* 20 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstAnd, 0x00, 2, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 21 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstAnd, 0x00, 2, 2, NACL_OPCODE_NULL_OFFSET  },
  /* 22 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstAnd, 0x00, 2, 4, NACL_OPCODE_NULL_OFFSET  },
  /* 23 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstAnd, 0x00, 2, 6, NACL_OPCODE_NULL_OFFSET  },
  /* 24 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable),
    InstAnd, 0x00, 2, 8, NACL_OPCODE_NULL_OFFSET  },
  /* 25 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstAnd, 0x00, 2, 10, NACL_OPCODE_NULL_OFFSET  },
  /* 26 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstSub, 0x00, 2, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 27 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstSub, 0x00, 2, 2, NACL_OPCODE_NULL_OFFSET  },
  /* 28 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstSub, 0x00, 2, 4, NACL_OPCODE_NULL_OFFSET  },
  /* 29 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstSub, 0x00, 2, 6, NACL_OPCODE_NULL_OFFSET  },
  /* 30 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable),
    InstSub, 0x00, 2, 8, NACL_OPCODE_NULL_OFFSET  },
  /* 31 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstSub, 0x00, 2, 10, NACL_OPCODE_NULL_OFFSET  },
  /* 32 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 2, NACL_OPCODE_NULL_OFFSET  },
  /* 33 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 6, NACL_OPCODE_NULL_OFFSET  },
  /* 34 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 10, NACL_OPCODE_NULL_OFFSET  },
  /* 35 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 18, NACL_OPCODE_NULL_OFFSET  },
  /* 36 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 20, NACL_OPCODE_NULL_OFFSET  },
  /* 37 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 22, NACL_OPCODE_NULL_OFFSET  },
  /* 38 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 24, NACL_OPCODE_NULL_OFFSET  },
  /* 39 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 26, NACL_OPCODE_NULL_OFFSET  },
  /* 40 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 28, NACL_OPCODE_NULL_OFFSET  },
  /* 41 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPush, 0x00, 2, 30, NACL_OPCODE_NULL_OFFSET  },
  /* 42 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPush, 0x01, 2, 30, NACL_OPCODE_NULL_OFFSET  },
  /* 43 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPush, 0x02, 2, 30, NACL_OPCODE_NULL_OFFSET  },
  /* 44 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPush, 0x03, 2, 30, NACL_OPCODE_NULL_OFFSET  },
  /* 45 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPush, 0x04, 2, 30, NACL_OPCODE_NULL_OFFSET  },
  /* 46 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPush, 0x05, 2, 30, NACL_OPCODE_NULL_OFFSET  },
  /* 47 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPush, 0x06, 2, 30, NACL_OPCODE_NULL_OFFSET  },
  /* 48 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPush, 0x07, 2, 30, NACL_OPCODE_NULL_OFFSET  },
  /* 49 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPop, 0x00, 2, 32, NACL_OPCODE_NULL_OFFSET  },
  /* 50 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPop, 0x01, 2, 32, NACL_OPCODE_NULL_OFFSET  },
  /* 51 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPop, 0x02, 2, 32, NACL_OPCODE_NULL_OFFSET  },
  /* 52 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPop, 0x03, 2, 32, NACL_OPCODE_NULL_OFFSET  },
  /* 53 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPop, 0x04, 2, 32, NACL_OPCODE_NULL_OFFSET  },
  /* 54 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPop, 0x05, 2, 32, NACL_OPCODE_NULL_OFFSET  },
  /* 55 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPop, 0x06, 2, 32, NACL_OPCODE_NULL_OFFSET  },
  /* 56 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPop, 0x07, 2, 32, NACL_OPCODE_NULL_OFFSET  },
  /* 57 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(LongMode) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 34, NACL_OPCODE_NULL_OFFSET  },
  /* 58 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPush, 0x00, 2, 36, NACL_OPCODE_NULL_OFFSET  },
  /* 59 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 38, NACL_OPCODE_NULL_OFFSET  },
  /* 60 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPush, 0x00, 2, 41, NACL_OPCODE_NULL_OFFSET  },
  /* 61 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 43, NACL_OPCODE_NULL_OFFSET  },
  /* 62 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 63 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 64 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, 63  },
  /* 65 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(ConditionalJump) | NACL_IFLAG(PartialInstruction),
    InstDontCareCondJump, 0x00, 2, 46, NACL_OPCODE_NULL_OFFSET  },
  /* 66 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 48, NACL_OPCODE_NULL_OFFSET  },
  /* 67 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 2, 50, 66  },
  /* 68 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstSub, 0x05, 2, 50, 67  },
  /* 69 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstAnd, 0x04, 2, 50, 68  },
  /* 70 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 2, 50, 69  },
  /* 71 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 50, 70  },
  /* 72 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstOr, 0x01, 2, 50, 71  },
  /* 73 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b),
    InstAdd, 0x00, 2, 50, 72  },
  /* 74 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 39, NACL_OPCODE_NULL_OFFSET  },
  /* 75 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 2, 52, 74  },
  /* 76 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstSub, 0x05, 2, 52, 75  },
  /* 77 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstAnd, 0x04, 2, 52, 76  },
  /* 78 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 2, 54, 77  },
  /* 79 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 54, 78  },
  /* 80 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstOr, 0x01, 2, 52, 79  },
  /* 81 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstAdd, 0x00, 2, 52, 80  },
  /* 82 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x07, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 83 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x06, 0, 0, 82  },
  /* 84 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x05, 0, 0, 83  },
  /* 85 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x04, 0, 0, 84  },
  /* 86 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x03, 0, 0, 85  },
  /* 87 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x02, 0, 0, 86  },
  /* 88 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x01, 0, 0, 87  },
  /* 89 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 0, 0, 88  },
  /* 90 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 44, NACL_OPCODE_NULL_OFFSET  },
  /* 91 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 2, 56, 90  },
  /* 92 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstSub, 0x05, 2, 56, 91  },
  /* 93 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstAnd, 0x04, 2, 56, 92  },
  /* 94 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 2, 58, 93  },
  /* 95 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 58, 94  },
  /* 96 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstOr, 0x01, 2, 56, 95  },
  /* 97 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstAdd, 0x00, 2, 56, 96  },
  /* 98 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 60, NACL_OPCODE_NULL_OFFSET  },
  /* 99 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 62, NACL_OPCODE_NULL_OFFSET  },
  /* 100 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x00, 2, 64, NACL_OPCODE_NULL_OFFSET  },
  /* 101 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x00, 2, 66, NACL_OPCODE_NULL_OFFSET  },
  /* 102 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x00, 2, 68, NACL_OPCODE_NULL_OFFSET  },
  /* 103 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x00, 2, 38, NACL_OPCODE_NULL_OFFSET  },
  /* 104 */
  { NACLi_386,
    NACL_IFLAG(ModRmRegSOperand) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 105 */
  { NACLi_386,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstLea, 0x00, 2, 70, NACL_OPCODE_NULL_OFFSET  },
  /* 106 */
  { NACLi_386,
    NACL_IFLAG(ModRmRegSOperand) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 107 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 108 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPop, 0x00, 2, 72, 107  },
  /* 109 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 74, NACL_OPCODE_NULL_OFFSET  },
  /* 110 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 2, 74, NACL_OPCODE_NULL_OFFSET  },
  /* 111 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 74, NACL_OPCODE_NULL_OFFSET  },
  /* 112 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 2, 74, NACL_OPCODE_NULL_OFFSET  },
  /* 113 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 2, 74, NACL_OPCODE_NULL_OFFSET  },
  /* 114 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 2, 74, NACL_OPCODE_NULL_OFFSET  },
  /* 115 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 2, 74, NACL_OPCODE_NULL_OFFSET  },
  /* 116 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 74, NACL_OPCODE_NULL_OFFSET  },
  /* 117 */
  { NACLi_386,
    NACL_IFLAG(OperandSize_o) | NACL_IFLAG(LongMode) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 76, NACL_OPCODE_NULL_OFFSET  },
  /* 118 */
  { NACLi_386,
    NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 78, 117  },
  /* 119 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 80, 118  },
  /* 120 */
  { NACLi_386,
    NACL_IFLAG(OperandSize_o) | NACL_IFLAG(LongMode) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 82, NACL_OPCODE_NULL_OFFSET  },
  /* 121 */
  { NACLi_386,
    NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 84, 120  },
  /* 122 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 86, 121  },
  /* 123 */
  { NACLi_X87,
    NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 124 */
  { NACLi_386,
    NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(OperandSizeDefaultIs64) | NACL_IFLAG(LongMode) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 125 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, 124  },
  /* 126 */
  { NACLi_386,
    NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 127 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_Addr) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x00, 2, 88, NACL_OPCODE_NULL_OFFSET  },
  /* 128 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_Addr) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x00, 2, 90, NACL_OPCODE_NULL_OFFSET  },
  /* 129 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_Addr) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x00, 2, 92, NACL_OPCODE_NULL_OFFSET  },
  /* 130 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_Addr) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x00, 2, 94, NACL_OPCODE_NULL_OFFSET  },
  /* 131 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 96, NACL_OPCODE_NULL_OFFSET  },
  /* 132 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(LongMode) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 98, NACL_OPCODE_NULL_OFFSET  },
  /* 133 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 100, 132  },
  /* 134 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 102, 133  },
  /* 135 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 104, NACL_OPCODE_NULL_OFFSET  },
  /* 136 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(LongMode) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 106, NACL_OPCODE_NULL_OFFSET  },
  /* 137 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 108, 136  },
  /* 138 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 110, 137  },
  /* 139 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 112, NACL_OPCODE_NULL_OFFSET  },
  /* 140 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(LongMode) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 114, NACL_OPCODE_NULL_OFFSET  },
  /* 141 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 116, 140  },
  /* 142 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 118, 141  },
  /* 143 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 120, NACL_OPCODE_NULL_OFFSET  },
  /* 144 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(LongMode) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 122, NACL_OPCODE_NULL_OFFSET  },
  /* 145 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 124, 144  },
  /* 146 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 126, 145  },
  /* 147 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 128, NACL_OPCODE_NULL_OFFSET  },
  /* 148 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(LongMode) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 130, NACL_OPCODE_NULL_OFFSET  },
  /* 149 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 132, 148  },
  /* 150 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 134, 149  },
  /* 151 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x00, 2, 136, NACL_OPCODE_NULL_OFFSET  },
  /* 152 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x01, 2, 136, NACL_OPCODE_NULL_OFFSET  },
  /* 153 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x02, 2, 136, NACL_OPCODE_NULL_OFFSET  },
  /* 154 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x03, 2, 136, NACL_OPCODE_NULL_OFFSET  },
  /* 155 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x04, 2, 136, NACL_OPCODE_NULL_OFFSET  },
  /* 156 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x05, 2, 136, NACL_OPCODE_NULL_OFFSET  },
  /* 157 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x06, 2, 136, NACL_OPCODE_NULL_OFFSET  },
  /* 158 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x07, 2, 136, NACL_OPCODE_NULL_OFFSET  },
  /* 159 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x00, 2, 138, NACL_OPCODE_NULL_OFFSET  },
  /* 160 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x01, 2, 138, NACL_OPCODE_NULL_OFFSET  },
  /* 161 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x02, 2, 138, NACL_OPCODE_NULL_OFFSET  },
  /* 162 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x03, 2, 138, NACL_OPCODE_NULL_OFFSET  },
  /* 163 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x04, 2, 138, NACL_OPCODE_NULL_OFFSET  },
  /* 164 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x05, 2, 138, NACL_OPCODE_NULL_OFFSET  },
  /* 165 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x06, 2, 138, NACL_OPCODE_NULL_OFFSET  },
  /* 166 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x07, 2, 138, NACL_OPCODE_NULL_OFFSET  },
  /* 167 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 50, NACL_OPCODE_NULL_OFFSET  },
  /* 168 */
  { NACLi_ILLEGAL,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 0, 0, 167  },
  /* 169 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 2, 50, 168  },
  /* 170 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 2, 50, 169  },
  /* 171 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 2, 50, 170  },
  /* 172 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 50, 171  },
  /* 173 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 2, 50, 172  },
  /* 174 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 50, 173  },
  /* 175 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 58, NACL_OPCODE_NULL_OFFSET  },
  /* 176 */
  { NACLi_ILLEGAL,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 0, 0, 175  },
  /* 177 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 2, 58, 176  },
  /* 178 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 2, 58, 177  },
  /* 179 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 2, 58, 178  },
  /* 180 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 58, 179  },
  /* 181 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 2, 58, 180  },
  /* 182 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 58, 181  },
  /* 183 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_w) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(OperandSizeDefaultIs64) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 184 */
  { NACLi_386,
    NACL_IFLAG(NaClIllegal) | NACL_IFLAG(OperandSizeDefaultIs64) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 185 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b),
    InstMov, 0x00, 2, 140, 107  },
  /* 186 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o),
    InstMov, 0x00, 2, 142, 107  },
  /* 187 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_w) | NACL_IFLAG(OpcodeHasImmed2_b) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(OperandSizeDefaultIs64) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 188 */
  { NACLi_RETURN,
    NACL_IFLAG(OpcodeHasImmed_w) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 189 */
  { NACLi_RETURN,
    NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 190 */
  { NACLi_SYSTEM,
    NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 191 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 192 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 193 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(LongMode) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, 192  },
  /* 194 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OperandSize_v) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, 193  },
  /* 195 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 144, NACL_OPCODE_NULL_OFFSET  },
  /* 196 */
  { NACLi_ILLEGAL,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 0, 0, 195  },
  /* 197 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 2, 144, 196  },
  /* 198 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 2, 144, 197  },
  /* 199 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 2, 144, 198  },
  /* 200 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 144, 199  },
  /* 201 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 2, 144, 200  },
  /* 202 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 144, 201  },
  /* 203 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 146, NACL_OPCODE_NULL_OFFSET  },
  /* 204 */
  { NACLi_ILLEGAL,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 0, 0, 203  },
  /* 205 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 2, 146, 204  },
  /* 206 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 2, 146, 205  },
  /* 207 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 2, 146, 206  },
  /* 208 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 146, 207  },
  /* 209 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 2, 146, 208  },
  /* 210 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 146, 209  },
  /* 211 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 148, NACL_OPCODE_NULL_OFFSET  },
  /* 212 */
  { NACLi_ILLEGAL,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 0, 0, 211  },
  /* 213 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 2, 148, 212  },
  /* 214 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 2, 148, 213  },
  /* 215 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 2, 148, 214  },
  /* 216 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 148, 215  },
  /* 217 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 2, 148, 216  },
  /* 218 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 148, 217  },
  /* 219 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 150, NACL_OPCODE_NULL_OFFSET  },
  /* 220 */
  { NACLi_ILLEGAL,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 0, 0, 219  },
  /* 221 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 2, 150, 220  },
  /* 222 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 2, 150, 221  },
  /* 223 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 2, 150, 222  },
  /* 224 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 150, 223  },
  /* 225 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 2, 150, 224  },
  /* 226 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 150, 225  },
  /* 227 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 1, 152, NACL_OPCODE_NULL_OFFSET  },
  /* 228 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 1, 152, 227  },
  /* 229 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 1, 152, 228  },
  /* 230 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 1, 152, 229  },
  /* 231 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 152, 230  },
  /* 232 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 152, 231  },
  /* 233 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 152, 232  },
  /* 234 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 152, 233  },
  /* 235 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 1, 153, NACL_OPCODE_NULL_OFFSET  },
  /* 236 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 1, 154, 235  },
  /* 237 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 1, 155, 236  },
  /* 238 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 1, 156, 237  },
  /* 239 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 157, 238  },
  /* 240 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 157, 239  },
  /* 241 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x01, 0, 0, 240  },
  /* 242 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 152, 241  },
  /* 243 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 1, 154, NACL_OPCODE_NULL_OFFSET  },
  /* 244 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x06, 0, 0, 243  },
  /* 245 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 1, 156, 244  },
  /* 246 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x04, 0, 0, 245  },
  /* 247 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 157, 246  },
  /* 248 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 157, 247  },
  /* 249 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 157, 248  },
  /* 250 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 152, 249  },
  /* 251 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 1, 158, NACL_OPCODE_NULL_OFFSET  },
  /* 252 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 1, 158, 251  },
  /* 253 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 1, 158, 252  },
  /* 254 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 1, 158, 253  },
  /* 255 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 158, 254  },
  /* 256 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 158, 255  },
  /* 257 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 158, 256  },
  /* 258 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 158, 257  },
  /* 259 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x05, 0, 0, 236  },
  /* 260 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 1, 156, 259  },
  /* 261 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 159, 260  },
  /* 262 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 159, 261  },
  /* 263 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 159, 262  },
  /* 264 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 158, 263  },
  /* 265 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 1, 155, NACL_OPCODE_NULL_OFFSET  },
  /* 266 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 1, 155, 265  },
  /* 267 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 1, 155, 266  },
  /* 268 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 1, 155, 267  },
  /* 269 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 155, 268  },
  /* 270 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 155, 269  },
  /* 271 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 155, 270  },
  /* 272 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 155, 271  },
  /* 273 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 1, 154, 243  },
  /* 274 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 1, 156, 273  },
  /* 275 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 1, 156, 274  },
  /* 276 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 153, 275  },
  /* 277 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 153, 276  },
  /* 278 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 153, 277  },
  /* 279 */
  { NACLi_X87,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 155, 278  },
  /* 280 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(JumpInstruction) | NACL_IFLAG(PartialInstruction),
    InstDontCareJump, 0x00, 2, 46, NACL_OPCODE_NULL_OFFSET  },
  /* 281 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(AddressSize_o) | NACL_IFLAG(ConditionalJump) | NACL_IFLAG(PartialInstruction),
    InstDontCareCondJump, 0x00, 3, 160, NACL_OPCODE_NULL_OFFSET  },
  /* 282 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(AddressSize_v) | NACL_IFLAG(ConditionalJump) | NACL_IFLAG(PartialInstruction),
    InstDontCareCondJump, 0x00, 3, 163, 281  },
  /* 283 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 284 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_v) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64) | NACL_IFLAG(JumpInstruction),
    InstCall, 0x00, 3, 166, NACL_OPCODE_NULL_OFFSET  },
  /* 285 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_v) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64) | NACL_IFLAG(JumpInstruction) | NACL_IFLAG(PartialInstruction),
    InstDontCareJump, 0x00, 2, 169, NACL_OPCODE_NULL_OFFSET  },
  /* 286 */
  { NACLi_386,
    NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 287 */
  { NACLi_386,
    NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 288 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 3, 171, NACL_OPCODE_NULL_OFFSET  },
  /* 289 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 3, 171, 288  },
  /* 290 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 3, 171, 289  },
  /* 291 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 3, 171, 290  },
  /* 292 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 0, 291  },
  /* 293 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 0, 292  },
  /* 294 */
  { NACLi_ILLEGAL,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 0, 0, 293  },
  /* 295 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 48, 294  },
  /* 296 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 3, 174, NACL_OPCODE_NULL_OFFSET  },
  /* 297 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 3, 174, 296  },
  /* 298 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 3, 174, 297  },
  /* 299 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 3, 174, 298  },
  /* 300 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 2, 299  },
  /* 301 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 2, 300  },
  /* 302 */
  { NACLi_ILLEGAL,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 0, 0, 301  },
  /* 303 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_z) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 39, 302  },
  /* 304 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 0, 87  },
  /* 305 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 0, 304  },
  /* 306 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64),
    InstPush, 0x06, 2, 177, 82  },
  /* 307 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(JumpInstruction) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 0, 0, 306  },
  /* 308 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64) | NACL_IFLAG(JumpInstruction) | NACL_IFLAG(PartialInstruction),
    InstDontCareJump, 0x04, 2, 179, 307  },
  /* 309 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(JumpInstruction) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 0, 0, 308  },
  /* 310 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64) | NACL_IFLAG(JumpInstruction),
    InstCall, 0x02, 3, 181, 309  },
  /* 311 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 2, 310  },
  /* 312 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 2, 311  },
  /* 313 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 0, 0, 83  },
  /* 314 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 0, 0, 313  },
  /* 315 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 0, 0, 314  },
  /* 316 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 0, 0, 315  },
  /* 317 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 0, 0, 316  },
  /* 318 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, 317  },
  /* 319 */
  { NACLi_RDTSCP,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x17, 0, 0, 82  },
  /* 320 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(LongMode) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 0, 0, 319  },
  /* 321 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 0, 0, 320  },
  /* 322 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstLmsw, 0x06, 1, 184, 321  },
  /* 323 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x05, 0, 0, 322  },
  /* 324 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 0, 0, 323  },
  /* 325 */
  { NACLi_SVM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x73, 0, 0, 324  },
  /* 326 */
  { NACLi_SVM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x63, 0, 0, 325  },
  /* 327 */
  { NACLi_SVM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x53, 0, 0, 326  },
  /* 328 */
  { NACLi_SVM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x43, 0, 0, 327  },
  /* 329 */
  { NACLi_SVM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x33, 0, 0, 328  },
  /* 330 */
  { NACLi_SVM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x23, 0, 0, 329  },
  /* 331 */
  { NACLi_SVM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x13, 0, 0, 330  },
  /* 332 */
  { NACLi_SVM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 0, 0, 331  },
  /* 333 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 0, 0, 332  },
  /* 334 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 0, 0, 333  },
  /* 335 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x01, 0, 0, 334  },
  /* 336 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x11, 0, 0, 335  },
  /* 337 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 0, 0, 336  },
  /* 338 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 0, 0, 337  },
  /* 339 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, 338  },
  /* 340 */
  { NACLi_SYSTEM,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 341 */
  { NACLi_SYSCALL,
    NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 342 */
  { NACLi_3DNOW,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 343 */
  { NACLi_3DNOW,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 0, 0, 342  },
  /* 344 */
  { NACLi_3DNOW,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 0, 0, 343  },
  /* 345 */
  { NACLi_3DNOW,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 0, 0, 344  },
  /* 346 */
  { NACLi_3DNOW,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 185, 345  },
  /* 347 */
  { NACLi_3DNOW,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 0, 0, 346  },
  /* 348 */
  { NACLi_3DNOW,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 185, 347  },
  /* 349 */
  { NACLi_3DNOW,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 185, 348  },
  /* 350 */
  { NACLi_3DNOW,
    NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 351 */
  { NACLi_INVALID,
    NACL_IFLAG(Opcode0F0F) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 3, 186, NACL_OPCODE_NULL_OFFSET  },
  /* 352 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 189, NACL_OPCODE_NULL_OFFSET  },
  /* 353 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 190, NACL_OPCODE_NULL_OFFSET  },
  /* 354 */
  { NACLi_SSE,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 191, NACL_OPCODE_NULL_OFFSET  },
  /* 355 */
  { NACLi_SSE,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 158, 354  },
  /* 356 */
  { NACLi_SSE,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 159, NACL_OPCODE_NULL_OFFSET  },
  /* 357 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 192, NACL_OPCODE_NULL_OFFSET  },
  /* 358 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 185, 85  },
  /* 359 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 185, 358  },
  /* 360 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 185, 359  },
  /* 361 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 185, 360  },
  /* 362 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 363 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, 362  },
  /* 364 */
  { NACLi_SYSTEM,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 365 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 193, NACL_OPCODE_NULL_OFFSET  },
  /* 366 */
  { NACLi_SSE,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 194, NACL_OPCODE_NULL_OFFSET  },
  /* 367 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 195, NACL_OPCODE_NULL_OFFSET  },
  /* 368 */
  { NACLi_RDMSR,
    NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 369 */
  { NACLi_RDTSC,
    NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 196, NACL_OPCODE_NULL_OFFSET  },
  /* 370 */
  { NACLi_SYSENTER,
    NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 371 */
  { NACLi_CMOV,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 198, NACL_OPCODE_NULL_OFFSET  },
  /* 372 */
  { NACLi_SSE,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 200, NACL_OPCODE_NULL_OFFSET  },
  /* 373 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 189, NACL_OPCODE_NULL_OFFSET  },
  /* 374 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 202, NACL_OPCODE_NULL_OFFSET  },
  /* 375 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 193, NACL_OPCODE_NULL_OFFSET  },
  /* 376 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 203, NACL_OPCODE_NULL_OFFSET  },
  /* 377 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 204, NACL_OPCODE_NULL_OFFSET  },
  /* 378 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 205, 377  },
  /* 379 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 206, NACL_OPCODE_NULL_OFFSET  },
  /* 380 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 2, 208, 82  },
  /* 381 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x05, 0, 0, 380  },
  /* 382 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 2, 208, 381  },
  /* 383 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x03, 0, 0, 382  },
  /* 384 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 208, 383  },
  /* 385 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x01, 0, 0, 384  },
  /* 386 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 0, 0, 385  },
  /* 387 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x04, 0, 0, 381  },
  /* 388 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x03, 0, 0, 387  },
  /* 389 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 208, 388  },
  /* 390 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x01, 0, 0, 389  },
  /* 391 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 0, 0, 390  },
  /* 392 */
  { NACLi_MMX,
    NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 393 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 210, NACL_OPCODE_NULL_OFFSET  },
  /* 394 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 211, 393  },
  /* 395 */
  { NACLi_MMX,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 212, NACL_OPCODE_NULL_OFFSET  },
  /* 396 */
  { NACLi_386,
    NACL_IFLAG(OpcodeHasImmed_v) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(OperandSizeDefaultIs64) | NACL_IFLAG(ConditionalJump) | NACL_IFLAG(PartialInstruction),
    InstDontCareCondJump, 0x00, 2, 169, NACL_OPCODE_NULL_OFFSET  },
  /* 397 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 64, NACL_OPCODE_NULL_OFFSET  },
  /* 398 */
  { NACLi_386,
    NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 4, 213, NACL_OPCODE_NULL_OFFSET  },
  /* 399 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 400 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 217, NACL_OPCODE_NULL_OFFSET  },
  /* 401 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 220, NACL_OPCODE_NULL_OFFSET  },
  /* 402 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 403 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 223, NACL_OPCODE_NULL_OFFSET  },
  /* 404 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 226, NACL_OPCODE_NULL_OFFSET  },
  /* 405 */
  { NACLi_SFENCE_CLFLUSH,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 1, 229, NACL_OPCODE_NULL_OFFSET  },
  /* 406 */
  { NACLi_SFENCE_CLFLUSH,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x77, 0, 0, 405  },
  /* 407 */
  { NACLi_SFENCE_CLFLUSH,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x67, 0, 0, 406  },
  /* 408 */
  { NACLi_SFENCE_CLFLUSH,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x57, 0, 0, 407  },
  /* 409 */
  { NACLi_SFENCE_CLFLUSH,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x47, 0, 0, 408  },
  /* 410 */
  { NACLi_SFENCE_CLFLUSH,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x37, 0, 0, 409  },
  /* 411 */
  { NACLi_SFENCE_CLFLUSH,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x27, 0, 0, 410  },
  /* 412 */
  { NACLi_SFENCE_CLFLUSH,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x17, 0, 0, 411  },
  /* 413 */
  { NACLi_SFENCE_CLFLUSH,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 0, 0, 412  },
  /* 414 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x76, 0, 0, 413  },
  /* 415 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x66, 0, 0, 414  },
  /* 416 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x56, 0, 0, 415  },
  /* 417 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x46, 0, 0, 416  },
  /* 418 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x36, 0, 0, 417  },
  /* 419 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x26, 0, 0, 418  },
  /* 420 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x16, 0, 0, 419  },
  /* 421 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 0, 0, 420  },
  /* 422 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x75, 0, 0, 421  },
  /* 423 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x65, 0, 0, 422  },
  /* 424 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x55, 0, 0, 423  },
  /* 425 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x45, 0, 0, 424  },
  /* 426 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x35, 0, 0, 425  },
  /* 427 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x25, 0, 0, 426  },
  /* 428 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x15, 0, 0, 427  },
  /* 429 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeInModRmRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 0, 0, 428  },
  /* 430 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x04, 0, 0, 429  },
  /* 431 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 157, 430  },
  /* 432 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 152, 431  },
  /* 433 */
  { NACLi_FXSAVE,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 0, 0, 432  },
  /* 434 */
  { NACLi_FXSAVE,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, 433  },
  /* 435 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 6, NACL_OPCODE_NULL_OFFSET  },
  /* 436 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 230, NACL_OPCODE_NULL_OFFSET  },
  /* 437 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 233, NACL_OPCODE_NULL_OFFSET  },
  /* 438 */
  { NACLi_386,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 439 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 236, NACL_OPCODE_NULL_OFFSET  },
  /* 440 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 238, NACL_OPCODE_NULL_OFFSET  },
  /* 441 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 58, 107  },
  /* 442 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 2, 58, 441  },
  /* 443 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 2, 58, 442  },
  /* 444 */
  { NACLi_386,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 2, 44, 443  },
  /* 445 */
  { NACLi_386,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 198, NACL_OPCODE_NULL_OFFSET  },
  /* 446 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 240, NACL_OPCODE_NULL_OFFSET  },
  /* 447 */
  { NACLi_SSE2,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 242, NACL_OPCODE_NULL_OFFSET  },
  /* 448 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 244, NACL_OPCODE_NULL_OFFSET  },
  /* 449 */
  { NACLi_SSE41,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 246, NACL_OPCODE_NULL_OFFSET  },
  /* 450 */
  { NACLi_CMPXCHG16B,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 3, 249, 107  },
  /* 451 */
  { NACLi_CMPXCHG8B,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeLockable) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 3, 252, 450  },
  /* 452 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 255, NACL_OPCODE_NULL_OFFSET  },
  /* 453 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 256, 452  },
  /* 454 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 255, NACL_OPCODE_NULL_OFFSET  },
  /* 455 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x01, 1, 256, 454  },
  /* 456 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 255, NACL_OPCODE_NULL_OFFSET  },
  /* 457 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 1, 256, 456  },
  /* 458 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 255, NACL_OPCODE_NULL_OFFSET  },
  /* 459 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 1, 256, 458  },
  /* 460 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 1, 255, NACL_OPCODE_NULL_OFFSET  },
  /* 461 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 1, 256, 460  },
  /* 462 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 1, 255, NACL_OPCODE_NULL_OFFSET  },
  /* 463 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x05, 1, 256, 462  },
  /* 464 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 1, 255, NACL_OPCODE_NULL_OFFSET  },
  /* 465 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 1, 256, 464  },
  /* 466 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 1, 255, NACL_OPCODE_NULL_OFFSET  },
  /* 467 */
  { NACLi_386,
    NACL_IFLAG(OpcodePlusR) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 1, 256, 466  },
  /* 468 */
  { NACLi_MMX,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 246, NACL_OPCODE_NULL_OFFSET  },
  /* 469 */
  { NACLi_MMX,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 159, NACL_OPCODE_NULL_OFFSET  },
  /* 470 */
  { NACLi_MMX,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 257, NACL_OPCODE_NULL_OFFSET  },
  /* 471 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 259, NACL_OPCODE_NULL_OFFSET  },
  /* 472 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 260, NACL_OPCODE_NULL_OFFSET  },
  /* 473 */
  { NACLi_SSE3,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 259, NACL_OPCODE_NULL_OFFSET  },
  /* 474 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 475 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 261, NACL_OPCODE_NULL_OFFSET  },
  /* 476 */
  { NACLi_SSE4A,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 159, NACL_OPCODE_NULL_OFFSET  },
  /* 477 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 262, NACL_OPCODE_NULL_OFFSET  },
  /* 478 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 264, NACL_OPCODE_NULL_OFFSET  },
  /* 479 */
  { NACLi_SSE4A,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeHasImmed2_b) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 266, NACL_OPCODE_NULL_OFFSET  },
  /* 480 */
  { NACLi_SSE4A,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 269, NACL_OPCODE_NULL_OFFSET  },
  /* 481 */
  { NACLi_SSE3,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 189, NACL_OPCODE_NULL_OFFSET  },
  /* 482 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 270, NACL_OPCODE_NULL_OFFSET  },
  /* 483 */
  { NACLi_SSE3,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 272, NACL_OPCODE_NULL_OFFSET  },
  /* 484 */
  { NACLi_SSE2,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 191, NACL_OPCODE_NULL_OFFSET  },
  /* 485 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 272, NACL_OPCODE_NULL_OFFSET  },
  /* 486 */
  { NACLi_SSE3,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 273, NACL_OPCODE_NULL_OFFSET  },
  /* 487 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 195, NACL_OPCODE_NULL_OFFSET  },
  /* 488 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 274, NACL_OPCODE_NULL_OFFSET  },
  /* 489 */
  { NACLi_SSE3,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 189, NACL_OPCODE_NULL_OFFSET  },
  /* 490 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 491 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 261, NACL_OPCODE_NULL_OFFSET  },
  /* 492 */
  { NACLi_SSE4A,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 157, NACL_OPCODE_NULL_OFFSET  },
  /* 493 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 275, NACL_OPCODE_NULL_OFFSET  },
  /* 494 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 189, NACL_OPCODE_NULL_OFFSET  },
  /* 495 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 195, NACL_OPCODE_NULL_OFFSET  },
  /* 496 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 189, NACL_OPCODE_NULL_OFFSET  },
  /* 497 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 202, NACL_OPCODE_NULL_OFFSET  },
  /* 498 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 264, NACL_OPCODE_NULL_OFFSET  },
  /* 499 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 192, NACL_OPCODE_NULL_OFFSET  },
  /* 500 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 277, NACL_OPCODE_NULL_OFFSET  },
  /* 501 */
  { NACLi_POPCNT,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 198, NACL_OPCODE_NULL_OFFSET  },
  /* 502 */
  { NACLi_LZCNT,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 198, NACL_OPCODE_NULL_OFFSET  },
  /* 503 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 278, NACL_OPCODE_NULL_OFFSET  },
  /* 504 */
  { NACLi_SSE2,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRep) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 247, NACL_OPCODE_NULL_OFFSET  },
  /* 505 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 272, NACL_OPCODE_NULL_OFFSET  },
  /* 506 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 280, NACL_OPCODE_NULL_OFFSET  },
  /* 507 */
  { NACLi_SSE2,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 158, NACL_OPCODE_NULL_OFFSET  },
  /* 508 */
  { NACLi_SSE2,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 159, NACL_OPCODE_NULL_OFFSET  },
  /* 509 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 192, NACL_OPCODE_NULL_OFFSET  },
  /* 510 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 193, NACL_OPCODE_NULL_OFFSET  },
  /* 511 */
  { NACLi_SSE2,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 194, NACL_OPCODE_NULL_OFFSET  },
  /* 512 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 259, NACL_OPCODE_NULL_OFFSET  },
  /* 513 */
  { NACLi_SSE2,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 281, NACL_OPCODE_NULL_OFFSET  },
  /* 514 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 515 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 189, NACL_OPCODE_NULL_OFFSET  },
  /* 516 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 202, NACL_OPCODE_NULL_OFFSET  },
  /* 517 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 204, NACL_OPCODE_NULL_OFFSET  },
  /* 518 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 205, 517  },
  /* 519 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 283, NACL_OPCODE_NULL_OFFSET  },
  /* 520 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x07, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 521 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 2, 285, 520  },
  /* 522 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x05, 0, 0, 521  },
  /* 523 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x04, 2, 285, 522  },
  /* 524 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x03, 0, 0, 523  },
  /* 525 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 285, 524  },
  /* 526 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x01, 0, 0, 525  },
  /* 527 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 0, 0, 526  },
  /* 528 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x07, 2, 285, NACL_OPCODE_NULL_OFFSET  },
  /* 529 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x06, 2, 285, 528  },
  /* 530 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x05, 0, 0, 529  },
  /* 531 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x04, 0, 0, 530  },
  /* 532 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x03, 2, 285, 531  },
  /* 533 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x02, 2, 285, 532  },
  /* 534 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x01, 0, 0, 533  },
  /* 535 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 0, 0, 534  },
  /* 536 */
  { NACLi_INVALID,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal),
    InstInvalid, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 537 */
  { NACLi_SSE4A,
    NACL_IFLAG(OpcodeInModRm) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeHasImmed2_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, 536  },
  /* 538 */
  { NACLi_SSE4A,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 269, NACL_OPCODE_NULL_OFFSET  },
  /* 539 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 210, NACL_OPCODE_NULL_OFFSET  },
  /* 540 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 211, 539  },
  /* 541 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 277, NACL_OPCODE_NULL_OFFSET  },
  /* 542 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 287, NACL_OPCODE_NULL_OFFSET  },
  /* 543 */
  { NACLi_SSE,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 244, NACL_OPCODE_NULL_OFFSET  },
  /* 544 */
  { NACLi_SSE41,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 289, NACL_OPCODE_NULL_OFFSET  },
  /* 545 */
  { NACLi_SSE3,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 272, NACL_OPCODE_NULL_OFFSET  },
  /* 546 */
  { NACLi_SSE2,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 292, NACL_OPCODE_NULL_OFFSET  },
  /* 547 */
  { NACLi_SSE2,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 289, NACL_OPCODE_NULL_OFFSET  },
  /* 548 */
  { NACLi_SSE2,
    NACL_IFLAG(ModRmModIs0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 293, NACL_OPCODE_NULL_OFFSET  },
  /* 549 */
  { NACLi_E3DNOW,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 193, NACL_OPCODE_NULL_OFFSET  },
  /* 550 */
  { NACLi_3DNOW,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 193, NACL_OPCODE_NULL_OFFSET  },
  /* 551 */
  { NACLi_SSSE3,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 193, NACL_OPCODE_NULL_OFFSET  },
  /* 552 */
  { NACLi_MOVBE,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 295, NACL_OPCODE_NULL_OFFSET  },
  /* 553 */
  { NACLi_MOVBE,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 297, NACL_OPCODE_NULL_OFFSET  },
  /* 554 */
  { NACLi_SSSE3,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 202, NACL_OPCODE_NULL_OFFSET  },
  /* 555 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 202, NACL_OPCODE_NULL_OFFSET  },
  /* 556 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 299, NACL_OPCODE_NULL_OFFSET  },
  /* 557 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 300, NACL_OPCODE_NULL_OFFSET  },
  /* 558 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 301, NACL_OPCODE_NULL_OFFSET  },
  /* 559 */
  { NACLi_SSE41,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 273, NACL_OPCODE_NULL_OFFSET  },
  /* 560 */
  { NACLi_SSE42,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 202, NACL_OPCODE_NULL_OFFSET  },
  /* 561 */
  { NACLi_VMX,
    NACL_IFLAG(ModRmModIsnt0x3) | NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(NaClIllegal) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 562 */
  { NACLi_SSE42,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(OperandSize_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 302, NACL_OPCODE_NULL_OFFSET  },
  /* 563 */
  { NACLi_SSE42,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeAllowsRepne) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(OperandSize_w) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 304, NACL_OPCODE_NULL_OFFSET  },
  /* 564 */
  { NACLi_SSSE3,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 206, NACL_OPCODE_NULL_OFFSET  },
  /* 565 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 283, NACL_OPCODE_NULL_OFFSET  },
  /* 566 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 278, NACL_OPCODE_NULL_OFFSET  },
  /* 567 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 270, NACL_OPCODE_NULL_OFFSET  },
  /* 568 */
  { NACLi_SSSE3,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 283, NACL_OPCODE_NULL_OFFSET  },
  /* 569 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 306, NACL_OPCODE_NULL_OFFSET  },
  /* 570 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 308, NACL_OPCODE_NULL_OFFSET  },
  /* 571 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 310, NACL_OPCODE_NULL_OFFSET  },
  /* 572 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 312, 571  },
  /* 573 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 314, NACL_OPCODE_NULL_OFFSET  },
  /* 574 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 316, NACL_OPCODE_NULL_OFFSET  },
  /* 575 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 318, NACL_OPCODE_NULL_OFFSET  },
  /* 576 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 320, NACL_OPCODE_NULL_OFFSET  },
  /* 577 */
  { NACLi_SSE41,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 322, 576  },
  /* 578 */
  { NACLi_SSE42,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 4, 324, NACL_OPCODE_NULL_OFFSET  },
  /* 579 */
  { NACLi_SSE42,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 5, 328, NACL_OPCODE_NULL_OFFSET  },
  /* 580 */
  { NACLi_SSE42,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 2, 283, NACL_OPCODE_NULL_OFFSET  },
  /* 581 */
  { NACLi_SSE42,
    NACL_IFLAG(OpcodeUsesModRm) | NACL_IFLAG(OpcodeHasImmed_b) | NACL_IFLAG(OpcodeAllowsData16) | NACL_IFLAG(SizeIgnoresData16) | NACL_IFLAG(OperandSize_v) | NACL_IFLAG(OperandSize_o) | NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 3, 333, NACL_OPCODE_NULL_OFFSET  },
  /* 582 */
  { NACLi_X87_FSINCOS,
    NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 583 */
  { NACLi_X87,
    NACL_EMPTY_IFLAGS,
    InstInvalid, 0x00, 0, 0, NACL_OPCODE_NULL_OFFSET  },
  /* 584 */
  { NACLi_X87,
    NACL_IFLAG(PartialInstruction),
    InstDontCare, 0x00, 1, 80, NACL_OPCODE_NULL_OFFSET  },
};

static const NaClPrefixOpcodeArrayOffset g_LookupTable[2543] = {
  /*     0 */ 1, 2, 3, 4, 5, 6, 7, 7, 8, 9, 
  /*    10 */ 10, 11, 12, 13, 7, 7, 14, 15, 16, 17, 
  /*    20 */ 18, 19, 7, 7, 14, 15, 16, 17, 18, 19, 
  /*    30 */ 7, 7, 20, 21, 22, 23, 24, 25, 7, 7, 
  /*    40 */ 26, 27, 28, 29, 30, 31, 7, 7, 14, 32, 
  /*    50 */ 16, 33, 18, 34, 7, 7, 35, 36, 37, 38, 
  /*    60 */ 39, 40, 7, 7, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*    70 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*    80 */ 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 
  /*    90 */ 51, 52, 53, 54, 55, 56, 7, 7, 7, 57, 
  /*   100 */ 7, 7, 7, 7, 58, 59, 60, 61, 62, 64, 
  /*   110 */ 62, 64, 65, 65, 65, 65, 65, 65, 65, 65, 
  /*   120 */ 65, 65, 65, 65, 65, 65, 65, 65, 73, 81, 
  /*   130 */ 89, 97, 35, 36, 98, 99, 100, 101, 102, 103, 
  /*   140 */ 104, 105, 106, 108, 109, 110, 111, 112, 113, 114, 
  /*   150 */ 115, 116, 119, 122, 7, 123, 125, 125, 126, 126, 
  /*   160 */ 127, 128, 129, 130, 131, 134, 135, 138, 39, 40, 
  /*   170 */ 139, 142, 143, 146, 147, 150, 151, 152, 153, 154, 
  /*   180 */ 155, 156, 157, 158, 159, 160, 161, 162, 163, 164, 
  /*   190 */ 165, 166, 174, 182, 183, 184, 7, 7, 185, 186, 
  /*   200 */ 187, 184, 188, 189, 190, 191, 126, 194, 202, 210, 
  /*   210 */ 218, 226, 7, 7, 7, 126, 234, 242, 234, 250, 
  /*   220 */ 258, 264, 272, 279, 65, 65, 280, 282, 191, 283, 
  /*   230 */ 191, 283, 284, 285, 7, 280, 126, 286, 126, 286, 
  /*   240 */ 7, 126, 7, 7, 287, 287, 295, 303, 287, 287, 
  /*   250 */ 190, 190, 287, 287, 305, 312, 318, 339, 340, 340, 
  /*   260 */ 7, 341, 190, 190, 190, 190, 7, 126, 7, 349, 
  /*   270 */ 350, 351, 352, 353, 355, 356, 357, 357, 355, 356, 
  /*   280 */ 361, 362, 362, 362, 362, 362, 362, 363, 364, 364, 
  /*   290 */ 364, 364, 7, 7, 7, 7, 352, 353, 365, 366, 
  /*   300 */ 352, 352, 367, 352, 368, 369, 368, 190, 370, 370, 
  /*   310 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*   320 */ 371, 371, 371, 371, 371, 371, 371, 371, 371, 371, 
  /*   330 */ 371, 371, 371, 371, 371, 371, 372, 352, 352, 352, 
  /*   340 */ 352, 352, 352, 352, 352, 352, 373, 374, 352, 352, 
  /*   350 */ 352, 352, 375, 375, 375, 375, 375, 375, 375, 375, 
  /*   360 */ 376, 376, 376, 375, 7, 7, 378, 375, 379, 386, 
  /*   370 */ 386, 391, 375, 375, 375, 392, 7, 7, 7, 7, 
  /*   380 */ 7, 7, 394, 395, 396, 396, 396, 396, 396, 396, 
  /*   390 */ 396, 396, 396, 396, 396, 396, 396, 396, 396, 396, 
  /*   400 */ 397, 397, 397, 397, 397, 397, 397, 397, 397, 397, 
  /*   410 */ 397, 397, 397, 397, 397, 397, 184, 184, 398, 399, 
  /*   420 */ 400, 401, 7, 7, 184, 184, 190, 402, 403, 404, 
  /*   430 */ 434, 435, 436, 437, 438, 402, 438, 438, 439, 440, 
  /*   440 */ 7, 107, 444, 402, 445, 445, 439, 440, 98, 99, 
  /*   450 */ 446, 447, 448, 449, 446, 451, 453, 455, 457, 459, 
  /*   460 */ 461, 463, 465, 467, 7, 375, 375, 375, 375, 375, 
  /*   470 */ 7, 468, 375, 375, 375, 375, 375, 375, 375, 375, 
  /*   480 */ 375, 375, 375, 375, 375, 375, 7, 469, 375, 375, 
  /*   490 */ 375, 375, 375, 375, 375, 375, 7, 375, 375, 375, 
  /*   500 */ 375, 375, 375, 470, 375, 375, 375, 375, 375, 375, 
  /*   510 */ 375, 7, NACL_OPCODE_NULL_OFFSET, 471, 472, 473, 474, 474, 474, 474, 
  /*   520 */ 474, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   530 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 474, 474, 475, 
  /*   540 */ 476, 477, 477, 474, 474, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   550 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   560 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   570 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 474, 471, 474, 
  /*   580 */ 474, 474, 474, 474, 474, 471, 471, 471, 474, 471, 
  /*   590 */ 471, 471, 471, 474, 474, 474, 474, 474, 474, 474, 
  /*   600 */ 474, 474, 474, 474, 474, 474, 474, 474, 474, 478, 
  /*   610 */ 474, 474, 474, 474, 474, 474, 474, 479, 480, 474, 
  /*   620 */ 474, 481, 481, 474, 474, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   630 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   640 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   650 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   660 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   670 */ NACL_OPCODE_NULL_OFFSET, 474, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   680 */ NACL_OPCODE_NULL_OFFSET, 474, 474, 474, 474, 474, 474, 474, 474, NACL_OPCODE_NULL_OFFSET, 
  /*   690 */ NACL_OPCODE_NULL_OFFSET, 482, 474, 474, 474, 474, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   700 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 483, 474, 474, 474, 474, 
  /*   710 */ 474, 484, 474, 474, 474, 474, 474, 474, 474, 474, 
  /*   720 */ 474, 474, 474, 474, 474, 474, 474, 485, 474, 474, 
  /*   730 */ 474, 474, 474, 474, 474, 474, 474, 486, 474, 474, 
  /*   740 */ 474, 474, 474, 474, 474, 474, 474, 474, 474, 474, 
  /*   750 */ 474, 474, 474, NACL_OPCODE_NULL_OFFSET, 487, 488, 489, 490, 490, 490, 
  /*   760 */ 489, 490, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   770 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 490, 490, 
  /*   780 */ 491, 492, 493, 493, 490, 490, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   790 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   800 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   810 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 490, 494, 
  /*   820 */ 487, 487, 490, 490, 490, 490, 487, 487, 495, 496, 
  /*   830 */ 487, 487, 487, 487, 490, 490, 490, 490, 490, 490, 
  /*   840 */ 490, 490, 490, 490, 490, 490, 490, 490, 490, 497, 
  /*   850 */ 498, 490, 490, 490, 490, 490, 490, 490, 490, 490, 
  /*   860 */ 490, 490, 490, 490, 499, 500, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   870 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   880 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   890 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   900 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   910 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   920 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 501, 490, 490, 490, 490, 502, 490, 490, 
  /*   930 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 503, 490, 490, 490, 490, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*   940 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 490, 490, 490, 490, 
  /*   950 */ 490, 490, 504, 490, 490, 490, 490, 490, 490, 490, 
  /*   960 */ 490, 490, 490, 490, 490, 490, 490, 490, 499, 490, 
  /*   970 */ 490, 490, 490, 490, 490, 490, 490, 490, 490, 490, 
  /*   980 */ 490, 490, 490, 490, 490, 490, 490, 490, 490, 490, 
  /*   990 */ 490, 490, 490, 490, NACL_OPCODE_NULL_OFFSET, 505, 506, 507, 508, 509, 
  /*  1000 */ 509, 507, 508, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1010 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 505, 
  /*  1020 */ 506, 510, 511, 505, 505, 512, 512, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1030 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1040 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1050 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 513, 
  /*  1060 */ 505, 514, 514, 505, 505, 505, 505, 505, 505, 505, 
  /*  1070 */ 515, 505, 505, 505, 505, 509, 509, 509, 516, 516, 
  /*  1080 */ 516, 516, 516, 509, 509, 509, 516, 509, 509, 518, 
  /*  1090 */ 516, 519, 527, 527, 535, 516, 516, 516, 514, 537, 
  /*  1100 */ 538, 514, 514, 505, 505, 540, 541, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1110 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1120 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1130 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1140 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1150 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 514, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1160 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1170 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 542, 514, 543, 544, 542, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1180 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 545, 516, 516, 
  /*  1190 */ 516, 516, 516, 546, 547, 516, 516, 516, 516, 516, 
  /*  1200 */ 516, 516, 516, 516, 516, 516, 516, 516, 516, 516, 
  /*  1210 */ 511, 516, 516, 516, 516, 516, 516, 516, 516, 514, 
  /*  1220 */ 516, 516, 516, 516, 516, 516, 548, 516, 516, 516, 
  /*  1230 */ 516, 516, 516, 516, 514, NACL_OPCODE_NULL_OFFSET, 549, 550, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1240 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1250 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 549, 550, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1260 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1270 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1280 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1290 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1300 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1310 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1320 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1330 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1340 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1350 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1360 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 549, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 549, NACL_OPCODE_NULL_OFFSET, 550, NACL_OPCODE_NULL_OFFSET, 
  /*  1370 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 550, NACL_OPCODE_NULL_OFFSET, 550, 550, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 550, NACL_OPCODE_NULL_OFFSET, 
  /*  1380 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 550, NACL_OPCODE_NULL_OFFSET, 550, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 550, NACL_OPCODE_NULL_OFFSET, 
  /*  1390 */ 550, 550, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 550, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 550, NACL_OPCODE_NULL_OFFSET, 
  /*  1400 */ 550, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 550, NACL_OPCODE_NULL_OFFSET, 550, 550, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1410 */ NACL_OPCODE_NULL_OFFSET, 549, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 550, NACL_OPCODE_NULL_OFFSET, 551, 551, 551, 
  /*  1420 */ 551, 551, 551, 551, 551, 551, 551, 551, 551, 7, 
  /*  1430 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1440 */ 7, 7, 7, 7, 7, 551, 551, 551, 7, 7, 
  /*  1450 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1460 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1470 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1480 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1490 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1500 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1510 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1520 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1530 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1540 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1550 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1560 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1570 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1580 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1590 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1600 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1610 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1620 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1630 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1640 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1650 */ 7, 7, 7, 7, 7, 7, 7, 552, 553, 7, 
  /*  1660 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  1670 */ 7, 7, 7, 554, 554, 554, 554, 554, 554, 554, 
  /*  1680 */ 554, 554, 554, 554, 554, 514, 514, 514, 514, 555, 
  /*  1690 */ 514, 514, 514, 555, 555, 514, 555, 514, 514, 514, 
  /*  1700 */ 514, 554, 554, 554, 514, 556, 557, 558, 556, 557, 
  /*  1710 */ 556, 514, 514, 555, 555, 559, 555, 514, 514, 514, 
  /*  1720 */ 514, 556, 557, 558, 556, 557, 556, 514, 560, 555, 
  /*  1730 */ 555, 555, 555, 555, 555, 555, 555, 555, 555, 514, 
  /*  1740 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1750 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1760 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1770 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1780 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1790 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1800 */ 514, 561, 561, 514, 514, 514, 514, 514, 514, 514, 
  /*  1810 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1820 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1830 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1840 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1850 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1860 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1870 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1880 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1890 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1900 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, 514, 
  /*  1910 */ 514, 514, 514, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 514, 514, 514, 514, 514, 
  /*  1920 */ 514, 514, 514, 514, 514, 514, 514, 514, 514, NACL_OPCODE_NULL_OFFSET, 
  /*  1930 */ 562, 563, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 564, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 565, 565, 566, 
  /*  1940 */ 567, 565, 565, 565, 568, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 569, 
  /*  1950 */ 570, 572, 573, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1960 */ NACL_OPCODE_NULL_OFFSET, 574, 575, 577, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1970 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1980 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  1990 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 565, 565, 565, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  2000 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  2010 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 
  /*  2020 */ NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 578, 579, 580, 581, NACL_OPCODE_NULL_OFFSET, 
  /*  2030 */ NACL_OPCODE_NULL_OFFSET, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2040 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2050 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2060 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2070 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2080 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2090 */ 123, 123, 123, 123, 123, NACL_OPCODE_NULL_OFFSET, 123, 123, 123, 123, 
  /*  2100 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2110 */ 123, 123, 123, 7, 7, 7, 7, 7, 7, 7, 
  /*  2120 */ 7, 7, 7, 7, 7, 7, 7, 7, 123, 123, 
  /*  2130 */ 7, 7, 123, 123, 7, 7, 123, 123, 123, 123, 
  /*  2140 */ 123, 123, 123, 7, 123, 123, 123, 123, 123, 123, 
  /*  2150 */ 123, 123, 123, 123, 123, 582, 123, 123, 123, 123, 
  /*  2160 */ NACL_OPCODE_NULL_OFFSET, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2170 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2180 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2190 */ 123, 123, 123, 7, 7, 7, 7, 7, 7, 7, 
  /*  2200 */ 7, 7, 123, 7, 7, 7, 7, 7, 7, 7, 
  /*  2210 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  2220 */ 7, 7, 7, 7, 7, NACL_OPCODE_NULL_OFFSET, 123, 123, 123, 123, 
  /*  2230 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2240 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2250 */ 123, 123, 123, 123, 123, 123, 123, 123, 7, 7, 
  /*  2260 */ 123, 123, 7, 7, 7, 7, 123, 123, 123, 123, 
  /*  2270 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2280 */ 123, 123, NACL_OPCODE_NULL_OFFSET, NACL_OPCODE_NULL_OFFSET, 123, 123, 123, 123, 123, 123, 
  /*  2290 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2300 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  2310 */ 7, 7, 7, 7, 7, 7, 123, 123, 123, 123, 
  /*  2320 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2330 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2340 */ 123, 123, 123, 123, 123, 123, 123, 123, NACL_OPCODE_NULL_OFFSET, 123, 
  /*  2350 */ 123, 123, 123, 123, 123, 123, 123, 7, 7, 7, 
  /*  2360 */ 7, 7, 7, 7, 7, 123, 123, 123, 123, 123, 
  /*  2370 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2380 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2390 */ 123, 123, 123, 123, 123, 123, 123, 7, 7, 7, 
  /*  2400 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 7, 
  /*  2410 */ 7, 7, 7, NACL_OPCODE_NULL_OFFSET, 123, 123, 123, 123, 123, 123, 
  /*  2420 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2430 */ 7, 7, 7, 7, 7, 7, 7, 7, 7, 123, 
  /*  2440 */ 7, 7, 7, 7, 7, 7, 123, 123, 123, 123, 
  /*  2450 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2460 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2470 */ 123, 123, 123, 123, 123, 123, 123, 123, NACL_OPCODE_NULL_OFFSET, 583, 
  /*  2480 */ 583, 583, 583, 583, 583, 583, 583, 583, 583, 583, 
  /*  2490 */ 583, 583, 583, 583, 583, 583, 583, 583, 583, 583, 
  /*  2500 */ 583, 583, 583, 583, 583, 583, 583, 583, 583, 583, 
  /*  2510 */ 583, 584, 7, 7, 7, 7, 7, 7, 7, 123, 
  /*  2520 */ 123, 123, 123, 123, 123, 123, 123, 123, 123, 123, 
  /*  2530 */ 123, 123, 123, 123, 123, 7, 7, 7, 7, 7, 
  /*  2540 */ 7, 7, 7, };

static const NaClPrefixOpcodeSelector g_PrefixOpcode[NaClInstPrefixEnumSize] = {
  /*             NoPrefix */ { 0 , 0x00, 0xff },
  /*             Prefix0F */ { 256 , 0x00, 0xff },
  /*           PrefixF20F */ { 512 , 0x0f, 0xff },
  /*           PrefixF30F */ { 753 , 0x0f, 0xff },
  /*           Prefix660F */ { 994 , 0x0f, 0xff },
  /*           Prefix0F0F */ { 1235 , 0x0b, 0xc0 },
  /*           Prefix0F38 */ { 1417 , 0x00, 0xff },
  /*         Prefix660F38 */ { 1673 , 0x00, 0xff },
  /*         PrefixF20F38 */ { 1929 , 0xef, 0xf2 },
  /*           Prefix0F3A */ { 1933 , 0x0e, 0x10 },
  /*         Prefix660F3A */ { 1936 , 0x07, 0x64 },
  /*             PrefixD8 */ { 2030 , 0xbf, 0xff },
  /*             PrefixD9 */ { 2095 , 0xbf, 0xff },
  /*             PrefixDA */ { 2160 , 0xbf, 0xff },
  /*             PrefixDB */ { 2225 , 0xbf, 0xf8 },
  /*             PrefixDC */ { 2283 , 0xbf, 0xff },
  /*             PrefixDD */ { 2348 , 0xbf, 0xff },
  /*             PrefixDE */ { 2413 , 0xbf, 0xff },
  /*             PrefixDF */ { 2478 , 0xbf, 0xff },
};

static const uint32_t kNaClPrefixTable[NCDTABLESIZE] = {
  /* 0x00-0x0f */
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0x10-0x1f */
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0x20-0x2f */
  0, 0, 0, 0, 0, 0, kPrefixSEGES, 0, 0, 0, 0, 0, 0, 0, kPrefixSEGCS, 0, 
  /* 0x30-0x3f */
  0, 0, 0, 0, 0, 0, kPrefixSEGSS, 0, 0, 0, 0, 0, 0, 0, kPrefixSEGDS, 0, 
  /* 0x40-0x4f */
  kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, kPrefixREX, 
  /* 0x50-0x5f */
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0x60-0x6f */
  0, 0, 0, 0, kPrefixSEGFS, kPrefixSEGGS, kPrefixDATA16, kPrefixADDR16, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0x70-0x7f */
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0x80-0x8f */
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0x90-0x9f */
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0xa0-0xaf */
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0xb0-0xbf */
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0xc0-0xcf */
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0xd0-0xdf */
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0xe0-0xef */
  0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
  /* 0xf0-0xff */
  kPrefixLOCK, 0, kPrefixREPNE, kPrefixREP, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 
};

static const NaClInstNode g_OpcodeSeq[95] = {
  /* 0 */
  { 0x0f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 1,
    g_OpcodeSeq + 20,
  },
  /* 1 */
  { 0x0b,
    287,
    NULL,
    g_OpcodeSeq + 2,
  },
  /* 2 */
  { 0x1f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 3,
    NULL,
  },
  /* 3 */
  { 0x00,
    287,
    NULL,
    g_OpcodeSeq + 4,
  },
  /* 4 */
  { 0x40,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 5,
    g_OpcodeSeq + 6,
  },
  /* 5 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 6 */
  { 0x44,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 7,
    g_OpcodeSeq + 9,
  },
  /* 7 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 8,
    NULL,
  },
  /* 8 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 9 */
  { 0x80,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 10,
    g_OpcodeSeq + 14,
  },
  /* 10 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 11,
    NULL,
  },
  /* 11 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 12,
    NULL,
  },
  /* 12 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 13,
    NULL,
  },
  /* 13 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 14 */
  { 0x84,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 15,
    NULL,
  },
  /* 15 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 16,
    NULL,
  },
  /* 16 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 17,
    NULL,
  },
  /* 17 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 18,
    NULL,
  },
  /* 18 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 19,
    NULL,
  },
  /* 19 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 20 */
  { 0x66,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 21,
    g_OpcodeSeq + 92,
  },
  /* 21 */
  { 0x0f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 22,
    g_OpcodeSeq + 32,
  },
  /* 22 */
  { 0x1f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 23,
    NULL,
  },
  /* 23 */
  { 0x44,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 24,
    g_OpcodeSeq + 26,
  },
  /* 24 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 25,
    NULL,
  },
  /* 25 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 26 */
  { 0x84,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 27,
    NULL,
  },
  /* 27 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 28,
    NULL,
  },
  /* 28 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 29,
    NULL,
  },
  /* 29 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 30,
    NULL,
  },
  /* 30 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 31,
    NULL,
  },
  /* 31 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 32 */
  { 0x2e,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 33,
    g_OpcodeSeq + 41,
  },
  /* 33 */
  { 0x0f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 34,
    NULL,
  },
  /* 34 */
  { 0x1f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 35,
    NULL,
  },
  /* 35 */
  { 0x84,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 36,
    NULL,
  },
  /* 36 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 37,
    NULL,
  },
  /* 37 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 38,
    NULL,
  },
  /* 38 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 39,
    NULL,
  },
  /* 39 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 40,
    NULL,
  },
  /* 40 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 41 */
  { 0x66,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 42,
    g_OpcodeSeq + 91,
  },
  /* 42 */
  { 0x2e,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 43,
    g_OpcodeSeq + 51,
  },
  /* 43 */
  { 0x0f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 44,
    NULL,
  },
  /* 44 */
  { 0x1f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 45,
    NULL,
  },
  /* 45 */
  { 0x84,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 46,
    NULL,
  },
  /* 46 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 47,
    NULL,
  },
  /* 47 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 48,
    NULL,
  },
  /* 48 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 49,
    NULL,
  },
  /* 49 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 50,
    NULL,
  },
  /* 50 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 51 */
  { 0x66,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 52,
    NULL,
  },
  /* 52 */
  { 0x2e,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 53,
    g_OpcodeSeq + 61,
  },
  /* 53 */
  { 0x0f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 54,
    NULL,
  },
  /* 54 */
  { 0x1f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 55,
    NULL,
  },
  /* 55 */
  { 0x84,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 56,
    NULL,
  },
  /* 56 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 57,
    NULL,
  },
  /* 57 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 58,
    NULL,
  },
  /* 58 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 59,
    NULL,
  },
  /* 59 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 60,
    NULL,
  },
  /* 60 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 61 */
  { 0x66,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 62,
    NULL,
  },
  /* 62 */
  { 0x2e,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 63,
    g_OpcodeSeq + 71,
  },
  /* 63 */
  { 0x0f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 64,
    NULL,
  },
  /* 64 */
  { 0x1f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 65,
    NULL,
  },
  /* 65 */
  { 0x84,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 66,
    NULL,
  },
  /* 66 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 67,
    NULL,
  },
  /* 67 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 68,
    NULL,
  },
  /* 68 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 69,
    NULL,
  },
  /* 69 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 70,
    NULL,
  },
  /* 70 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 71 */
  { 0x66,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 72,
    NULL,
  },
  /* 72 */
  { 0x2e,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 73,
    g_OpcodeSeq + 81,
  },
  /* 73 */
  { 0x0f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 74,
    NULL,
  },
  /* 74 */
  { 0x1f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 75,
    NULL,
  },
  /* 75 */
  { 0x84,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 76,
    NULL,
  },
  /* 76 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 77,
    NULL,
  },
  /* 77 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 78,
    NULL,
  },
  /* 78 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 79,
    NULL,
  },
  /* 79 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 80,
    NULL,
  },
  /* 80 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 81 */
  { 0x66,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 82,
    NULL,
  },
  /* 82 */
  { 0x2e,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 83,
    NULL,
  },
  /* 83 */
  { 0x0f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 84,
    NULL,
  },
  /* 84 */
  { 0x1f,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 85,
    NULL,
  },
  /* 85 */
  { 0x84,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 86,
    NULL,
  },
  /* 86 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 87,
    NULL,
  },
  /* 87 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 88,
    NULL,
  },
  /* 88 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 89,
    NULL,
  },
  /* 89 */
  { 0x00,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 90,
    NULL,
  },
  /* 90 */
  { 0x00,
    287,
    NULL,
    NULL,
  },
  /* 91 */
  { 0x90,
    287,
    NULL,
    NULL,
  },
  /* 92 */
  { 0x90,
    287,
    NULL,
    g_OpcodeSeq + 93,
  },
  /* 93 */
  { 0xf3,
    NACL_OPCODE_NULL_OFFSET,
    g_OpcodeSeq + 94,
    NULL,
  },
  /* 94 */
  { 0x90,
    287,
    NULL,
    NULL,
  },
};
