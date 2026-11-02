/* Module: sftrans1.dll
   Function: FUN_0046a9e0
   Address: 0046a9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0046a9e0(int *param_1)

{
  LPUNKNOWN punkOuter;
  int iVar1;
  int *piVar2;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x13] = param_1[0x13] & 0xfffcfffc;
  param_1[0x24] = 2;
  param_1[0x25] = 2;
  param_1[0x42] = 2;
  param_1[0x43] = 2;
  param_1[0x40] = 0;
  param_1[0x26] = 1;
  param_1[0x22] = 0xc;
  param_1[0x1c] = 0x3f000000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x3e] = 5;
  param_1[0x41] = 0x3ff00000;
  param_1[0x44] = 0x41;
  piVar2 = param_1 + 0x56;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x62] = 0;
  param_1[100] = 0;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0;
  param_1[0x5b] = 0x3fd00000;
  param_1[0x5d] = 0x3ff00000;
  param_1[0x5f] = 0x3fe00000;
  param_1[0x61] = 0;
  param_1[99] = 0x3fe80000;
  param_1[0x65] = -0x40100000;
  param_1[0x67] = 0x3ff00000;
  param_1[0x69] = 0;
  param_1[0x96] = 5;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  piVar2 = param_1 + 0xe0;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  param_1[0xe0] = 0;
  param_1[0xe2] = 0;
  param_1[0xe4] = 0;
  param_1[0xe6] = 0;
  param_1[0xe8] = 0;
  param_1[0xea] = 0;
  param_1[0xec] = 0;
  param_1[0xee] = 0;
  param_1[0xf0] = 0;
  param_1[0xf2] = 0;
  param_1[0xe1] = 0;
  param_1[0xe3] = 0;
  param_1[0xe5] = 0x3fd00000;
  param_1[0xe7] = 0x3ff00000;
  param_1[0xe9] = 0x3fe00000;
  param_1[0xeb] = 0;
  param_1[0xed] = 0x3fe80000;
  param_1[0xef] = -0x40100000;
  param_1[0xf1] = 0x3ff00000;
  param_1[0xf3] = 0;
  param_1[0x120] = 5;
  param_1[0x121] = 0;
  param_1[0x122] = 0;
  piVar2 = param_1 + 0x124;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *piVar2 = 0;
    piVar2 = piVar2 + 1;
  }
  param_1[0x124] = 0;
  param_1[0x126] = 0;
  param_1[0x128] = 0;
  param_1[0x12a] = 0;
  param_1[300] = 0;
  param_1[0x12e] = 0;
  param_1[0x130] = 0;
  param_1[0x132] = 0;
  param_1[0x134] = 0;
  param_1[0x136] = 0;
  param_1[0x125] = 0;
  param_1[0x127] = 0;
  param_1[0x129] = 0x3fd00000;
  param_1[299] = 0x3ff00000;
  param_1[0x12d] = 0x3fe00000;
  param_1[0x12f] = 0;
  param_1[0x131] = 0x3fe80000;
  param_1[0x133] = -0x40100000;
  param_1[0x135] = 0x3ff00000;
  param_1[0x137] = 0;
  param_1[0x164] = 5;
  param_1[0x165] = 0;
  param_1[0x166] = 0;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4b);
  param_1[0x16a] = 0;
  param_1[0x168] = 0;
  param_1[0x16b] = 0;
  param_1[0x16c] = 0;
  param_1[0xde] = 1;
  param_1[0x16d] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4e] = 0;
  return;
}


