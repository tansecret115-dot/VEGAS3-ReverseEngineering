/* Module: mpgaout.dll
   Function: FUN_10004888
   Address: 10004888
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl FUN_10004888(int param_1,int param_2,int param_3,int *param_4,int param_5)

{
  uint uVar1;
  double *pdVar2;
  double dVar3;
  int iVar4;
  int iVar5;
  double *pdVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  uint uVar15;
  char *local_284;
  int local_268;
  int local_254;
  int local_250;
  char local_24c [64];
  double local_20c [65];
  
  iVar4 = *(int *)(param_5 + 0x10);
  iVar10 = *(int *)(param_5 + 0x14);
  iVar7 = *param_4 -
          (*(int *)(param_1 + 0xc554) + ((iVar10 * iVar4 + 0x20) - iVar10) * 4 +
          *(int *)(param_1 + 0xc550));
  *param_4 = iVar7;
  iVar12 = 0;
  do {
    if (0 < iVar4) {
      pdVar6 = local_20c + iVar12;
      puVar14 = (undefined4 *)(param_3 + iVar12 * 4);
      pcVar11 = local_24c + iVar12;
      iVar5 = iVar12 * 8;
      iVar8 = iVar4;
      do {
        pdVar2 = (double *)(param_2 + iVar5);
        iVar5 = iVar5 + 0x100;
        *pdVar6 = **(double **)(param_1 + 0xc560) - *pdVar2;
        *puVar14 = 0;
        pdVar6 = pdVar6 + 0x20;
        *pcVar11 = '\0';
        puVar14 = puVar14 + 0x20;
        pcVar11 = pcVar11 + 0x20;
        iVar8 = iVar8 + -1;
      } while (iVar8 != 0);
    }
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x20);
  local_254 = 0;
  local_250 = 0;
  do {
    uVar15 = 0xffffffff;
    iVar12 = -1;
    dVar3 = local_20c[0] + 1.0;
    local_268 = local_250 + local_254;
    uVar13 = 0;
    do {
      uVar1 = uVar13 + 1;
      iVar5 = 0;
      if (0 < iVar4) {
        pdVar6 = local_20c + uVar13;
        local_284 = local_24c + uVar13;
        do {
          if ((*local_284 != '\x02') && (*pdVar6 < dVar3)) {
            iVar12 = iVar5;
            uVar15 = uVar13;
            dVar3 = *pdVar6;
          }
          pdVar6 = pdVar6 + 0x20;
          local_284 = local_284 + 0x20;
          iVar5 = iVar5 + 1;
        } while (iVar5 < iVar4);
      }
      uVar13 = uVar1;
    } while ((int)uVar1 < 0x20);
    if ((int)uVar15 < 0) break;
    iVar5 = iVar12 * 0x20;
    if (local_24c[iVar5 + uVar15] == '\0') {
      iVar8 = 0x18;
      iVar9 = 6;
    }
    else {
      iVar8 = 0xc;
      iVar9 = 0;
    }
    if (iVar10 <= (int)uVar15) {
      iVar9 = iVar9 * iVar4;
    }
    if (iVar7 < local_250 + local_254 + iVar9 + iVar8) {
      local_24c[iVar5 + uVar15] = '\x02';
    }
    else {
      local_250 = local_250 + iVar8;
      local_254 = local_254 + iVar9;
      iVar8 = iVar12 * 0x80 + uVar15 * 4;
      iVar9 = *(int *)(param_3 + iVar8);
      *(int *)(param_3 + iVar8) = iVar9 + 1;
      iVar9 = iVar9 + 1;
      local_24c[iVar5 + uVar15] = '\x01';
      local_20c[uVar15 + iVar12 * 0x20] =
           *(double *)(*(int *)(param_1 + 0xc560) + iVar9 * 8) -
           *(double *)(param_2 + iVar12 * 0x100 + uVar15 * 8);
      if (iVar9 == 0xe) {
        local_24c[iVar5 + uVar15] = '\x02';
      }
    }
    if ((iVar4 == 2) && (iVar10 <= (int)uVar15)) {
      iVar8 = 1 - iVar12;
      iVar12 = *(int *)(param_3 + uVar15 * 4 + iVar12 * 0x80);
      *(int *)(param_3 + iVar8 * 0x80 + uVar15 * 4) = iVar12;
      local_24c[iVar8 * 0x20 + uVar15] = local_24c[iVar5 + uVar15];
      local_20c[uVar15 + iVar8 * 0x20] =
           *(double *)(*(int *)(param_1 + 0xc560) + iVar12 * 8) -
           *(double *)(param_2 + iVar8 * 0x100 + uVar15 * 8);
    }
    local_268 = local_250 + local_254;
  } while (uVar15 < 0x80000000);
  iVar12 = 0;
  iVar10 = 0;
  *param_4 = iVar7 - local_268;
  if (0 < iVar4) {
    do {
      iVar7 = iVar10 + 1;
      pdVar6 = local_20c + iVar10 * 0x20;
      iVar10 = 0x1f;
      do {
        dVar3 = *pdVar6;
        if (dVar3 < 0.0) {
          iVar12 = iVar12 + 1;
        }
        if (dVar3 < local_20c[0]) {
          local_20c[0] = dVar3;
        }
        pdVar6 = pdVar6 + 1;
        iVar10 = iVar10 + -1;
      } while (-1 < iVar10);
      iVar10 = iVar7;
    } while (iVar7 < iVar4);
  }
  return iVar12;
}


