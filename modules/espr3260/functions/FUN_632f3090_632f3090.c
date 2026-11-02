/* Module: espr3260.dll
   Function: FUN_632f3090
   Address: 632f3090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_632f3090(void *this,float *param_1,float *param_2,int *param_3)

{
  undefined4 *puVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  int iVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  uint uVar16;
  float *pfVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  float10 extraout_ST0;
  int local_3c;
  float *local_38;
  float *local_34;
  void *local_30;
  float *local_2c;
  float *local_28;
  float local_24;
  float local_20;
  float local_1c;
  float *local_18;
  float *local_14;
  int local_10;
  float local_c;
  float *local_8;
  
  iVar12 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  iVar3 = *(int *)(iVar12 + -0xf8 + (int)this);
  *(int *)(iVar12 + -0xf8 + (int)this) = iVar3 + -0xc0;
  iVar12 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  pfVar17 = *(float **)(iVar12 + -0xf8 + (int)this);
  *(float **)(iVar12 + -0xf8 + (int)this) = pfVar17 + -0x30;
  iVar12 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  pfVar20 = *(float **)(iVar12 + -0xf8 + (int)this);
  *(float **)(iVar12 + -0xf8 + (int)this) = pfVar20 + -8;
  iVar12 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  local_2c = *(float **)(iVar12 + -0xf8 + (int)this);
  *(float **)(iVar12 + -0xf8 + (int)this) = local_2c + -8;
  iVar12 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  local_38 = *(float **)(iVar12 + -0xf8 + (int)this);
  *(float **)(iVar12 + -0xf8 + (int)this) = local_38 + -0xc0;
  iVar12 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  pfVar10 = *(float **)(iVar12 + -0xf8 + (int)this);
  *(float **)(iVar12 + -0xf8 + (int)this) = pfVar10 + -0x30;
  iVar12 = *(int *)(*(int *)((int)this + -0xfc) + 4);
  local_34 = *(float **)(iVar12 + -0xf8 + (int)this);
  *(float **)(iVar12 + -0xf8 + (int)this) = local_34 + -0x180;
  iVar18 = 0xc;
  local_28 = *(float **)(*(int *)(*(int *)((int)this + -0xfc) + 4) + -0xf8 + (int)this);
  pfVar9 = pfVar20 + 1;
  iVar12 = (int)pfVar17 - (int)pfVar20;
  pfVar7 = pfVar17;
  do {
    *pfVar7 = 1.0;
    *(undefined4 *)(iVar12 + (int)pfVar9) = 0x3f800000;
    pfVar9[-1] = -1.0;
    *pfVar9 = -1.0;
    pfVar7 = pfVar7 + 4;
    pfVar9 = pfVar9 + 4;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  iVar18 = 0xc;
  pfVar9 = param_1 + 3;
  pfVar7 = pfVar20 + 2;
  do {
    puVar1 = (undefined4 *)(((int)pfVar20 - (int)param_1) + (int)pfVar9);
    *(undefined4 *)((int)pfVar7 + iVar12) = 0xbf800000;
    *(undefined4 *)((int)puVar1 + iVar12) = 0xbf800000;
    *pfVar7 = 1.0;
    *puVar1 = 0x3f800000;
    iVar18 = iVar18 + -1;
    pfVar9[-1] = -pfVar9[-1];
    *pfVar9 = -*pfVar9;
    pfVar9 = pfVar9 + 4;
    pfVar7 = pfVar7 + 4;
  } while (iVar18 != 0);
  iVar12 = 0x30;
  pfVar9 = pfVar10 + 0x60;
  do {
    pfVar7 = pfVar10;
    *pfVar7 = 0.0;
    *pfVar9 = 0.0;
    pfVar10 = pfVar7 + 1;
    pfVar9 = pfVar9 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  iVar12 = 0x30;
  pfVar6 = pfVar10;
  do {
    fVar2 = *(float *)(((int)param_2 - (int)pfVar10) + (int)pfVar6);
    *pfVar6 = fVar2;
    *(float *)(((int)pfVar9 - (int)pfVar10) + (int)pfVar6) = -fVar2;
    pfVar6 = pfVar6 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  iVar12 = 8;
  pfVar9 = pfVar10;
  pfVar6 = local_34 + 7;
  pfVar14 = local_34 + 0x27;
  fVar2 = _DAT_632fa288;
  do {
    fVar2 = pfVar9[1] * pfVar9[1] + *pfVar9 * *pfVar9 + fVar2;
    iVar12 = iVar12 + -1;
    *pfVar14 = fVar2 * _DAT_632fa28c;
    fVar2 = pfVar9[3] * pfVar9[3] + pfVar9[2] * pfVar9[2] + fVar2;
    *(float *)((int)pfVar6 + (int)local_34 + (0x5c - (int)(local_34 + 7))) = fVar2 * _DAT_632fa28c;
    fVar2 = pfVar9[5] * pfVar9[5] + pfVar9[4] * pfVar9[4] + fVar2;
    *pfVar6 = fVar2 * _DAT_632fa28c;
    pfVar9 = pfVar9 + 6;
    pfVar6 = pfVar6 + -1;
    pfVar14 = pfVar14 + -1;
  } while (iVar12 != 0);
  param_2 = pfVar7 + 3;
  local_14 = local_28 + 0xbf;
  local_20 = 1.4013e-45;
  do {
    pfVar9 = local_14 + -0x80;
    pfVar6 = param_2;
    pfVar14 = pfVar10;
    pfVar8 = local_14;
    fVar2 = _DAT_632fa288;
    if ((int)local_20 < 8) {
      iVar12 = 8 - (int)local_20;
      pfVar5 = param_2;
      pfVar13 = pfVar10;
      pfVar15 = local_14;
      pfVar19 = pfVar9;
      do {
        fVar2 = pfVar5[1] * pfVar13[1] + *pfVar5 * *pfVar13 + fVar2;
        pfVar6 = pfVar5 + 6;
        *pfVar15 = fVar2;
        pfVar14 = pfVar13 + 6;
        pfVar9 = pfVar19 + -9;
        pfVar8 = pfVar15 + -9;
        iVar12 = iVar12 + -1;
        fVar2 = pfVar5[3] * pfVar13[3] + pfVar5[2] * pfVar13[2] + fVar2;
        *pfVar19 = fVar2;
        fVar2 = pfVar5[5] * pfVar13[5] + pfVar5[4] * pfVar13[4] + fVar2;
        pfVar15[0x78] = fVar2;
        pfVar5 = pfVar6;
        pfVar13 = pfVar14;
        pfVar15 = pfVar8;
        pfVar19 = pfVar9;
      } while (iVar12 != 0);
    }
    local_14 = local_14 + -8;
    fVar2 = pfVar6[1] * pfVar14[1] + *pfVar6 * *pfVar14 + fVar2;
    param_2 = param_2 + 6;
    *pfVar8 = fVar2;
    *pfVar9 = pfVar14[3] * pfVar6[3] + pfVar6[2] * pfVar14[2] + fVar2;
    bVar4 = (int)local_20 < 8;
    local_20 = (float)((int)local_20 + 1);
  } while (bVar4);
  pfVar7 = pfVar7 + 5;
  local_14 = local_28 + 0x13f;
  iVar12 = 1;
  do {
    pfVar9 = pfVar7;
    pfVar6 = pfVar10;
    pfVar14 = local_14;
    fVar2 = _DAT_632fa288;
    if (iVar12 < 8) {
      iVar18 = 8 - iVar12;
      pfVar8 = pfVar7;
      pfVar5 = pfVar10;
      pfVar13 = local_14;
      do {
        pfVar14 = pfVar13 + -9;
        fVar2 = pfVar8[1] * pfVar5[1] + *pfVar8 * *pfVar5 + fVar2;
        pfVar9 = pfVar8 + 6;
        *pfVar13 = fVar2;
        pfVar6 = pfVar5 + 6;
        iVar18 = iVar18 + -1;
        fVar2 = pfVar8[3] * pfVar5[3] + pfVar8[2] * pfVar5[2] + fVar2;
        pfVar13[-0x81] = fVar2;
        fVar2 = pfVar8[5] * pfVar5[5] + pfVar8[4] * pfVar5[4] + fVar2;
        pfVar13[-0x101] = fVar2;
        pfVar8 = pfVar9;
        pfVar5 = pfVar6;
        pfVar13 = pfVar14;
      } while (iVar18 != 0);
    }
    local_14 = local_14 + -1;
    pfVar7 = pfVar7 + 6;
    *pfVar14 = pfVar6[1] * pfVar9[1] + *pfVar9 * *pfVar6 + fVar2;
    bVar4 = iVar12 < 8;
    iVar12 = iVar12 + 1;
  } while (bVar4);
  iVar12 = 0;
  pfVar9 = local_28;
  pfVar10 = pfVar17;
  do {
    if (iVar12 < 0x30) {
      iVar18 = (iVar12 + 2) % 6;
      uVar16 = (0x35U - iVar12) / 6;
      pfVar7 = pfVar10;
      do {
        local_10 = iVar18;
        pfVar6 = pfVar17;
        if (*pfVar7 < (float)_DAT_632fa280) {
          pfVar6 = pfVar20;
        }
        for (; local_10 < 0x30; local_10 = local_10 + 6) {
          *pfVar9 = pfVar6[local_10] * *pfVar9;
          pfVar9 = pfVar9 + 1;
        }
        pfVar7 = pfVar7 + 6;
        uVar16 = uVar16 - 1;
      } while (uVar16 != 0);
    }
    iVar12 = iVar12 + 2;
    pfVar9 = pfVar9 + 0x40;
    pfVar10 = pfVar10 + 2;
  } while (iVar12 < 6);
  local_24 = -1.0;
  local_20 = 1.0;
  pfVar9 = local_34 + 0x10;
  pfVar17 = local_28 + 0x100;
  pfVar20 = local_34 + 0x20;
  param_2 = (float *)0x0;
  local_18 = param_1;
  local_30 = this;
  local_8 = local_28;
  do {
    local_c = *local_18;
    local_1c = *local_34;
    iVar12 = 8;
    pfVar10 = local_2c;
    do {
      pfVar7 = pfVar9;
      fVar2 = *local_28;
      local_28 = local_28 + 1;
      iVar12 = iVar12 + -1;
      *pfVar10 = fVar2 + *pfVar7;
      pfVar10 = pfVar10 + 1;
      pfVar9 = pfVar7 + 1;
    } while (iVar12 != 0);
    pfVar9 = pfVar7 + -7;
    iVar12 = 8;
    pfVar10 = local_38;
    do {
      pfVar6 = pfVar20;
      pfVar7 = pfVar17;
      iVar12 = iVar12 + -1;
      *pfVar10 = *pfVar6 + *pfVar7;
      pfVar10 = pfVar10 + 1;
      pfVar17 = pfVar7 + 8;
      pfVar20 = pfVar6 + 1;
    } while (iVar12 != 0);
    pfVar20 = pfVar6 + -7;
    pfVar17 = pfVar7 + -0x37;
    local_34 = local_34 + 1;
    FUN_632f2f50(2.8026e-45,4,&local_c,&local_1c,&local_10,&local_3c,(int)param_1,local_2c,local_38,
                 (float)local_8);
    local_c = local_c * local_c;
    if ((float)_DAT_632fa280 < local_20 * local_c - local_1c * local_24) {
      local_24 = local_c;
      local_20 = local_1c;
    }
    param_2 = (float *)((int)param_2 + 6);
    local_18 = local_18 + 6;
  } while ((int)param_2 < 0x30);
  iVar12 = 0;
  iVar18 = 3;
  do {
    iVar11 = ftol();
    iVar12 = iVar12 * 8 - iVar11;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  if (extraout_ST0 < (float10)_DAT_632fa280) {
    iVar12 = iVar12 + 0x200;
  }
  *param_3 = iVar12;
  *(int *)(*(int *)(*(int *)((int)local_30 + -0xfc) + 4) + -0xf8 + (int)local_30) = iVar3;
  return;
}


