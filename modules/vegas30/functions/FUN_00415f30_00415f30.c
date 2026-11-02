/* Module: vegas30.exe
   Function: FUN_00415f30
   Address: 00415f30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415f30(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x8c);
  iVar3 = 0;
  if (0 < *piVar1) {
    do {
      if (*(int *)(piVar1[1] * iVar3 + 0x28 + piVar1[2]) == param_2) {
        return iVar3;
      }
      piVar4 = *(int **)(piVar1[1] * iVar3 + piVar1[2] + 0x2c);
      if (((piVar4 != (int *)0x0) && (iVar2 = *piVar4, 1 < iVar2)) && (iVar5 = 0, 0 < iVar2)) {
        piVar4 = (int *)piVar4[2];
        do {
          if (*piVar4 == param_2) {
            return iVar3;
          }
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar5 < iVar2);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *piVar1);
  }
  return -1;
}


