/* Module: vidcap30.exe
   Function: FUN_004445b0
   Address: 004445b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004445b0(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  if ((param_1 != 0) && (piVar1 = *(int **)(param_1 + 0x10), piVar1 != (int *)0x0)) {
    iVar4 = 0;
    if (0 < *piVar1) {
      piVar3 = (int *)piVar1[2];
      do {
        iVar2 = *piVar3;
        if ((*(int *)(iVar2 + 8) == param_2) && (*(int *)(iVar2 + 0xc) == param_3)) {
          return iVar2;
        }
        iVar4 = iVar4 + 1;
        piVar3 = piVar3 + 1;
      } while (iVar4 < *piVar1);
    }
  }
  return 0;
}


