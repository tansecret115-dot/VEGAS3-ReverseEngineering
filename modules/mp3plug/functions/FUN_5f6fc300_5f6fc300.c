/* Module: mp3plug.dll
   Function: FUN_5f6fc300
   Address: 5f6fc300
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __cdecl FUN_5f6fc300(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  
  iVar1 = 0x750 - param_1[0x1441];
  if (param_3 < iVar1) {
    iVar1 = param_3;
  }
  FUN_5f6d5090(param_2,param_1 + param_1[0x1441] * 2,iVar1 * 2);
  if (iVar1 < param_3) {
    FUN_5f6d5090(param_2 + iVar1 * 2,param_1,(param_3 - iVar1) * 2);
    FUN_5f6d5090(param_1,param_1 + 0xea0,(param_3 - iVar1) * 2);
  }
  iVar1 = param_1[0x1441];
  if (iVar1 < 0x2d0) {
    FUN_5f6d5090(param_1 + iVar1 * 2,param_1 + iVar1 * 2 + 0xea0,iVar1 * -2 + 0x5a0);
  }
  param_1[0x1441] = (param_3 + param_1[0x1441]) % 0x750;
  return 0;
}


