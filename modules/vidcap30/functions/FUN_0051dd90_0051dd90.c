/* Module: vidcap30.exe
   Function: FUN_0051dd90
   Address: 0051dd90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0051dd90(int param_1)

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
  if (DAT_005b823c < param_1) {
    return iVar6 * param_1;
  }
  iVar3 = 1;
  if (DAT_005b820c < param_1) {
    puVar5 = &DAT_005b820c;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar3 = iVar3 + 1;
    } while (*piVar1 < param_1);
  }
  iVar2 = *(int *)(iVar3 * 8 + 0x5b81fc);
  iVar4 = iVar3 + -1;
  return ((&DAT_005b8200)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar2) *
               (longlong)(int)((&DAT_005b8208)[iVar4 * 2] - (&DAT_005b8200)[iVar4 * 2])) /
              (longlong)((&DAT_005b8204)[iVar3 * 2] - iVar2))) * iVar6;
}


