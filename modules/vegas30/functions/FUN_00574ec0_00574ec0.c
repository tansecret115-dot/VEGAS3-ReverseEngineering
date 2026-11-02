/* Module: vegas30.exe
   Function: FUN_00574ec0
   Address: 00574ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00574ec0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar2 = 0;
  iVar3 = iVar2;
  if ((((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0x74) != 0)) &&
      (iVar4 = *(int *)(*(int *)(DAT_0064762c + 0x74) + 0x80), iVar4 != 0)) &&
     (piVar1 = *(int **)(iVar4 + 0x2b0), piVar1 != (int *)0x0)) {
    iVar4 = 0;
    if (0 < *piVar1) {
      piVar5 = (int *)piVar1[2];
      while (iVar3 = *piVar5, param_1 != *(int *)(iVar3 + 0x14)) {
        iVar4 = iVar4 + 1;
        piVar5 = piVar5 + 1;
        if (*piVar1 <= iVar4) {
          return iVar2;
        }
      }
    }
  }
  return iVar3;
}


