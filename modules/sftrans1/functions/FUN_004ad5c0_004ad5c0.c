/* Module: sftrans1.dll
   Function: FUN_004ad5c0
   Address: 004ad5c0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004ad5c0(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x40] = 0;
  param_1[0x26] = 1;
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
  FUN_004ad4d0();
  FUN_004ad4d0();
  FUN_004ad4d0();
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4b);
  param_1[0x74] = 0;
  param_1[0x72] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[99] = 1;
  param_1[0x77] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4e] = 0;
  return;
}


