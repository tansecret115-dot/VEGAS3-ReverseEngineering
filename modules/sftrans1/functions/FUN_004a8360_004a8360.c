/* Module: sftrans1.dll
   Function: FUN_004a8360
   Address: 004a8360
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004a8360(int *param_1)

{
  int *piVar1;
  LPUNKNOWN punkOuter;
  int iVar2;
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
  param_1[0x44] = 0;
  param_1[0x55] = 0x3f000000;
  param_1[0x56] = 0x3f000000;
  param_1[0x13a] = 0x3f000000;
  param_1[0x57] = -0x40800000;
  param_1[0x13b] = 0x3f800000;
  param_1[0x13d] = 0;
  param_1[0x13c] = 0x3f800000;
  param_1[0x13e] = 0;
  param_1[0x141] = 0x3f800000;
  param_1[0x13f] = 0x3f800000;
  param_1[0x140] = 0x3f800000;
  FUN_0042c470();
  FUN_0042bb00();
  param_1[0x230] = 0x3f000000;
  param_1[0x231] = 0x3f000000;
  param_1[0x232] = -0x40800000;
  param_1[0x315] = 0x3f000000;
  param_1[0x316] = 0x3f800000;
  param_1[0x318] = 0;
  param_1[0x317] = 0x3f800000;
  param_1[0x319] = 0;
  param_1[0x31c] = 0x3f800000;
  param_1[0x31a] = 0x3f800000;
  param_1[0x31b] = 0x3f800000;
  FUN_0042c470();
  FUN_0042bb00();
  iVar2 = 0x20;
  param_1[0x31d] = 0x3f000000;
  param_1[0x31e] = 0x3f000000;
  param_1[0x402] = 0x3f000000;
  param_1[799] = -0x40800000;
  param_1[0x403] = 0x3f800000;
  param_1[0x405] = 0;
  param_1[0x404] = 0x3f800000;
  param_1[0x406] = 0;
  param_1[0x409] = 0x3f800000;
  param_1[0x407] = 0x3f800000;
  param_1[0x408] = 0x3f800000;
  piVar1 = param_1 + 0x322;
  do {
    piVar1[-2] = 0;
    *piVar1 = 0;
    piVar1[2] = 0x3f800000;
    piVar1[3] = 0x3f800000;
    piVar1[4] = 0x3f800000;
    piVar1[-1] = 0;
    piVar1[1] = 0;
    piVar1 = piVar1 + 7;
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0042bb00();
  ppunkMarshal = (LPUNKNOWN *)(param_1 + 0x4b);
  param_1[0x40c] = 0;
  param_1[0x40a] = 0;
  param_1[0x40d] = 0;
  param_1[0x40e] = 0;
  param_1[0x22f] = 1;
  param_1[0x40f] = 0;
  punkOuter = (LPUNKNOWN)(**(code **)(*param_1 + 0x44))();
  CoCreateFreeThreadedMarshaler(punkOuter,ppunkMarshal);
  param_1[0x4e] = 0;
  return;
}


