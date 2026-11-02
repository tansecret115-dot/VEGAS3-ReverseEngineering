/* Module: vegas30.exe
   Function: FUN_0059b260
   Address: 0059b260
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059b260(uint *param_1,int param_2,float *param_3,int param_4,int param_5,double param_6,
                 int param_7,double param_8)

{
  float fVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  uint uVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float10 fVar17;
  float10 fVar18;
  float local_48;
  undefined4 uStack_44;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  double local_10;
  
  fVar13 = (float10)_DAT_00610fd8;
  if (_DAT_006106d0 != param_6) {
    if (fVar13 == (float10)param_6) {
      fVar13 = (float10)_DAT_00629a40;
    }
    else {
      fVar13 = (float10)log2((float10)param_6);
      fVar13 = (float10)0.3010299956639812 * fVar13 * (float10)_DAT_00613278;
    }
  }
  local_48 = (float)(fVar13 + (float10)param_8);
  bVar4 = _DAT_00610f20 <= (float)param_1[4];
  param_1[2] = (uint)local_48;
  param_1[3] = (uint)local_48;
  if (bVar4) {
    if (_DAT_00610f20 < (float)param_1[4]) {
      fVar13 = (float10)_DAT_00619ab0 - (float10)(float)param_1[4];
      if ((float10)_DAT_006106d0 == fVar13) {
        fVar13 = (float10)_DAT_00610fd8;
      }
      else if ((float10)_DAT_00610fd8 == fVar13) {
        fVar13 = (float10)_DAT_00629a40;
      }
      else {
        fVar13 = (float10)log2(fVar13);
        fVar13 = (float10)0.3010299956639812 * fVar13 * (float10)_DAT_00613278;
      }
      goto LAB_0059b325;
    }
  }
  else {
    fVar13 = (float10)(float)param_1[4] * (float10)param_8;
LAB_0059b325:
    param_1[2] = (uint)(float)(fVar13 + (float10)local_48);
  }
  if (_DAT_00610f20 <= (float)param_1[5]) {
    if (_DAT_00610f20 < (float)param_1[5]) {
      fVar13 = (float10)_DAT_00619ab0 - (float10)(float)param_1[5];
      if ((float10)_DAT_006106d0 == fVar13) {
        fVar13 = (float10)_DAT_00610fd8;
      }
      else if ((float10)_DAT_00610fd8 == fVar13) {
        fVar13 = (float10)_DAT_00629a40;
      }
      else {
        fVar13 = (float10)log2(fVar13);
        fVar13 = (float10)0.3010299956639812 * fVar13 * (float10)_DAT_00613278;
      }
      goto LAB_0059b39b;
    }
  }
  else {
    fVar13 = (float10)(float)param_1[5] * (float10)param_8;
LAB_0059b39b:
    param_1[3] = (uint)(float)(fVar13 + (float10)local_48);
  }
  fVar1 = (float)param_1[2];
  local_10 = (double)fVar1;
  if ((float)_DAT_00610fd8 == fVar1) {
    fVar13 = (float10)_DAT_006106d0;
  }
  else if ((float)_DAT_00629a40 < fVar1) {
    fVar13 = (float10)_CIpow();
  }
  else {
    fVar13 = (float10)_DAT_00610fd8;
  }
  local_40 = (double)CONCAT44(local_40._4_4_,(float)fVar13);
  fVar1 = (float)param_1[3];
  local_10 = (double)fVar1;
  fVar5 = (float)_DAT_00610fd8;
  param_1[2] = (uint)(float)fVar13;
  if (fVar5 == fVar1) {
    fVar13 = (float10)_DAT_006106d0;
  }
  else if ((float)_DAT_00629a40 < fVar1) {
    fVar13 = (float10)_CIpow();
  }
  else {
    fVar13 = (float10)_DAT_00610fd8;
  }
  fVar1 = (float)fVar13;
  local_38 = (double)CONCAT44(local_38._4_4_,fVar1);
  uVar2 = param_1[8];
  param_1[3] = (uint)(float)fVar13;
  dVar7 = (double)*(longlong *)(param_1 + 6);
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar3 = *param_1;
  local_30 = 0.0;
  uVar9 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  local_20 = 1.0;
  local_18 = 0.0;
  fVar5 = local_40._0_4_;
  if ((uVar9 & 4) == 0) {
    dVar6 = _DAT_00610fd8;
    fVar5 = fVar1;
    if (uVar3 != 0) {
      dVar6 = ((double)fVar1 - (double)local_40._0_4_) / (double)(int)uVar2;
      fVar5 = local_40._0_4_;
    }
    if (0 < (int)uVar3) {
      dVar7 = (double)(int)uVar2 - dVar7;
      dVar6 = -dVar6;
      local_20 = _DAT_00610fe0;
      fVar5 = fVar1;
    }
    local_28 = (double)fVar5;
    if (1 < (int)uVar9) {
      local_20 = dVar7 + local_20;
      dVar7 = dVar7 * dVar7;
      local_30 = 2.0;
      local_20 = local_20 * local_20 - dVar7;
      dVar6 = dVar6 / (double)(int)uVar2;
    }
    local_20 = dVar6 * local_20;
    local_30 = dVar6 * local_30;
    local_28 = dVar6 * dVar7 + local_28;
  }
  else {
    dVar6 = _DAT_006106d0 / (double)(int)uVar2;
    local_38 = (double)(fVar1 - local_40._0_4_);
    dVar7 = dVar7 * dVar6;
    dVar8 = dVar7 * dVar7;
    if ((int)uVar3 < 1) {
      local_30 = ((dVar7 * _DAT_006129b0 - _DAT_006129a8) * _DAT_00610f30 - dVar7 * _DAT_006129b0) +
                 _DAT_006129a8;
      local_20 = (((dVar8 * _DAT_006129a8 - dVar7 * _DAT_006129a8) + _DAT_006106d0) * _DAT_00610f30
                 - dVar8 * _DAT_006129a8) + dVar7 * _DAT_006129a8;
      local_40 = dVar8 * dVar7 + dVar8 * dVar7;
      dVar8 = (((local_40 - dVar8 * _DAT_00610f30) + dVar7) * _DAT_00610f30 - local_40) +
              dVar8 * _DAT_00610f30;
      local_18 = _DAT_006129a0;
    }
    else {
      local_30 = _DAT_006129a8 - dVar7 * _DAT_006129b0;
      local_20 = dVar7 * _DAT_006129a8 - dVar8 * _DAT_006129a8;
      dVar8 = (_DAT_00610f30 - (dVar7 + dVar7)) * dVar8;
      local_18 = _DAT_006129b8;
    }
    local_18 = local_38 * local_18;
    local_20 = local_20 * local_38;
    local_30 = local_30 * local_38;
    local_18 = ABS(dVar6 * dVar6 * dVar6) * local_18;
    local_30 = ABS(dVar6 * dVar6) * local_30;
    local_20 = ABS(dVar6) * local_20;
    local_28 = dVar8 * local_38 + (double)fVar5;
  }
  bVar4 = _DAT_00610f20 <= *(float *)(param_2 + 0x10);
  *(float *)(param_2 + 8) = local_48;
  *(float *)(param_2 + 0xc) = local_48;
  if (bVar4) {
    if ((float10)_DAT_00610f20 < (float10)*(float *)(param_2 + 0x10)) {
      fVar13 = (float10)local_48 - (float10)*(float *)(param_2 + 0x10) * (float10)param_8;
      goto LAB_0059b712;
    }
  }
  else {
    fVar13 = (float10)*(float *)(param_2 + 0x10) + (float10)_DAT_00619ab0;
    if ((float10)_DAT_006106d0 == fVar13) {
      fVar13 = (float10)_DAT_00610fd8 + (float10)local_48;
    }
    else if ((float10)_DAT_00610fd8 == fVar13) {
      fVar13 = (float10)_DAT_00629a40 + (float10)local_48;
    }
    else {
      fVar13 = (float10)log2(fVar13);
      fVar13 = (float10)0.3010299956639812 * fVar13 * (float10)_DAT_00613278 + (float10)local_48;
    }
LAB_0059b712:
    *(float *)(param_2 + 8) = (float)fVar13;
  }
  if (_DAT_00610f20 <= *(float *)(param_2 + 0x14)) {
    if ((float10)*(float *)(param_2 + 0x14) <= (float10)_DAT_00610f20) goto LAB_0059b794;
    fVar13 = (float10)local_48 - (float10)*(float *)(param_2 + 0x14) * (float10)param_8;
  }
  else {
    fVar13 = (float10)*(float *)(param_2 + 0x14) + (float10)_DAT_00619ab0;
    if ((float10)_DAT_006106d0 == fVar13) {
      fVar13 = (float10)_DAT_00610fd8 + (float10)local_48;
    }
    else if ((float10)_DAT_00610fd8 == fVar13) {
      fVar13 = (float10)_DAT_00629a40 + (float10)local_48;
    }
    else {
      fVar13 = (float10)log2(fVar13);
      fVar13 = (float10)0.3010299956639812 * fVar13 * (float10)_DAT_00613278 + (float10)local_48;
    }
  }
  *(float *)(param_2 + 0xc) = (float)fVar13;
LAB_0059b794:
  fVar1 = *(float *)(param_2 + 8);
  local_10 = (double)fVar1;
  if ((float)_DAT_00610fd8 == fVar1) {
    fVar13 = (float10)_DAT_006106d0;
  }
  else if ((float)_DAT_00629a40 < fVar1) {
    fVar13 = (float10)_CIpow();
  }
  else {
    fVar13 = (float10)_DAT_00610fd8;
  }
  *(float *)(param_2 + 8) = (float)fVar13;
  fVar1 = *(float *)(param_2 + 0xc);
  local_10 = (double)fVar1;
  if ((float)_DAT_00610fd8 == fVar1) {
    fVar13 = (float10)_DAT_006106d0;
  }
  else if ((float)_DAT_00629a40 < fVar1) {
    fVar13 = (float10)_CIpow();
  }
  else {
    fVar13 = (float10)_DAT_00610fd8;
  }
  *(float *)(param_2 + 0xc) = (float)fVar13;
  FUN_0059bdf0(param_2,&local_40,&local_38,&local_48,&local_10);
  if (param_7 == 0) {
    if (0 < param_5) {
      fVar13 = (float10)local_10;
      fVar14 = (float10)local_38;
      fVar15 = (float10)local_40;
      fVar16 = (float10)local_30;
      fVar17 = (float10)local_28;
      fVar18 = (float10)local_20;
      iVar12 = (int)param_3 - param_4;
      pfVar10 = (float *)(param_4 + 4);
      do {
        pfVar10[-1] = (float)((float10)*param_3 * fVar17);
        param_3 = param_3 + 2;
        fVar17 = fVar18 + fVar17;
        param_5 = param_5 + -1;
        fVar18 = fVar18 + fVar16;
        fVar16 = fVar16 + (float10)local_18;
        *pfVar10 = (float)((float10)*(float *)((int)pfVar10 + iVar12) * fVar13);
        fVar13 = fVar15 + fVar13;
        fVar15 = fVar15 + fVar14;
        fVar14 = fVar14 + (float10)(double)CONCAT44(uStack_44,local_48);
        pfVar10 = pfVar10 + 2;
      } while (param_5 != 0);
    }
  }
  else if (0 < param_5) {
    fVar13 = (float10)local_28;
    fVar14 = (float10)local_10;
    fVar15 = (float10)local_20;
    fVar16 = (float10)local_30;
    fVar17 = (float10)local_40;
    fVar18 = (float10)local_38;
    pfVar10 = (float *)(param_4 + 4);
    pfVar11 = param_3;
    do {
      fVar1 = *pfVar11;
      pfVar11 = pfVar11 + 2;
      param_5 = param_5 + -1;
      pfVar10[-1] = (float)((float10)fVar1 * fVar13 + (float10)pfVar10[-1]);
      fVar13 = fVar15 + fVar13;
      fVar15 = fVar15 + fVar16;
      fVar16 = fVar16 + (float10)local_18;
      *pfVar10 = (float)((float10)*(float *)((int)param_3 + (-8 - param_4) + (int)(pfVar10 + 2)) *
                         fVar14 + (float10)*pfVar10);
      fVar14 = fVar17 + fVar14;
      fVar17 = fVar17 + fVar18;
      fVar18 = fVar18 + (float10)(double)CONCAT44(uStack_44,local_48);
      pfVar10 = pfVar10 + 2;
    } while (param_5 != 0);
    return;
  }
  return;
}


