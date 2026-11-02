/* Module: espr3260.dll
   Function: FUN_632f1c70
   Address: 632f1c70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall
FUN_632f1c70(void *this,float *param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  bool bVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint uVar11;
  int iVar12;
  float *pfVar13;
  float *pfVar14;
  float *pfVar15;
  float *pfVar16;
  int iVar17;
  int iVar18;
  float *pfVar19;
  float *pfVar20;
  int iVar21;
  float10 fVar22;
  float10 fVar23;
  float10 fVar24;
  float *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  float *local_40;
  float *local_3c;
  void *local_38;
  float *local_34;
  float *local_30;
  float *local_2c;
  float local_28;
  int local_24;
  float *local_20;
  float local_1c;
  float *local_18;
  int local_14;
  float *local_10;
  float *local_c;
  float *local_8;
  
  fVar4 = _DAT_632fa228;
  piVar1 = (int *)(*(int *)(*(int *)((int)this + -0x28) + 4) + -0x24 + (int)this);
  local_54 = *piVar1;
  *piVar1 = local_54 + -0xc0;
  iVar12 = *(int *)(*(int *)((int)this + -0x28) + 4);
  pfVar20 = *(float **)(iVar12 + -0x24 + (int)this);
  *(float **)(iVar12 + -0x24 + (int)this) = pfVar20 + -0x30;
  iVar12 = *(int *)(*(int *)((int)this + -0x28) + 4);
  pfVar13 = *(float **)(iVar12 + -0x24 + (int)this);
  *(float **)(iVar12 + -0x24 + (int)this) = pfVar13 + -0x10;
  iVar12 = *(int *)(*(int *)((int)this + -0x28) + 4);
  local_34 = *(float **)(iVar12 + -0x24 + (int)this);
  *(float **)(iVar12 + -0x24 + (int)this) = local_34 + -0x10;
  iVar12 = *(int *)(*(int *)((int)this + -0x28) + 4);
  local_30 = *(float **)(iVar12 + -0x24 + (int)this);
  *(float **)(iVar12 + -0x24 + (int)this) = local_30 + -0xc0;
  iVar12 = *(int *)(*(int *)((int)this + -0x28) + 4);
  local_40 = *(float **)(iVar12 + -0x24 + (int)this);
  *(float **)(iVar12 + -0x24 + (int)this) = local_40 + -0x30;
  iVar12 = *(int *)(*(int *)((int)this + -0x28) + 4);
  local_14 = *(int *)(iVar12 + -0x24 + (int)this);
  *(int *)(iVar12 + -0x24 + (int)this) = local_14 + -0xc00;
  local_18 = *(float **)(*(int *)(*(int *)((int)this + -0x28) + 4) + -0x24 + (int)this);
  iVar12 = 0x30;
  pfVar9 = param_2;
  fVar3 = fVar4;
  do {
    fVar2 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    iVar12 = iVar12 + -1;
    fVar3 = fVar2 * fVar2 + fVar3;
  } while (iVar12 != 0);
  iVar12 = 0x30;
  pfVar9 = param_1;
  do {
    fVar2 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    iVar12 = iVar12 + -1;
    fVar4 = fVar2 * fVar2 + fVar4;
  } while (iVar12 != 0);
  local_38 = this;
  local_10 = pfVar13;
  local_c = pfVar20;
  fVar22 = FUN_632f68e0(SUB84((double)(fVar3 / fVar4),0),
                        (int)((ulonglong)(double)(fVar3 / fVar4) >> 0x20));
  iVar12 = (int)pfVar20 - (int)pfVar13;
  iVar17 = (int)param_1 - (int)pfVar13;
  iVar21 = (int)param_2 - (int)pfVar13;
  iVar18 = 0x30;
  do {
    fVar23 = (float10)*(float *)(iVar17 + (int)pfVar13);
    fVar24 = fVar23 + fVar23 + fVar22 * (float10)*(float *)(iVar21 + (int)pfVar13);
    local_28 = (float)fVar24;
    if (fVar24 < (float10)_DAT_632fa230) {
      fVar23 = -fVar23;
      local_28 = -local_28;
      *(undefined4 *)(iVar12 + (int)pfVar13) = 0xbf800000;
      *pfVar13 = 1.0;
    }
    else {
      *(undefined4 *)(iVar12 + (int)pfVar13) = 0x3f800000;
      *pfVar13 = -1.0;
    }
    *(float *)(iVar17 + (int)pfVar13) = (float)fVar23;
    *(float *)(iVar21 + (int)pfVar13) = local_28;
    pfVar13 = pfVar13 + 1;
    iVar18 = iVar18 + -1;
  } while (iVar18 != 0);
  iVar12 = 0;
  local_2c = param_2;
  do {
    local_3c = (float *)0x6;
    do {
      iVar17 = iVar12 + 3;
      local_8 = (float *)*local_2c;
      iVar18 = iVar12;
      if (iVar17 < 0x30) {
        pfVar20 = param_2 + iVar17;
        do {
          if ((float)local_8 < *pfVar20) {
            local_8 = (float *)*pfVar20;
            iVar18 = iVar17;
          }
          iVar17 = iVar17 + 3;
          pfVar20 = pfVar20 + 3;
        } while (iVar17 < 0x30);
      }
      param_2[iVar18] = -1.0;
      local_3c = (float *)((int)local_3c + -1);
    } while (local_3c != (float *)0x0);
    iVar12 = iVar12 + 1;
    local_2c = local_2c + 1;
  } while (iVar12 < 3);
  iVar12 = 0x30;
  local_2c = local_40 + 0x60;
  do {
    pfVar20 = local_40;
    *pfVar20 = 0.0;
    *local_2c = 0.0;
    pfVar13 = pfVar20 + 1;
    local_2c = local_2c + 1;
    iVar12 = iVar12 + -1;
    local_40 = pfVar13;
  } while (iVar12 != 0);
  iVar12 = 0x30;
  pfVar9 = pfVar13;
  do {
    fVar3 = *(float *)(((int)param_3 - (int)pfVar13) + (int)pfVar9);
    *pfVar9 = fVar3;
    *(float *)(((int)local_2c - (int)pfVar13) + (int)pfVar9) = -fVar3;
    pfVar9 = pfVar9 + 1;
    iVar12 = iVar12 + -1;
  } while (iVar12 != 0);
  iVar12 = 0x10;
  pfVar9 = pfVar13;
  pfVar10 = (float *)(local_14 + 0x3c);
  pfVar15 = (float *)(local_14 + 0xbc);
  fVar3 = _DAT_632fa220;
  do {
    fVar3 = *pfVar9 * *pfVar9 + fVar3;
    iVar12 = iVar12 + -1;
    *pfVar15 = fVar3 * _DAT_632fa23c;
    fVar3 = pfVar9[1] * pfVar9[1] + fVar3;
    *(float *)((int)pfVar10 + ((local_14 + 0x7c) - (local_14 + 0x3c))) = fVar3 * _DAT_632fa23c;
    fVar3 = pfVar9[2] * pfVar9[2] + fVar3;
    *pfVar10 = fVar3 * _DAT_632fa23c;
    pfVar9 = pfVar9 + 3;
    pfVar10 = pfVar10 + -1;
    pfVar15 = pfVar15 + -1;
  } while (iVar12 != 0);
  param_3 = pfVar20 + 2;
  local_3c = local_18 + 0x1ff;
  local_28 = 1.4013e-45;
  do {
    pfVar9 = local_3c + -0x100;
    pfVar10 = param_3;
    pfVar15 = pfVar13;
    pfVar8 = local_3c;
    fVar3 = _DAT_632fa220;
    if ((int)local_28 < 0x10) {
      iVar12 = 0x10 - (int)local_28;
      pfVar7 = param_3;
      pfVar14 = pfVar13;
      pfVar16 = local_3c;
      pfVar19 = pfVar9;
      do {
        fVar3 = *pfVar7 * *pfVar14 + fVar3;
        pfVar15 = pfVar14 + 3;
        pfVar10 = pfVar7 + 3;
        pfVar9 = pfVar19 + -0x11;
        *pfVar16 = fVar3;
        pfVar8 = pfVar16 + -0x11;
        iVar12 = iVar12 + -1;
        fVar3 = pfVar7[1] * pfVar14[1] + fVar3;
        *pfVar19 = fVar3;
        fVar3 = pfVar7[2] * pfVar14[2] + fVar3;
        pfVar16[0xf0] = fVar3;
        pfVar7 = pfVar10;
        pfVar14 = pfVar15;
        pfVar16 = pfVar8;
        pfVar19 = pfVar9;
      } while (iVar12 != 0);
    }
    local_3c = local_3c + -0x10;
    fVar3 = *pfVar10 * *pfVar15 + fVar3;
    param_3 = param_3 + 3;
    *pfVar8 = fVar3;
    iVar12 = (int)local_28 + 1;
    *pfVar9 = pfVar15[1] * pfVar10[1] + fVar3;
    bVar6 = (int)local_28 < 0x10;
    local_28 = (float)iVar12;
  } while (bVar6);
  local_3c = local_18 + 0x2ff;
  iVar12 = 1;
  do {
    pfVar20 = pfVar20 + 3;
    pfVar9 = pfVar20;
    pfVar10 = pfVar13;
    pfVar15 = local_3c;
    fVar3 = _DAT_632fa220;
    if (iVar12 < 0x10) {
      iVar17 = 0x10 - iVar12;
      pfVar8 = pfVar20;
      pfVar7 = pfVar13;
      pfVar14 = local_3c;
      do {
        fVar3 = *pfVar8 * *pfVar7 + fVar3;
        pfVar10 = pfVar7 + 3;
        pfVar9 = pfVar8 + 3;
        *pfVar14 = fVar3;
        pfVar15 = pfVar14 + -0x11;
        iVar17 = iVar17 + -1;
        fVar3 = pfVar8[1] * pfVar7[1] + fVar3;
        pfVar14[-0x101] = fVar3;
        fVar3 = pfVar8[2] * pfVar7[2] + fVar3;
        pfVar14[-0x201] = fVar3;
        pfVar8 = pfVar9;
        pfVar7 = pfVar10;
        pfVar14 = pfVar15;
      } while (iVar17 != 0);
    }
    local_3c = local_3c + -1;
    *pfVar15 = *pfVar9 * *pfVar10 + fVar3;
    bVar6 = iVar12 < 0x10;
    iVar12 = iVar12 + 1;
  } while (bVar6);
  param_3 = (float *)0x0;
  pfVar20 = local_18;
  do {
    local_20 = param_3;
    if ((int)param_3 < 0x30) {
      iVar12 = ((int)param_3 + 1) % 3;
      do {
        local_24 = iVar12;
        pfVar9 = local_c;
        if (local_c[(int)local_20] < (float)_DAT_632fa230) {
          pfVar9 = local_10;
        }
        for (; local_24 < 0x30; local_24 = local_24 + 3) {
          *pfVar20 = pfVar9[local_24] * *pfVar20;
          pfVar20 = pfVar20 + 1;
        }
        local_20 = (float *)((int)local_20 + 3);
      } while ((int)local_20 < 0x30);
    }
    param_3 = (float *)((int)param_3 + 1);
  } while ((int)param_3 < 3);
  param_3 = (float *)0xbf800000;
  local_40 = (float *)0x3f800000;
  pfVar20 = (float *)&DAT_632fa200;
  do {
    local_8 = (float *)0x0;
    local_1c = 0.0;
    FUN_632f1b10(*pfVar20,(int)pfVar20[1],(float *)&local_8,&local_1c,(int *)&local_20,&local_24,
                 (int)param_1,(int)param_2,(float *)((int)*pfVar20 * 0x40 + local_14),
                 (float *)((int)pfVar20[1] * 0x40 + local_14),(int)local_18);
    pfVar9 = local_2c;
    if ((float)_DAT_632fa230 <= local_c[(int)local_20]) {
      pfVar9 = pfVar13;
    }
    pfVar9 = pfVar9 + -(int)local_20;
    pfVar10 = local_2c;
    if ((float)_DAT_632fa230 <= local_c[local_24]) {
      pfVar10 = pfVar13;
    }
    pfVar10 = pfVar10 + -local_24;
    iVar12 = 0x30;
    pfVar15 = local_10;
    do {
      fVar3 = *pfVar9;
      fVar4 = *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar9 = pfVar9 + 1;
      iVar12 = iVar12 + -1;
      *pfVar15 = fVar3 + fVar4;
      pfVar15 = pfVar15 + 1;
    } while (iVar12 != 0);
    FUN_632f19b0(pfVar13,(float)local_10,(float *)pfVar20[2],(int)local_c,local_14,(int)local_34);
    FUN_632f19b0(pfVar13,(float)local_10,(float *)pfVar20[3],(int)local_c,local_14,(int)local_30);
    FUN_632f1b10(pfVar20[2],(int)pfVar20[3],(float *)&local_8,&local_1c,&local_44,&local_48,
                 (int)param_1,(int)param_2,local_34,local_30,(int)local_18);
    pfVar9 = local_2c;
    if ((float)_DAT_632fa230 <= local_c[local_44]) {
      pfVar9 = pfVar13;
    }
    pfVar9 = pfVar9 + -local_44;
    pfVar10 = local_2c;
    if ((float)_DAT_632fa230 <= local_c[local_48]) {
      pfVar10 = pfVar13;
    }
    iVar12 = 0x30;
    pfVar10 = pfVar10 + -local_48;
    pfVar15 = local_10;
    do {
      fVar3 = *pfVar9;
      pfVar9 = pfVar9 + 1;
      iVar12 = iVar12 + -1;
      *pfVar15 = *pfVar15 + fVar3 + *pfVar10;
      pfVar10 = pfVar10 + 1;
      pfVar15 = pfVar15 + 1;
    } while (iVar12 != 0);
    FUN_632f19b0(pfVar13,(float)local_10,(float *)pfVar20[4],(int)local_c,local_14,(int)local_34);
    FUN_632f19b0(pfVar13,(float)local_10,(float *)pfVar20[5],(int)local_c,local_14,(int)local_30);
    FUN_632f1b10(pfVar20[4],(int)pfVar20[5],(float *)&local_8,&local_1c,&local_4c,&local_50,
                 (int)param_1,(int)param_2,local_34,local_30,(int)local_18);
    local_8 = (float *)((float)local_8 * (float)local_8);
    if ((float)_DAT_632fa230 < (float)local_40 * (float)local_8 - local_1c * (float)param_3) {
      local_40 = (float *)local_1c;
      local_6c = local_20;
      local_68 = local_24;
      local_64 = local_44;
      local_60 = local_48;
      local_5c = local_4c;
      local_58 = local_50;
      param_3 = local_8;
    }
    pfVar20 = pfVar20 + 1;
  } while ((int)pfVar20 < 0x632fa20c);
  param_2 = (float *)&local_6c;
  param_1 = (float *)0x6;
  *param_4 = 0xffffffff;
  param_4[1] = 0xffffffff;
  param_4[2] = 0xffffffff;
  do {
    fVar3 = *param_2;
    uVar11 = ftol();
    iVar12 = (int)fVar3 + uVar11 * -3;
    if (local_c[(int)fVar3] < (float)_DAT_632fa230) {
      uVar11 = uVar11 + 0x10;
    }
    uVar5 = param_4[iVar12];
    if (uVar5 == 0xffffffff) {
      param_4[iVar12] = uVar11;
    }
    else if (((uVar11 ^ uVar5) & 0x10) == 0) {
      if ((int)uVar11 < (int)uVar5) {
        param_4[iVar12] = uVar11 * 0x10 + (uVar5 & 0xf);
      }
      else {
        param_4[iVar12] = (uVar11 & 0xf) + uVar5 * 0x10;
      }
    }
    else if ((uVar11 & 0xf) < (uVar5 & 0xf)) {
      param_4[iVar12] = uVar5 * 0x10 + (uVar11 & 0xf);
    }
    else {
      param_4[iVar12] = uVar11 * 0x10 + (uVar5 & 0xf);
    }
    param_2 = param_2 + 1;
    param_1 = (float *)((int)param_1 + -1);
  } while (param_1 != (float *)0x0);
  *(int *)(*(int *)(*(int *)((int)local_38 + -0x28) + 4) + -0x24 + (int)local_38) = local_54;
  return;
}


