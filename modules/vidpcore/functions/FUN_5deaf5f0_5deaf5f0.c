/* Module: vidpcore.dll
   Function: FUN_5deaf5f0
   Address: 5deaf5f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5deaf5f0(int param_1,int param_2)

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
    if (DAT_5df3e24c < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_5df3e1e4 < param_1) {
      puVar5 = &DAT_5df3e1e4;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_5df3e1d8)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_5df3e1d4)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_5df3e1e0)[iVar3 * 2] - (&DAT_5df3e1d8)[iVar3 * 2])) /
                (longlong)((&DAT_5df3e1dc)[iVar2 * 2] - (&DAT_5df3e1d4)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_5df3e1d4 < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_5df3e1a4 < param_1) {
    puVar5 = &DAT_5df3e1a4;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x5df3e194);
  iVar4 = iVar2 + -1;
  return ((&DAT_5df3e198)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_5df3e1a0)[iVar4 * 2] - (&DAT_5df3e198)[iVar4 * 2])) /
              (longlong)((&DAT_5df3e19c)[iVar2 * 2] - iVar3))) * iVar6;
}


