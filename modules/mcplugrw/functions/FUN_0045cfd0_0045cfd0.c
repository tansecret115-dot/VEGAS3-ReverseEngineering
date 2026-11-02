/* Module: mcplugrw.dll
   Function: FUN_0045cfd0
   Address: 0045cfd0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_0045cfd0(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_78 [26];
  int local_10;
  int local_c;
  
  iVar1 = FUN_0045cb90(local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    if (local_10 < 0x4001) {
      if (local_c < 0x4001) goto LAB_0045d199;
    }
    else if (0x4000 < local_c) {
      if (param_10 != 0) {
        if (param_9 == 0x10) {
          FUN_0045d700();
          return 0;
        }
        if ((double)(local_10 + 0x8000) * _DAT_0049e948 * (double)(local_c + 0x8000) * _DAT_0049e948
            * _DAT_0049e940 < _DAT_0049e938) {
          FUN_0045de60();
          return 0;
        }
        FUN_0045e7e0();
        return 0;
      }
      goto LAB_0045d199;
    }
    if (param_10 == 0) {
LAB_0045d199:
      if (param_9 == 0x10) {
        FUN_0045f370();
        return 0;
      }
      FUN_00460280();
      return 0;
    }
    if ((local_10 < 0x4001) && (0x3fff < local_c)) {
      if (param_9 == 0x10) {
        FUN_00461ac0();
        return 0;
      }
      if ((double)(local_c + 0x8000) * _DAT_0049e948 * _DAT_0049e940 < _DAT_0049e938) {
        FUN_00462020();
        return 0;
      }
      FUN_004626f0();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_00462ef0();
      return 0;
    }
    if ((double)(local_10 + 0x8000) * _DAT_0049e948 * _DAT_0049e930 < _DAT_0049e938) {
      FUN_00463490();
      return 0;
    }
    FUN_00463c10();
  }
  return 0;
}


