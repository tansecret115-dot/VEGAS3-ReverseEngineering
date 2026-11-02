/* Module: rmto3260.dll
   Function: FUN_662de020
   Address: 662de020
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_662de020(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      if (iVar2 < 0) {
        return;
      }
      piVar1 = *(int **)(*(int *)(param_1 + 0x14) + iVar3 * 4);
      iVar2 = (**(code **)(*piVar1 + 0x10))(piVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  return;
}


