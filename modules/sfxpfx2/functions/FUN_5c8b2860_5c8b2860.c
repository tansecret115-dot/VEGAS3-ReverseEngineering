/* Module: sfxpfx2.dll
   Function: FUN_5c8b2860
   Address: 5c8b2860
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8b2860(int param_1)

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
  if (DAT_5c8e86a4 < param_1) {
    return iVar5 * param_1;
  }
  iVar2 = 1;
  if (DAT_5c8e8674 < param_1) {
    puVar4 = &DAT_5c8e8674;
    do {
      piVar1 = puVar4 + 2;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = iVar2 + -1;
  return ((&DAT_5c8e8668)[iVar3 * 2] +
         (int)(((longlong)(param_1 - (&DAT_5c8e8664)[iVar2 * 2]) *
               (longlong)(int)((&DAT_5c8e8670)[iVar3 * 2] - (&DAT_5c8e8668)[iVar3 * 2])) /
              (longlong)(int)((&DAT_5c8e866c)[iVar2 * 2] - (&DAT_5c8e8664)[iVar2 * 2]))) * iVar5;
}


