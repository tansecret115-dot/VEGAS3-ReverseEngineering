/* Module: sfppack3.dll
   Function: FUN_5cc55370
   Address: 5cc55370
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cc55370(int param_1,int param_2)

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
    if (DAT_5cc9759c < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_5cc97534 < param_1) {
      puVar5 = &DAT_5cc97534;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_5cc97528)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_5cc97524)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_5cc97530)[iVar3 * 2] - (&DAT_5cc97528)[iVar3 * 2])) /
                (longlong)((&DAT_5cc9752c)[iVar2 * 2] - (&DAT_5cc97524)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_5cc97524 < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_5cc974f4 < param_1) {
    puVar5 = &DAT_5cc974f4;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x5cc974e4);
  iVar4 = iVar2 + -1;
  return ((&DAT_5cc974e8)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_5cc974f0)[iVar4 * 2] - (&DAT_5cc974e8)[iVar4 * 2])) /
              (longlong)((&DAT_5cc974ec)[iVar2 * 2] - iVar3))) * iVar6;
}


