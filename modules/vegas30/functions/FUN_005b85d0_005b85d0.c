/* Module: vegas30.exe
   Function: FUN_005b85d0
   Address: 005b85d0
   Source: Ghidra pseudocode (Stage 10 batch) */


bool FUN_005b85d0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_005b8630(param_1);
  if (*(int *)(iVar1 + 1000) == 0) {
    iVar1 = FUN_005b3ff0(param_1);
    iVar2 = FUN_005b8680(param_1);
    iVar3 = FUN_005b86d0(param_1);
    if (iVar3 == 0) {
      return iVar2 != 0 || iVar1 == 0;
    }
  }
  return true;
}


