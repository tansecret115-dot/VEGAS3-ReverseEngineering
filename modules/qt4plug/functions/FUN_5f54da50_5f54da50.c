/* Module: qt4plug.dll
   Function: FUN_5f54da50
   Address: 5f54da50
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_5f54da50(undefined4 param_1,int *param_2,undefined4 param_3,int *param_4,undefined4 param_5,
            int *param_6,undefined4 param_7,LONG *param_8,int param_9,int param_10)

{
  int iVar1;
  undefined4 local_118 [26];
  int local_b0;
  int local_ac;
  
  iVar1 = FUN_5f553840(local_118,param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (iVar1 != 0) {
    FUN_5f54d910();
    if (local_b0 < 0x4001) {
      if (local_ac < 0x4001) goto LAB_5f54db33;
    }
    else if (0x4000 < local_ac) {
      if (param_10 != 0) {
        FUN_5f553c80(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9,
                     param_10);
        return 0;
      }
      goto LAB_5f54db33;
    }
    if (param_10 == 0) {
LAB_5f54db33:
      if (param_9 == 0x10) {
        FUN_5f54e0c0();
        return 0;
      }
      FUN_5f54ea10();
      return 0;
    }
    if ((local_b0 < 0x4001) && (0x3fff < local_ac)) {
      if (param_9 == 0x10) {
        FUN_5f54f450();
        return 0;
      }
      if ((double)(local_ac + 0x8000) * _DAT_5f59cb60 * _DAT_5f59cb58 < _DAT_5f59cb50) {
        FUN_5f54fcb0();
        return 0;
      }
      FUN_5f550840();
      return 0;
    }
    if (param_9 == 0x10) {
      FUN_5f551600();
      return 0;
    }
    if ((double)(local_b0 + 0x8000) * _DAT_5f59cb60 * _DAT_5f59cb48 < _DAT_5f59cb50) {
      FUN_5f551e50();
      return 0;
    }
    FUN_5f552a10();
  }
  return 0;
}


