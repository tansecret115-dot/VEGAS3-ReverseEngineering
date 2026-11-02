/* Module: vidcap30.exe
   Function: FUN_00404b50
   Address: 00404b50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00404b50(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  if (DAT_005ba4c0 != 0) {
    iVar2 = 0;
    iVar1 = **(int **)(DAT_005ba4c0 + 0xa4);
    if (0 < iVar1) {
      piVar3 = (int *)(*(int **)(DAT_005ba4c0 + 0xa4))[2];
      do {
        if (*(int *)(*piVar3 + 0x14) == param_1) {
          return *piVar3;
        }
        iVar2 = iVar2 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar2 < iVar1);
    }
  }
  return 0;
}


