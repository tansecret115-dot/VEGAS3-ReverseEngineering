/* Module: vidpcore.dll
   Function: FUN_5de75390
   Address: 5de75390
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de75390(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x40] = 0;
  param_1[0x26] = 1;
  param_1[0x24] = 1;
  param_1[0x25] = 1;
  param_1[0x22] = 0xc;
  param_1[0x1c] = 0x3f000000;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x3e] = 2;
  param_1[0x41] = 0x3ff00000;
  param_1[0x42] = 1;
  param_1[0x43] = 1;
  param_1[0x44] = 0x41;
  param_1[0x56] = 1;
  param_1[0x57] = 0;
  param_1[0x58] = 0x3da3d70a;
  param_1[0x59] = 0x3da3d70a;
  param_1[0x5a] = 0;
  param_1[0x61] = 1;
  param_1[0x62] = 0;
  param_1[99] = 0x3da3d70a;
  param_1[100] = 0x3da3d70a;
  param_1[0x65] = 0;
  param_1[0x66] = 1;
  param_1[0x67] = 0;
  param_1[0x68] = 0x3da3d70a;
  param_1[0x69] = 0x3da3d70a;
  param_1[0x6a] = 0;
  param_1[0x60] = 1;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4c);
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4f] = 0;
  return;
}


