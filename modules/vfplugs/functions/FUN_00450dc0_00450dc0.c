/* Module: vfplugs.dll
   Function: FUN_00450dc0
   Address: 00450dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00450dc0(float *param_1)

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
  
  if (_DAT_0048d108 <= *param_1) {
    fVar8 = (float10)_CIpow();
    fVar8 = fVar8 * (float10)_DAT_0048caa8 - (float10)_DAT_0048ca60;
  }
  else {
    fVar8 = (float10)*param_1 * (float10)_DAT_0048d104;
  }
  local_10[0] = (float)fVar8;
  if (_DAT_0048d108 <= param_1[1]) {
    fVar8 = (float10)_CIpow();
    fVar8 = fVar8 * (float10)_DAT_0048caa8 - (float10)_DAT_0048ca60;
  }
  else {
    fVar8 = (float10)param_1[1] * (float10)_DAT_0048d104;
  }
  local_10[1] = (float)fVar8;
  if (_DAT_0048d108 <= param_1[2]) {
    fVar8 = (float10)_CIpow();
    fVar8 = fVar8 * (float10)_DAT_0048caa8 - (float10)_DAT_0048ca60;
  }
  else {
    fVar8 = (float10)param_1[2] * (float10)_DAT_0048d104;
  }
  pfVar6 = (float *)&stack0xffffffdc;
  local_10[2] = (float)fVar8;
  local_10[3] = param_1[3];
  pfVar4 = (float *)&DAT_0048d070;
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
  } while ((int)pfVar4 < 0x48d094);
  if (local_20[1] * local_20[1] + local_20[2] * local_20[2] <=
      (_DAT_0048d100 - local_20[0]) * (_DAT_0048d100 - local_20[0])) {
    return 0;
  }
  return 1;
}


