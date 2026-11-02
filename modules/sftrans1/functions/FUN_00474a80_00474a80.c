/* Module: sftrans1.dll
   Function: FUN_00474a80
   Address: 00474a80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_00474a80(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0x33333333;
  param_1[4] = 0x66666666;
  param_1[10] = 0xf7f7f7f8;
  param_1[8] = 0xf6f6f6f7;
  param_1[6] = 0x96969697;
  param_1[0xc] = 0;
  param_1[1] = 0x3fc33333;
  param_1[2] = 1;
  param_1[5] = 0x3fd66666;
  param_1[0xb] = 0x3fe7f7f7;
  param_1[9] = 0x3fe6f6f6;
  param_1[7] = 0x3fd69696;
  param_1[0xd] = 0x3ff00000;
  param_1 = param_1 + 0x10;
  iVar1 = 7;
  do {
    param_1[-2] = 0;
    param_1[-1] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1 = param_1 + 8;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}


