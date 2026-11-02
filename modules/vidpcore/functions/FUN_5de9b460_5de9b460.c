/* Module: vidpcore.dll
   Function: FUN_5de9b460
   Address: 5de9b460
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5de9b460(int param_1,int *param_2,int param_3,int param_4,int param_5,float *param_6,int param_7
            ,int param_8,float param_9,float *param_10)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *pfVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  float *pfVar18;
  bool bVar19;
  float10 fVar20;
  float10 fVar21;
  float10 fVar22;
  float10 fVar23;
  float10 extraout_ST1;
  float10 extraout_ST1_00;
  float10 extraout_ST1_01;
  int local_30;
  int local_24;
  int local_20;
  int local_14;
  
  pfVar5 = param_10;
  if ((param_1 == 0) || (param_10 == (float *)0x0)) {
    return 0x80070057;
  }
  iVar14 = param_2[2] - *param_2;
  fVar4 = param_9 * _DAT_5df2bbe0 + _DAT_5df205c8;
  iVar15 = param_2[3] - param_2[1];
  if (param_7 < param_5) {
    iVar6 = param_7 + (param_7 >> 0x1f & 0x3fffU);
    param_7 = param_5 + (param_5 >> 0x1f & 0x3fffU);
    iVar7 = param_8 + (param_8 >> 0x1f & 0x3fffU);
  }
  else {
    iVar6 = param_5 + (param_5 >> 0x1f & 0x3fffU);
    param_7 = param_7 + (param_7 >> 0x1f & 0x3fffU);
    iVar7 = (int)param_6 + ((int)param_6 >> 0x1f & 0x3fffU);
    param_6 = (float *)param_8;
  }
  param_2 = (int *)(iVar7 >> 0xe);
  param_5 = iVar6 >> 0xe;
  local_30 = (param_7 >> 0xe) - param_5;
  iVar6 = ((int)((int)param_6 + ((int)param_6 >> 0x1f & 0x3fffU)) >> 0xe) - (int)param_2;
  if ((local_30 == 0) && (iVar6 == 0)) {
    return 0;
  }
  bVar19 = iVar6 < 0;
  if (bVar19) {
    iVar6 = -iVar6;
  }
  if (local_30 < iVar6) {
    if (bVar19) {
      iVar16 = -1;
      local_20 = -1;
      param_7 = -1;
    }
    else {
      iVar16 = 1;
      local_20 = 1;
      param_7 = 1;
    }
    local_24 = 0;
    param_8 = 1;
    iVar7 = 0;
    param_10 = (float *)0x0;
    param_6 = (float *)local_30;
    local_30 = iVar6;
  }
  else {
    iVar7 = 1;
    local_24 = 1;
    if (bVar19) {
      iVar16 = 0;
      param_7 = -1;
      local_20 = 0;
      param_8 = 0;
      param_10 = (float *)0xffffffff;
      param_6 = (float *)iVar6;
    }
    else {
      iVar16 = 0;
      local_20 = 0;
      param_7 = 1;
      param_8 = 0;
      param_10 = (float *)0x1;
      param_6 = (float *)iVar6;
    }
  }
  fVar20 = (float10)(int)param_6 / (float10)local_30;
  fVar21 = SQRT((float10)_DAT_5df205c8 / (fVar20 * fVar20 + (float10)_DAT_5df205c8));
  fVar1 = (float)fVar21;
  fVar21 = fVar21 * fVar20;
  fVar22 = fVar21 - (float10)fVar1;
  fVar20 = (float10)_DAT_5df205cc;
  iVar17 = (int)param_10 * param_3 + param_8 * param_4;
  iVar6 = (int)param_6 * 2;
  iVar8 = (int)param_6 - local_30;
  local_14 = iVar6 - local_30;
  param_6 = (float *)(param_5 * param_4 + param_1 + (int)param_2 * param_3);
  do {
    if ((((-1 < param_5) && (param_5 < iVar14)) && (-1 < (int)param_2)) && ((int)param_2 < iVar15))
    {
      fVar21 = fVar22;
      iVar9 = ftol();
      fVar22 = fVar20;
      fVar20 = extraout_ST1;
      if (param_4 == 4) {
        iVar10 = (uint)*(byte *)((int)pfVar5 + 2) * iVar9;
        uVar11 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
        if ((int)uVar11 < (int)(uint)*(byte *)((int)param_6 + 2)) {
          uVar11 = (uint)*(byte *)((int)param_6 + 2);
        }
        *(char *)((int)param_6 + 2) = (char)uVar11;
        iVar10 = (uint)*(byte *)((int)pfVar5 + 1) * iVar9;
        uVar11 = (int)(iVar10 + (iVar10 >> 0x1f & 0x3fffU)) >> 0xe;
        if ((int)uVar11 < (int)(uint)*(byte *)((int)param_6 + 1)) {
          uVar11 = (uint)*(byte *)((int)param_6 + 1);
        }
        *(char *)((int)param_6 + 1) = (char)uVar11;
        uVar11 = (int)((uint)*(byte *)pfVar5 * iVar9 +
                      ((int)((uint)*(byte *)pfVar5 * iVar9) >> 0x1f & 0x3fffU)) >> 0xe;
        if ((int)uVar11 < (int)(uint)*(byte *)param_6) {
          uVar11 = (uint)*(byte *)param_6;
        }
        *(char *)param_6 = (char)uVar11;
        iVar9 = (uint)*(byte *)((int)pfVar5 + 3) * iVar9;
        uVar11 = (int)(iVar9 + (iVar9 >> 0x1f & 0x3fffU)) >> 0xe;
        if ((int)uVar11 < (int)(uint)*(byte *)((int)param_6 + 3)) {
          uVar11 = (uint)*(byte *)((int)param_6 + 3);
        }
        *(char *)((int)param_6 + 3) = (char)uVar11;
      }
      else {
        fVar3 = (float)iVar9 * _DAT_5df2f3b8;
        fVar2 = fVar3 * pfVar5[2];
        if (fVar2 < param_6[2]) {
          fVar2 = param_6[2];
        }
        param_6[2] = fVar2;
        fVar2 = fVar3 * pfVar5[1];
        if (fVar2 < param_6[1]) {
          fVar2 = param_6[1];
        }
        param_6[1] = fVar2;
        fVar2 = fVar3 * *pfVar5;
        if (fVar2 < *param_6) {
          fVar2 = *param_6;
        }
        *param_6 = fVar2;
        fVar3 = fVar3 * pfVar5[3];
        if (fVar3 < param_6[3]) {
          fVar3 = param_6[3];
        }
        param_6[3] = fVar3;
      }
    }
    fVar23 = (float10)fVar1 - fVar20;
    iVar9 = param_5;
    iVar10 = (int)param_2;
    pfVar18 = param_6;
    if (fVar23 < (float10)fVar4) {
      do {
        pfVar18 = (float *)((int)pfVar18 + iVar17);
        iVar10 = iVar10 + (int)param_10;
        iVar9 = iVar9 + param_8;
        if (((-1 < iVar9) && (iVar9 < iVar14)) && ((-1 < iVar10 && (iVar10 < iVar15)))) {
          fVar21 = fVar22;
          iVar12 = ftol();
          fVar22 = fVar20;
          fVar20 = fVar23;
          fVar23 = extraout_ST1_00;
          if (param_4 == 4) {
            iVar13 = (uint)*(byte *)((int)pfVar5 + 2) * iVar12;
            uVar11 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
            if ((int)uVar11 < (int)(uint)*(byte *)((int)pfVar18 + 2)) {
              uVar11 = (uint)*(byte *)((int)pfVar18 + 2);
            }
            *(char *)((int)pfVar18 + 2) = (char)uVar11;
            iVar13 = (uint)*(byte *)((int)pfVar5 + 1) * iVar12;
            uVar11 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
            if ((int)uVar11 < (int)(uint)*(byte *)((int)pfVar18 + 1)) {
              uVar11 = (uint)*(byte *)((int)pfVar18 + 1);
            }
            *(char *)((int)pfVar18 + 1) = (char)uVar11;
            uVar11 = (int)((uint)*(byte *)pfVar5 * iVar12 +
                          ((int)((uint)*(byte *)pfVar5 * iVar12) >> 0x1f & 0x3fffU)) >> 0xe;
            if ((int)uVar11 < (int)(uint)*(byte *)pfVar18) {
              uVar11 = (uint)*(byte *)pfVar18;
            }
            *(char *)pfVar18 = (char)uVar11;
            iVar12 = (uint)*(byte *)((int)pfVar5 + 3) * iVar12;
            uVar11 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
            if ((int)uVar11 < (int)(uint)*(byte *)((int)pfVar18 + 3)) {
              uVar11 = (uint)*(byte *)((int)pfVar18 + 3);
            }
            *(char *)((int)pfVar18 + 3) = (char)uVar11;
          }
          else {
            fVar3 = (float)iVar12 * _DAT_5df2f3b8;
            fVar2 = fVar3 * pfVar5[2];
            if (fVar2 < pfVar18[2]) {
              fVar2 = pfVar18[2];
            }
            pfVar18[2] = fVar2;
            fVar2 = fVar3 * pfVar5[1];
            if (fVar2 < pfVar18[1]) {
              fVar2 = pfVar18[1];
            }
            pfVar18[1] = fVar2;
            fVar2 = fVar3 * *pfVar5;
            if (fVar2 < *pfVar18) {
              fVar2 = *pfVar18;
            }
            *pfVar18 = fVar2;
            fVar3 = fVar3 * pfVar5[3];
            if (fVar3 < pfVar18[3]) {
              fVar3 = pfVar18[3];
            }
            pfVar18[3] = fVar3;
          }
        }
        fVar23 = fVar23 + (float10)fVar1;
      } while (fVar23 < (float10)fVar4);
    }
    fVar23 = fVar20 + (float10)fVar1;
    iVar9 = (int)param_2 - (int)param_10;
    pfVar18 = (float *)((int)param_6 - iVar17);
    iVar10 = param_5 - param_8;
    if (fVar23 < (float10)fVar4) {
      do {
        if (((-1 < iVar10) && (iVar10 < iVar14)) && ((-1 < iVar9 && (iVar9 < iVar15)))) {
          fVar21 = fVar22;
          iVar12 = ftol();
          fVar22 = fVar20;
          fVar20 = fVar23;
          fVar23 = extraout_ST1_01;
          if (param_4 == 4) {
            iVar13 = (uint)*(byte *)((int)pfVar5 + 2) * iVar12;
            uVar11 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
            if ((int)uVar11 < (int)(uint)*(byte *)((int)pfVar18 + 2)) {
              uVar11 = (uint)*(byte *)((int)pfVar18 + 2);
            }
            *(char *)((int)pfVar18 + 2) = (char)uVar11;
            iVar13 = (uint)*(byte *)((int)pfVar5 + 1) * iVar12;
            uVar11 = (int)(iVar13 + (iVar13 >> 0x1f & 0x3fffU)) >> 0xe;
            if ((int)uVar11 < (int)(uint)*(byte *)((int)pfVar18 + 1)) {
              uVar11 = (uint)*(byte *)((int)pfVar18 + 1);
            }
            *(char *)((int)pfVar18 + 1) = (char)uVar11;
            uVar11 = (int)((uint)*(byte *)pfVar5 * iVar12 +
                          ((int)((uint)*(byte *)pfVar5 * iVar12) >> 0x1f & 0x3fffU)) >> 0xe;
            if ((int)uVar11 < (int)(uint)*(byte *)pfVar18) {
              uVar11 = (uint)*(byte *)pfVar18;
            }
            *(char *)pfVar18 = (char)uVar11;
            iVar12 = (uint)*(byte *)((int)pfVar5 + 3) * iVar12;
            uVar11 = (int)(iVar12 + (iVar12 >> 0x1f & 0x3fffU)) >> 0xe;
            if ((int)uVar11 < (int)(uint)*(byte *)((int)pfVar18 + 3)) {
              uVar11 = (uint)*(byte *)((int)pfVar18 + 3);
            }
            *(char *)((int)pfVar18 + 3) = (char)uVar11;
          }
          else {
            fVar3 = (float)iVar12 * _DAT_5df2f3b8;
            fVar2 = fVar3 * pfVar5[2];
            if (fVar2 < pfVar18[2]) {
              fVar2 = pfVar18[2];
            }
            pfVar18[2] = fVar2;
            fVar2 = fVar3 * pfVar5[1];
            if (fVar2 < pfVar18[1]) {
              fVar2 = pfVar18[1];
            }
            pfVar18[1] = fVar2;
            fVar2 = fVar3 * *pfVar5;
            if (fVar2 < *pfVar18) {
              fVar2 = *pfVar18;
            }
            *pfVar18 = fVar2;
            fVar3 = fVar3 * pfVar5[3];
            if (fVar3 < pfVar18[3]) {
              fVar3 = pfVar18[3];
            }
            pfVar18[3] = fVar3;
          }
        }
        fVar23 = fVar23 + (float10)fVar1;
        iVar9 = iVar9 - (int)param_10;
        pfVar18 = (float *)((int)pfVar18 - iVar17);
        iVar10 = iVar10 - param_8;
      } while (fVar23 < (float10)fVar4);
    }
    if (local_14 < 0) {
      param_5 = param_5 + local_24;
      fVar23 = fVar21;
      iVar9 = local_20;
      iVar12 = iVar16 * param_3 + iVar7 * param_4;
      iVar10 = iVar6;
    }
    else {
      param_5 = param_5 + 1;
      fVar23 = fVar22;
      iVar9 = param_7;
      iVar12 = param_7 * param_3 + param_4;
      iVar10 = iVar8 * 2;
    }
    local_14 = local_14 + iVar10;
    param_6 = (float *)((int)param_6 + iVar12);
    param_2 = (int *)((int)param_2 + iVar9);
    fVar20 = fVar20 + fVar23;
    local_30 = local_30 + -1;
  } while (-1 < local_30);
  return 0;
}


