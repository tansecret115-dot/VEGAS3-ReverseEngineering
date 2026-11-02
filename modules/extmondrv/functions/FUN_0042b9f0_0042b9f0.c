/* Module: extmondrv.dll
   Function: FUN_0042b9f0
   Address: 0042b9f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0042b9f0(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_118 [26];
  int local_b0;
  int local_ac;
  
  iVar1 = FUN_004317e0(local_118,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    FUN_0042b8b0();
    if (local_b0 < 0x4001) {
      if (local_ac < 0x4001) goto LAB_0042bad3;
    }
    else if (0x4000 < local_ac) {
      if (param_10 != 0) {
        FUN_00431c20(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
        return 0;
      }
      goto LAB_0042bad3;
    }
    if (param_10 == 0) {
LAB_0042bad3:
      if (param_9 == 0x10) {
        FUN_0042c060();
        return 0;
      }
      FUN_0042c9b0();
      return 0;
    }
    if ((local_b0 < 0x4001) && (0x3fff < local_ac)) {
      if (param_9 == 0x10) {
        FUN_0042d3f0();
        return 0;
      }
      if ((double)(local_ac + 0x8000) * _DAT_00453f88 * _DAT_00453f80 < _DAT_00453f78) {
        FUN_0042dc50();
        return 0;
      }
      FUN_0042e7e0();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_0042f5a0();
      return 0;
    }
    if ((double)(local_b0 + 0x8000) * _DAT_00453f88 * _DAT_00453f70 < _DAT_00453f78) {
      FUN_0042fdf0();
      return 0;
    }
    FUN_004309b0();
  }
  return 0;
}


