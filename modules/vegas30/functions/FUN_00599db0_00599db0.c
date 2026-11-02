/* Module: vegas30.exe
   Function: FUN_00599db0
   Address: 00599db0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00599db0(uint *param_1,float *param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  double dVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  float *pfVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double local_38;
  double local_30;
  double local_28;
  double local_10;
  
  local_30 = (double)*(longlong *)(param_1 + 6);
  uVar3 = param_1[8];
  if ((int)uVar3 < 2) {
    uVar3 = 1;
  }
  uVar4 = *param_1;
  local_38 = 0.0;
  uVar5 = (uVar4 ^ (int)uVar4 >> 0x1f) - ((int)uVar4 >> 0x1f);
  if ((uVar5 & 4) == 0) {
    if (uVar4 == 0) {
      fVar1 = (float)param_1[3];
      local_28 = 0.0;
    }
    else {
      fVar1 = (float)param_1[2];
      local_28 = (double)(((float)param_1[3] - (float)param_1[2]) / (float)(int)uVar3);
    }
    dVar2 = _DAT_006106d0;
    if (0 < (int)uVar4) {
      local_30 = (double)(int)uVar3 - local_30;
      fVar1 = (float)param_1[3];
      local_28 = -local_28;
      dVar2 = _DAT_00610fe0;
    }
    fVar8 = (float10)dVar2;
    if (1 < (int)uVar5) {
      fVar9 = (float10)local_30;
      fVar11 = (float10)local_30;
      fVar10 = (float10)local_30;
      local_38 = 2.0;
      local_30 = (double)(fVar11 * fVar10);
      fVar8 = (fVar8 + fVar9) * (fVar8 + fVar9) - fVar11 * fVar10;
      local_28 = local_28 / (double)(int)uVar3;
    }
    fVar8 = fVar8 * (float10)local_28;
    local_38 = local_28 * local_38;
    fVar9 = (float10)local_28 * (float10)local_30 + (float10)fVar1;
  }
  else {
    fVar8 = (float10)_DAT_006106d0 / (float10)(int)uVar3;
    fVar9 = (float10)(float)param_1[3] - (float10)(float)param_1[2];
    fVar10 = fVar8 * (float10)*(longlong *)(param_1 + 6);
    fVar11 = fVar10 * fVar10;
    if ((int)uVar4 < 1) {
      fVar12 = ((fVar10 * (float10)_DAT_006129b0 - (float10)_DAT_006129a8) * (float10)_DAT_00610f30
               - fVar10 * (float10)_DAT_006129b0) + (float10)_DAT_006129a8;
      fVar13 = (((fVar11 * (float10)_DAT_006129a8 - fVar10 * (float10)_DAT_006129a8) +
                (float10)_DAT_006106d0) * (float10)_DAT_00610f30 - fVar11 * (float10)_DAT_006129a8)
               + fVar10 * (float10)_DAT_006129a8;
      dVar2 = (double)(fVar11 * fVar10 + fVar11 * fVar10);
      fVar11 = ((((float10)dVar2 - fVar11 * (float10)_DAT_00610f30) + fVar10) *
                (float10)_DAT_00610f30 - (float10)dVar2) + fVar11 * (float10)_DAT_00610f30;
      dVar2 = _DAT_006129a0;
    }
    else {
      fVar12 = (float10)_DAT_006129a8 - fVar10 * (float10)_DAT_006129b0;
      fVar13 = fVar10 * (float10)_DAT_006129a8 - fVar11 * (float10)_DAT_006129a8;
      fVar11 = ((float10)_DAT_00610f30 - (fVar10 + fVar10)) * fVar11;
      dVar2 = _DAT_006129b8;
    }
    local_10 = (double)(fVar13 * fVar9);
    local_28 = (double)(fVar9 * (float10)dVar2);
    local_30 = (double)(fVar11 * fVar9);
    local_38 = (double)(fVar12 * fVar9);
    dVar2 = (double)(ABS(fVar8 * fVar8 * fVar8) * (float10)local_28);
    local_38 = (double)(ABS(fVar8 * fVar8) * (float10)local_38);
    fVar8 = ABS(fVar8) * (float10)local_10;
    fVar9 = (float10)local_30 + (float10)(float)param_1[2];
    if (dVar2 != _DAT_00610fd8) {
      if (param_5 == 0) {
        if (param_4 < 1) {
          return;
        }
        fVar10 = (float10)local_38;
        pfVar6 = (float *)(param_3 + 4);
        param_3 = (int)param_2 - param_3;
        do {
          pfVar6[-1] = (float)((float10)*param_2 * fVar9);
          *pfVar6 = (float)((float10)*(float *)(param_3 + (int)pfVar6) * fVar9);
          fVar9 = fVar8 + fVar9;
          fVar8 = fVar8 + fVar10;
          fVar10 = fVar10 + (float10)dVar2;
          param_2 = param_2 + 2;
          pfVar6 = pfVar6 + 2;
          param_4 = param_4 + -1;
        } while (param_4 != 0);
        return;
      }
      if (param_4 < 1) {
        return;
      }
      fVar10 = (float10)local_38;
      pfVar6 = (float *)(param_3 + 4);
      pfVar7 = param_2;
      do {
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 2;
        param_4 = param_4 + -1;
        pfVar6[-1] = (float)((float10)fVar1 * fVar9 + (float10)pfVar6[-1]);
        *pfVar6 = (float)((float10)*(float *)((int)param_2 + (-8 - param_3) + (int)(pfVar6 + 2)) *
                          fVar9 + (float10)*pfVar6);
        fVar9 = fVar8 + fVar9;
        fVar8 = fVar8 + fVar10;
        fVar10 = fVar10 + (float10)dVar2;
        pfVar6 = pfVar6 + 2;
      } while (param_4 != 0);
      return;
    }
  }
  if (local_38 == _DAT_00610fd8) {
    if (param_5 == 0) {
      if (0 < param_4) {
        pfVar6 = (float *)(param_3 + 4);
        param_3 = (int)param_2 - param_3;
        do {
          pfVar6[-1] = (float)((float10)*param_2 * fVar9);
          *pfVar6 = (float)((float10)*(float *)(param_3 + (int)pfVar6) * fVar9);
          param_2 = param_2 + 2;
          pfVar6 = pfVar6 + 2;
          param_4 = param_4 + -1;
          fVar9 = fVar8 + fVar9;
        } while (param_4 != 0);
      }
    }
    else if (0 < param_4) {
      pfVar6 = (float *)(param_3 + 4);
      pfVar7 = param_2;
      do {
        fVar1 = *pfVar7;
        pfVar7 = pfVar7 + 2;
        param_4 = param_4 + -1;
        pfVar6[-1] = (float)((float10)fVar1 * fVar9 + (float10)pfVar6[-1]);
        *pfVar6 = (float)((float10)*(float *)((int)param_2 + (-8 - param_3) + (int)(pfVar6 + 2)) *
                          fVar9 + (float10)*pfVar6);
        fVar9 = fVar8 + fVar9;
        pfVar6 = pfVar6 + 2;
      } while (param_4 != 0);
      return;
    }
  }
  else if (param_5 == 0) {
    if (0 < param_4) {
      pfVar6 = (float *)(param_3 + 4);
      param_3 = (int)param_2 - param_3;
      do {
        pfVar6[-1] = (float)((float10)*param_2 * fVar9);
        *pfVar6 = (float)((float10)*(float *)(param_3 + (int)pfVar6) * fVar9);
        fVar9 = fVar8 + fVar9;
        fVar8 = fVar8 + (float10)local_38;
        param_2 = param_2 + 2;
        pfVar6 = pfVar6 + 2;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
      return;
    }
  }
  else if (0 < param_4) {
    pfVar6 = (float *)(param_3 + 4);
    pfVar7 = param_2;
    do {
      fVar1 = *pfVar7;
      pfVar7 = pfVar7 + 2;
      param_4 = param_4 + -1;
      pfVar6[-1] = (float)((float10)fVar1 * fVar9 + (float10)pfVar6[-1]);
      *pfVar6 = (float)((float10)*(float *)((int)param_2 + (-8 - param_3) + (int)(pfVar6 + 2)) *
                        fVar9 + (float10)*pfVar6);
      fVar9 = fVar8 + fVar9;
      fVar8 = fVar8 + (float10)local_38;
      pfVar6 = pfVar6 + 2;
    } while (param_4 != 0);
    return;
  }
  return;
}


