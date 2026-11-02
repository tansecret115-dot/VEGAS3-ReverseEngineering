/* Module: sftrkfx1.dll
   Function: FUN_5cbd0b80
   Address: 5cbd0b80
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbd0b80(int param_1)

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
  if (DAT_5cc10c78 < param_1) {
    return iVar5 * param_1;
  }
  iVar2 = 1;
  if (DAT_5cc10c48 < param_1) {
    puVar4 = &DAT_5cc10c48;
    do {
      piVar1 = puVar4 + 2;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = iVar2 + -1;
  return ((&DAT_5cc10c44)[iVar3 * 2] +
         (int)(((longlong)(param_1 - (&DAT_5cc10c38)[iVar2 * 2]) *
               (longlong)(int)((&DAT_5cc10c4c)[iVar3 * 2] - (&DAT_5cc10c44)[iVar3 * 2])) /
              (longlong)(int)((&DAT_5cc10c40)[iVar2 * 2] - (&DAT_5cc10c38)[iVar2 * 2]))) * iVar5;
}


