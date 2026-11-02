/* Module: vegas30.exe
   Function: FUN_0059a1e0
   Address: 0059a1e0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059a1e0(uint *param_1,uint *param_2,int param_3,float *param_4,int param_5,double param_6,
                 int param_7)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  double local_18;
  
  local_40 = (double)*(longlong *)(param_1 + 6);
  uVar3 = param_1[8];
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  uVar4 = *param_1;
  local_38 = 0.0;
  uVar5 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  local_20 = 0.0;
  if ((uVar5 & 4) == 0) {
    if (uVar4 == 0) {
      fVar1 = (float)param_1[3];
      local_30 = 0.0;
    }
    else {
      fVar1 = (float)param_1[2];
      local_30 = (double)(((float)param_1[3] - (float)param_1[2]) / (float)(int)uVar3);
    }
    dVar2 = _DAT_006106d0;
    if (0 < (int)uVar4) {
      local_40 = (double)(int)uVar3 - local_40;
      fVar1 = (float)param_1[3];
      local_30 = -local_30;
      dVar2 = _DAT_00610fe0;
    }
    fVar7 = (float10)dVar2;
    if (1 < (int)uVar5) {
      fVar8 = (float10)local_40;
      fVar10 = (float10)local_40;
      fVar9 = (float10)local_40;
      local_38 = 2.0;
      local_40 = (double)(fVar10 * fVar9);
      fVar7 = (fVar7 + fVar8) * (fVar7 + fVar8) - fVar10 * fVar9;
      local_30 = local_30 / (double)(int)uVar3;
    }
    fVar7 = fVar7 * (float10)local_30;
    local_38 = local_30 * local_38;
    fVar8 = (float10)local_30 * (float10)local_40;
  }
  else {
    fVar1 = (float)param_1[2];
    fVar7 = (float10)_DAT_006106d0 / (float10)(int)uVar3;
    fVar8 = (float10)(float)param_1[3] - (float10)(float)param_1[2];
    fVar9 = fVar7 * (float10)*(longlong *)(param_1 + 6);
    fVar10 = fVar9 * fVar9;
    if ((int)uVar4 < 1) {
      fVar11 = ((fVar9 * (float10)_DAT_006129b0 - (float10)_DAT_006129a8) * (float10)_DAT_00610f30 -
               fVar9 * (float10)_DAT_006129b0) + (float10)_DAT_006129a8;
      fVar13 = (((fVar10 * (float10)_DAT_006129a8 - fVar9 * (float10)_DAT_006129a8) +
                (float10)_DAT_006106d0) * (float10)_DAT_00610f30 - fVar10 * (float10)_DAT_006129a8)
               + fVar9 * (float10)_DAT_006129a8;
      dVar2 = (double)(fVar10 * fVar9 + fVar10 * fVar9);
      fVar10 = ((((float10)dVar2 - fVar10 * (float10)_DAT_00610f30) + fVar9) *
                (float10)_DAT_00610f30 - (float10)dVar2) + fVar10 * (float10)_DAT_00610f30;
      dVar2 = _DAT_006129a0;
    }
    else {
      fVar11 = (float10)_DAT_006129a8 - fVar9 * (float10)_DAT_006129b0;
      fVar13 = fVar9 * (float10)_DAT_006129a8 - fVar10 * (float10)_DAT_006129a8;
      fVar10 = ((float10)_DAT_00610f30 - (fVar9 + fVar9)) * fVar10;
      dVar2 = _DAT_006129b8;
    }
    local_18 = (double)(fVar13 * fVar8);
    local_20 = (double)(fVar8 * (float10)dVar2);
    local_38 = (double)(fVar11 * fVar8);
    local_40 = (double)(fVar10 * fVar8);
    local_20 = (double)(ABS(fVar7 * fVar7 * fVar7) * (float10)local_20);
    local_38 = (double)(ABS(fVar7 * fVar7) * (float10)local_38);
    fVar7 = ABS(fVar7) * (float10)local_18;
    fVar8 = (float10)local_40;
  }
  fVar8 = fVar8 + (float10)fVar1;
  local_30 = (double)*(longlong *)(param_2 + 6);
  uVar3 = param_2[8];
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  uVar4 = *param_2;
  local_40 = 0.0;
  uVar5 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  local_28 = 0.0;
  if ((uVar5 & 4) == 0) {
    if (uVar4 == 0) {
      fVar1 = (float)param_2[3];
      local_48 = 0.0;
    }
    else {
      fVar1 = (float)param_2[2];
      local_48 = (double)(((float)param_2[3] - (float)param_2[2]) / (float)(int)uVar3);
    }
    dVar2 = _DAT_006106d0;
    if (0 < (int)uVar4) {
      local_30 = (double)(int)uVar3 - local_30;
      fVar1 = (float)param_2[3];
      local_48 = -local_48;
      dVar2 = _DAT_00610fe0;
    }
    fVar9 = (float10)dVar2;
    if (1 < (int)uVar5) {
      fVar10 = (float10)local_30;
      fVar11 = (float10)local_30;
      fVar13 = (float10)local_30;
      local_40 = 2.0;
      local_30 = (double)(fVar11 * fVar13);
      fVar9 = (fVar9 + fVar10) * (fVar9 + fVar10) - fVar11 * fVar13;
      local_48 = local_48 / (double)(int)uVar3;
    }
    fVar9 = fVar9 * (float10)local_48;
    local_40 = local_48 * local_40;
    fVar10 = (float10)local_48 * (float10)local_30;
  }
  else {
    fVar1 = (float)param_2[2];
    fVar9 = (float10)_DAT_006106d0 / (float10)(int)uVar3;
    fVar10 = (float10)(float)param_2[3] - (float10)(float)param_2[2];
    fVar13 = fVar9 * (float10)*(longlong *)(param_2 + 6);
    fVar11 = fVar13 * fVar13;
    if ((int)uVar4 < 1) {
      fVar12 = ((fVar13 * (float10)_DAT_006129b0 - (float10)_DAT_006129a8) * (float10)_DAT_00610f30
               - fVar13 * (float10)_DAT_006129b0) + (float10)_DAT_006129a8;
      fVar14 = (((fVar11 * (float10)_DAT_006129a8 -
                 (float10)(double)(fVar13 * (float10)_DAT_006129a8)) + (float10)_DAT_006106d0) *
                (float10)_DAT_00610f30 - fVar11 * (float10)_DAT_006129a8) +
               (float10)(double)(fVar13 * (float10)_DAT_006129a8);
      dVar2 = (double)(fVar11 * fVar13 + fVar11 * fVar13);
      fVar11 = ((((float10)dVar2 - fVar11 * (float10)_DAT_00610f30) + fVar13) *
                (float10)_DAT_00610f30 - (float10)dVar2) + fVar11 * (float10)_DAT_00610f30;
      dVar2 = _DAT_006129a0;
    }
    else {
      fVar12 = (float10)_DAT_006129a8 - fVar13 * (float10)_DAT_006129b0;
      fVar14 = fVar13 * (float10)_DAT_006129a8 - fVar11 * (float10)_DAT_006129a8;
      fVar11 = ((float10)_DAT_00610f30 - (fVar13 + fVar13)) * fVar11;
      dVar2 = _DAT_006129b8;
    }
    local_28 = (double)(fVar10 * (float10)dVar2);
    local_30 = (double)(fVar11 * fVar10);
    local_40 = (double)(fVar12 * fVar10);
    local_48 = (double)(fVar14 * fVar10);
    local_28 = (double)(ABS(fVar9 * fVar9 * fVar9) * (float10)local_28);
    local_40 = (double)(ABS(fVar9 * fVar9) * (float10)local_40);
    fVar9 = ABS(fVar9) * (float10)local_48;
    fVar10 = (float10)local_30;
  }
  fVar10 = fVar10 + (float10)fVar1;
  if ((local_20 == _DAT_00610fd8) && (local_28 == _DAT_00610fd8)) {
    if (param_7 == 0) {
      if (0 < param_5) {
        pfVar6 = param_4;
        do {
          fVar13 = (float10)*(float *)((int)pfVar6 + (param_3 - (int)param_4)) * (float10)param_6;
          *pfVar6 = (float)fVar13;
          fVar11 = (float10)*(float *)((int)pfVar6 + (param_3 - (int)param_4) + 4);
          param_5 = param_5 + -1;
          *pfVar6 = (float)(fVar11 * fVar10 + fVar13);
          pfVar6[1] = (float)(fVar11 * fVar8);
          fVar10 = fVar9 + fVar10;
          fVar9 = fVar9 + (float10)local_40;
          fVar8 = fVar7 + fVar8;
          fVar7 = fVar7 + (float10)local_38;
          pfVar6 = pfVar6 + 2;
        } while (param_5 != 0);
        return;
      }
    }
    else if (0 < param_5) {
      pfVar6 = param_4;
      do {
        param_5 = param_5 + -1;
        fVar13 = (float10)*(float *)((param_3 - (int)param_4) + (int)pfVar6) * (float10)param_6 +
                 (float10)*pfVar6;
        *pfVar6 = (float)fVar13;
        fVar11 = (float10)*(float *)((param_3 - (int)param_4) + -4 + (int)(pfVar6 + 2));
        *pfVar6 = (float)(fVar11 * fVar10 + fVar13);
        pfVar6[1] = (float)(fVar11 * fVar8 + (float10)pfVar6[1]);
        fVar10 = fVar9 + fVar10;
        fVar9 = fVar9 + (float10)local_40;
        fVar8 = fVar7 + fVar8;
        fVar7 = fVar7 + (float10)local_38;
        pfVar6 = pfVar6 + 2;
      } while (param_5 != 0);
      return;
    }
  }
  else if (param_7 == 0) {
    if (0 < param_5) {
      fVar13 = (float10)local_40;
      fVar11 = (float10)local_38;
      pfVar6 = param_4;
      do {
        fVar1 = *(float *)((int)pfVar6 + (param_3 - (int)param_4)) * (float)param_6;
        param_5 = param_5 + -1;
        *pfVar6 = fVar1;
        fVar14 = (float10)*(float *)((int)pfVar6 + (param_3 - (int)param_4) + 4);
        *pfVar6 = (float)(fVar14 * fVar10 + (float10)fVar1);
        pfVar6[1] = (float)(fVar14 * fVar8);
        fVar10 = fVar9 + fVar10;
        fVar9 = fVar9 + fVar13;
        fVar13 = fVar13 + (float10)local_28;
        fVar8 = fVar7 + fVar8;
        fVar7 = fVar7 + fVar11;
        fVar11 = fVar11 + (float10)local_20;
        pfVar6 = pfVar6 + 2;
      } while (param_5 != 0);
    }
  }
  else if (0 < param_5) {
    fVar13 = (float10)local_40;
    fVar11 = (float10)local_38;
    pfVar6 = param_4;
    do {
      param_5 = param_5 + -1;
      fVar1 = *(float *)((int)pfVar6 + (param_3 - (int)param_4)) * (float)param_6 + *pfVar6;
      *pfVar6 = fVar1;
      fVar14 = (float10)*(float *)((int)pfVar6 + (param_3 - (int)param_4) + 4);
      *pfVar6 = (float)(fVar14 * fVar10 + (float10)fVar1);
      pfVar6[1] = (float)(fVar14 * fVar8 + (float10)pfVar6[1]);
      fVar10 = fVar9 + fVar10;
      fVar9 = fVar9 + fVar13;
      fVar13 = fVar13 + (float10)local_28;
      fVar8 = fVar7 + fVar8;
      fVar7 = fVar7 + fVar11;
      fVar11 = fVar11 + (float10)local_20;
      pfVar6 = pfVar6 + 2;
    } while (param_5 != 0);
    return;
  }
  return;
}


