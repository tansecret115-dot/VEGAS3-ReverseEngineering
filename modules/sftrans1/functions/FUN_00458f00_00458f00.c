/* Module: sftrans1.dll
   Function: FUN_00458f00
   Address: 00458f00
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_00458f00(int *param_1)

{
  LPUNKNOWN punkOuter;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x24] = 2;
  param_1[0x13] = param_1[0x13] & 0xfffcfffc;
  param_1[0x25] = 2;
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
  *(undefined2 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x5b] = 0x3f800000;
  *(undefined2 *)(param_1 + 100) = 0;
  param_1[0x65] = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x6a] = 0x3f800000;
  param_1[0x71] = 0x3f800000;
  *(undefined2 *)(param_1 + 0x6b) = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4b);
  param_1[99] = 1;
  param_1[0x74] = 0;
  param_1[0x72] = 0;
  param_1[0x75] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4e] = 0;
  return;
}


