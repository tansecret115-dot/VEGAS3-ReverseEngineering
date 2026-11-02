/* Module: vfplugs.dll
   Function: FUN_00444b80
   Address: 00444b80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00444b80(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_118 [26];
  int local_b0;
  int local_ac;
  
  iVar1 = FUN_00456090(local_118,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    FUN_00444a40();
    if (local_b0 < 0x4001) {
      if (local_ac < 0x4001) goto LAB_00444c63;
    }
    else if (0x4000 < local_ac) {
      if (param_10 != 0) {
        FUN_004564d0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
        return 0;
      }
      goto LAB_00444c63;
    }
    if (param_10 == 0) {
LAB_00444c63:
      if (param_9 == 0x10) {
        FUN_004451f0();
        return 0;
      }
      FUN_00445b40();
      return 0;
    }
    if ((local_b0 < 0x4001) && (0x3fff < local_ac)) {
      if (param_9 == 0x10) {
        FUN_00446580();
        return 0;
      }
      if ((double)(local_ac + 0x8000) * _DAT_0048ca38 * _DAT_0048cda8 < _DAT_0048cda0) {
        FUN_00446de0();
        return 0;
      }
      FUN_00447970();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_00448730();
      return 0;
    }
    if ((double)(local_b0 + 0x8000) * _DAT_0048ca38 * _DAT_0048cd98 < _DAT_0048cda0) {
      FUN_00448f80();
      return 0;
    }
    FUN_00449b40();
  }
  return 0;
}


