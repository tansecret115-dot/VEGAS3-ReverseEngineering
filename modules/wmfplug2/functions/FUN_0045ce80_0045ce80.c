/* Module: wmfplug2.dll
   Function: FUN_0045ce80
   Address: 0045ce80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0045ce80(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_78 [26];
  int local_10;
  int local_c;
  
  iVar1 = FUN_0045ca40(local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    if (local_10 < 0x4001) {
      if (local_c < 0x4001) goto LAB_0045d049;
    }
    else if (0x4000 < local_c) {
      if (param_10 != 0) {
        if (param_9 == 0x10) {
          FUN_0045d5b0();
          return 0;
        }
        if ((double)(local_10 + 0x8000) * _DAT_00483bc8 * (double)(local_c + 0x8000) * _DAT_00483bc8
            * _DAT_00483bc0 < _DAT_00483bb8) {
          FUN_0045dd10();
          return 0;
        }
        FUN_0045e690();
        return 0;
      }
      goto LAB_0045d049;
    }
    if (param_10 == 0) {
LAB_0045d049:
      if (param_9 == 0x10) {
        FUN_0045f220();
        return 0;
      }
      FUN_00460130();
      return 0;
    }
    if ((local_10 < 0x4001) && (0x3fff < local_c)) {
      if (param_9 == 0x10) {
        FUN_00461970();
        return 0;
      }
      if ((double)(local_c + 0x8000) * _DAT_00483bc8 * _DAT_00483bc0 < _DAT_00483bb8) {
        FUN_00461ed0();
        return 0;
      }
      FUN_004625a0();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_00462da0();
      return 0;
    }
    if ((double)(local_10 + 0x8000) * _DAT_00483bc8 * _DAT_00483bb0 < _DAT_00483bb8) {
      FUN_00463340();
      return 0;
    }
    FUN_00463ac0();
  }
  return 0;
}


