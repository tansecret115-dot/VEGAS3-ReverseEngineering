/* Module: vidpcore.dll
   Function: FUN_5de830d0
   Address: 5de830d0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de830d0(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x26] = 1;
  param_1[0x24] = 1;
  param_1[0x25] = 1;
  param_1[0x42] = 1;
  param_1[0x43] = 1;
  param_1[0x58] = 1;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4c);
  param_1[0x1c] = 0x3f000000;
  param_1[0x56] = 0x3f000000;
  param_1[0x59] = 0x3f000000;
  param_1[0x5a] = 0x3f000000;
  param_1[0x40] = 0;
  param_1[0x5c] = 0;
  param_1[0x22] = 0xc;
  param_1[0x4d] = 0;
  param_1[0x4e] = 0;
  param_1[0x3e] = 2;
  param_1[0x41] = 0x3ff00000;
  param_1[0x44] = 0xc1;
  param_1[0x5b] = 0;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4f] = 0;
  return;
}


