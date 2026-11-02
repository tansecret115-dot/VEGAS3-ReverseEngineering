/* Module: aviplug.dll
   Function: FUN_5f9ab470
   Address: 5f9ab470
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f9ab470(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_78 [26];
  int local_10;
  int local_c;
  
  iVar1 = FUN_5f9ab030(local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    if (local_10 < 0x4001) {
      if (local_c < 0x4001) goto LAB_5f9ab639;
    }
    else if (0x4000 < local_c) {
      if (param_10 != 0) {
        if (param_9 == 0x10) {
          FUN_5f9abba0();
          return 0;
        }
        if ((double)(local_10 + 0x8000) * _DAT_5f9ec610 * (double)(local_c + 0x8000) * _DAT_5f9ec610
            * _DAT_5f9ec608 < _DAT_5f9ec600) {
          FUN_5f9ac300();
          return 0;
        }
        FUN_5f9acc80();
        return 0;
      }
      goto LAB_5f9ab639;
    }
    if (param_10 == 0) {
LAB_5f9ab639:
      if (param_9 == 0x10) {
        FUN_5f9ad810();
        return 0;
      }
      FUN_5f9ae720();
      return 0;
    }
    if ((local_10 < 0x4001) && (0x3fff < local_c)) {
      if (param_9 == 0x10) {
        FUN_5f9aff60();
        return 0;
      }
      if ((double)(local_c + 0x8000) * _DAT_5f9ec610 * _DAT_5f9ec608 < _DAT_5f9ec600) {
        FUN_5f9b04c0();
        return 0;
      }
      FUN_5f9b0b90();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_5f9b1390();
      return 0;
    }
    if ((double)(local_10 + 0x8000) * _DAT_5f9ec610 * _DAT_5f9ec5f8 < _DAT_5f9ec600) {
      FUN_5f9b1930();
      return 0;
    }
    FUN_5f9b20b0();
  }
  return 0;
}


