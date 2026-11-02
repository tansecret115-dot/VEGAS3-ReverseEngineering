/* Module: vegas30.exe
   Function: FUN_00415fa0
   Address: 00415fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415fa0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar1 = *(int **)(param_1 + 0x8c);
  iVar2 = 0;
  if (0 < *piVar1) {
    do {
      iVar3 = piVar1[1] * iVar2 + piVar1[2];
      if (*(int *)(*(int *)(iVar3 + 0x28) + 0x14) == param_2) {
        return iVar2;
      }
      piVar4 = *(int **)(iVar3 + 0x2c);
      if (((piVar4 != (int *)0x0) && (iVar3 = *piVar4, 1 < iVar3)) && (iVar5 = 0, 0 < iVar3)) {
        piVar4 = (int *)piVar4[2];
        do {
          if (*(int *)(*piVar4 + 0x14) == param_2) {
            return iVar2;
          }
          iVar5 = iVar5 + 1;
          piVar4 = piVar4 + 1;
        } while (iVar5 < iVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *piVar1);
  }
  return -1;
}


