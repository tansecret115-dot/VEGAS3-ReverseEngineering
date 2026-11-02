/* Module: aviplug.dll
   Function: FUN_5f971d20
   Address: 5f971d20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f971d20(int *param_1,double *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  double *pdVar9;
  uint *puVar10;
  int local_c;
  
  pdVar9 = param_2;
  for (iVar5 = 0x300; iVar5 != 0; iVar5 = iVar5 + -1) {
    *(undefined4 *)pdVar9 = 0;
    pdVar9 = (double *)((int)pdVar9 + 4);
  }
  local_c = 6;
  iVar5 = param_1[1];
  param_1 = param_1 + 2;
  pdVar9 = param_2;
  do {
    iVar8 = 1;
    puVar1 = (uint *)*param_1;
    uVar2 = *puVar1;
    iVar6 = (int)uVar2 >> 2;
    puVar10 = puVar1 + 2;
    uVar7 = puVar1[1];
    if ((uVar7 & 0x100) != 0) {
      uVar7 = uVar7 | 0xfffffe00;
    }
    uVar3 = *puVar10;
    param_2 = (double *)0x1;
    *pdVar9 = (double)(int)uVar7 * (double)(&DAT_5f9f4ac0)[iVar6 * 0x81];
    for (; (uVar3 != 0x1556 && ((int)param_2 < 0x40)); param_2 = (double *)((int)param_2 + 1)) {
      puVar1 = puVar10 + 1;
      puVar10 = puVar10 + 2;
      iVar4 = *(int *)(*(int *)(&DAT_5f9f4ab8 + iVar6 * 0x408) + (iVar8 + uVar3) * 4);
      iVar8 = iVar8 + uVar3 + 1;
      uVar3 = *puVar10;
      pdVar9[iVar4] =
           (double)(int)(*puVar1 <<
                        ((byte)*(undefined4 *)
                                (&DAT_5f9daa78 +
                                *(int *)(*(int *)(&DAT_5f9f4abc + iVar6 * 0x408) + iVar4 * 4) * 4 +
                                ((uVar2 & 3) + iVar5 * 4) * 0x10) & 0x1f)) *
           (double)(&DAT_5f9f4ac0)[iVar6 * 0x81 + iVar4];
    }
    param_1 = param_1 + 1;
    pdVar9 = pdVar9 + 0x40;
    local_c = local_c + -1;
  } while (local_c != 0);
  return;
}


