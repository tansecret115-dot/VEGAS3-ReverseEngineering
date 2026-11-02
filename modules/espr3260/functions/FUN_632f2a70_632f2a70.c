/* Module: espr3260.dll
   Function: FUN_632f2a70
   Address: 632f2a70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_632f2a70(void *this,float *param_1,float *param_2,int *param_3)

{
  float fVar1;
  int iVar2;
  float fVar3;
  bool bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float *pfVar13;
  float *pfVar14;
  int iVar15;
  float *pfVar16;
  float *pfVar17;
  float *pfVar18;
  float *pfVar19;
  float *pfVar20;
  float *pfVar21;
  float *pfVar22;
  int iVar23;
  int local_24;
  float *local_18;
  int local_14;
  
  iVar8 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  iVar2 = *(int *)(iVar8 + -0xf8 + (int)this);
  *(int *)(iVar8 + -0xf8 + (int)this) = iVar2 + -0xc0;
  iVar8 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  *(int *)(iVar8 + -0xf8 + (int)this) = *(int *)(iVar8 + -0xf8 + (int)this) + -0xc0;
  iVar8 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  *(int *)(iVar8 + -0xf8 + (int)this) = *(int *)(iVar8 + -0xf8 + (int)this) + -0x40;
  iVar8 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  *(int *)(iVar8 + -0xf8 + (int)this) = *(int *)(iVar8 + -0xf8 + (int)this) + -0x40;
  iVar8 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  *(int *)(iVar8 + -0xf8 + (int)this) = *(int *)(iVar8 + -0xf8 + (int)this) + -0x300;
  iVar8 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  pfVar13 = *(float **)(iVar8 + -0xf8 + (int)this);
  *(float **)(iVar8 + -0xf8 + (int)this) = pfVar13 + -0x30;
  iVar8 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  pfVar22 = *(float **)(iVar8 + -0xf8 + (int)this);
  *(float **)(iVar8 + -0xf8 + (int)this) = pfVar22 + -0xc0;
  pfVar19 = *(float **)(*(int *)(*(int *)((int)this + -0xfc) + 4) + -0xf8 + (int)this);
  pfVar14 = pfVar13 + 0x60;
  iVar8 = 0x30;
  do {
    pfVar20 = pfVar13;
    *pfVar20 = 0.0;
    *pfVar14 = 0.0;
    pfVar13 = pfVar20 + 1;
    pfVar14 = pfVar14 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 0x30;
  pfVar9 = pfVar13;
  do {
    fVar1 = *(float *)(((int)param_2 - (int)pfVar13) + (int)pfVar9);
    *pfVar9 = fVar1;
    *(float *)(((int)pfVar14 - (int)pfVar13) + (int)pfVar9) = -fVar1;
    pfVar9 = pfVar9 + 1;
    iVar8 = iVar8 + -1;
  } while (iVar8 != 0);
  iVar8 = 0x10;
  pfVar14 = pfVar13;
  pfVar9 = pfVar22 + 0xf;
  pfVar11 = pfVar22 + 0x2f;
  fVar1 = _DAT_632fa250;
  do {
    fVar1 = *pfVar14 * *pfVar14 + fVar1;
    iVar8 = iVar8 + -1;
    *pfVar11 = fVar1 * _DAT_632fa254;
    fVar1 = pfVar14[1] * pfVar14[1] + fVar1;
    *(float *)((int)pfVar9 + (int)pfVar22 + (0x7c - (int)(pfVar22 + 0xf))) = fVar1 * _DAT_632fa254;
    fVar1 = pfVar14[2] * pfVar14[2] + fVar1;
    *pfVar9 = fVar1 * _DAT_632fa254;
    pfVar14 = pfVar14 + 3;
    pfVar9 = pfVar9 + -1;
    pfVar11 = pfVar11 + -1;
  } while (iVar8 != 0);
  param_2 = pfVar20 + 2;
  pfVar14 = pfVar19 + 0x7f;
  local_24 = 1;
  do {
    pfVar9 = pfVar14 + -0x40;
    pfVar11 = pfVar13;
    pfVar12 = param_2;
    pfVar17 = pfVar14;
    fVar1 = _DAT_632fa250;
    if (local_24 < 0x10) {
      iVar8 = 0x10 - local_24;
      pfVar10 = pfVar13;
      pfVar16 = param_2;
      pfVar18 = pfVar14;
      pfVar21 = pfVar9;
      do {
        fVar1 = *pfVar10 * *pfVar16 + fVar1;
        pfVar11 = pfVar10 + 3;
        pfVar12 = pfVar16 + 3;
        pfVar9 = pfVar21 + -0x11;
        *pfVar18 = fVar1;
        pfVar17 = pfVar18 + -0x11;
        iVar8 = iVar8 + -1;
        fVar1 = pfVar10[1] * pfVar16[1] + fVar1;
        *pfVar21 = fVar1;
        fVar1 = pfVar10[2] * pfVar16[2] + fVar1;
        pfVar18[0x30] = fVar1;
        pfVar10 = pfVar11;
        pfVar16 = pfVar12;
        pfVar18 = pfVar17;
        pfVar21 = pfVar9;
      } while (iVar8 != 0);
    }
    pfVar14 = pfVar14 + -0x10;
    fVar1 = *pfVar11 * *pfVar12 + fVar1;
    param_2 = param_2 + 3;
    *pfVar17 = fVar1;
    *pfVar9 = pfVar12[1] * pfVar11[1] + fVar1;
    bVar4 = local_24 < 0x10;
    local_24 = local_24 + 1;
  } while (bVar4);
  local_18 = pfVar19 + 0xbf;
  iVar8 = 1;
  do {
    pfVar20 = pfVar20 + 3;
    pfVar14 = pfVar13;
    pfVar9 = pfVar20;
    pfVar11 = local_18;
    fVar1 = _DAT_632fa250;
    if (iVar8 < 0x10) {
      iVar23 = 0x10 - iVar8;
      pfVar12 = pfVar13;
      pfVar17 = pfVar20;
      pfVar10 = local_18;
      do {
        fVar1 = *pfVar12 * *pfVar17 + fVar1;
        pfVar14 = pfVar12 + 3;
        pfVar9 = pfVar17 + 3;
        *pfVar10 = fVar1;
        pfVar11 = pfVar10 + -0x11;
        iVar23 = iVar23 + -1;
        fVar1 = pfVar12[1] * pfVar17[1] + fVar1;
        pfVar10[-0x41] = fVar1;
        fVar1 = pfVar12[2] * pfVar17[2] + fVar1;
        pfVar10[-0x81] = fVar1;
        pfVar12 = pfVar14;
        pfVar17 = pfVar9;
        pfVar10 = pfVar11;
      } while (iVar23 != 0);
    }
    local_18 = local_18 + -1;
    *pfVar11 = *pfVar14 * *pfVar9 + fVar1;
    bVar4 = iVar8 < 0x10;
    iVar8 = iVar8 + 1;
  } while (bVar4);
  iVar8 = 0;
  pfVar14 = pfVar22 + 0x10;
  local_18 = (float *)0x0;
  local_14 = 1;
  pfVar13 = pfVar22;
  pfVar20 = param_1;
  pfVar9 = pfVar14;
  param_2 = pfVar19;
  fVar1 = _DAT_632fa258;
  fVar5 = _DAT_632fa25c;
  do {
    fVar3 = *pfVar13;
    pfVar13 = pfVar13 + 1;
    iVar23 = 1;
    pfVar11 = param_1 + 1;
    do {
      pfVar12 = pfVar9;
      fVar7 = (*pfVar12 + fVar3) - *param_2;
      fVar6 = (*pfVar20 - *pfVar11) * (*pfVar20 - *pfVar11);
      param_2 = param_2 + 1;
      if ((float)_DAT_632fa260 < fVar6 * fVar5 - fVar7 * fVar1) {
        local_18 = (float *)iVar8;
        local_14 = iVar23;
        fVar5 = fVar7;
        fVar1 = fVar6;
      }
      iVar23 = iVar23 + 3;
      pfVar11 = pfVar11 + 3;
      pfVar9 = pfVar12 + 1;
    } while (iVar23 < 0x30);
    iVar8 = iVar8 + 3;
    pfVar9 = pfVar12 + -0xf;
    pfVar20 = pfVar20 + 3;
  } while (iVar8 < 0x30);
  param_2 = pfVar19 + 0x40;
  pfVar22 = pfVar22 + 0x20;
  iVar8 = 1;
  pfVar13 = param_1 + 1;
  do {
    fVar3 = *pfVar14;
    pfVar14 = pfVar14 + 1;
    iVar23 = 2;
    pfVar19 = param_1 + 2;
    do {
      pfVar20 = pfVar22;
      fVar6 = (*pfVar20 + fVar3) - *param_2;
      fVar7 = (*pfVar13 - *pfVar19) * (*pfVar13 - *pfVar19);
      param_2 = param_2 + 1;
      if ((float)_DAT_632fa260 < fVar7 * fVar5 - fVar6 * fVar1) {
        local_18 = (float *)iVar8;
        local_14 = iVar23;
        fVar1 = fVar7;
        fVar5 = fVar6;
      }
      iVar23 = iVar23 + 3;
      pfVar19 = pfVar19 + 3;
      pfVar22 = pfVar20 + 1;
    } while (iVar23 < 0x30);
    iVar8 = iVar8 + 3;
    pfVar22 = pfVar20 + -0xf;
    pfVar13 = pfVar13 + 3;
  } while (iVar8 < 0x30);
  iVar8 = ((int)local_18 % 3) * 0x100;
  if (param_1[(int)local_18] - param_1[local_14] < (float)_DAT_632fa260) {
    iVar8 = iVar8 + 0x200;
  }
  iVar23 = ftol();
  iVar15 = ftol();
  *param_3 = (iVar15 * 0x10 - iVar23) + iVar8;
  *(int *)(*(int *)(*(int *)((int)this + -0xfc) + 4) + -0xf8 + (int)this) = iVar2;
  return;
}


