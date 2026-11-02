/* Module: vegas30.exe
   Function: FUN_0059b950
   Address: 0059b950
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059b950(uint *param_1,undefined4 param_2,float *param_3,int param_4,int param_5,
                 double param_6,int param_7)

{
  double dVar1;
  uint uVar2;
  uint uVar3;
  float fVar4;
  float fVar5;
  uint uVar6;
  float *pfVar7;
  float *pfVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  uVar2 = param_1[8];
  fVar4 = (float)param_1[4] * (float)_DAT_00629a80 * _DAT_00629a78;
  param_1[2] = (uint)fVar4;
  fVar5 = (float)param_1[5] * (float)_DAT_00629a80 * _DAT_00629a78;
  param_1[3] = (uint)fVar5;
  local_28 = (double)*(longlong *)(param_1 + 6);
  if ((int)uVar2 < 2) {
    uVar2 = 1;
  }
  uVar3 = *param_1;
  local_30 = 0.0;
  uVar6 = (uVar3 ^ (int)uVar3 >> 0x1f) - ((int)uVar3 >> 0x1f);
  local_20 = 0.0;
  if ((uVar6 & 4) == 0) {
    if (uVar3 == 0) {
      local_40 = 0.0;
      fVar4 = fVar5;
    }
    else {
      local_40 = (double)((fVar5 - fVar4) / (float)(int)uVar2);
    }
    dVar1 = _DAT_006106d0;
    if (0 < (int)uVar3) {
      local_28 = (double)(int)uVar2 - local_28;
      local_40 = -local_40;
      fVar4 = fVar5;
      dVar1 = _DAT_00610fe0;
    }
    fVar9 = (float10)dVar1;
    if (1 < (int)uVar6) {
      fVar10 = (float10)local_28;
      fVar12 = (float10)local_28;
      fVar11 = (float10)local_28;
      local_30 = 2.0;
      local_28 = (double)(fVar12 * fVar11);
      fVar9 = (fVar9 + fVar10) * (fVar9 + fVar10) - fVar12 * fVar11;
      local_40 = local_40 / (double)(int)uVar2;
    }
    fVar9 = fVar9 * (float10)local_40;
    local_30 = local_40 * local_30;
    fVar10 = (float10)local_40 * (float10)local_28;
  }
  else {
    fVar9 = (float10)_DAT_006106d0 / (float10)(int)uVar2;
    fVar10 = (float10)fVar5 - (float10)fVar4;
    fVar11 = fVar9 * (float10)*(longlong *)(param_1 + 6);
    fVar12 = fVar11 * fVar11;
    if ((int)uVar3 < 1) {
      fVar13 = ((fVar11 * (float10)_DAT_006129b0 - (float10)_DAT_006129a8) * (float10)_DAT_00610f30
               - fVar11 * (float10)_DAT_006129b0) + (float10)_DAT_006129a8;
      fVar14 = (((fVar12 * (float10)_DAT_006129a8 - fVar11 * (float10)_DAT_006129a8) +
                (float10)_DAT_006106d0) * (float10)_DAT_00610f30 - fVar12 * (float10)_DAT_006129a8)
               + fVar11 * (float10)_DAT_006129a8;
      dVar1 = (double)(fVar12 * fVar11 + fVar12 * fVar11);
      fVar12 = ((((float10)dVar1 - fVar12 * (float10)_DAT_00610f30) + fVar11) *
                (float10)_DAT_00610f30 - (float10)dVar1) + fVar12 * (float10)_DAT_00610f30;
      dVar1 = _DAT_006129a0;
    }
    else {
      fVar13 = (float10)_DAT_006129a8 - fVar11 * (float10)_DAT_006129b0;
      fVar14 = fVar11 * (float10)_DAT_006129a8 - fVar12 * (float10)_DAT_006129a8;
      fVar12 = ((float10)_DAT_00610f30 - (fVar11 + fVar11)) * fVar12;
      dVar1 = _DAT_006129b8;
    }
    local_20 = (double)(fVar10 * (float10)dVar1);
    local_28 = (double)(fVar12 * fVar10);
    local_30 = (double)(fVar13 * fVar10);
    local_38 = (double)(fVar14 * fVar10);
    local_20 = (double)(ABS(fVar9 * fVar9 * fVar9) * (float10)local_20);
    local_30 = (double)(ABS(fVar9 * fVar9) * (float10)local_30);
    fVar9 = ABS(fVar9) * (float10)local_38;
    fVar10 = (float10)local_28;
  }
  fVar10 = fVar10 + (float10)fVar4;
  if (param_7 == 0) {
    if (0 < param_5) {
      fVar11 = (float10)local_30;
      pfVar7 = (float *)(param_4 + 4);
      pfVar8 = param_3;
      do {
        fVar12 = fVar10 * fVar10;
        param_5 = param_5 + -1;
        dVar1 = (double)(((((fVar12 * (float10)_DAT_00629a70 - (float10)_DAT_00629a68) * fVar12 +
                           (float10)_DAT_00629a60) * fVar12 - (float10)_DAT_006128c0) * fVar12 +
                         (float10)_DAT_006106d0) * fVar10);
        fVar12 = (((fVar12 * (float10)_DAT_00629a58 - (float10)_DAT_00629a50) * fVar12 +
                  (float10)_DAT_006128a0) * fVar12 - (float10)_DAT_00610560) * fVar12 +
                 (float10)_DAT_006106d0;
        pfVar7[-1] = (float)((fVar12 + (float10)dVar1) * (float10)*pfVar8 * (float10)param_6 *
                            (float10)_DAT_00629a48);
        *pfVar7 = (float)((fVar12 - (float10)dVar1) *
                          (float10)*(float *)((int)pfVar7 + ((int)param_3 - param_4)) *
                          (float10)param_6 * (float10)_DAT_00629a48);
        fVar10 = fVar9 + fVar10;
        fVar9 = fVar9 + fVar11;
        fVar11 = fVar11 + (float10)local_20;
        pfVar7 = pfVar7 + 2;
        pfVar8 = pfVar8 + 2;
      } while (param_5 != 0);
    }
  }
  else if (0 < param_5) {
    fVar11 = (float10)local_30;
    pfVar7 = (float *)(param_4 + 4);
    pfVar8 = param_3;
    do {
      fVar12 = fVar10 * fVar10;
      param_5 = param_5 + -1;
      dVar1 = (double)(((((fVar12 * (float10)_DAT_00629a70 - (float10)_DAT_00629a68) * fVar12 +
                         (float10)_DAT_00629a60) * fVar12 - (float10)_DAT_006128c0) * fVar12 +
                       (float10)_DAT_006106d0) * fVar10);
      fVar12 = (((fVar12 * (float10)_DAT_00629a58 - (float10)_DAT_00629a50) * fVar12 +
                (float10)_DAT_006128a0) * fVar12 - (float10)_DAT_00610560) * fVar12 +
               (float10)_DAT_006106d0;
      pfVar7[-1] = (float)((fVar12 + (float10)dVar1) * (float10)*pfVar8 * (float10)param_6 *
                           (float10)_DAT_00629a48 + (float10)pfVar7[-1]);
      *pfVar7 = (float)((fVar12 - (float10)dVar1) *
                        (float10)*(float *)((int)param_3 + (-8 - param_4) + (int)(pfVar7 + 2)) *
                        (float10)param_6 * (float10)_DAT_00629a48 + (float10)*pfVar7);
      fVar10 = fVar9 + fVar10;
      fVar9 = fVar9 + fVar11;
      fVar11 = fVar11 + (float10)local_20;
      pfVar7 = pfVar7 + 2;
      pfVar8 = pfVar8 + 2;
    } while (param_5 != 0);
    return;
  }
  return;
}


