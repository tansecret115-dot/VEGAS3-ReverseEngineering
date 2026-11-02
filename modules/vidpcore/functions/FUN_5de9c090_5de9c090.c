/* Module: vidpcore.dll
   Function: FUN_5de9c090
   Address: 5de9c090
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de9c090(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  switch(param_20) {
  case 6:
    local_1c = 0xffff8000;
    local_14 = 0x4000;
    break;
  case 7:
    local_20 = 0x8000;
    local_18 = 0xffffc000;
    goto LAB_5de9c129;
  case 8:
    local_1c = 0x8000;
    local_14 = 0xffffc000;
    break;
  case 9:
    local_20 = 0xffff8000;
    local_18 = 0x4000;
LAB_5de9c129:
    local_1c = 0;
    local_14 = 0x6ed9;
    local_c = 0xffff9127;
    local_10 = local_18;
  default:
    goto switchD_5de9c0a8_default;
  }
  local_18 = 0x6ed9;
  local_20 = 0;
  local_10 = 0xffff9127;
  local_c = local_14;
switchD_5de9c0a8_default:
  FUN_5de9abc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               &local_20,3);
  return;
}


