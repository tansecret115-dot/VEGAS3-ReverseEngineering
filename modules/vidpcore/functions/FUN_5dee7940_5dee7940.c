/* Module: vidpcore.dll
   Function: FUN_5dee7940
   Address: 5dee7940
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5dee7940(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
            int param_10,undefined4 param_11)

{
  int iVar1;
  int local_a4;
  undefined1 local_a0 [40];
  undefined1 local_78 [104];
  int local_10;
  int local_c;
  
  iVar1 = FUN_5dee7500(local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    if (local_10 < 0x4001) {
      if (local_c < 0x4001) goto LAB_5dee7b09;
    }
    else if (0x4000 < local_c) {
      if (param_10 != 0) {
        if (param_9 == 0x10) {
          FUN_5dee8070(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78
                       ,local_a0,param_11);
          return 0;
        }
        local_a4 = local_10 + 0x8000;
        if ((double)local_a4 * _DAT_5df34770 * (double)(local_c + 0x8000) * _DAT_5df34770 *
            _DAT_5df35208 < _DAT_5df35200) {
          FUN_5dee87d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       local_78,local_a0,param_11);
          return 0;
        }
        FUN_5dee9150(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     local_78,local_a0,param_11);
        return 0;
      }
      goto LAB_5dee7b09;
    }
    if (param_10 == 0) {
LAB_5dee7b09:
      if (param_9 == 0x10) {
        FUN_5dee9ce0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78,
                     local_a0,param_11);
        return 0;
      }
      FUN_5deeabf0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                   &local_a4,param_11);
      return 0;
    }
    if ((local_10 < 0x4001) && (0x3fff < local_c)) {
      if (param_9 == 0x10) {
        FUN_5deec430(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78,
                     local_a0,param_11);
        return 0;
      }
      local_a4 = local_c + 0x8000;
      if ((double)local_a4 * _DAT_5df34770 * _DAT_5df35208 < _DAT_5df35200) {
        FUN_5deec990(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     local_78,local_a0,param_11);
        return 0;
      }
      FUN_5deed060(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                   local_a0,param_11);
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_5deed860(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78,
                   local_a0,param_11);
      return 0;
    }
    local_a4 = local_10 + 0x8000;
    if ((double)local_a4 * _DAT_5df34770 * _DAT_5df351f8 < _DAT_5df35200) {
      FUN_5deede00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                   local_a0,param_11);
      return 0;
    }
    FUN_5deee580(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                 local_a0,param_11);
  }
  return 0;
}


