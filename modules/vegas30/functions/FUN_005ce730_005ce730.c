/* Module: vegas30.exe
   Function: FUN_005ce730
   Address: 005ce730
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005ce730(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_005cb780(&local_4,param_2,param_3,param_4,param_5,param_6);
  if (-1 < iVar1) {
    FUN_005cba90(param_2,local_4);
  }
  if (param_1 != (undefined4 *)0x0) {
    *param_1 = local_4;
  }
  return;
}


