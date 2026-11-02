/* Module: vegas30.exe
   Function: FUN_005b3ea0
   Address: 005b3ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005b3ea0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_005b8630(param_1);
  if (param_2 == 0) {
    *(undefined4 *)(iVar1 + 1000) = 0;
    FUN_005b3fd0(param_1);
    FUN_005b5060();
    FUN_005b5070();
    return;
  }
  *(int *)(iVar1 + 1000) = *(int *)(iVar1 + 1000) + param_2;
  FUN_005b5070();
  return;
}


