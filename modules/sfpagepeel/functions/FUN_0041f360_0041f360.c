/* Module: sfpagepeel.dll
   Function: FUN_0041f360
   Address: 0041f360
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041f360(int param_1,int param_2)

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
    if (DAT_0047cc08 < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_0047cba0 < param_1) {
      puVar5 = &DAT_0047cba0;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_0047cb9c)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_0047cb90)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_0047cba4)[iVar3 * 2] - (&DAT_0047cb9c)[iVar3 * 2])) /
                (longlong)((&DAT_0047cb98)[iVar2 * 2] - (&DAT_0047cb90)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_0047cb90 < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_0047cb60 < param_1) {
    puVar5 = &DAT_0047cb60;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x47cb50);
  iVar4 = iVar2 + -1;
  return ((&DAT_0047cb5c)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_0047cb64)[iVar4 * 2] - (&DAT_0047cb5c)[iVar4 * 2])) /
              (longlong)((&DAT_0047cb58)[iVar2 * 2] - iVar3))) * iVar6;
}


