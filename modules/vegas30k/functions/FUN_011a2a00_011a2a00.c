/* Module: vegas30k.dll
   Function: FUN_011a2a00
   Address: 011a2a00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_011a2a00(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,float param_8,float param_9,float param_10,
            float param_11)

{
  int iVar1;
  undefined8 uVar2;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  local_38 = 1.0;
  if (_DAT_011dd160 <= param_8) {
    local_28 = _DAT_011dad58;
    if (_DAT_011dd160 < param_8) {
      local_38 = (double)((float)_DAT_011dad58 - param_8);
    }
  }
  else {
    local_38 = 1.0;
    local_28 = (double)param_8 + _DAT_011dad58;
  }
  if (_DAT_011dd160 <= param_9) {
    local_20 = local_28;
    local_30 = local_38;
    if (_DAT_011dd160 <= param_9) {
      local_30 = ((double)param_9 + _DAT_011dad58) * local_38;
      local_20 = (_DAT_011dad58 - (double)param_9) * local_28;
      local_38 = (_DAT_011dad58 - (double)param_9) * local_38;
      local_28 = ((double)param_9 + _DAT_011dad58) * local_28;
    }
  }
  else {
    local_20 = (ABS((double)param_9) + _DAT_011dad58) * local_28;
    local_30 = ((double)param_9 + _DAT_011dad58) * local_38;
    local_28 = ((double)param_9 + _DAT_011dad58) * local_28;
    local_38 = (ABS((double)param_9) + _DAT_011dad58) * local_38;
  }
  local_30 = local_30 * _DAT_011db6e8;
  local_20 = local_20 * _DAT_011db6e8;
  local_28 = local_28 * _DAT_011db6e8;
  local_38 = local_38 * _DAT_011db6e8;
  uVar2 = __allmul(*(undefined2 *)(param_1 + 2),0,param_6,param_7);
  iVar1 = _SfAudio_GetSampleType_4(param_1);
  if (iVar1 != 0x20) {
    if (iVar1 == 0x21) {
      FUN_011a2940(param_2,param_3,param_4,param_5,uVar2,local_38,local_20,(double)param_11,
                   (double)param_10,local_30,local_28);
      return 0;
    }
    return 1;
  }
  FUN_011a2880(param_2,param_3,param_4,param_5,uVar2,local_38,local_20,(double)param_11,
               (double)param_10,local_30,local_28);
  return 0;
}


