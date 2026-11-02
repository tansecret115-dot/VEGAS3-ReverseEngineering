/* Module: vidcap30.exe
   Function: _HotCheckPALYUV@4
   Address: 004d3c60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 _HotCheckPALYUV_4(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  int iVar7;
  float10 fVar8;
  float local_20 [4];
  float local_10 [4];
  
                    /* 0xd3c60  173  _HotCheckPALYUV@4 */
  if (_DAT_0059a420 <= *param_1) {
    fVar8 = (float10)_CIpow();
    fVar8 = fVar8 * (float10)_DAT_0059a2c8 - (float10)_DAT_0059a278;
  }
  else {
    fVar8 = (float10)*param_1 * (float10)_DAT_0059a41c;
  }
  local_10[0] = (float)fVar8;
  if (_DAT_0059a420 <= param_1[1]) {
    fVar8 = (float10)_CIpow();
    fVar8 = fVar8 * (float10)_DAT_0059a2c8 - (float10)_DAT_0059a278;
  }
  else {
    fVar8 = (float10)param_1[1] * (float10)_DAT_0059a41c;
  }
  local_10[1] = (float)fVar8;
  if (_DAT_0059a420 <= param_1[2]) {
    fVar8 = (float10)_CIpow();
    fVar8 = fVar8 * (float10)_DAT_0059a2c8 - (float10)_DAT_0059a278;
  }
  else {
    fVar8 = (float10)param_1[2] * (float10)_DAT_0059a41c;
  }
  pfVar6 = (float *)&stack0xffffffdc;
  local_10[2] = (float)fVar8;
  local_10[3] = param_1[3];
  pfVar4 = (float *)&DAT_0059a388;
  do {
    pfVar6 = pfVar6 + 1;
    *pfVar6 = 0.0;
    pfVar5 = local_10;
    fVar1 = *pfVar6;
    iVar7 = 3;
    do {
      fVar2 = *pfVar5;
      fVar3 = *pfVar4;
      pfVar4 = pfVar4 + 1;
      pfVar5 = pfVar5 + 1;
      iVar7 = iVar7 + -1;
      fVar1 = fVar2 * fVar3 + fVar1;
    } while (iVar7 != 0);
    *pfVar6 = fVar1;
  } while ((int)pfVar4 < 0x59a3ac);
  if (local_20[1] * local_20[1] + local_20[2] * local_20[2] <=
      (_DAT_0059a438 - local_20[0]) * (_DAT_0059a438 - local_20[0])) {
    return 0;
  }
  return 1;
}


