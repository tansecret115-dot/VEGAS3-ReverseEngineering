/* Module: vidpcore.dll
   Function: FUN_5deac260
   Address: 5deac260
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5deac260(int param_1)

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
  if (DAT_5df3e104 < param_1) {
    return iVar5 * param_1;
  }
  iVar2 = 1;
  if (DAT_5df3e0d4 < param_1) {
    puVar4 = &DAT_5df3e0d4;
    do {
      piVar1 = puVar4 + 2;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = iVar2 + -1;
  return ((&DAT_5df3e0c8)[iVar3 * 2] +
         (int)(((longlong)(param_1 - *(int *)(s_SpinMeLo_5df3e0bc + iVar2 * 8 + 8)) *
               (longlong)(int)((&DAT_5df3e0d0)[iVar3 * 2] - (&DAT_5df3e0c8)[iVar3 * 2])) /
              (longlong)((&DAT_5df3e0cc)[iVar2 * 2] - *(int *)(s_SpinMeLo_5df3e0bc + iVar2 * 8 + 8))
              )) * iVar5;
}


