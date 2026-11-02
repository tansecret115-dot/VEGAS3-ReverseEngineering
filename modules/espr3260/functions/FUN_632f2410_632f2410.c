/* Module: espr3260.dll
   Function: FUN_632f2410
   Address: 632f2410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_632f2410(void *this,int param_1,float *param_2,float *param_3,int param_4)

{
  float fVar1;
  bool bVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  uint uVar15;
  float *pfVar16;
  int iVar17;
  int *piVar18;
  float afStack_7c [9];
  int local_58 [3];
  void *local_4c;
  int local_48;
  float *local_44;
  float *local_40;
  int *local_3c;
  float *local_38;
  float *local_34;
  float local_30;
  int local_2c;
  float local_28;
  float *local_24;
  float *local_20;
  int local_1c;
  float *local_18;
  int local_14;
  float *local_10;
  float *local_c;
  float local_8;
  
  local_3c = (int *)((int)this + -0x28);
  iVar13 = *(int *)(*(int *)((int)this + -0x28) + 4);
  local_48 = *(int *)(iVar13 + -0x24 + (int)this);
  *(int *)(iVar13 + -0x24 + (int)this) = local_48 + -0xc0;
  local_c = *(float **)(*(int *)(*local_3c + 4) + -0x24 + (int)this);
  *(float **)(*(int *)(*local_3c + 4) + -0x24 + (int)this) = local_c + -0x30;
  local_24 = *(float **)(*(int *)(*local_3c + 4) + -0x24 + (int)this);
  *(float **)(*(int *)(*local_3c + 4) + -0x24 + (int)this) = local_24 + -0x10;
  local_44 = *(float **)(*(int *)(*local_3c + 4) + -0x24 + (int)this);
  *(float **)(*(int *)(*local_3c + 4) + -0x24 + (int)this) = local_44 + -0x10;
  local_34 = *(float **)(*(int *)(*local_3c + 4) + -0x24 + (int)this);
  *(float **)(*(int *)(*local_3c + 4) + -0x24 + (int)this) = local_34 + -0xc0;
  local_38 = *(float **)(*(int *)(*local_3c + 4) + -0x24 + (int)this);
  *(float **)(*(int *)(*local_3c + 4) + -0x24 + (int)this) = local_38 + -0x30;
  local_14 = *(int *)(*(int *)(*local_3c + 4) + -0x24 + (int)this);
  *(int *)(*(int *)(*local_3c + 4) + -0x24 + (int)this) = local_14 + -0xc00;
  local_18 = *(float **)(*(int *)(*local_3c + 4) + -0x24 + (int)this);
  iVar13 = 0x30;
  pfVar12 = local_24;
  do {
    fVar3 = *(float *)((param_1 - (int)local_24) + (int)pfVar12);
    if (fVar3 < (float)_DAT_632fa230) {
      *(undefined4 *)(((int)local_c - (int)local_24) + (int)pfVar12) = 0xbf800000;
      *pfVar12 = 1.0;
      fVar3 = -fVar3;
    }
    else {
      *(undefined4 *)(((int)local_c - (int)local_24) + (int)pfVar12) = 0x3f800000;
      *pfVar12 = -1.0;
    }
    *(float *)((param_1 - (int)local_24) + (int)pfVar12) = fVar3;
    *(float *)(((int)param_2 - (int)local_24) + (int)pfVar12) = fVar3;
    pfVar12 = pfVar12 + 1;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  iVar13 = 0;
  local_10 = param_2;
  local_30 = 0.0;
  local_4c = this;
  do {
    iVar17 = 0;
    fVar3 = local_30;
    do {
      fVar1 = *local_10;
      iVar8 = iVar13 + 3;
      iVar9 = iVar13;
      if (iVar8 < 0x30) {
        pfVar12 = param_2 + iVar8;
        do {
          if (fVar1 < *pfVar12) {
            fVar1 = *pfVar12;
            iVar9 = iVar8;
          }
          iVar8 = iVar8 + 3;
          pfVar12 = pfVar12 + 3;
          fVar3 = local_30;
        } while (iVar8 < 0x30);
      }
      iVar8 = iVar17 + (int)fVar3;
      iVar17 = iVar17 + 1;
      param_2[iVar9] = -1.0;
      afStack_7c[iVar8] = (float)iVar9;
    } while (iVar17 < 3);
    local_30 = (float)((int)fVar3 + 3);
    iVar13 = iVar13 + 1;
    local_10 = local_10 + 1;
  } while ((int)local_30 < 9);
  iVar13 = 0;
  local_10 = param_2;
  do {
    iVar17 = iVar13 + 3;
    local_30 = 4.2039e-45;
    do {
      local_8 = *local_10;
      iVar8 = iVar13;
      if (iVar17 < 0x30) {
        pfVar12 = param_2 + iVar17;
        iVar9 = iVar17;
        do {
          if (local_8 < *pfVar12) {
            local_8 = *pfVar12;
            iVar8 = iVar9;
          }
          iVar9 = iVar9 + 3;
          pfVar12 = pfVar12 + 3;
        } while (iVar9 < 0x30);
      }
      param_2[iVar8] = -1.0;
      local_30 = (float)((int)local_30 + -1);
    } while (local_30 != 0.0);
    iVar13 = iVar13 + 1;
    local_10 = local_10 + 1;
  } while (iVar13 < 3);
  iVar13 = 0x30;
  local_40 = local_38 + 0x60;
  do {
    pfVar12 = local_38;
    *pfVar12 = 0.0;
    *local_40 = 0.0;
    local_10 = pfVar12 + 1;
    local_40 = local_40 + 1;
    iVar13 = iVar13 + -1;
    local_38 = local_10;
  } while (iVar13 != 0);
  iVar13 = 0x30;
  pfVar7 = local_10;
  do {
    fVar3 = *(float *)(((int)param_3 - (int)local_10) + (int)pfVar7);
    *pfVar7 = fVar3;
    *(float *)(((int)local_40 - (int)local_10) + (int)pfVar7) = -fVar3;
    pfVar7 = pfVar7 + 1;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  iVar13 = 0x10;
  pfVar7 = local_10;
  pfVar5 = (float *)(local_14 + 0x3c);
  pfVar11 = (float *)(local_14 + 0xbc);
  fVar3 = _DAT_632fa220;
  do {
    fVar3 = *pfVar7 * *pfVar7 + fVar3;
    iVar13 = iVar13 + -1;
    *pfVar11 = fVar3 * _DAT_632fa23c;
    fVar3 = pfVar7[1] * pfVar7[1] + fVar3;
    *(float *)((int)pfVar5 + ((local_14 + 0x7c) - (local_14 + 0x3c))) = fVar3 * _DAT_632fa23c;
    fVar3 = pfVar7[2] * pfVar7[2] + fVar3;
    *pfVar5 = fVar3 * _DAT_632fa23c;
    pfVar7 = pfVar7 + 3;
    pfVar5 = pfVar5 + -1;
    pfVar11 = pfVar11 + -1;
  } while (iVar13 != 0);
  param_3 = pfVar12 + 2;
  local_20 = local_18 + 0x1ff;
  local_30 = 1.4013e-45;
  do {
    pfVar7 = local_20 + -0x100;
    pfVar5 = param_3;
    pfVar11 = local_10;
    pfVar6 = local_20;
    fVar3 = _DAT_632fa220;
    if ((int)local_30 < 0x10) {
      iVar13 = 0x10 - (int)local_30;
      pfVar4 = param_3;
      pfVar10 = local_10;
      pfVar14 = local_20;
      pfVar16 = pfVar7;
      do {
        fVar3 = *pfVar4 * *pfVar10 + fVar3;
        pfVar11 = pfVar10 + 3;
        pfVar5 = pfVar4 + 3;
        pfVar7 = pfVar16 + -0x11;
        *pfVar14 = fVar3;
        pfVar6 = pfVar14 + -0x11;
        iVar13 = iVar13 + -1;
        fVar3 = pfVar4[1] * pfVar10[1] + fVar3;
        *pfVar16 = fVar3;
        fVar3 = pfVar4[2] * pfVar10[2] + fVar3;
        pfVar14[0xf0] = fVar3;
        pfVar4 = pfVar5;
        pfVar10 = pfVar11;
        pfVar14 = pfVar6;
        pfVar16 = pfVar7;
      } while (iVar13 != 0);
    }
    local_20 = local_20 + -0x10;
    fVar3 = *pfVar5 * *pfVar11 + fVar3;
    param_3 = param_3 + 3;
    *pfVar6 = fVar3;
    *pfVar7 = pfVar11[1] * pfVar5[1] + fVar3;
    bVar2 = (int)local_30 < 0x10;
    local_30 = (float)((int)local_30 + 1);
  } while (bVar2);
  local_20 = local_18 + 0x2ff;
  iVar13 = 1;
  do {
    pfVar12 = pfVar12 + 3;
    pfVar7 = pfVar12;
    pfVar5 = local_10;
    pfVar11 = local_20;
    fVar3 = _DAT_632fa220;
    if (iVar13 < 0x10) {
      iVar17 = 0x10 - iVar13;
      pfVar6 = pfVar12;
      pfVar4 = local_10;
      pfVar10 = local_20;
      do {
        fVar3 = *pfVar6 * *pfVar4 + fVar3;
        pfVar5 = pfVar4 + 3;
        pfVar7 = pfVar6 + 3;
        *pfVar10 = fVar3;
        pfVar11 = pfVar10 + -0x11;
        iVar17 = iVar17 + -1;
        fVar3 = pfVar6[1] * pfVar4[1] + fVar3;
        pfVar10[-0x101] = fVar3;
        fVar3 = pfVar6[2] * pfVar4[2] + fVar3;
        pfVar10[-0x201] = fVar3;
        pfVar6 = pfVar7;
        pfVar4 = pfVar5;
        pfVar10 = pfVar11;
      } while (iVar17 != 0);
    }
    local_20 = local_20 + -1;
    *pfVar11 = *pfVar7 * *pfVar5 + fVar3;
    bVar2 = iVar13 < 0x10;
    iVar13 = iVar13 + 1;
  } while (bVar2);
  param_3 = local_c;
  pfVar12 = local_18;
  iVar13 = 0;
  do {
    local_38 = (float *)(iVar13 + 1);
    local_2c = (int)local_38 % 3;
    if (iVar13 < 0x30) {
      uVar15 = (0x32U - iVar13) / 3;
      pfVar7 = param_3;
      do {
        local_1c = local_2c;
        pfVar5 = local_c;
        if (*pfVar7 < (float)_DAT_632fa230) {
          pfVar5 = local_24;
        }
        for (; local_1c < 0x30; local_1c = local_1c + 3) {
          *pfVar12 = pfVar5[local_1c] * *pfVar12;
          pfVar12 = pfVar12 + 1;
        }
        pfVar7 = pfVar7 + 3;
        uVar15 = uVar15 - 1;
      } while (uVar15 != 0);
    }
    param_3 = param_3 + 1;
    iVar13 = (int)local_38;
  } while ((int)local_38 < 3);
  local_30 = -1.0;
  local_20 = (float *)0x3f800000;
  iVar13 = 0;
  do {
    param_3 = (float *)0x0;
    do {
      iVar17 = *(int *)((int)&DAT_632fa200 + iVar13);
      iVar8 = ftol();
      local_8 = *(float *)(param_1 + iVar8 * 4);
      local_38 = (float *)iVar8;
      iVar9 = ftol();
      pfVar12 = local_44;
      local_28 = *(float *)(local_14 + (iVar17 * 0x10 - iVar9) * 4);
      pfVar7 = local_40;
      if ((float)_DAT_632fa230 <= local_c[iVar8]) {
        pfVar7 = local_10;
      }
      pfVar7 = pfVar7 + -iVar8;
      iVar17 = 0x30;
      pfVar5 = local_24;
      do {
        fVar3 = *pfVar7;
        pfVar7 = pfVar7 + 1;
        *pfVar5 = fVar3;
        pfVar5 = pfVar5 + 1;
        iVar17 = iVar17 + -1;
      } while (iVar17 != 0);
      FUN_632f19b0(local_10,(float)local_24,*(float **)((int)&DAT_632fa204 + iVar13),(int)local_c,
                   local_14,(int)local_44);
      FUN_632f19b0(local_10,(float)local_24,*(float **)((int)&DAT_632fa208 + iVar13),(int)local_c,
                   local_14,(int)local_34);
      FUN_632f1b10(*(float *)((int)&DAT_632fa204 + iVar13),*(int *)((int)&DAT_632fa208 + iVar13),
                   &local_8,&local_28,&local_1c,&local_2c,param_1,(int)param_2,pfVar12,local_34,
                   (int)local_18);
      local_8 = local_8 * local_8;
      if ((float)_DAT_632fa230 < (float)local_20 * local_8 - local_28 * local_30) {
        local_30 = local_8;
        local_20 = (float *)local_28;
        local_58[0] = (int)local_38;
        local_58[1] = local_1c;
        local_58[2] = local_2c;
      }
      param_3 = (float *)((int)param_3 + 1);
    } while ((int)param_3 < 3);
    iVar13 = iVar13 + 4;
  } while (iVar13 < 0xc);
  piVar18 = local_58;
  iVar13 = 3;
  do {
    iVar17 = *piVar18;
    iVar9 = ftol();
    iVar8 = iVar9 * -3;
    if (local_c[iVar17] < (float)_DAT_632fa230) {
      iVar9 = iVar9 + 0x10;
    }
    piVar18 = piVar18 + 1;
    iVar13 = iVar13 + -1;
    *(int *)(param_4 + (iVar17 + iVar8) * 4) = iVar9;
  } while (iVar13 != 0);
  *(int *)(*(int *)(*local_3c + 4) + -0x24 + (int)local_4c) = local_48;
  return;
}


