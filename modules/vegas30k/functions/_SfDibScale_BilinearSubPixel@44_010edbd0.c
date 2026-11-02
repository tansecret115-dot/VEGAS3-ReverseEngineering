/* Module: vegas30k.dll
   Function: _SfDibScale_BilinearSubPixel@44
   Address: 010edbd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfDibScale_BilinearSubPixel_44
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
          int param_10,undefined4 param_11)

{
  int iVar1;
  int local_a4;
  undefined1 local_a0 [40];
  undefined1 local_78 [104];
  int local_10;
  int local_c;
  
                    /* 0xedbd0  885  _SfDibScale_BilinearSubPixel@44 */
  iVar1 = _SfPrepareSubpixelParam_36
                    (local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    if (local_10 < 0x4001) {
      if (local_c < 0x4001) goto LAB_010edd99;
    }
    else if (0x4000 < local_c) {
      if (param_10 != 0) {
        if (param_9 == 0x10) {
          FUN_010ee300(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78
                       ,local_a0,param_11);
          return 0;
        }
        local_a4 = local_10 + 0x8000;
        if ((double)local_a4 * _DAT_011dba40 * (double)(local_c + 0x8000) * _DAT_011dba40 *
            _DAT_011e32c8 < _DAT_011e32c0) {
          FUN_010eea60(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                       local_78,local_a0,param_11);
          return 0;
        }
        FUN_010ef3e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     local_78,local_a0,param_11);
        return 0;
      }
      goto LAB_010edd99;
    }
    if (param_10 == 0) {
LAB_010edd99:
      if (param_9 == 0x10) {
        FUN_010eff70(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78,
                     local_a0,param_11);
        return 0;
      }
      FUN_010f0e80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                   &local_a4,param_11);
      return 0;
    }
    if ((local_10 < 0x4001) && (0x3fff < local_c)) {
      if (param_9 == 0x10) {
        FUN_010f26c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78,
                     local_a0,param_11);
        return 0;
      }
      local_a4 = local_c + 0x8000;
      if ((double)local_a4 * _DAT_011dba40 * _DAT_011e32c8 < _DAT_011e32c0) {
        FUN_010f2c20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     local_78,local_a0,param_11);
        return 0;
      }
      FUN_010f32f0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                   local_a0,param_11);
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_010f3af0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_78,
                   local_a0,param_11);
      return 0;
    }
    local_a4 = local_10 + 0x8000;
    if ((double)local_a4 * _DAT_011dba40 * _DAT_011e32b8 < _DAT_011e32c0) {
      FUN_010f4090(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                   local_a0,param_11);
      return 0;
    }
    FUN_010f4810(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_78,
                 local_a0,param_11);
  }
  return 0;
}


