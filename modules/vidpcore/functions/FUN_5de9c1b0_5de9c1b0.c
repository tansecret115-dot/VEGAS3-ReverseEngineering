/* Module: vidpcore.dll
   Function: FUN_5de9c1b0
   Address: 5de9c1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5de9c1b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined4 param_11,undefined4 param_12,
                 undefined4 param_13,undefined4 param_14,undefined4 param_15,undefined4 param_16,
                 undefined4 param_17,undefined4 param_18,undefined4 param_19,undefined4 param_20)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  switch(param_20) {
  case 10:
    local_28 = 0;
    local_24 = 0xffff6000;
    local_20 = 0x8000;
    local_1c = 0x8000;
    local_18 = 0;
    local_14 = 0x4000;
    local_10 = 0xffff8000;
    local_c = 0x8000;
    break;
  case 0xb:
    local_28 = 0xa000;
    local_24 = 0;
    local_20 = 0xffff8000;
    local_1c = 0x8000;
    local_18 = 0xffffc000;
    local_14 = 0;
    local_10 = 0xffff8000;
    local_c = 0xffff8000;
    break;
  case 0xc:
    local_28 = 0;
    local_24 = 0xa000;
    local_20 = 0x8000;
    local_1c = 0xffff8000;
    local_18 = 0;
    local_14 = 0xffffc000;
    local_10 = 0xffff8000;
    local_c = 0xffff8000;
    break;
  case 0xd:
    local_28 = 0xffff6000;
    local_24 = 0;
    local_20 = 0x8000;
    local_1c = 0x8000;
    local_18 = 0x4000;
    local_14 = 0;
    local_10 = 0x8000;
    local_c = 0xffff8000;
  }
  FUN_5de9abc0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
               param_11,param_12,param_13,param_14,param_15,param_16,param_17,param_18,param_19,
               &local_28,4);
  return;
}


