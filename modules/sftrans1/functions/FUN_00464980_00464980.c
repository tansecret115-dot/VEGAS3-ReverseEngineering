/* Module: sftrans1.dll
   Function: FUN_00464980
   Address: 00464980
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00464980(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 4);
  if (iVar1 == 0) {
    FUN_00464740(param_1,param_2,param_3,param_4);
  }
  else {
    if (iVar1 == 1) {
      FUN_00463c50(param_1,param_2,param_3,param_4);
      return;
    }
    if (iVar1 == 2) {
      FUN_004641c0(param_1,param_2,param_3,param_4);
      return;
    }
  }
  return;
}


