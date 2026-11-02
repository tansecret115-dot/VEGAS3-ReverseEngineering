/* Module: sftrans1.dll
   Function: FUN_004aedd0
   Address: 004aedd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004aedd0(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = 0x3ff00000;
  param_1[0x59] = 0;
  param_1[0x5b] = 0;
  param_1[100] = 0;
  param_1[0x66] = 0;
  param_1[0x68] = 0;
  param_1[0x65] = 0x3ff00000;
  param_1[0x67] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0x3ff00000;
  param_1[0x6c] = 0;
  param_1[0x6e] = 0;
  param_1[0x6d] = 0;
  param_1[0x6f] = 0;
  param_1[0x72] = 0;
  param_1[0x70] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  param_1[0x62] = 1;
  param_1[0x75] = 0;
  (**(code **)(param_1[0x4a] + 0x14))(param_1 + 0x4a,0);
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4b);
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  return;
}


