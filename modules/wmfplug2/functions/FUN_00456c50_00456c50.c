/* Module: wmfplug2.dll
   Function: FUN_00456c50
   Address: 00456c50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00456c50(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_118 [26];
  int local_b0;
  int local_ac;
  
  iVar1 = FUN_0045ca40(local_118,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    FUN_00456b10();
    if (local_b0 < 0x4001) {
      if (local_ac < 0x4001) goto LAB_00456d33;
    }
    else if (0x4000 < local_ac) {
      if (param_10 != 0) {
        FUN_0045ce80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
        return 0;
      }
      goto LAB_00456d33;
    }
    if (param_10 == 0) {
LAB_00456d33:
      if (param_9 == 0x10) {
        FUN_004572c0();
        return 0;
      }
      FUN_00457c10();
      return 0;
    }
    if ((local_b0 < 0x4001) && (0x3fff < local_ac)) {
      if (param_9 == 0x10) {
        FUN_00458650();
        return 0;
      }
      if ((double)(local_ac + 0x8000) * _DAT_00483bc8 * _DAT_00483bc0 < _DAT_00483bb8) {
        FUN_00458eb0();
        return 0;
      }
      FUN_00459a40();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_0045a800();
      return 0;
    }
    if ((double)(local_b0 + 0x8000) * _DAT_00483bc8 * _DAT_00483bb0 < _DAT_00483bb8) {
      FUN_0045b050();
      return 0;
    }
    FUN_0045bc10();
  }
  return 0;
}


