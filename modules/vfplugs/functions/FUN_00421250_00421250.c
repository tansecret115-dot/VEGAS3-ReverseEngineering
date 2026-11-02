/* Module: vfplugs.dll
   Function: FUN_00421250
   Address: 00421250
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00421250(int param_1)

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
  if (DAT_00493b0c < param_1) {
    return iVar5 * param_1;
  }
  iVar2 = 1;
  if (DAT_00493adc < param_1) {
    puVar4 = &DAT_00493adc;
    do {
      piVar1 = puVar4 + 2;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = iVar2 + -1;
  return ((&DAT_00493ad0)[iVar3 * 2] +
         (int)(((longlong)(param_1 - *(int *)(s_SpinMeLo_00493ac4 + iVar2 * 8 + 8)) *
               (longlong)(int)((&DAT_00493ad8)[iVar3 * 2] - (&DAT_00493ad0)[iVar3 * 2])) /
              (longlong)((&DAT_00493ad4)[iVar2 * 2] - *(int *)(s_SpinMeLo_00493ac4 + iVar2 * 8 + 8))
              )) * iVar5;
}


