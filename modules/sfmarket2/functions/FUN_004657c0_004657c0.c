/* Module: sfmarket2.dll
   Function: FUN_004657c0
   Address: 004657c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_004657c0(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_78 [26];
  int local_10;
  int local_c;
  
  iVar1 = FUN_00465380(local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    if (local_10 < 0x4001) {
      if (local_c < 0x4001) goto LAB_00465989;
    }
    else if (0x4000 < local_c) {
      if (param_10 != 0) {
        if (param_9 == 0x10) {
          FUN_00465ef0();
          return 0;
        }
        if ((double)(local_10 + 0x8000) * _DAT_004a1348 * (double)(local_c + 0x8000) * _DAT_004a1348
            * _DAT_004a1340 < _DAT_004a1338) {
          FUN_00466650();
          return 0;
        }
        FUN_00466fd0();
        return 0;
      }
      goto LAB_00465989;
    }
    if (param_10 == 0) {
LAB_00465989:
      if (param_9 == 0x10) {
        FUN_00467b60();
        return 0;
      }
      FUN_00468a70();
      return 0;
    }
    if ((local_10 < 0x4001) && (0x3fff < local_c)) {
      if (param_9 == 0x10) {
        FUN_0046a2b0();
        return 0;
      }
      if ((double)(local_c + 0x8000) * _DAT_004a1348 * _DAT_004a1340 < _DAT_004a1338) {
        FUN_0046a810();
        return 0;
      }
      FUN_0046aee0();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_0046b6e0();
      return 0;
    }
    if ((double)(local_10 + 0x8000) * _DAT_004a1348 * _DAT_004a1330 < _DAT_004a1338) {
      FUN_0046bc80();
      return 0;
    }
    FUN_0046c400();
  }
  return 0;
}


