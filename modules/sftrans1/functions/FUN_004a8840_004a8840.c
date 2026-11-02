/* Module: sftrans1.dll
   Function: FUN_004a8840
   Address: 004a8840
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004a8840(undefined4 *param_1)

{
  int iVar1;
  
  *param_1 = 0x3f000000;
  param_1[1] = 0x3f000000;
  param_1[0xe5] = 0x3f000000;
  param_1[2] = 0xbf800000;
  param_1[0xe6] = 0x3f800000;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0x3f800000;
  param_1[0xe9] = 0;
  param_1[0xec] = 0x3f800000;
  param_1[0xea] = 0x3f800000;
  param_1[0xeb] = 0x3f800000;
  param_1 = param_1 + 5;
  iVar1 = 0x20;
  do {
    param_1[-2] = 0;
    *param_1 = 0;
    param_1[2] = 0x3f800000;
    param_1[3] = 0x3f800000;
    param_1[4] = 0x3f800000;
    param_1[-1] = 0;
    param_1[1] = 0;
    param_1 = param_1 + 7;
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  return 0;
}


