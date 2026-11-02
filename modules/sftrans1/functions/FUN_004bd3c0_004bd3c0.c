/* Module: sftrans1.dll
   Function: FUN_004bd3c0
   Address: 004bd3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004bd3c0(int param_1)

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
  if (DAT_005758c4 < param_1) {
    return iVar5 * param_1;
  }
  iVar2 = 1;
  if (DAT_00575894 < param_1) {
    puVar4 = &DAT_00575894;
    do {
      piVar1 = puVar4 + 2;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = iVar2 + -1;
  return ((&DAT_00575888)[iVar3 * 2] +
         (int)(((longlong)(param_1 - *(int *)(s_SpinMeLo_0057587c + iVar2 * 8 + 8)) *
               (longlong)(int)((&DAT_00575890)[iVar3 * 2] - (&DAT_00575888)[iVar3 * 2])) /
              (longlong)((&DAT_0057588c)[iVar2 * 2] - *(int *)(s_SpinMeLo_0057587c + iVar2 * 8 + 8))
              )) * iVar5;
}


