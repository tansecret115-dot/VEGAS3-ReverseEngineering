/* Module: extmondrv.dll
   Function: FUN_00431c20
   Address: 00431c20
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_00431c20(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_78 [26];
  int local_10;
  int local_c;
  
  iVar1 = FUN_004317e0(local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    if (local_10 < 0x4001) {
      if (local_c < 0x4001) goto LAB_00431de9;
    }
    else if (0x4000 < local_c) {
      if (param_10 != 0) {
        if (param_9 == 0x10) {
          FUN_00432350();
          return 0;
        }
        if ((double)(local_10 + 0x8000) * _DAT_00453f88 * (double)(local_c + 0x8000) * _DAT_00453f88
            * _DAT_00453f80 < _DAT_00453f78) {
          FUN_00432ab0();
          return 0;
        }
        FUN_00433430();
        return 0;
      }
      goto LAB_00431de9;
    }
    if (param_10 == 0) {
LAB_00431de9:
      if (param_9 == 0x10) {
        FUN_00433fc0();
        return 0;
      }
      FUN_00434ed0();
      return 0;
    }
    if ((local_10 < 0x4001) && (0x3fff < local_c)) {
      if (param_9 == 0x10) {
        FUN_00436710();
        return 0;
      }
      if ((double)(local_c + 0x8000) * _DAT_00453f88 * _DAT_00453f80 < _DAT_00453f78) {
        FUN_00436c70();
        return 0;
      }
      FUN_00437340();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_00437b40();
      return 0;
    }
    if ((double)(local_10 + 0x8000) * _DAT_00453f88 * _DAT_00453f70 < _DAT_00453f78) {
      FUN_004380e0();
      return 0;
    }
    FUN_00438860();
  }
  return 0;
}


