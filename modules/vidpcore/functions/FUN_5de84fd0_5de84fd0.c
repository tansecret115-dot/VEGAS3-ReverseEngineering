/* Module: vidpcore.dll
   Function: FUN_5de84fd0
   Address: 5de84fd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5de84fd0(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x24] = 2;
  param_1[0x25] = 2;
  param_1[0x40] = 0;
  param_1[0x42] = 2;
  param_1[0x43] = 2;
  param_1[0x26] = 4;
  param_1[0x22] = 0xc;
  param_1[0x1c] = 0x3f000000;
  param_1[0x4c] = 0;
  param_1[0x4d] = 0;
  param_1[0x3e] = 5;
  param_1[0x41] = 0x3ff00000;
  param_1[0x44] = 1;
  param_1[0x58] = -0x66666666;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x59] = 0x3fb99999;
  param_1[0x62] = -0x66666666;
  param_1[0x60] = 0;
  param_1[0x61] = 0;
  param_1[99] = 0x3fb99999;
  param_1[0x66] = -0x66666666;
  param_1[0x67] = 0x3fb99999;
  param_1[100] = 0;
  param_1[0x65] = 0;
  param_1[0x6a] = 0;
  param_1[0x68] = 0;
  param_1[0x6b] = 0;
  param_1[0x6c] = 0;
  param_1[0x5e] = 1;
  param_1[0x6d] = 0;
  (**(code **)(param_1[0x4a] + 0x14))(param_1 + 0x4a,0);
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4b);
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4e] = 0;
  return;
}


