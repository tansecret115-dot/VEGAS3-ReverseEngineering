/* Module: vegas30.exe
   Function: FUN_005c1e50
   Address: 005c1e50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c1e50(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined4 local_4;
  
  local_4 = 0;
  iVar1 = FUN_005c1560(param_1,param_3,param_5,&local_4);
  if (-1 < iVar1) {
    FUN_005c6f40(param_3,param_4,local_4,1,param_6);
  }
  return;
}


