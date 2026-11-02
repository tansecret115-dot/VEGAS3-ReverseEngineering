/* Module: vidpcore.dll
   Function: FUN_5de86a30
   Address: 5de86a30
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de86a30(int *param_1)

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
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0x3ff00000;
  param_1[0x5b] = 0x3ff00000;
  param_1[100] = 0;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  param_1[0x65] = 0;
  param_1[0x67] = 0x3ff00000;
  param_1[0x69] = 0x3ff00000;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x6a] = 0;
  param_1[0x6d] = 0x3ff00000;
  param_1[0x6f] = 0x3ff00000;
  param_1[0x6b] = 0;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4c);
  param_1[0x62] = 1;
  param_1[0x72] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x75] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4f] = 0;
  return;
}


