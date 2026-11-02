/* Module: vidcap30.exe
   Function: FUN_004afc30
   Address: 004afc30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004afc30(int param_1,int param_2)

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
    if (DAT_005b7934 < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_005b78cc < param_1) {
      puVar5 = &DAT_005b78cc;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_005b78c0)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_005b78bc)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_005b78c8)[iVar3 * 2] - (&DAT_005b78c0)[iVar3 * 2])) /
                (longlong)((&DAT_005b78c4)[iVar2 * 2] - (&DAT_005b78bc)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_005b78bc < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_005b788c < param_1) {
    puVar5 = &DAT_005b788c;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x5b787c);
  iVar4 = iVar2 + -1;
  return ((&DAT_005b7880)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_005b7888)[iVar4 * 2] - (&DAT_005b7880)[iVar4 * 2])) /
              (longlong)((&DAT_005b7884)[iVar2 * 2] - iVar3))) * iVar6;
}


