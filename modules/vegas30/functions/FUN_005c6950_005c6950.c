/* Module: vegas30.exe
   Function: FUN_005c6950
   Address: 005c6950
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005c6950(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x50) != 0) {
    piVar1 = *(int **)(param_1 + 0x54);
    if (piVar1 == (int *)0x0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *piVar1;
    }
    iVar2 = 0;
    if (0 < iVar4) {
      do {
        if (piVar1 == (int *)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *piVar1;
        }
        if ((iVar2 < 0) || (iVar3 + -1 < iVar2)) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)(piVar1[2] + iVar2 * 4);
        }
      } while ((iVar3 != *(int *)(param_1 + 0x50)) && (iVar2 = iVar2 + 1, iVar2 < iVar4));
    }
  }
  return;
}


