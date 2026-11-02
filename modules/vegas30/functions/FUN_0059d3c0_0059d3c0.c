/* Module: vegas30.exe
   Function: FUN_0059d3c0
   Address: 0059d3c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0059d3c0(float *param_1,float *param_2,byte param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  
  if ((param_3 & 0x3f) == 0) {
    fVar3 = (float10)*param_1;
    if (param_4 == _DAT_00610f20) {
      if ((float10)_DAT_006106d0 != fVar3) {
        if ((float10)_DAT_00610fd8 == fVar3) {
          fVar3 = (float10)_DAT_00629a40;
        }
        else {
          fVar3 = (float10)log2(fVar3);
          fVar3 = (float10)0.3010299956639812 * fVar3 * (float10)_DAT_00613278;
        }
      }
      else {
        fVar3 = (float10)_DAT_00610fd8;
      }
      *param_2 = (float)fVar3;
      param_2[1] = (float)fVar3;
      if (_DAT_00610f20 <= param_1[1]) {
        if ((float10)_DAT_00610f20 < (float10)param_1[1]) {
          fVar4 = (float10)_DAT_00619ab0 - (float10)param_1[1];
          if ((float10)_DAT_006106d0 == fVar4) {
            fVar4 = (float10)_DAT_00610fd8;
          }
          else if ((float10)_DAT_00610fd8 == fVar4) {
            fVar4 = (float10)_DAT_00629a40;
          }
          else {
            fVar4 = (float10)log2(fVar4);
            fVar4 = (float10)0.3010299956639812 * fVar4 * (float10)_DAT_00613278;
          }
          *param_2 = (float)(fVar4 + fVar3);
        }
      }
      else {
        fVar4 = (float10)param_1[1] + (float10)_DAT_00619ab0;
        if ((float10)_DAT_006106d0 == fVar4) {
          param_2[1] = (float)((float10)_DAT_00610fd8 + fVar3);
        }
        else if ((float10)_DAT_00610fd8 == fVar4) {
          param_2[1] = (float)((float10)_DAT_00629a40 + fVar3);
        }
        else {
          fVar4 = (float10)log2(fVar4);
          param_2[1] = (float)((float10)0.3010299956639812 * fVar4 * (float10)_DAT_00613278 + fVar3)
          ;
        }
      }
      if ((float)_DAT_00610fd8 == *param_2) {
        fVar3 = (float10)_DAT_006106d0;
      }
      else if ((float)_DAT_00629a40 < *param_2) {
        fVar3 = (float10)_CIpow();
      }
      else {
        fVar3 = (float10)_DAT_00610fd8;
      }
      *param_2 = (float)fVar3;
      if ((float)_DAT_00610fd8 == param_2[1]) {
        param_2[1] = (float)_DAT_006106d0;
        param_2[2] = 0.0;
        param_2[3] = 0.0;
        return 0;
      }
      if (param_2[1] <= (float)_DAT_00629a40) {
        param_2[1] = (float)_DAT_00610fd8;
        param_2[2] = 0.0;
        param_2[3] = 0.0;
        return 0;
      }
    }
    else {
      if ((float10)_DAT_006106d0 != fVar3) {
        if ((float10)_DAT_00610fd8 == fVar3) {
          fVar3 = (float10)_DAT_00629a40;
        }
        else {
          fVar3 = (float10)log2(fVar3);
          fVar3 = (float10)0.3010299956639812 * fVar3 * (float10)_DAT_00613278;
        }
      }
      else {
        fVar3 = (float10)_DAT_00610fd8;
      }
      fVar3 = fVar3 + (float10)param_4;
      *param_2 = (float)fVar3;
      param_2[1] = (float)fVar3;
      if (_DAT_00610f20 <= param_1[1]) {
        if ((float10)_DAT_00610f20 < (float10)param_1[1]) {
          fVar4 = (float10)_DAT_00619ab0 - (float10)param_1[1];
          if ((float10)_DAT_006106d0 == fVar4) {
            fVar4 = (float10)_DAT_00610fd8;
          }
          else if ((float10)_DAT_00610fd8 == fVar4) {
            fVar4 = (float10)_DAT_00629a40;
          }
          else {
            fVar4 = (float10)log2(fVar4);
            fVar4 = (float10)0.3010299956639812 * fVar4 * (float10)_DAT_00613278;
          }
          *param_2 = (float)(fVar4 + fVar3);
          param_2[1] = (float)(fVar3 - (float10)param_4 * (float10)param_1[1]);
        }
      }
      else {
        fVar4 = (float10)param_1[1] + (float10)_DAT_00619ab0;
        if ((float10)_DAT_006106d0 == fVar4) {
          fVar4 = (float10)_DAT_00610fd8;
        }
        else if ((float10)_DAT_00610fd8 == fVar4) {
          fVar4 = (float10)_DAT_00629a40;
        }
        else {
          fVar4 = (float10)log2(fVar4);
          fVar4 = (float10)0.3010299956639812 * fVar4 * (float10)_DAT_00613278;
        }
        param_2[1] = (float)(fVar4 + fVar3);
        *param_2 = (float)((float10)param_4 * (float10)param_1[1] + fVar3);
      }
      if ((float)_DAT_00610fd8 == *param_2) {
        fVar3 = (float10)_DAT_006106d0;
      }
      else if ((float)_DAT_00629a40 < *param_2) {
        fVar3 = (float10)_CIpow();
      }
      else {
        fVar3 = (float10)_DAT_00610fd8;
      }
      *param_2 = (float)fVar3;
      if ((float)_DAT_00610fd8 == param_2[1]) {
        param_2[1] = (float)_DAT_006106d0;
        param_2[2] = 0.0;
        param_2[3] = 0.0;
        return 0;
      }
      if (param_2[1] <= (float)_DAT_00629a40) {
        param_2[1] = (float)_DAT_00610fd8;
        param_2[2] = 0.0;
        param_2[3] = 0.0;
        return 0;
      }
    }
    fVar3 = (float10)_CIpow();
    param_2[1] = (float)fVar3;
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    return 0;
  }
  if ((param_3 & 3) == 3) {
    if (_DAT_00610f20 <= param_1[1]) {
      *param_2 = (_DAT_00619ab0 - param_1[1]) * *param_1;
      param_2[1] = *param_1;
    }
    else {
      param_2[1] = (param_1[1] + _DAT_00619ab0) * *param_1;
      *param_2 = *param_1;
    }
    if (_DAT_00610f20 < param_1[2]) {
      param_2[1] = (_DAT_00619ab0 - param_1[2]) * param_2[1];
      *param_2 = (_DAT_00619ab0 - param_1[2]) * *param_2;
    }
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    return 0;
  }
  if ((param_3 & 0x30) != 0x30) {
    if ((param_3 & 0xc) == 0xc) {
      fVar1 = param_1[3];
      fVar2 = *param_1;
      *param_2 = fVar1 * fVar2;
      param_2[3] = fVar1 * fVar2;
      fVar1 = param_1[4];
      fVar2 = *param_1;
      param_2[1] = fVar1 * fVar2;
      param_2[2] = fVar1 * fVar2;
    }
    return 0;
  }
  if (_DAT_00610f20 <= param_1[1]) {
    *param_2 = (_DAT_00619ab0 - param_1[1]) * *param_1;
    param_2[1] = *param_1;
  }
  else {
    param_2[1] = (param_1[1] + _DAT_00619ab0) * *param_1;
    *param_2 = *param_1;
  }
  if (param_1[2] < _DAT_00610f20) {
    param_2[1] = (param_1[2] + _DAT_00619ab0) * param_2[1];
    *param_2 = (param_1[2] + _DAT_00619ab0) * *param_2;
  }
  param_2[2] = 0.0;
  param_2[3] = 0.0;
  return 0;
}


