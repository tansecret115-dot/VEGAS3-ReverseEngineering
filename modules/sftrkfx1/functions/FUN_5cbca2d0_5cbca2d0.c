/* Module: sftrkfx1.dll
   Function: FUN_5cbca2d0
   Address: 5cbca2d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbca2d0(int param_1,int param_2)

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
    if (DAT_5cc10c3c < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_5cc10bd4 < param_1) {
      puVar5 = &DAT_5cc10bd4;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_5cc10bc8)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_5cc10bc4)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_5cc10bd0)[iVar3 * 2] - (&DAT_5cc10bc8)[iVar3 * 2])) /
                (longlong)((&DAT_5cc10bcc)[iVar2 * 2] - (&DAT_5cc10bc4)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_5cc10bc4 < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_5cc10b94 < param_1) {
    puVar5 = &DAT_5cc10b94;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x5cc10b84);
  iVar4 = iVar2 + -1;
  return ((&DAT_5cc10b88)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_5cc10b90)[iVar4 * 2] - (&DAT_5cc10b88)[iVar4 * 2])) /
              (longlong)((&DAT_5cc10b8c)[iVar2 * 2] - iVar3))) * iVar6;
}


