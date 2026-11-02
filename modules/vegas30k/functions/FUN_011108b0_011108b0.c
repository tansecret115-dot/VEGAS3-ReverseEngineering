/* Module: vegas30k.dll
   Function: FUN_011108b0
   Address: 011108b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_011108b0(int param_1)

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
  if (DAT_01206b28 < param_1) {
    return iVar5 * param_1;
  }
  iVar2 = 1;
  if (DAT_01206af8 < param_1) {
    puVar4 = &DAT_01206af8;
    do {
      piVar1 = puVar4 + 2;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = iVar2 + -1;
  return ((&DAT_01206af4)[iVar3 * 2] +
         (int)(((longlong)(param_1 - *(int *)(s_SpinMeLo_01206ae4 + iVar2 * 8 + 4)) *
               (longlong)(int)((&DAT_01206afc)[iVar3 * 2] - (&DAT_01206af4)[iVar3 * 2])) /
              (longlong)((&DAT_01206af0)[iVar2 * 2] - *(int *)(s_SpinMeLo_01206ae4 + iVar2 * 8 + 4))
              )) * iVar5;
}


