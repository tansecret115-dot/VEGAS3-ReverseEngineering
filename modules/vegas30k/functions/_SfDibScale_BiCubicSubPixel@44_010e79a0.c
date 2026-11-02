/* Module: vegas30k.dll
   Function: _SfDibScale_BiCubicSubPixel@44
   Address: 010e79a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
_SfDibScale_BiCubicSubPixel_44
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
          int param_10,undefined4 param_11)

{
  int iVar1;
  undefined1 local_11c [4];
  undefined1 local_118 [104];
  int local_b0;
  int local_ac;
  undefined1 local_a0 [16];
  undefined1 local_90 [32];
  undefined1 local_70 [16];
  undefined1 local_60 [16];
  undefined1 local_50 [40];
  undefined1 local_28 [40];
  
                    /* 0xe79a0  883  _SfDibScale_BiCubicSubPixel@44 */
  iVar1 = _SfPrepareSubpixelParam_36
                    (local_118,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    FUN_010e7860();
    if (local_b0 < 0x4001) {
      if (local_ac < 0x4001) goto LAB_010e7a83;
    }
    else if (0x4000 < local_ac) {
      if (param_10 != 0) {
        _SfDibScale_BilinearSubPixel_44
                  (param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,param_10,
                   param_11);
        return 0;
      }
      goto LAB_010e7a83;
    }
    if (param_10 == 0) {
LAB_010e7a83:
      if (param_9 == 0x10) {
        FUN_010e8010(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_118,
                     local_60,param_11);
        return 0;
      }
      FUN_010e8960(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_118
                   ,local_11c,param_11);
      return 0;
    }
    if ((local_b0 < 0x4001) && (0x3fff < local_ac)) {
      if (param_9 == 0x10) {
        FUN_010e93a0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_118,
                     local_90,param_11);
        return 0;
      }
      if ((double)(local_ac + 0x8000) * _DAT_011dba40 * _DAT_011e32c8 < _DAT_011e32c0) {
        FUN_010e9c00(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     local_118,local_70,param_11);
        return 0;
      }
      FUN_010ea790(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_118
                   ,local_50,param_11);
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_010eb550(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0x10,local_118,
                   local_90,param_11);
      return 0;
    }
    if ((double)(local_b0 + 0x8000) * _DAT_011dba40 * _DAT_011e32b8 < _DAT_011e32c0) {
      FUN_010ebda0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_118
                   ,local_a0,param_11);
      return 0;
    }
    FUN_010ec960(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,local_118,
                 local_28,param_11);
  }
  return 0;
}


