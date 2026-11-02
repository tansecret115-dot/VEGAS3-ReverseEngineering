/* Module: vegas30k.dll
   Function: FUN_011b5460
   Address: 011b5460
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011b5460(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 1;
  if (*(int **)(param_1 + 0x10) != (int *)0x0) {
    iVar1 = **(int **)(param_1 + 0x10);
    iVar4 = 0;
    if (0 < iVar1) {
      do {
        piVar2 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 4) * iVar4 +
                           *(int *)(*(int *)(param_1 + 0x10) + 8) + 0x18);
        iVar3 = (**(code **)(*piVar2 + 0xc))(piVar2);
        if (iVar3 < 0) {
          return iVar3;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar1);
    }
  }
  return iVar3;
}


