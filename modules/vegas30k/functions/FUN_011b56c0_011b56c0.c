/* Module: vegas30k.dll
   Function: FUN_011b56c0
   Address: 011b56c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011b56c0(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  *(undefined4 *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x1c) = param_3;
  iVar3 = param_1;
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    iVar4 = 0;
    iVar3 = iVar1;
    if (0 < iVar1) {
      while (piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 4) * iVar4 +
                                *(int *)(*(int *)(param_1 + 0x10) + 8) + 0x18),
            iVar3 = (**(code **)(*piVar2 + 0x38))(piVar2,param_2,param_3), -1 < iVar3) {
        iVar4 = iVar4 + 1;
        if (iVar1 <= iVar4) {
          return iVar3;
        }
      }
    }
  }
  return iVar3;
}


