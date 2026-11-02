/* Module: qt4plug.dll
   Function: FUN_5f553c80
   Address: 5f553c80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f553c80(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_78 [26];
  int local_10;
  int local_c;
  
  iVar1 = FUN_5f553840(local_78,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    if (local_10 < 0x4001) {
      if (local_c < 0x4001) goto LAB_5f553e49;
    }
    else if (0x4000 < local_c) {
      if (param_10 != 0) {
        if (param_9 == 0x10) {
          FUN_5f5543b0();
          return 0;
        }
        if ((double)(local_10 + 0x8000) * _DAT_5f59cb60 * (double)(local_c + 0x8000) * _DAT_5f59cb60
            * _DAT_5f59cb58 < _DAT_5f59cb50) {
          FUN_5f554b10();
          return 0;
        }
        FUN_5f555490();
        return 0;
      }
      goto LAB_5f553e49;
    }
    if (param_10 == 0) {
LAB_5f553e49:
      if (param_9 == 0x10) {
        FUN_5f556020();
        return 0;
      }
      FUN_5f556f30();
      return 0;
    }
    if ((local_10 < 0x4001) && (0x3fff < local_c)) {
      if (param_9 == 0x10) {
        FUN_5f558770();
        return 0;
      }
      if ((double)(local_c + 0x8000) * _DAT_5f59cb60 * _DAT_5f59cb58 < _DAT_5f59cb50) {
        FUN_5f558cd0();
        return 0;
      }
      FUN_5f5593a0();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_5f559ba0();
      return 0;
    }
    if ((double)(local_10 + 0x8000) * _DAT_5f59cb60 * _DAT_5f59cb48 < _DAT_5f59cb50) {
      FUN_5f55a140();
      return 0;
    }
    FUN_5f55a8c0();
  }
  return 0;
}


