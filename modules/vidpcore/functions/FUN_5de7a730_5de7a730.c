/* Module: vidpcore.dll
   Function: FUN_5de7a730
   Address: 5de7a730
   Source: Ghidra pseudocode (Stage 10 batch) */


HRESULT __fastcall FUN_5de7a730(int *param_1)

{
  LPUNKNOWN punkOuter;
  HRESULT HVar1;
  int iVar2;
  LPUNKNOWN *ppunkMarshal;
  
  param_1[0x40] = 0;
  param_1[0x26] = 1;
  param_1[0x13] = param_1[0x13] | 0x1000000;
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
  param_1[0x44] = 0x1c1;
  param_1[0x5a] = 0;
  param_1[0x5c] = 0;
  param_1[0x56] = 0;
  param_1[0x57] = 1;
  param_1[0x58] = 1;
  param_1[0x5b] = 0x3fe00000;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0x12d687;
  param_1[0x70] = 0;
  param_1[0x72] = 0;
  param_1[0x6c] = 0;
  param_1[0x6d] = 1;
  param_1[0x6e] = 1;
  param_1[0x71] = 0x3fe00000;
  param_1[0x73] = 0;
  param_1[0x74] = 0x12d687;
  param_1[0x7a] = 0;
  param_1[0x7c] = 0;
  param_1[0x76] = 0;
  param_1[0x77] = 1;
  param_1[0x78] = 1;
  param_1[0x7b] = 0x3fe00000;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0x12d687;
  param_1[0x6a] = 1;
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4c);
  param_1[0x82] = 0;
  param_1[0x80] = 0;
  param_1[0x83] = 0;
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  HVar1 = CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  iVar2 = rand();
  iVar2 = FUN_5ded1800(iVar2);
  param_1[0x4f] = 0;
  param_1[0x87] = iVar2;
  return HVar1;
}


