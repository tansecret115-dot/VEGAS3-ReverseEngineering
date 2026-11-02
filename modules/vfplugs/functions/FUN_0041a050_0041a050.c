/* Module: vfplugs.dll
   Function: FUN_0041a050
   Address: 0041a050
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041a050(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 local_20;
  undefined8 local_18;
  double local_10;
  double local_8;
  
  if (*(int *)(param_1 + 0x138) == 0) {
    if (_DAT_00487ee0 <= *param_2) {
      if (*param_2 <= _DAT_00487ed4) {
        fVar1 = *param_2;
      }
      else {
        fVar1 = 1.0;
      }
    }
    else {
      fVar1 = 0.0;
    }
    if (_DAT_00487ee0 <= param_2[1]) {
      if (param_2[1] <= _DAT_00487ed4) {
        local_20._4_4_ = param_2[1];
      }
      else {
        local_20._4_4_ = 1.0;
      }
    }
    else {
      local_20._4_4_ = 0.0;
    }
    if (_DAT_00487ee0 <= param_2[2]) {
      if (param_2[2] <= _DAT_00487ed4) {
        local_20 = (double)CONCAT44(local_20._4_4_,param_2[2]);
      }
      else {
        local_20 = (double)CONCAT44(local_20._4_4_,0x3f800000);
      }
    }
    else {
      local_20 = (double)((ulonglong)(uint)local_20._4_4_ << 0x20);
    }
    if (_DAT_00487ee0 <= param_2[3]) {
      if (param_2[3] <= _DAT_00487ed4) {
        local_18 = (double)CONCAT44(param_2[3],fVar1);
      }
      else {
        local_18 = (double)CONCAT44(0x3f800000,fVar1);
      }
    }
    else {
      local_18 = (double)(ulonglong)(uint)fVar1;
    }
    uVar4 = FUN_00419f50((undefined4 *)&local_20,param_1,0);
    return uVar4;
  }
  if (*(int *)(param_1 + 0x138) != 1) {
    return 0;
  }
  fVar1 = *param_2;
  if (_DAT_00487ee0 <= fVar1) {
    if (_DAT_00487ed4 < fVar1) {
      fVar1 = fVar1 - _DAT_00487ed4;
    }
  }
  else {
    fVar1 = fVar1 + _DAT_00487ed4;
  }
  local_20 = (double)fVar1;
  fVar1 = _DAT_00487ee0;
  if ((_DAT_00487ee0 <= param_2[1]) && (fVar1 = _DAT_00487ed4, param_2[1] <= _DAT_00487ed4)) {
    fVar1 = param_2[1];
  }
  local_18 = (double)fVar1;
  fVar2 = _DAT_00487ee0;
  if ((_DAT_00487ee0 <= param_2[2]) && (fVar2 = _DAT_00487ed4, param_2[2] <= _DAT_00487ed4)) {
    fVar2 = param_2[2];
  }
  local_10 = (double)fVar2;
  fVar3 = _DAT_00487ee0;
  if ((_DAT_00487ee0 <= param_2[3]) && (fVar3 = _DAT_00487ed4, param_2[3] <= _DAT_00487ed4)) {
    fVar3 = param_2[3];
  }
  local_8 = (double)fVar3;
  if ((((float)_DAT_00487598 == fVar1) || ((float)_DAT_00487598 == fVar2)) ||
     ((float)_DAT_00487590 == fVar2)) {
    *(double *)(param_1 + 0x148) = local_20;
  }
  if ((float)_DAT_00487598 == fVar2) {
    *(double *)(param_1 + 0x150) = (double)fVar1;
  }
  else if ((float)_DAT_00487590 == fVar2) {
    *(double *)(param_1 + 0x150) = (double)fVar1;
  }
  uVar4 = FUN_00419fd0((undefined4 *)&local_20,param_1,0);
  return uVar4;
}


