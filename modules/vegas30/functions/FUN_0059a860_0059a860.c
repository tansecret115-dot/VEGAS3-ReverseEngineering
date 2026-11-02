/* Module: vegas30.exe
   Function: FUN_0059a860
   Address: 0059a860
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059a860(uint *param_1,uint *param_2,float *param_3,int param_4,int param_5,double param_6,
                 int param_7)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_38 = (double)*(longlong *)(param_1 + 6);
  uVar3 = param_1[8];
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  uVar4 = *param_1;
  local_40 = 0.0;
  uVar5 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  local_20 = 0.0;
  if ((uVar5 & 4) == 0) {
    if (uVar4 == 0) {
      fVar1 = (float)param_1[3];
      local_48 = 0.0;
    }
    else {
      fVar1 = (float)param_1[2];
      local_48 = (double)(((float)param_1[3] - (float)param_1[2]) / (float)(int)uVar3);
    }
    dVar2 = _DAT_006106d0;
    if (0 < (int)uVar4) {
      local_38 = (double)(int)uVar3 - local_38;
      fVar1 = (float)param_1[3];
      local_48 = -local_48;
      dVar2 = _DAT_00610fe0;
    }
    fVar9 = (float10)dVar2;
    if (1 < (int)uVar5) {
      fVar10 = (float10)local_38;
      fVar12 = (float10)local_38;
      fVar11 = (float10)local_38;
      local_40 = 2.0;
      local_38 = (double)(fVar12 * fVar11);
      fVar9 = (fVar9 + fVar10) * (fVar9 + fVar10) - fVar12 * fVar11;
      local_48 = local_48 / (double)(int)uVar3;
    }
    fVar9 = fVar9 * (float10)local_48;
    local_40 = local_48 * local_40;
    fVar10 = (float10)local_48 * (float10)local_38;
  }
  else {
    fVar1 = (float)param_1[2];
    fVar9 = (float10)_DAT_006106d0 / (float10)(int)uVar3;
    fVar10 = (float10)(float)param_1[3] - (float10)(float)param_1[2];
    fVar11 = fVar9 * (float10)*(longlong *)(param_1 + 6);
    fVar12 = fVar11 * fVar11;
    if ((int)uVar4 < 1) {
      fVar13 = ((fVar11 * (float10)_DAT_006129b0 - (float10)_DAT_006129a8) * (float10)_DAT_00610f30
               - fVar11 * (float10)_DAT_006129b0) + (float10)_DAT_006129a8;
      fVar15 = (((fVar12 * (float10)_DAT_006129a8 - fVar11 * (float10)_DAT_006129a8) +
                (float10)_DAT_006106d0) * (float10)_DAT_00610f30 - fVar12 * (float10)_DAT_006129a8)
               + fVar11 * (float10)_DAT_006129a8;
      dVar2 = (double)(fVar12 * fVar11 + fVar12 * fVar11);
      fVar12 = ((((float10)dVar2 - fVar12 * (float10)_DAT_00610f30) + fVar11) *
                (float10)_DAT_00610f30 - (float10)dVar2) + fVar12 * (float10)_DAT_00610f30;
      dVar2 = _DAT_006129a0;
    }
    else {
      fVar13 = (float10)_DAT_006129a8 - fVar11 * (float10)_DAT_006129b0;
      fVar15 = fVar11 * (float10)_DAT_006129a8 - fVar12 * (float10)_DAT_006129a8;
      fVar12 = ((float10)_DAT_00610f30 - (fVar11 + fVar11)) * fVar12;
      dVar2 = _DAT_006129b8;
    }
    local_18 = (double)(fVar15 * fVar10);
    local_20 = (double)(fVar10 * (float10)dVar2);
    local_38 = (double)(fVar12 * fVar10);
    local_40 = (double)(fVar13 * fVar10);
    local_20 = (double)(ABS(fVar9 * fVar9 * fVar9) * (float10)local_20);
    local_40 = (double)(ABS(fVar9 * fVar9) * (float10)local_40);
    fVar9 = ABS(fVar9) * (float10)local_18;
    fVar10 = (float10)local_38;
  }
  fVar10 = fVar10 + (float10)fVar1;
  local_38 = (double)*(longlong *)(param_2 + 6);
  uVar3 = param_2[8];
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  uVar4 = *param_2;
  local_48 = 0.0;
  uVar5 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  local_28 = 0.0;
  if ((uVar5 & 4) == 0) {
    if (uVar4 == 0) {
      fVar1 = (float)param_2[3];
      local_30 = 0.0;
    }
    else {
      fVar1 = (float)param_2[2];
      local_30 = (double)(((float)param_2[3] - (float)param_2[2]) / (float)(int)uVar3);
    }
    dVar2 = _DAT_006106d0;
    if (0 < (int)uVar4) {
      local_38 = (double)(int)uVar3 - local_38;
      fVar1 = (float)param_2[3];
      local_30 = -local_30;
      dVar2 = _DAT_00610fe0;
    }
    fVar11 = (float10)dVar2;
    if (1 < (int)uVar5) {
      fVar12 = (float10)local_38;
      fVar13 = (float10)local_38;
      fVar15 = (float10)local_38;
      local_48 = 2.0;
      local_38 = (double)(fVar13 * fVar15);
      fVar11 = (fVar11 + fVar12) * (fVar11 + fVar12) - fVar13 * fVar15;
      local_30 = local_30 / (double)(int)uVar3;
    }
    fVar11 = fVar11 * (float10)local_30;
    local_48 = local_30 * local_48;
    fVar12 = (float10)local_30 * (float10)local_38;
  }
  else {
    fVar1 = (float)param_2[2];
    fVar11 = (float10)_DAT_006106d0 / (float10)(int)uVar3;
    fVar12 = (float10)(float)param_2[3] - (float10)(float)param_2[2];
    fVar15 = fVar11 * (float10)*(longlong *)(param_2 + 6);
    fVar13 = fVar15 * fVar15;
    if ((int)uVar4 < 1) {
      fVar14 = ((fVar15 * (float10)_DAT_006129b0 - (float10)_DAT_006129a8) * (float10)_DAT_00610f30
               - fVar15 * (float10)_DAT_006129b0) + (float10)_DAT_006129a8;
      fVar16 = (((fVar13 * (float10)_DAT_006129a8 -
                 (float10)(double)(fVar15 * (float10)_DAT_006129a8)) + (float10)_DAT_006106d0) *
                (float10)_DAT_00610f30 - fVar13 * (float10)_DAT_006129a8) +
               (float10)(double)(fVar15 * (float10)_DAT_006129a8);
      dVar2 = (double)(fVar13 * fVar15 + fVar13 * fVar15);
      fVar13 = ((((float10)dVar2 - fVar13 * (float10)_DAT_00610f30) + fVar15) *
                (float10)_DAT_00610f30 - (float10)dVar2) + fVar13 * (float10)_DAT_00610f30;
      dVar2 = _DAT_006129a0;
    }
    else {
      fVar14 = (float10)_DAT_006129a8 - fVar15 * (float10)_DAT_006129b0;
      fVar16 = fVar15 * (float10)_DAT_006129a8 - fVar13 * (float10)_DAT_006129a8;
      fVar13 = ((float10)_DAT_00610f30 - (fVar15 + fVar15)) * fVar13;
      dVar2 = _DAT_006129b8;
    }
    local_28 = (double)(fVar12 * (float10)dVar2);
    local_30 = (double)(fVar16 * fVar12);
    local_38 = (double)(fVar13 * fVar12);
    local_48 = (double)(fVar14 * fVar12);
    local_28 = (double)(ABS(fVar11 * fVar11 * fVar11) * (float10)local_28);
    local_48 = (double)(ABS(fVar11 * fVar11) * (float10)local_48);
    fVar11 = ABS(fVar11) * (float10)local_30;
    fVar12 = (float10)local_38;
  }
  fVar12 = fVar12 + (float10)fVar1;
  if ((local_20 == _DAT_00610fd8) && (local_28 == _DAT_00610fd8)) {
    if (param_7 == 0) {
      if (0 < param_5) {
        iVar8 = (int)param_3 - param_4;
        pfVar6 = (float *)(param_4 + 4);
        do {
          fVar1 = *param_3;
          pfVar6[-1] = (float)((float10)fVar1 * fVar10);
          param_3 = param_3 + 2;
          fVar15 = (float10)fVar1 * fVar12;
          *pfVar6 = (float)fVar15;
          param_5 = param_5 + -1;
          *pfVar6 = (float)((float10)*(float *)((int)pfVar6 + iVar8) * (float10)param_6 + fVar15);
          fVar12 = fVar11 + fVar12;
          fVar11 = fVar11 + (float10)local_48;
          fVar10 = fVar9 + fVar10;
          fVar9 = fVar9 + (float10)local_40;
          pfVar6 = pfVar6 + 2;
        } while (param_5 != 0);
        return;
      }
    }
    else if (0 < param_5) {
      pfVar6 = (float *)(param_4 + 4);
      pfVar7 = param_3;
      do {
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 2;
        param_5 = param_5 + -1;
        pfVar6[-1] = (float)((float10)fVar1 * fVar10 + (float10)pfVar6[-1]);
        fVar15 = (float10)fVar1 * fVar12 + (float10)*pfVar6;
        *pfVar6 = (float)fVar15;
        *pfVar6 = (float)((float10)*(float *)((int)param_3 + (-8 - param_4) + (int)(pfVar6 + 2)) *
                          (float10)param_6 + fVar15);
        fVar12 = fVar11 + fVar12;
        fVar11 = fVar11 + (float10)local_48;
        fVar10 = fVar9 + fVar10;
        fVar9 = fVar9 + (float10)local_40;
        pfVar6 = pfVar6 + 2;
      } while (param_5 != 0);
      return;
    }
  }
  else if (param_7 == 0) {
    if (0 < param_5) {
      fVar15 = (float10)local_48;
      fVar13 = (float10)local_40;
      iVar8 = (int)param_3 - param_4;
      pfVar6 = (float *)(param_4 + 4);
      do {
        fVar1 = *param_3;
        pfVar6[-1] = (float)((float10)fVar1 * fVar10);
        param_3 = param_3 + 2;
        param_5 = param_5 + -1;
        fVar1 = (float)((float10)fVar1 * fVar12);
        *pfVar6 = fVar1;
        *pfVar6 = *(float *)((int)pfVar6 + iVar8) * (float)param_6 + fVar1;
        fVar12 = fVar11 + fVar12;
        fVar11 = fVar11 + fVar15;
        fVar15 = fVar15 + (float10)local_28;
        fVar10 = fVar9 + fVar10;
        fVar9 = fVar9 + fVar13;
        fVar13 = fVar13 + (float10)local_20;
        pfVar6 = pfVar6 + 2;
      } while (param_5 != 0);
    }
  }
  else if (0 < param_5) {
    fVar15 = (float10)local_48;
    fVar13 = (float10)local_40;
    iVar8 = (int)param_3 - param_4;
    pfVar6 = (float *)(param_4 + 4);
    do {
      fVar1 = *param_3;
      param_3 = param_3 + 2;
      param_5 = param_5 + -1;
      pfVar6[-1] = (float)((float10)fVar1 * fVar10 + (float10)pfVar6[-1]);
      fVar16 = (float10)fVar1 * fVar12 + (float10)*pfVar6;
      *pfVar6 = (float)fVar16;
      *pfVar6 = (float)((float10)*(float *)((int)pfVar6 + iVar8) * (float10)param_6 + fVar16);
      fVar12 = fVar11 + fVar12;
      fVar11 = fVar11 + fVar15;
      fVar15 = fVar15 + (float10)local_28;
      fVar10 = fVar9 + fVar10;
      fVar9 = fVar9 + fVar13;
      fVar13 = fVar13 + (float10)local_20;
      pfVar6 = pfVar6 + 2;
    } while (param_5 != 0);
    return;
  }
  return;
}


