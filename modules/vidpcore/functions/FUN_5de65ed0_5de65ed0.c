/* Module: vidpcore.dll
   Function: FUN_5de65ed0
   Address: 5de65ed0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de65ed0(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x24] = 2;
  param_1[0x25] = 2;
  param_1[0x42] = 2;
  param_1[0x43] = 2;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x48);
  param_1[0x40] = 0;
  param_1[0x26] = 4;
  param_1[0x22] = 0xc;
  param_1[0x1c] = 0x3f000000;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x3e] = 5;
  param_1[0x41] = 0x3ff00000;
  param_1[0x44] = 0xc1;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4b] = 0;
  return;
}


