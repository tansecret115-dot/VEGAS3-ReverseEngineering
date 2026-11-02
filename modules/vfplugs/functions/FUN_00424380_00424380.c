/* Module: vfplugs.dll
   Function: FUN_00424380
   Address: 00424380
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00424380(int param_1,int param_2)

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
    if (DAT_00493c50 < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_00493be8 < param_1) {
      puVar5 = &DAT_00493be8;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_00493be4)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_00493bd8)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_00493bec)[iVar3 * 2] - (&DAT_00493be4)[iVar3 * 2])) /
                (longlong)((&DAT_00493be0)[iVar2 * 2] - (&DAT_00493bd8)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_00493bd8 < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_00493ba8 < param_1) {
    puVar5 = &DAT_00493ba8;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x493b98);
  iVar4 = iVar2 + -1;
  return ((&DAT_00493ba4)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_00493bac)[iVar4 * 2] - (&DAT_00493ba4)[iVar4 * 2])) /
              (longlong)((&DAT_00493ba0)[iVar2 * 2] - iVar3))) * iVar6;
}


