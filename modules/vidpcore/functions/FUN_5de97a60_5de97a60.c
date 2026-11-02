/* Module: vidpcore.dll
   Function: FUN_5de97a60
   Address: 5de97a60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de97a60(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x40] = 0;
  param_1[0x26] = 4;
  param_1[0x24] = 1;
  param_1[0x25] = 1;
  param_1[0x22] = 0xc;
  param_1[0x1c] = 0x3f000000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x3e] = 2;
  param_1[0x41] = 0x3ff00000;
  param_1[0x42] = 1;
  param_1[0x43] = 1;
  param_1[0x44] = 1;
  param_1[0x55] = 0x3f000000;
  param_1[0x56] = 0x3f000000;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5c] = 0;
  param_1[0x5b] = 0;
  param_1[0x5a] = 0;
  param_1[0x5d] = 0x3f800000;
  param_1[0x5e] = 1;
  param_1[0x5f] = 1;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0x3d4ccccd;
  param_1[0x62] = 1;
  param_1[0x74] = 0x3f000000;
  param_1[0x75] = 0x3f000000;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  param_1[0x78] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7c] = 0x3f800000;
  param_1[0x7d] = 1;
  param_1[0x7e] = 1;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  param_1[0x82] = 0x3d4ccccd;
  param_1[0x81] = 1;
  param_1[0x83] = 0x3f000000;
  param_1[0x84] = 0x3f000000;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0x3f800000;
  param_1[0x8c] = 1;
  param_1[0x8d] = 1;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  param_1[0x91] = 0x3d4ccccd;
  param_1[0x90] = 1;
  param_1[0x73] = 1;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4b);
  param_1[0x94] = 0;
  param_1[0x92] = 0;
  param_1[0x95] = 0;
  param_1[0x96] = 0;
  param_1[0x97] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4e] = 0;
  return;
}


