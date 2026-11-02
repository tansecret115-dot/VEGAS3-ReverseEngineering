/* Module: sfxpfx1.dll
   Function: FUN_5c960f30
   Address: 5c960f30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c960f30(int param_1)

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
  if (DAT_5c997a6c < param_1) {
    return iVar5 * param_1;
  }
  iVar2 = 1;
  if (DAT_5c997a3c < param_1) {
    puVar4 = &DAT_5c997a3c;
    do {
      piVar1 = puVar4 + 2;
      puVar4 = puVar4 + 2;
      iVar2 = iVar2 + 1;
    } while (*piVar1 < param_1);
  }
  iVar3 = iVar2 + -1;
  return ((&DAT_5c997a30)[iVar3 * 2] +
         (int)(((longlong)(param_1 - (&DAT_5c997a2c)[iVar2 * 2]) *
               (longlong)(int)((&DAT_5c997a38)[iVar3 * 2] - (&DAT_5c997a30)[iVar3 * 2])) /
              (longlong)(int)((&DAT_5c997a34)[iVar2 * 2] - (&DAT_5c997a2c)[iVar2 * 2]))) * iVar5;
}


