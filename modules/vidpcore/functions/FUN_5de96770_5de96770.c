/* Module: vidpcore.dll
   Function: FUN_5de96770
   Address: 5de96770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de96770(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x26] = 1;
  param_1[0x24] = 1;
  param_1[0x43] = 1;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4b);
  param_1[0x40] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0xc;
  param_1[0x1c] = 0x3f000000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x3e] = 2;
  param_1[0x41] = 0x3ff00000;
  param_1[0x42] = 0;
  param_1[0x44] = 0xc1;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4e] = 0;
  return;
}


