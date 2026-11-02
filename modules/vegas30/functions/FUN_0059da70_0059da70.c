/* Module: vegas30.exe
   Function: FUN_0059da70
   Address: 0059da70
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0059da70(float *param_1,float *param_2,byte param_3)

{
  float fVar1;
  float fVar2;
  
  if ((param_3 & 0x3f) == 0) {
    if (param_1[1] < _DAT_00610f20) {
      param_2[1] = (param_1[1] + _DAT_00619ab0) * *param_1;
      *param_2 = *param_1;
      fVar1 = param_1[1];
      fVar2 = *param_1;
      param_2[2] = 0.0;
      param_2[3] = -fVar1 * fVar2;
      return 0;
    }
    *param_2 = (_DAT_00619ab0 - param_1[1]) * *param_1;
    param_2[1] = *param_1;
    fVar1 = param_1[1];
    fVar2 = *param_1;
    param_2[3] = 0.0;
    param_2[2] = fVar1 * fVar2;
    return 0;
  }
  if ((param_3 & 3) == 3) {
    if (_DAT_00610f20 <= param_1[1]) {
      *param_2 = (_DAT_00619ab0 - param_1[1]) * *param_1;
      param_2[1] = *param_1;
      fVar1 = param_1[1];
      fVar2 = *param_1;
      param_2[3] = 0.0;
      param_2[2] = fVar1 * fVar2;
    }
    else {
      param_2[1] = (param_1[1] + _DAT_00619ab0) * *param_1;
      *param_2 = *param_1;
      fVar1 = param_1[1];
      fVar2 = *param_1;
      param_2[2] = 0.0;
      param_2[3] = -fVar1 * fVar2;
    }
    if (_DAT_00610f20 < param_1[2]) {
      param_2[1] = (_DAT_00619ab0 - param_1[2]) * param_2[1];
      *param_2 = (_DAT_00619ab0 - param_1[2]) * *param_2;
    }
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    return 0;
  }
  if ((param_3 & 0x30) == 0x30) {
    if (_DAT_00610f20 <= param_1[1]) {
      *param_2 = (_DAT_00619ab0 - param_1[1]) * *param_1;
      param_2[1] = *param_1;
      fVar1 = param_1[1];
      fVar2 = *param_1;
      param_2[3] = 0.0;
      param_2[2] = fVar1 * fVar2;
    }
    else {
      param_2[1] = (param_1[1] + _DAT_00619ab0) * *param_1;
      *param_2 = *param_1;
      fVar1 = param_1[1];
      fVar2 = *param_1;
      param_2[2] = 0.0;
      param_2[3] = -fVar1 * fVar2;
    }
    if (param_1[2] < _DAT_00610f20) {
      param_2[1] = (param_1[2] + _DAT_00619ab0) * param_2[1];
      *param_2 = (param_1[2] + _DAT_00619ab0) * *param_2;
    }
    param_2[2] = 0.0;
    param_2[3] = 0.0;
    return 0;
  }
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


