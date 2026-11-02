/* Module: sftrans1.dll
   Function: FUN_0045e9f0
   Address: 0045e9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_0045e9f0(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x24] = 2;
  param_1[0x25] = 2;
  param_1[0x13] = param_1[0x13] & 0xfffcfffc;
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
  param_1[0x55] = 0x3f800000;
  param_1[0x5f] = 0x42480000;
  param_1[0x56] = 1;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0;
  param_1[0x5c] = 0x3f800000;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x6c] = 0x3f800000;
  param_1[0x76] = 0x42480000;
  param_1[0x6d] = 1;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x72] = 0;
  param_1[0x73] = 0x3f800000;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  param_1[0x77] = 0x3f800000;
  param_1[0x7e] = 0x3f800000;
  param_1[0x81] = 0x42480000;
  param_1[0x78] = 1;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7f] = 0;
  param_1[0x80] = 0;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4b);
  param_1[0x6b] = 1;
  param_1[0x84] = 0;
  param_1[0x82] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  param_1[0x87] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4e] = 0;
  return;
}


