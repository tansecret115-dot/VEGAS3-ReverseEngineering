/* Module: sfpagepeel.dll
   Function: FUN_0041c030
   Address: 0041c030
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0041c030(int param_1)

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
  if (DAT_0047cac0 < param_1) {
    return iVar5 * param_1;
  }
  iVar2 = 1;
  if (DAT_0047ca90 < param_1) {
    puVar4 = &DAT_0047ca90;
    do {
      piVar1 = puVar4 + 2;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = iVar2 + -1;
  return ((&DAT_0047ca8c)[iVar3 * 2] +
         (int)(((longlong)(param_1 - *(int *)(s_SpinMeLo_0047ca7c + iVar2 * 8 + 4)) *
               (longlong)(int)((&DAT_0047ca94)[iVar3 * 2] - (&DAT_0047ca8c)[iVar3 * 2])) /
              (longlong)((&DAT_0047ca88)[iVar2 * 2] - *(int *)(s_SpinMeLo_0047ca7c + iVar2 * 8 + 4))
              )) * iVar5;
}


