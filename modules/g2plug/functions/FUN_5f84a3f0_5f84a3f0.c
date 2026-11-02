/* Module: g2plug.dll
   Function: FUN_5f84a3f0
   Address: 5f84a3f0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f84a3f0(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_78 [26];
  int local_10;
  int local_c;
  
  iVar1 = FUN_5f849fb0(local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    if (local_10 < 0x4001) {
      if (local_c < 0x4001) goto LAB_5f84a5b9;
    }
    else if (0x4000 < local_c) {
      if (param_10 != 0) {
        if (param_9 == 0x10) {
          FUN_5f84ab20();
          return 0;
        }
        if ((double)(local_10 + 0x8000) * _DAT_5f870e88 * (double)(local_c + 0x8000) * _DAT_5f870e88
            * _DAT_5f870e80 < _DAT_5f870e78) {
          FUN_5f84b280();
          return 0;
        }
        FUN_5f84bc00();
        return 0;
      }
      goto LAB_5f84a5b9;
    }
    if (param_10 == 0) {
LAB_5f84a5b9:
      if (param_9 == 0x10) {
        FUN_5f84c790();
        return 0;
      }
      FUN_5f84d6a0();
      return 0;
    }
    if ((local_10 < 0x4001) && (0x3fff < local_c)) {
      if (param_9 == 0x10) {
        FUN_5f84eee0();
        return 0;
      }
      if ((double)(local_c + 0x8000) * _DAT_5f870e88 * _DAT_5f870e80 < _DAT_5f870e78) {
        FUN_5f84f440();
        return 0;
      }
      FUN_5f84fb10();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_5f850310();
      return 0;
    }
    if ((double)(local_10 + 0x8000) * _DAT_5f870e88 * _DAT_5f870e70 < _DAT_5f870e78) {
      FUN_5f8508b0();
      return 0;
    }
    FUN_5f851030();
  }
  return 0;
}


