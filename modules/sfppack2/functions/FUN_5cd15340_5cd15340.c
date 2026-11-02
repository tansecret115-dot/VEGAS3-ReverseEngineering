/* Module: sfppack2.dll
   Function: FUN_5cd15340
   Address: 5cd15340
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd15340(int param_1,int param_2)

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
    if (DAT_5cd63054 < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_5cd62fec < param_1) {
      puVar5 = &DAT_5cd62fec;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_5cd62fe0)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_5cd62fdc)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_5cd62fe8)[iVar3 * 2] - (&DAT_5cd62fe0)[iVar3 * 2])) /
                (longlong)((&DAT_5cd62fe4)[iVar2 * 2] - (&DAT_5cd62fdc)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_5cd62fdc < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_5cd62fac < param_1) {
    puVar5 = &DAT_5cd62fac;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x5cd62f9c);
  iVar4 = iVar2 + -1;
  return ((&DAT_5cd62fa0)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_5cd62fa8)[iVar4 * 2] - (&DAT_5cd62fa0)[iVar4 * 2])) /
              (longlong)((&DAT_5cd62fa4)[iVar2 * 2] - iVar3))) * iVar6;
}


