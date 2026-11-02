/* Module: vidcap30.exe
   Function: FUN_0051c9e0
   Address: 0051c9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0051c9e0(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  
  iVar5 = 1;
  if (param_1 < 0) {
    param_1 = -param_1;
    iVar5 = -1;
  }
  if (DAT_005b8238 < param_1) {
    return iVar5 * param_1;
  }
  iVar2 = 1;
  if (DAT_005b8208 < param_1) {
    puVar4 = &DAT_005b8208;
    do {
      piVar1 = puVar4 + 2;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = iVar2 + -1;
  return ((&DAT_005b8204)[iVar3 * 2] +
         (int)(((longlong)(param_1 - (&DAT_005b81f8)[iVar2 * 2]) *
               (longlong)(int)((&DAT_005b820c)[iVar3 * 2] - (&DAT_005b8204)[iVar3 * 2])) /
              (longlong)(int)((&DAT_005b8200)[iVar2 * 2] - (&DAT_005b81f8)[iVar2 * 2]))) * iVar5;
}


