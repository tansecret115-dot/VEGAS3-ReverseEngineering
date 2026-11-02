/* Module: vidpcore.dll
   Function: FUN_5de73940
   Address: 5de73940
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de73940(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x40] = 0;
  param_1[0x24] = 1;
  param_1[0x25] = 1;
  param_1[0x41] = 0x3ff00000;
  param_1[0x42] = 1;
  param_1[0x43] = 1;
  param_1[0x26] = 4;
  param_1[0x22] = 0xc;
  param_1[0x1c] = 0x3f000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x3e] = 10;
  param_1[0x44] = 0x81;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x5e] = 0;
  param_1[0x56] = 1;
  param_1[0x59] = 0;
  param_1[0x5b] = 0x3ff00000;
  param_1[0x5d] = 0;
  param_1[0x5f] = 0x3ff00000;
  param_1[0x60] = 0;
  param_1[0x72] = 0;
  param_1[0x74] = 0;
  param_1[0x76] = 0;
  param_1[0x78] = 0;
  param_1[0x70] = 1;
  param_1[0x73] = 0;
  param_1[0x75] = 0x3ff00000;
  param_1[0x77] = 0;
  param_1[0x79] = 0x3ff00000;
  param_1[0x7a] = 0;
  param_1[0x7e] = 0;
  param_1[0x80] = 0;
  param_1[0x82] = 0;
  param_1[0x84] = 0;
  param_1[0x7c] = 1;
  param_1[0x7f] = 0;
  param_1[0x81] = 0x3ff00000;
  param_1[0x83] = 0;
  param_1[0x85] = 0x3ff00000;
  param_1[0x86] = 0;
  param_1[0x6e] = 1;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4c);
  param_1[0x8a] = 0;
  param_1[0x88] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8d] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4f] = 0;
  return;
}


