/* Module: vidpcore.dll
   Function: FUN_5de9d4e0
   Address: 5de9d4e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de9d4e0(int *param_1)

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
  param_1[0x44] = 0x141;
  param_1[0x5c] = 0;
  param_1[0x56] = 1;
  param_1[0x57] = 1;
  param_1[0x58] = 8;
  param_1[0x59] = 0x3f800000;
  param_1[0x5a] = 0x3f800000;
  param_1[0x5b] = 0x3f800000;
  param_1[0x5d] = 0;
  param_1[0x6e] = 0;
  param_1[0x68] = 1;
  param_1[0x69] = 1;
  param_1[0x6a] = 8;
  param_1[0x6b] = 0x3f800000;
  param_1[0x6c] = 0x3f800000;
  param_1[0x6d] = 0x3f800000;
  param_1[0x6f] = 0;
  param_1[0x76] = 0;
  param_1[0x70] = 1;
  param_1[0x71] = 1;
  param_1[0x72] = 8;
  param_1[0x73] = 0x3f800000;
  param_1[0x74] = 0x3f800000;
  param_1[0x75] = 0x3f800000;
  param_1[0x77] = 0;
  param_1[0x66] = 1;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4c);
  param_1[0x7a] = 0;
  param_1[0x78] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4f] = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xef] = -1;
  param_1[0xf0] = -0x40800000;
  param_1[0xf1] = -0x40800000;
  return;
}


