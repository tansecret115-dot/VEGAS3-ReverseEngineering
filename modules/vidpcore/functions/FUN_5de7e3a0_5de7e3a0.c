/* Module: vidpcore.dll
   Function: FUN_5de7e3a0
   Address: 5de7e3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de7e3a0(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x40] = 0;
  param_1[0x13] = param_1[0x13] | 0x1000000;
  param_1[0x26] = 1;
  param_1[0x24] = 1;
  param_1[0x25] = 0;
  param_1[0x22] = 0xc;
  param_1[0x1c] = 0x3f000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x3e] = 2;
  param_1[0x41] = 0x3ff00000;
  param_1[0x42] = 0;
  param_1[0x43] = 1;
  param_1[0x44] = 0xc1;
  param_1[0x5a] = -0x33333333;
  param_1[0x58] = -0x33333333;
  param_1[0x56] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x60] = 0;
  param_1[0x5b] = 0x3fe4cccc;
  param_1[0x59] = 0x3fe4cccc;
  param_1[0x57] = 0;
  param_1[0x5d] = 0x3ff00000;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[0x74] = -0x33333333;
  param_1[0x72] = -0x33333333;
  param_1[0x70] = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  param_1[0x7a] = 0;
  param_1[0x75] = 0x3fe4cccc;
  param_1[0x73] = 0x3fe4cccc;
  param_1[0x71] = 0;
  param_1[0x77] = 0x3ff00000;
  param_1[0x79] = 0;
  param_1[0x7b] = 0;
  param_1[0x80] = -0x33333333;
  param_1[0x7e] = -0x33333333;
  param_1[0x81] = 0x3fe4cccc;
  param_1[0x7f] = 0x3fe4cccc;
  param_1[0x7c] = 0;
  param_1[0x82] = 0;
  param_1[0x84] = 0;
  param_1[0x86] = 0;
  param_1[0x7d] = 0;
  param_1[0x83] = 0x3ff00000;
  param_1[0x85] = 0;
  param_1[0x87] = 0;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4c);
  param_1[0x8a] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x6e] = 1;
  param_1[0x8d] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4f] = 0;
  return;
}


