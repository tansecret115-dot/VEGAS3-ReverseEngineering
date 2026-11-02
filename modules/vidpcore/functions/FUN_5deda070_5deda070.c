/* Module: vidpcore.dll
   Function: FUN_5deda070
   Address: 5deda070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5deda070(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  float10 fVar9;
  float local_20 [4];
  float local_10 [4];
  
  if (_DAT_5df2daa4 <= *param_1) {
    fVar9 = (float10)_CIpow();
    fVar9 = fVar9 * (float10)_DAT_5df2da98 - (float10)_DAT_5df2da90;
  }
  else {
    fVar9 = (float10)*param_1 * (float10)_DAT_5df2daa0;
  }
  local_20[0] = (float)fVar9;
  if (_DAT_5df2daa4 <= param_1[1]) {
    fVar9 = (float10)_CIpow();
    fVar9 = fVar9 * (float10)_DAT_5df2da98 - (float10)_DAT_5df2da90;
  }
  else {
    fVar9 = (float10)param_1[1] * (float10)_DAT_5df2daa0;
  }
  local_20[1] = (float)fVar9;
  if (_DAT_5df2daa4 <= param_1[2]) {
    fVar9 = (float10)_CIpow();
    fVar9 = fVar9 * (float10)_DAT_5df2da98 - (float10)_DAT_5df2da90;
  }
  else {
    fVar9 = (float10)param_1[2] * (float10)_DAT_5df2daa0;
  }
  local_20[2] = (float)fVar9;
  local_20[3] = param_1[3];
  pfVar5 = (float *)&DAT_5df34eac;
  pfVar7 = local_10;
  do {
    *pfVar7 = 0.0;
    pfVar6 = local_20;
    fVar1 = *pfVar7;
    iVar8 = 3;
    do {
      fVar2 = *pfVar5;
      fVar3 = *pfVar6;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
      iVar8 = iVar8 + -1;
      fVar1 = fVar2 * fVar3 + fVar1;
    } while (iVar8 != 0);
    *pfVar7 = fVar1;
    pfVar7 = pfVar7 + 1;
  } while ((int)pfVar5 < 0x5df34ed0);
  local_10[3] = local_20[3];
  fVar1 = local_10[1] * local_10[1] + local_10[2] * local_10[2];
  if (fVar1 <= (_DAT_5df34f3c - local_10[0]) * (_DAT_5df34f3c - local_10[0])) {
    return 0;
  }
  fVar1 = SQRT(fVar1) * _DAT_5df34f50;
  fVar1 = (fVar1 - ((local_10[0] * _DAT_5df34f50 + _DAT_5df34f4c + fVar1) - _DAT_5df34f48)) / fVar1;
  if (_DAT_5df205c8 < fVar1) {
    fVar1 = _DAT_5df205c8;
  }
  pfVar5 = (float *)&DAT_5df34ed0;
  pfVar7 = local_20;
  local_10[1] = fVar1 * local_10[1];
  local_10[2] = fVar1 * local_10[2];
  do {
    *pfVar7 = 0.0;
    pfVar6 = local_10;
    fVar1 = *pfVar7;
    iVar8 = 3;
    do {
      fVar2 = *pfVar5;
      fVar3 = *pfVar6;
      pfVar5 = pfVar5 + 1;
      pfVar6 = pfVar6 + 1;
      iVar8 = iVar8 + -1;
      fVar1 = fVar2 * fVar3 + fVar1;
    } while (iVar8 != 0);
    *pfVar7 = fVar1;
    pfVar7 = pfVar7 + 1;
  } while ((int)pfVar5 < 0x5df34ef4);
  if (_DAT_5df34f44 <= local_20[0]) {
    fVar9 = (float10)_CIpow();
  }
  else {
    fVar9 = (float10)local_20[0] * (float10)_DAT_5df34f40;
  }
  fVar1 = (float)fVar9;
  bVar4 = _DAT_5df34f44 <= local_20[1];
  *param_1 = fVar1;
  if (bVar4) {
    fVar9 = (float10)_CIpow();
  }
  else {
    fVar9 = (float10)local_20[1] * (float10)_DAT_5df34f40;
  }
  fVar2 = (float)fVar9;
  bVar4 = _DAT_5df34f44 <= local_20[2];
  param_1[1] = fVar2;
  if (bVar4) {
    fVar9 = (float10)_CIpow();
  }
  else {
    fVar9 = (float10)local_20[2] * (float10)_DAT_5df34f40;
  }
  param_1[2] = (float)fVar9;
  bVar4 = _DAT_5df205cc <= fVar1;
  param_1[3] = local_10[3];
  fVar3 = _DAT_5df205cc;
  if ((bVar4) && (fVar3 = fVar1, _DAT_5df205c8 < fVar1)) {
    fVar3 = _DAT_5df205c8;
  }
  *param_1 = fVar3;
  fVar1 = _DAT_5df205cc;
  if ((_DAT_5df205cc <= fVar2) && (fVar1 = fVar2, _DAT_5df205c8 < fVar2)) {
    fVar1 = _DAT_5df205c8;
  }
  param_1[1] = fVar1;
  if ((float10)_DAT_5df205cc <= fVar9) {
    if ((float10)_DAT_5df205c8 < fVar9) {
      fVar9 = (float10)_DAT_5df205c8;
    }
    param_1[2] = (float)fVar9;
    return 1;
  }
  param_1[2] = _DAT_5df205cc;
  return 1;
}


