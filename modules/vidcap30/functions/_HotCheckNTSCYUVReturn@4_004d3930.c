/* Module: vidcap30.exe
   Function: _HotCheckNTSCYUVReturn@4
   Address: 004d3930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _HotCheckNTSCYUVReturn_4(float *param_1)

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
  
                    /* 0xd3930  172  _HotCheckNTSCYUVReturn@4 */
  if (_DAT_0059a420 <= *param_1) {
    fVar9 = (float10)_CIpow();
    fVar9 = fVar9 * (float10)_DAT_0059a2c8 - (float10)_DAT_0059a278;
  }
  else {
    fVar9 = (float10)*param_1 * (float10)_DAT_0059a41c;
  }
  local_20[0] = (float)fVar9;
  if (_DAT_0059a420 <= param_1[1]) {
    fVar9 = (float10)_CIpow();
    fVar9 = fVar9 * (float10)_DAT_0059a2c8 - (float10)_DAT_0059a278;
  }
  else {
    fVar9 = (float10)param_1[1] * (float10)_DAT_0059a41c;
  }
  local_20[1] = (float)fVar9;
  if (_DAT_0059a420 <= param_1[2]) {
    fVar9 = (float10)_CIpow();
    fVar9 = fVar9 * (float10)_DAT_0059a2c8 - (float10)_DAT_0059a278;
  }
  else {
    fVar9 = (float10)param_1[2] * (float10)_DAT_0059a41c;
  }
  local_20[2] = (float)fVar9;
  local_20[3] = param_1[3];
  pfVar5 = (float *)&DAT_0059a388;
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
  } while ((int)pfVar5 < 0x59a3ac);
  local_10[3] = local_20[3];
  fVar1 = local_10[1] * local_10[1] + local_10[2] * local_10[2];
  if (fVar1 <= (_DAT_0059a418 - local_10[0]) * (_DAT_0059a418 - local_10[0])) {
    return 0;
  }
  fVar1 = SQRT(fVar1) * _DAT_0059a434;
  fVar1 = (fVar1 - ((local_10[0] * _DAT_0059a434 + _DAT_0059a430 + fVar1) - _DAT_0059a42c)) / fVar1;
  if (_DAT_00595420 < fVar1) {
    fVar1 = _DAT_00595420;
  }
  pfVar5 = (float *)&DAT_0059a3ac;
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
  } while ((int)pfVar5 < 0x59a3d0);
  if (_DAT_0059a428 <= local_20[0]) {
    fVar9 = (float10)_CIpow();
  }
  else {
    fVar9 = (float10)local_20[0] * (float10)_DAT_0059a424;
  }
  fVar1 = (float)fVar9;
  bVar4 = _DAT_0059a428 <= local_20[1];
  *param_1 = fVar1;
  if (bVar4) {
    fVar9 = (float10)_CIpow();
  }
  else {
    fVar9 = (float10)local_20[1] * (float10)_DAT_0059a424;
  }
  fVar2 = (float)fVar9;
  bVar4 = _DAT_0059a428 <= local_20[2];
  param_1[1] = fVar2;
  if (bVar4) {
    fVar9 = (float10)_CIpow();
  }
  else {
    fVar9 = (float10)local_20[2] * (float10)_DAT_0059a424;
  }
  param_1[2] = (float)fVar9;
  bVar4 = _DAT_00595424 <= fVar1;
  param_1[3] = local_10[3];
  fVar3 = _DAT_00595424;
  if ((bVar4) && (fVar3 = fVar1, _DAT_00595420 < fVar1)) {
    fVar3 = _DAT_00595420;
  }
  *param_1 = fVar3;
  fVar1 = _DAT_00595424;
  if ((_DAT_00595424 <= fVar2) && (fVar1 = fVar2, _DAT_00595420 < fVar2)) {
    fVar1 = _DAT_00595420;
  }
  param_1[1] = fVar1;
  if ((float10)_DAT_00595424 <= fVar9) {
    if ((float10)_DAT_00595420 < fVar9) {
      fVar9 = (float10)_DAT_00595420;
    }
    param_1[2] = (float)fVar9;
    return 1;
  }
  param_1[2] = _DAT_00595424;
  return 1;
}


