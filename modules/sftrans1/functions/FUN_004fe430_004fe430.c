/* Module: sftrans1.dll
   Function: FUN_004fe430
   Address: 004fe430
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004fe430(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
            int param_10,undefined4 param_11)

{
  int iVar1;
  int local_a4;
  undefined1 local_a0 [40];
  undefined1 local_78 [104];
  int local_10;
  int local_c;
  
  iVar1 = FUN_004fdff0(local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    if (local_10 < 0x4001) {
      if (local_c < 0x4001) goto LAB_004fe5f9;
    }
    else if (0x4000 < local_c) {
      if (param_10 != 0) {
        if (param_9 == 0x10) {
          FUN_004feb60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78
                       ,local_a0,param_11);
          return 0;
        }
        local_a4 = local_10 + 0x8000;
        if ((double)local_a4 * _DAT_00561088 * (double)(local_c + 0x8000) * _DAT_00561088 *
            _DAT_0056b490 < _DAT_0056b488) {
          FUN_004ff2c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       local_78,local_a0,param_11);
          return 0;
        }
        FUN_004ffc40(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     local_78,local_a0,param_11);
        return 0;
      }
      goto LAB_004fe5f9;
    }
    if (param_10 == 0) {
LAB_004fe5f9:
      if (param_9 == 0x10) {
        FUN_005007d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78,
                     local_a0,param_11);
        return 0;
      }
      FUN_005016e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                   &local_a4,param_11);
      return 0;
    }
    if ((local_10 < 0x4001) && (0x3fff < local_c)) {
      if (param_9 == 0x10) {
        FUN_00502f20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78,
                     local_a0,param_11);
        return 0;
      }
      local_a4 = local_c + 0x8000;
      if ((double)local_a4 * _DAT_00561088 * _DAT_0056b490 < _DAT_0056b488) {
        FUN_00503480(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     local_78,local_a0,param_11);
        return 0;
      }
      FUN_00503b50(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                   local_a0,param_11);
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_00504350(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78,
                   local_a0,param_11);
      return 0;
    }
    local_a4 = local_10 + 0x8000;
    if ((double)local_a4 * _DAT_00561088 * _DAT_0056b480 < _DAT_0056b488) {
      FUN_005048f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                   local_a0,param_11);
      return 0;
    }
    FUN_00505070(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                 local_a0,param_11);
  }
  return 0;
}


