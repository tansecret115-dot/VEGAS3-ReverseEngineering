/* Module: mpgaout.dll
   Function: FUN_10004bb8
   Address: 10004bb8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __cdecl
FUN_10004bb8(int param_1,int param_2,int param_3,int param_4,int *param_5,int param_6)

{
  double *pdVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  double *pdVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  char *pcVar17;
  int iVar18;
  int iVar19;
  char *local_2a8;
  int local_294;
  int local_264;
  int local_260;
  int local_25c;
  int local_258;
  uint local_254;
  int local_250;
  char local_24c [64];
  double local_20c [65];
  
  iVar8 = 0;
  iVar2 = *(int *)(param_6 + 0x10);
  iVar3 = *(int *)(param_6 + 0x18);
  iVar16 = *(int *)(param_6 + 0x14);
  iVar13 = 0;
  iVar4 = *(int *)(param_6 + 8);
  if (0 < iVar16) {
    do {
      iVar10 = iVar13 * 0x100;
      iVar13 = iVar13 + 1;
      iVar8 = iVar8 + iVar2 * *(int *)(iVar4 + 4 + iVar10);
    } while (iVar13 < iVar16);
  }
  for (iVar13 = iVar16; iVar13 < iVar3; iVar13 = iVar13 + 1) {
    iVar8 = iVar8 + *(int *)(iVar4 + 4 + iVar13 * 0x100);
  }
  iVar13 = 0;
  iVar8 = *param_5 - (*(int *)(param_1 + 0xc554) + iVar8 + *(int *)(param_1 + 0xc550));
  *param_5 = iVar8;
  if (0 < iVar3) {
    do {
      iVar10 = iVar13 + 1;
      if (0 < iVar2) {
        iVar11 = iVar13 * 8;
        puVar7 = (undefined4 *)(param_4 + iVar13 * 4);
        pcVar17 = local_24c + iVar13;
        pdVar12 = local_20c + iVar13;
        iVar13 = iVar2;
        do {
          pdVar1 = (double *)(param_2 + iVar11);
          iVar11 = iVar11 + 0x100;
          *pdVar12 = **(double **)(param_1 + 0xc560) - *pdVar1;
          *puVar7 = 0;
          pdVar12 = pdVar12 + 0x20;
          *pcVar17 = '\0';
          puVar7 = puVar7 + 0x20;
          pcVar17 = pcVar17 + 0x20;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      iVar13 = iVar10;
    } while (iVar10 < iVar3);
  }
  local_264 = 0;
  local_260 = 0;
  local_25c = 0;
  do {
    local_254 = 0xffffffff;
    iVar13 = 0;
    local_294 = local_25c + local_260;
    local_250 = -1;
    dVar5 = _DAT_10004bb0;
    if (0 < iVar2) {
      do {
        uVar14 = 0;
        iVar10 = iVar13 + 1;
        if (0 < iVar3) {
          pdVar12 = local_20c + iVar13 * 0x20;
          local_2a8 = local_24c + iVar13 * 0x20;
          do {
            if ((*local_2a8 != '\x02') && (*pdVar12 < dVar5)) {
              local_254 = uVar14;
              local_250 = iVar13;
              dVar5 = *pdVar12;
            }
            pdVar12 = pdVar12 + 1;
            local_2a8 = local_2a8 + 1;
            uVar14 = uVar14 + 1;
          } while ((int)uVar14 < iVar3);
        }
        iVar13 = iVar10;
      } while (iVar10 < iVar2);
    }
    if ((int)local_254 < 0) break;
    iVar19 = local_254 * 4;
    iVar18 = local_250 * 0x80;
    iVar11 = local_254 * 0x100;
    iVar13 = iVar11 + *(int *)(param_4 + iVar18 + iVar19) * 0x10;
    iVar10 = local_250 * 0x20;
    local_258 = *(int *)(iVar13 + 0x18 + iVar4) * *(int *)(iVar13 + 0x14 + iVar4) * 0xc;
    if (local_24c[local_254 + iVar10] != '\0') {
      local_258 = local_258 + *(int *)(iVar4 + 8 + iVar13) * *(int *)(iVar4 + 4 + iVar13) * -0xc;
    }
    iVar13 = 1 - local_250;
    if (local_24c[local_254 + iVar10] == '\0') {
      iVar15 = 2;
      iVar9 = *(int *)(&DAT_1001df00 + *(int *)(param_3 + iVar18 + iVar19) * 4) * 6;
      if ((iVar2 == 2) && (iVar16 <= (int)local_254)) {
        iVar15 = 4;
        iVar9 = iVar9 + *(int *)(&DAT_1001df00 + *(int *)(param_3 + iVar13 * 0x80 + iVar19) * 4) * 6
        ;
      }
    }
    else {
      iVar15 = 0;
      iVar9 = 0;
    }
    if (iVar8 < local_25c + local_260 + local_264 + iVar15 + iVar9 + local_258) {
      local_24c[local_254 + iVar10] = '\x02';
    }
    else {
      iVar6 = *(int *)(param_4 + iVar18 + iVar19);
      *(int *)(param_4 + iVar18 + iVar19) = iVar6 + 1;
      local_264 = local_264 + iVar15;
      iVar6 = iVar6 + 1;
      local_260 = local_260 + iVar9;
      local_25c = local_25c + local_258;
      local_24c[local_254 + iVar10] = '\x01';
      local_20c[local_254 + local_250 * 0x20] =
           *(double *)
            (*(int *)(param_1 + 0xc560) + 8 + *(int *)(iVar4 + 0xc + iVar6 * 0x10 + iVar11) * 8) -
           *(double *)(param_2 + local_250 * 0x100 + local_254 * 8);
      if ((1 << ((byte)*(undefined4 *)(iVar4 + 4 + iVar11) & 0x1f)) + -1 <= iVar6) {
        local_24c[local_254 + iVar10] = '\x02';
      }
    }
    if ((iVar16 <= (int)local_254) && (iVar2 == 2)) {
      iVar18 = *(int *)(param_4 + iVar18 + iVar19);
      *(int *)(param_4 + iVar13 * 0x80 + iVar19) = iVar18;
      local_24c[local_254 + iVar13 * 0x20] = local_24c[local_254 + iVar10];
      local_20c[local_254 + iVar13 * 0x20] =
           *(double *)
            (*(int *)(param_1 + 0xc560) + 8 + *(int *)(iVar4 + 0xc + iVar18 * 0x10 + iVar11) * 8) -
           *(double *)(param_2 + iVar13 * 0x100 + local_254 * 8);
    }
    local_294 = local_25c + local_260;
  } while (local_254 < 0x80000000);
  *param_5 = iVar8 - (local_294 + local_264);
  if (0 < iVar2) {
    iVar16 = 0;
    do {
      iVar4 = iVar16 + 1;
      if (iVar3 < 0x20) {
        puVar7 = (undefined4 *)(param_4 + iVar16 * 0x80 + iVar3 * 4);
        iVar16 = iVar3;
        do {
          *puVar7 = 0;
          iVar16 = iVar16 + 1;
          puVar7 = puVar7 + 1;
        } while (iVar16 < 0x20);
      }
      iVar16 = iVar4;
    } while (iVar4 < iVar2);
  }
  return 0;
}


