/* Module: qt4plug.dll
   Function: FUN_5f537ca0
   Address: 5f537ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f537ca0(int param_1,int param_2)

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
    if (DAT_5f5a3680 < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_5f5a3618 < param_1) {
      puVar5 = &DAT_5f5a3618;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_5f5a3614)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_5f5a3608)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_5f5a361c)[iVar3 * 2] - (&DAT_5f5a3614)[iVar3 * 2])) /
                (longlong)((&DAT_5f5a3610)[iVar2 * 2] - (&DAT_5f5a3608)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_5f5a3608 < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_5f5a35d8 < param_1) {
    puVar5 = &DAT_5f5a35d8;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x5f5a35c8);
  iVar4 = iVar2 + -1;
  return ((&DAT_5f5a35d4)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_5f5a35dc)[iVar4 * 2] - (&DAT_5f5a35d4)[iVar4 * 2])) /
              (longlong)((&DAT_5f5a35d0)[iVar2 * 2] - iVar3))) * iVar6;
}


