/* Module: vfplugs.dll
   Function: FUN_00472ea0
   Address: 00472ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00472ea0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = **(int **)(param_1 + 0x308);
  if (param_3 == 0) {
    do {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return 0;
      }
      iVar1 = FUN_00472c50(param_1,iVar2,param_2);
    } while (iVar1 == 0);
  }
  else {
    iVar1 = FUN_00472c50(param_1,*(int *)(param_1 + 0x2fc),param_2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return 0;
    }
    while (iVar1 = FUN_00472c50(param_1,iVar2,param_2), iVar1 == 0) {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return 0;
      }
    }
    *(int *)(param_1 + 0x2fc) = iVar2;
  }
  return 1;
}


