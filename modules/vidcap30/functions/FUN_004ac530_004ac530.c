/* Module: vidcap30.exe
   Function: FUN_004ac530
   Address: 004ac530
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004ac530(int param_1)

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
  if (DAT_005b77ec < param_1) {
    return iVar5 * param_1;
  }
  iVar2 = 1;
  if (DAT_005b77bc < param_1) {
    puVar4 = &DAT_005b77bc;
    do {
      piVar1 = puVar4 + 2;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = iVar2 + -1;
  return ((&DAT_005b77b0)[iVar3 * 2] +
         (int)(((longlong)(param_1 - *(int *)(s_SpinMeLo_005b77a4 + iVar2 * 8 + 8)) *
               (longlong)(int)((&DAT_005b77b8)[iVar3 * 2] - (&DAT_005b77b0)[iVar3 * 2])) /
              (longlong)((&DAT_005b77b4)[iVar2 * 2] - *(int *)(s_SpinMeLo_005b77a4 + iVar2 * 8 + 8))
              )) * iVar5;
}


