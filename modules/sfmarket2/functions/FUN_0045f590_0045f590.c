/* Module: sfmarket2.dll
   Function: FUN_0045f590
   Address: 0045f590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0045f590(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_118 [26];
  int local_b0;
  int local_ac;
  
  iVar1 = FUN_00465380(local_118,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    FUN_0045f450();
    if (local_b0 < 0x4001) {
      if (local_ac < 0x4001) goto LAB_0045f673;
    }
    else if (0x4000 < local_ac) {
      if (param_10 != 0) {
        FUN_004657c0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
        return 0;
      }
      goto LAB_0045f673;
    }
    if (param_10 == 0) {
LAB_0045f673:
      if (param_9 == 0x10) {
        FUN_0045fc00();
        return 0;
      }
      FUN_00460550();
      return 0;
    }
    if ((local_b0 < 0x4001) && (0x3fff < local_ac)) {
      if (param_9 == 0x10) {
        FUN_00460f90();
        return 0;
      }
      if ((double)(local_ac + 0x8000) * _DAT_004a1348 * _DAT_004a1340 < _DAT_004a1338) {
        FUN_004617f0();
        return 0;
      }
      FUN_00462380();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_00463140();
      return 0;
    }
    if ((double)(local_b0 + 0x8000) * _DAT_004a1348 * _DAT_004a1330 < _DAT_004a1338) {
      FUN_00463990();
      return 0;
    }
    FUN_00464550();
  }
  return 0;
}


