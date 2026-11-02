/* Module: extmondrv.dll
   Function: FUN_0040bd60
   Address: 0040bd60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0040bd60(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  
  iVar6 = 1;
  if (param_1 < 0) {
    param_1 = -param_1;
    iVar6 = -1;
  }
  if (param_2 != 0) {
    if (DAT_0045a1e0 < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_0045a178 < param_1) {
      puVar5 = &DAT_0045a178;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_0045a174)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_0045a168)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_0045a17c)[iVar3 * 2] - (&DAT_0045a174)[iVar3 * 2])) /
                (longlong)((&DAT_0045a170)[iVar2 * 2] - (&DAT_0045a168)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_0045a168 < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_0045a138 < param_1) {
    puVar5 = &DAT_0045a138;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x45a128);
  iVar4 = iVar2 + -1;
  return ((&DAT_0045a134)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_0045a13c)[iVar4 * 2] - (&DAT_0045a134)[iVar4 * 2])) /
              (longlong)((&DAT_0045a130)[iVar2 * 2] - iVar3))) * iVar6;
}


