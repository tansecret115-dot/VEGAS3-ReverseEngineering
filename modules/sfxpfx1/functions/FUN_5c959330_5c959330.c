/* Module: sfxpfx1.dll
   Function: FUN_5c959330
   Address: 5c959330
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c959330(int param_1,int param_2)

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
    if (DAT_5c997a2c < param_1) {
      return iVar6 * param_1;
    }
    iVar2 = 1;
    if (DAT_5c9979c4 < param_1) {
      puVar5 = &DAT_5c9979c4;
      do {
        piVar1 = puVar5 + 2;
        puVar5 = puVar5 + 2;
        iVar2 = iVar2 + 1;
      } while (*piVar1 < param_1);
    }
    iVar3 = iVar2 + -1;
    return ((&DAT_5c9979b8)[iVar3 * 2] +
           (int)(((longlong)(param_1 - (&DAT_5c9979b4)[iVar2 * 2]) *
                 (longlong)(int)((&DAT_5c9979c0)[iVar3 * 2] - (&DAT_5c9979b8)[iVar3 * 2])) /
                (longlong)((&DAT_5c9979bc)[iVar2 * 2] - (&DAT_5c9979b4)[iVar2 * 2]))) * iVar6;
  }
  if (DAT_5c9979b4 < param_1) {
    return iVar6 * param_1;
  }
  iVar2 = 1;
  if (DAT_5c997984 < param_1) {
    puVar5 = &DAT_5c997984;
    do {
      piVar1 = puVar5 + 2;
      puVar5 = puVar5 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = *(int *)(iVar2 * 8 + 0x5c997974);
  iVar4 = iVar2 + -1;
  return ((&DAT_5c997978)[iVar4 * 2] +
         (int)(((longlong)(param_1 - iVar3) *
               (longlong)(int)((&DAT_5c997980)[iVar4 * 2] - (&DAT_5c997978)[iVar4 * 2])) /
              (longlong)((&DAT_5c99797c)[iVar2 * 2] - iVar3))) * iVar6;
}


