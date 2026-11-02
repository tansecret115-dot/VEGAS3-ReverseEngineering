/* Module: vegas30k.dll
   Function: FUN_011b72b0
   Address: 011b72b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_011b72b0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 8) + iVar3 * 4);
        if (piVar2 != (int *)0x0) {
          (**(code **)(*piVar2 + 0x58))(piVar2,param_2);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar1);
      return 0;
    }
  }
  return 0;
}


