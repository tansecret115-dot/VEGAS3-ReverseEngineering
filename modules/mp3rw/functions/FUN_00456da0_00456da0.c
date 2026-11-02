/* Module: mp3rw.dll
   Function: FUN_00456da0
   Address: 00456da0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00456da0(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_118 [26];
  int local_b0;
  int local_ac;
  
  iVar1 = FUN_0045cb90(local_118,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    FUN_00456c60();
    if (local_b0 < 0x4001) {
      if (local_ac < 0x4001) goto LAB_00456e83;
    }
    else if (0x4000 < local_ac) {
      if (param_10 != 0) {
        FUN_0045cfd0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
        return 0;
      }
      goto LAB_00456e83;
    }
    if (param_10 == 0) {
LAB_00456e83:
      if (param_9 == 0x10) {
        FUN_00457410();
        return 0;
      }
      FUN_00457d60();
      return 0;
    }
    if ((local_b0 < 0x4001) && (0x3fff < local_ac)) {
      if (param_9 == 0x10) {
        FUN_004587a0();
        return 0;
      }
      if ((double)(local_ac + 0x8000) * _DAT_0049e948 * _DAT_0049e940 < _DAT_0049e938) {
        FUN_00459000();
        return 0;
      }
      FUN_00459b90();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_0045a950();
      return 0;
    }
    if ((double)(local_b0 + 0x8000) * _DAT_0049e948 * _DAT_0049e930 < _DAT_0049e938) {
      FUN_0045b1a0();
      return 0;
    }
    FUN_0045bd60();
  }
  return 0;
}


