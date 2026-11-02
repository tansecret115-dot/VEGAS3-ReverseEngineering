/* Module: tokr3260.dll
   Function: FUN_680590f0
   Address: 680590f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl FUN_680590f0(int param_1,int *param_2,int *param_3,int *param_4)

{
  float fVar1;
  int iVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float local_1cc [31];
  int local_150 [32];
  float local_d0 [16];
  float local_90;
  int local_8c;
  int local_88 [7];
  int local_6c [8];
  int *local_4c;
  int local_48 [7];
  int local_2c [8];
  float local_c;
  int *local_8;
  
  local_8 = param_2;
  iVar4 = (int)param_2 + ((int)param_2 >> 0x1f & 0x3fU);
  pfVar8 = local_1cc;
  param_2 = (int *)0x40;
  iVar4 = iVar4 >> 6;
  local_8 = (int *)((int)local_8 / 2);
  iVar12 = param_1 + (int)local_8 * 4;
  do {
    fVar13 = (float10)(*DAT_68061220)(iVar12,iVar4);
    *pfVar8 = (float)fVar13;
    iVar12 = iVar12 + iVar4 * 4;
    pfVar8 = pfVar8 + 1;
    param_2 = (int *)((int)param_2 + -1);
  } while (param_2 != (int *)0x0);
  local_c = 0.0;
  iVar12 = (int)(iVar4 * 0x40 + (iVar4 * 0x40 >> 0x1f & 0xfU)) >> 4;
  if (0 < iVar12) {
    iVar6 = 0;
    iVar4 = iVar12;
    do {
      fVar1 = ABS(*(float *)(iVar6 + iVar12 * -4 + (int)local_8 * 4 + param_1));
      if (local_c < fVar1) {
        local_c = fVar1;
      }
      iVar6 = iVar6 + 4;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  piVar10 = (int *)0x0;
  param_1 = 0;
  local_8 = (int *)0x0;
  if ((0 < *param_3) && (iVar12 = 0, 0 < *param_3)) {
    piVar9 = param_3 + 8;
    do {
      piVar5 = (int *)FUN_68053c50(*piVar9);
      if ((int)piVar10 < (int)piVar5) {
        piVar10 = piVar5;
      }
      iVar12 = iVar12 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar12 < *param_3);
  }
  param_2 = local_6c;
  iVar12 = 0;
  fVar13 = (float10)(float)param_3[0xf];
  pfVar8 = local_1cc;
  do {
    pfVar8 = pfVar8 + 1;
    if (fVar13 < (float10)pfVar8[-1]) {
      fVar13 = (float10)pfVar8[-1];
    }
    if (((float)_DAT_6805b2c8 < *pfVar8) && (fVar13 + fVar13 < (float10)*pfVar8)) {
      param_2[-7] = iVar12;
      if (fVar13 <= (float10)_DAT_6805b2d8) {
        fVar13 = (float10)*pfVar8 * (float10)_DAT_6805b2e0;
      }
      else {
        fVar13 = (float10)*pfVar8 / fVar13;
      }
      if (fVar13 <= (float10)_DAT_6805b2e8) {
        fVar13 = (float10)_DAT_6805b2e8;
      }
      log2(fVar13);
      log2((float10)_DAT_6805b2d0);
      iVar4 = ftol();
      if (iVar4 < 0) {
        iVar4 = 0;
      }
      else {
        if (10 < (int)piVar10 + iVar4) {
          iVar4 = 10 - (int)piVar10;
        }
        piVar10 = (int *)((int)piVar10 + iVar4);
      }
      param_1 = param_1 + 1;
      *param_2 = iVar4;
      param_2 = param_2 + 1;
      fVar13 = extraout_ST1;
    }
    if (6 < param_1) break;
    iVar12 = iVar12 + 1;
  } while (iVar12 < 0x20);
  param_2 = piVar10;
  if (4 < (int)piVar10) {
    param_2 = (int *)0x4;
  }
  bVar3 = false;
  if ((0 < param_1) || (0 < *param_3)) {
    bVar3 = true;
  }
  if ((bVar3) && (param_1 < 7)) {
    iVar12 = 0;
    pfVar8 = local_d0;
    param_3 = (int *)0x0;
    do {
      pfVar8 = pfVar8 + 1;
      *pfVar8 = 0.0;
      iVar4 = 4;
      pfVar7 = local_1cc + ((int)(iVar12 + (iVar12 >> 0x1f & 0xfU)) >> 4);
      do {
        if (*pfVar8 < *pfVar7) {
          *pfVar8 = *pfVar7;
        }
        pfVar7 = pfVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      iVar12 = iVar12 + 0x40;
    } while (iVar12 < 0x400);
    fVar13 = (float10)local_d0[0];
    pfVar8 = &local_90;
    iVar12 = 8;
    do {
      if (fVar13 < (float10)*pfVar8) {
        fVar13 = (float10)*pfVar8;
      }
      pfVar8 = pfVar8 + -1;
      iVar12 = iVar12 + -1;
    } while (iVar12 != 0);
    iVar4 = 7;
    piVar10 = local_2c;
    iVar12 = param_1;
    do {
      if (fVar13 < (float10)local_d0[iVar4 + 1]) {
        fVar13 = (float10)local_d0[iVar4 + 1];
      }
      fVar1 = local_c;
      if (iVar4 != 0) {
        fVar1 = local_d0[iVar4];
      }
      fVar14 = (float10)fVar1;
      if (((float10)_DAT_6805b2c8 < fVar14) && (fVar13 + fVar13 < fVar14)) {
        if (iVar4 == 0) {
          iVar6 = 1;
        }
        else {
          iVar6 = (int)(iVar4 * 0x40 + (iVar4 * 0x40 >> 0x1f & 0xfU)) >> 4;
        }
        piVar10[-7] = iVar6;
        if (fVar13 <= (float10)_DAT_6805b2d8) {
          fVar14 = fVar14 * (float10)_DAT_6805b2e0;
        }
        else {
          fVar14 = fVar14 / fVar13;
        }
        if (fVar14 <= (float10)_DAT_6805b2e8) {
          fVar14 = (float10)_DAT_6805b2e8;
        }
        log2(fVar14);
        log2((float10)_DAT_6805b2d0);
        iVar6 = ftol();
        if (iVar6 < 0) {
          iVar6 = 0;
        }
        else {
          if ((int)param_2 < (int)param_3 + iVar6) {
            iVar6 = (int)param_2 - (int)param_3;
          }
          param_3 = (int *)((int)param_3 + iVar6);
        }
        *piVar10 = iVar6;
        piVar10 = piVar10 + 1;
        iVar12 = iVar12 + 1;
        local_8 = (int *)((int)local_8 + 1);
        fVar13 = extraout_ST1_00;
        if (6 < iVar12) break;
      }
      iVar4 = iVar4 + -1;
    } while (-1 < iVar4);
  }
  pfVar8 = local_1cc;
  iVar12 = 0x20;
  fVar1 = _DAT_6805b2c0;
  do {
    if (fVar1 < *pfVar8) {
      fVar1 = *pfVar8;
    }
    pfVar8 = pfVar8 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  param_4[0xf] = (int)fVar1;
  iVar4 = FUN_68053c50(0);
  local_4c = local_8;
  iVar12 = 0;
  if (-1 < (int)local_8 + -1) {
    piVar10 = local_2c + (int)local_8 + -1;
    piVar9 = local_8;
    do {
      iVar6 = *piVar10;
      *piVar10 = iVar6 + iVar12;
      if (-iVar4 < iVar6 + iVar12) {
        *piVar10 = -iVar4;
      }
      iVar12 = *piVar10;
      piVar10 = piVar10 + -1;
      piVar9 = (int *)((int)piVar9 + -1);
    } while (piVar9 != (int *)0x0);
  }
  iVar6 = FUN_68053c50(0xf);
  iVar4 = 0;
  local_8c = param_1;
  if (-1 < param_1 + -1) {
    piVar10 = local_6c + param_1 + -1;
    iVar11 = param_1;
    do {
      iVar2 = *piVar10;
      *piVar10 = iVar2 + iVar4;
      if (iVar6 + iVar12 < iVar2 + iVar4) {
        *piVar10 = iVar6 + iVar12;
      }
      iVar4 = *piVar10;
      piVar10 = piVar10 + -1;
      iVar11 = iVar11 + -1;
    } while (iVar11 != 0);
  }
  iVar4 = 0;
  piVar10 = local_150;
  for (iVar12 = 0x21; iVar12 != 0; iVar12 = iVar12 + -1) {
    *piVar10 = 0;
    piVar10 = piVar10 + 1;
  }
  if (0 < param_1) {
    piVar10 = local_88;
    do {
      if (iVar4 <= *piVar10) {
        iVar12 = piVar10[7];
        iVar6 = (*piVar10 - iVar4) + 1;
        piVar9 = local_150 + iVar4;
        iVar4 = iVar4 + iVar6;
        do {
          *piVar9 = *piVar9 + iVar12;
          piVar9 = piVar9 + 1;
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      piVar10 = piVar10 + 1;
      param_1 = param_1 + -1;
    } while (param_1 != 0);
  }
  iVar12 = 0x20;
  if (0 < (int)local_4c) {
    piVar10 = local_48;
    param_3 = local_4c;
    do {
      if (*piVar10 <= iVar12) {
        iVar4 = piVar10[7];
        iVar6 = (iVar12 - *piVar10) + 1;
        piVar9 = local_150 + iVar12;
        do {
          iVar12 = iVar12 + -1;
          *piVar9 = *piVar9 + iVar4;
          iVar6 = iVar6 + -1;
          piVar9 = piVar9 + -1;
        } while (iVar6 != 0);
      }
      piVar10 = piVar10 + 1;
      param_3 = (int *)((int)param_3 + -1);
    } while (param_3 != (int *)0x0);
  }
  iVar4 = 0;
  iVar12 = 0;
  piVar9 = local_150;
  piVar10 = param_4 + 8;
  do {
    iVar6 = *piVar9;
    if (iVar6 != piVar9[1]) {
      piVar10[-7] = iVar12;
      *piVar10 = iVar6;
      iVar4 = iVar4 + 1;
      piVar10 = piVar10 + 1;
    }
    iVar12 = iVar12 + 1;
    piVar9 = piVar9 + 1;
  } while (iVar12 < 0x20);
  iVar12 = 0;
  *param_4 = iVar4;
  if (0 < iVar4) {
    piVar10 = param_4 + 8;
    do {
      iVar12 = iVar12 + 1;
      *piVar10 = *piVar10 - (int)local_d0[0];
      piVar10 = piVar10 + 1;
    } while (iVar12 < *param_4);
  }
  iVar12 = *param_4 + -1;
  if (-1 < iVar12) {
    iVar4 = iVar12 * 4 + 0x20;
    do {
      if (*(int *)(iVar4 + (int)param_4) != 0) break;
      iVar4 = iVar4 + -4;
      iVar12 = iVar12 + -1;
      *param_4 = *param_4 + -1;
    } while (-1 < iVar12);
  }
  iVar12 = 0;
  if (0 < *param_4) {
    piVar10 = param_4 + 8;
    do {
      iVar4 = FUN_68053c70(*piVar10);
      *piVar10 = iVar4;
      iVar12 = iVar12 + 1;
      piVar10 = piVar10 + 1;
    } while (iVar12 < *param_4);
  }
  return (*param_4 < 8) - 1 & 0xfff0bdc1;
}


