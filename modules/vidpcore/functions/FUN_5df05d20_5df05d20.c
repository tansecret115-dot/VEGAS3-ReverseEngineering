/* Module: vidpcore.dll
   Function: FUN_5df05d20
   Address: 5df05d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5df05d20(int param_1,undefined4 param_2,int param_3)

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
      iVar1 = FUN_5df05ad0(param_1,iVar2,param_2);
    } while (iVar1 == 0);
  }
  else {
    iVar1 = FUN_5df05ad0(param_1,*(undefined4 *)(param_1 + 0x2fc),param_2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar2 = iVar2 + -1;
    if (iVar2 < 0) {
      return 0;
    }
    while (iVar1 = FUN_5df05ad0(param_1,iVar2,param_2), iVar1 == 0) {
      iVar2 = iVar2 + -1;
      if (iVar2 < 0) {
        return 0;
      }
    }
    *(int *)(param_1 + 0x2fc) = iVar2;
  }
  return 1;
}


