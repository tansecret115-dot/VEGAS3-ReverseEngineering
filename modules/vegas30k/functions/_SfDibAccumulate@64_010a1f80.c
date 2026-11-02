/* Module: vegas30k.dll
   Function: _SfDibAccumulate@64
   Address: 010a1f80
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int _SfDibAccumulate_64(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5,
                       int param_6,undefined4 param_7,undefined4 param_8,int param_9,
                       undefined4 param_10,undefined4 param_11,undefined4 param_12,
                       undefined4 param_13,undefined4 param_14,undefined4 param_15,
                       undefined4 param_16)

{
  bool bVar1;
  int iVar2;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c [2];
  
                    /* 0xa1f80  821  _SfDibAccumulate@64 */
  bVar1 = true;
  if ((_DAT_011db3f0 == (double)CONCAT44(param_13,param_12)) &&
     (_DAT_011db3f0 == (double)CONCAT44(param_15,param_14))) {
    bVar1 = false;
  }
  if ((param_1 != 0) && (param_2 != 0)) {
    if (_DAT_011db3f0 <= (double)CONCAT44(param_11,param_10)) {
      if (_DAT_011dad58 < (double)CONCAT44(param_11,param_10)) {
        param_10 = 0;
        param_11 = 0x3ff00000;
      }
    }
    else {
      param_10 = 0;
      param_11 = 0;
    }
    if ((param_9 != 2) && (param_9 != 3)) {
      return -0x7fffbfff;
    }
    if ((param_5 != 0) && (param_6 != 0)) {
      iVar2 = _SfDibPrepareCopy_52
                        (&local_14,&local_18,&local_10,local_c,param_1,param_2,param_3,param_4,
                         param_5,param_6,param_7,param_8,param_16);
      if (iVar2 < 0) {
        return iVar2;
      }
      if (param_9 == 2) {
        return -0x7fffbfff;
      }
      if (!bVar1) {
        param_15 = 0;
        param_14 = 0;
        param_13 = 0;
        param_12 = 0;
      }
      FUN_010a1920(local_c[0],param_3,local_10,param_7,local_14,local_18,param_12,param_13,param_14,
                   param_15,param_10,param_11,param_16);
      return 0;
    }
  }
  return -0x7fffbffd;
}


