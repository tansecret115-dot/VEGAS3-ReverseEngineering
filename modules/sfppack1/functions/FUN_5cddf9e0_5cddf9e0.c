/* Module: sfppack1.dll
   Function: FUN_5cddf9e0
   Address: 5cddf9e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cddf9e0(int param_1,int param_2)

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
    if (DAT_5ce22abc < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_5ce22a54 < param_1) {
      puVar5 = &DAT_5ce22a54;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_5ce22a48)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_5ce22a44)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_5ce22a50)[iVar3 * 2] - (&DAT_5ce22a48)[iVar3 * 2])) /
                (longlong)((&DAT_5ce22a4c)[iVar2 * 2] - (&DAT_5ce22a44)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_5ce22a44 < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_5ce22a14 < param_1) {
    puVar5 = &DAT_5ce22a14;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x5ce22a04);
  iVar4 = iVar2 + -1;
  return ((&DAT_5ce22a08)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_5ce22a10)[iVar4 * 2] - (&DAT_5ce22a08)[iVar4 * 2])) /
              (longlong)((&DAT_5ce22a0c)[iVar2 * 2] - iVar3))) * iVar6;
}


