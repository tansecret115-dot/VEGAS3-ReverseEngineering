/* Module: sftrans1.dll
   Function: FUN_0045ff50
   Address: 0045ff50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0045ff50(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x13] = param_1[0x13] & 0xfffcfffc;
  param_1[0x40] = 0;
  param_1[0x26] = 1;
  param_1[0x24] = 2;
  param_1[0x25] = 2;
  param_1[0x22] = 0xc;
  param_1[0x1c] = 0x3f000000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x3e] = 5;
  param_1[0x41] = 0x3ff00000;
  param_1[0x42] = 2;
  param_1[0x43] = 2;
  param_1[0x44] = 0x41;
  param_1[0x56] = 1;
  param_1[0x57] = 0x3f800000;
  param_1[100] = 2;
  param_1[0x58] = 0x3f000000;
  param_1[0x59] = 0x3f000000;
  param_1[0x5a] = 0x3f000000;
  param_1[0x5b] = 0x3f000000;
  param_1[0x5c] = 0x40800000;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x5f] = 0x3ff00000;
  param_1[0x61] = 0x3ff00000;
  param_1[0x62] = 0;
  param_1[99] = 0x3ff00000;
  param_1[0x78] = 1;
  param_1[0x79] = 0x3f800000;
  param_1[0x86] = 2;
  param_1[0x7a] = 0x3f000000;
  param_1[0x7b] = 0x3f000000;
  param_1[0x7c] = 0x3f000000;
  param_1[0x7d] = 0x3f000000;
  param_1[0x7e] = 0x40800000;
  param_1[0x80] = 0;
  param_1[0x82] = 0;
  param_1[0x81] = 0x3ff00000;
  param_1[0x83] = 0x3ff00000;
  param_1[0x84] = 0;
  param_1[0x85] = 0x3ff00000;
  param_1[0x88] = 1;
  param_1[0x89] = 0x3f800000;
  param_1[0x96] = 2;
  param_1[0x8a] = 0x3f000000;
  param_1[0x8b] = 0x3f000000;
  param_1[0x8c] = 0x3f000000;
  param_1[0x8d] = 0x3f000000;
  param_1[0x8e] = 0x40800000;
  param_1[0x90] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0x3ff00000;
  param_1[0x93] = 0x3ff00000;
  param_1[0x94] = 0;
  param_1[0x95] = 0x3ff00000;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4b);
  param_1[0x9a] = 0;
  param_1[0x98] = 0;
  param_1[0x9b] = 0;
  param_1[0x9c] = 0;
  param_1[0x76] = 1;
  param_1[0x9d] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4e] = 0;
  return;
}


