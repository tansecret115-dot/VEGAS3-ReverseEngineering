/* Module: vegas30.exe
   Function: FUN_005a6fc0
   Address: 005a6fc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_005a6fc0(undefined4 *param_1,double *param_2,double *param_3,float *param_4,
                 undefined4 *param_5,int *param_6,int *param_7,int param_8,int param_9,
                 double param_10,double param_11)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  double dVar6;
  double dVar7;
  float fVar8;
  float fVar9;
  undefined4 uVar10;
  float *pfVar11;
  float *pfVar12;
  int iVar13;
  float *pfVar14;
  int iVar15;
  int iVar16;
  undefined4 *puVar17;
  int iVar18;
  double local_490;
  float local_478 [5];
  float local_464;
  float local_460;
  float local_45c;
  double local_458;
  double local_450;
  double local_448;
  undefined1 local_440 [64];
  undefined4 local_400;
  undefined4 local_3fc;
  undefined4 local_3f8;
  float local_3e4;
  undefined4 local_3e0;
  undefined4 local_3dc;
  float local_3c8;
  float local_3c4;
  undefined4 local_3c0;
  undefined4 local_3ac;
  float local_3a8;
  undefined4 local_3a4;
  undefined4 local_c;
  
  local_400 = 0;
  puVar17 = param_1;
  for (iVar13 = 0xfe; iVar13 != 0; iVar13 = iVar13 + -1) {
    *puVar17 = 0;
    puVar17 = puVar17 + 1;
  }
  param_1[0xfd] = 4;
  param_1[0xfc] = 0;
  local_3e4 = (float)*param_6;
  local_c = 4;
  local_3c4 = (float)param_6[1];
  local_3fc = 0;
  local_3f8 = 0x3f800000;
  local_3e0 = 0;
  local_3dc = 0x3f800000;
  local_3c0 = 0x3f800000;
  local_3ac = 0;
  local_3a4 = 0x3f800000;
  local_3c8 = local_3e4;
  local_3a8 = local_3c4;
  FUN_005ac2d0(local_440,&local_400);
  if (param_8 == 0) {
    if (param_9 == 0) {
      local_478[0] = 0.0;
      local_478[1] = 0.0;
      local_478[3] = 0.0;
      iVar13 = *param_7;
      iVar18 = param_7[1];
      local_460 = 0.0;
      local_478[2] = (float)iVar13;
      local_478[4] = (float)iVar13;
      local_464 = (float)iVar18;
      local_45c = (float)iVar18;
    }
    else {
      pfVar12 = local_478 + 1;
      iVar16 = 4;
      iVar13 = *param_7;
      iVar15 = *param_6;
      iVar18 = param_7[1];
      iVar1 = param_6[1];
      pfVar11 = param_4;
      do {
        pfVar12[-1] = *pfVar11 * ((float)iVar13 / (float)iVar15);
        *pfVar12 = pfVar11[1] * ((float)iVar18 / (float)iVar1);
        pfVar11 = pfVar11 + 4;
        pfVar12 = pfVar12 + 2;
        iVar16 = iVar16 + -1;
      } while (iVar16 != 0);
    }
    *param_5 = 0;
    param_5[1] = 0;
    param_5[2] = iVar13 << 0xe;
    param_5[3] = iVar18 << 0xe;
  }
  else if (param_9 == 0) {
    fVar2 = SQRT((param_4[1] - param_4[5]) * (param_4[1] - param_4[5]) +
                 (*param_4 - param_4[4]) * (*param_4 - param_4[4]) * (float)param_10 *
                 (float)param_10) / (float)param_11;
    fVar3 = SQRT((param_4[1] - param_4[0xd]) * (param_4[1] - param_4[0xd]) +
                 (*param_4 - param_4[0xc]) * (*param_4 - param_4[0xc]) * (float)param_10 *
                 (float)param_10);
    local_448 = (double)fVar3;
    if ((fVar2 < (float)_DAT_0061a6f0) || (fVar3 < (float)_DAT_0061a6f0)) {
      param_1[0xfd] = 0;
      return;
    }
    iVar13 = *param_7;
    iVar18 = param_7[1];
    fVar2 = (float)iVar13 / fVar2;
    local_450 = (double)iVar18;
    fVar3 = (float)iVar18 / fVar3;
    local_458 = (double)iVar13 * _DAT_00610560;
    dVar6 = local_450 * _DAT_00610560;
    if (fVar3 <= fVar2) {
      local_478[3] = 0.0;
      local_460 = (float)local_458 - (fVar3 / fVar2) * (float)local_458;
      local_478[4] = (fVar3 / fVar2 + (float)_DAT_006106d0) * (float)local_458;
      local_464 = (float)iVar18;
    }
    else {
      local_460 = 0.0;
      local_478[3] = (float)dVar6 - (fVar2 / fVar3) * (float)dVar6;
      local_478[4] = (float)iVar13;
      local_464 = (fVar2 / fVar3 + (float)_DAT_006106d0) * (float)dVar6;
    }
    local_478[0] = local_460;
    local_478[1] = local_478[3];
    local_478[2] = local_478[4];
    local_45c = local_464;
    uVar10 = ftol();
    *param_5 = uVar10;
    uVar10 = ftol();
    param_5[1] = uVar10;
    uVar10 = ftol();
    param_5[2] = uVar10;
    uVar10 = ftol();
    param_5[3] = uVar10;
  }
  else {
    dVar6 = (double)*param_6 * (param_10 / param_11);
    local_448 = (double)param_6[1];
    dVar7 = dVar6 / local_448;
    iVar13 = *param_7;
    iVar18 = param_7[1];
    local_450 = (double)iVar18;
    if (local_450 / local_448 <= (double)iVar13 / dVar6) {
      fVar2 = (float)iVar18 * (float)dVar7;
      local_490 = local_450;
    }
    else {
      fVar2 = (float)iVar13;
      local_490 = (double)iVar13 / dVar7;
    }
    iVar15 = 4;
    local_458 = (double)(fVar2 / (float)*param_6);
    local_448 = local_490 / local_448;
    pfVar12 = param_4;
    pfVar11 = local_478 + 1;
    do {
      iVar15 = iVar15 + -1;
      pfVar11[-1] = *pfVar12 * (float)local_458 + ((float)iVar13 - fVar2) * (float)_DAT_00610560;
      *pfVar11 = pfVar12[1] * (float)local_448 +
                 ((float)iVar18 - (float)local_490) * (float)_DAT_00610560;
      pfVar12 = pfVar12 + 4;
      pfVar11 = pfVar11 + 2;
    } while (iVar15 != 0);
    uVar10 = ftol();
    *param_5 = uVar10;
    uVar10 = ftol();
    param_5[1] = uVar10;
    uVar10 = ftol();
    param_5[2] = uVar10;
    uVar10 = ftol();
    param_5[3] = uVar10;
  }
  pfVar11 = local_478 + 1;
  pfVar12 = (float *)(param_1 + 4);
  local_490._0_4_ = 4;
  pfVar14 = param_4;
  do {
    pfVar12[-4] = *pfVar14;
    pfVar12[-3] = pfVar14[1];
    *pfVar12 = pfVar11[-1];
    pfVar12[1] = *pfVar11;
    pfVar12[-2] = 1.0;
    pfVar12[-1] = 1.0;
    pfVar12[2] = 1.0;
    pfVar11 = pfVar11 + 2;
    pfVar12 = pfVar12 + 7;
    local_490._0_4_ = local_490._0_4_ + -1;
    pfVar14 = pfVar14 + 4;
  } while (local_490._0_4_ != 0);
  fVar2 = param_4[0xd];
  fVar3 = param_4[1];
  fVar4 = param_4[0xc];
  fVar5 = *param_4;
  fVar8 = SQRT((local_478[3] - local_478[1]) * (local_478[3] - local_478[1]) +
               (local_478[2] - local_478[0]) * (local_478[2] - local_478[0]));
  fVar9 = SQRT((local_45c - local_478[1]) * (local_45c - local_478[1]) +
               (local_460 - local_478[0]) * (local_460 - local_478[0]));
  local_448 = (double)fVar9;
  if ((fVar8 < (float)_DAT_0061a6f0) || (fVar9 < (float)_DAT_0061a6f0)) {
    *(undefined4 *)param_2 = 0;
    *(undefined4 *)((int)param_2 + 4) = 0;
    param_1[0xfd] = 0;
  }
  else {
    *param_2 = (double)(SQRT((param_4[5] - param_4[1]) * (param_4[5] - param_4[1]) +
                             (param_4[4] - *param_4) * (param_4[4] - *param_4)) / fVar8);
    *param_3 = (double)(SQRT((fVar2 - fVar3) * (fVar2 - fVar3) + (fVar4 - fVar5) * (fVar4 - fVar5))
                       / fVar9);
    FUN_005ac210(param_1,local_440,4);
    iVar13 = 0;
    if (0 < (int)param_1[0xfd]) {
      pfVar12 = (float *)(param_1 + 4);
      do {
        fVar2 = *pfVar12;
        iVar13 = iVar13 + 1;
        *pfVar12 = pfVar12[-4];
        pfVar12[-4] = fVar2;
        fVar2 = pfVar12[1];
        pfVar12[1] = pfVar12[-3];
        pfVar12[-3] = fVar2;
        *pfVar12 = *pfVar12 / (float)*param_6;
        pfVar12[1] = pfVar12[1] / (float)param_6[1];
        pfVar12 = pfVar12 + 7;
      } while (iVar13 < (int)param_1[0xfd]);
      return;
    }
  }
  return;
}


