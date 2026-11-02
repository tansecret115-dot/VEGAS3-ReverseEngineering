/* Module: erv23260.dll
   Function: YUV420toRV20Init
   Address: 637f12a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20Init(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  void *this;
  undefined4 uVar2;
  undefined4 *puVar3;
  int local_8;
  
                    /* 0x12a0  10  YUV420toRV20Init */
  puVar3 = (undefined4 *)0x0;
  local_8 = 0;
  if ((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0)) {
    bVar1 = FUN_637f2040();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      local_8 = 1;
    }
    else {
      FUN_637f2370();
      local_8 = 0;
      this = (void *)FUN_637f2000(0x60);
      if (this == (void *)0x0) {
        puVar3 = (undefined4 *)0x0;
      }
      else {
        puVar3 = FUN_637f11c0(this,0x16,&local_8);
      }
      if (puVar3 == (undefined4 *)0x0) {
        local_8 = 2;
      }
      if (local_8 == 0) {
        puVar3[0x11] = *param_1;
        puVar3[0x12] = param_1[1];
        puVar3[0x14] = 2;
        puVar3[0x15] = 2;
        puVar3[0x16] = 0;
      }
    }
    if (local_8 != 0) {
      if (puVar3 != (undefined4 *)0x0) {
        (**(code **)*puVar3)(1);
      }
      puVar3 = (undefined4 *)0x0;
    }
    *param_2 = puVar3;
    uVar2 = FUN_637f1000(local_8);
    return uVar2;
  }
  return 0x80004003;
}


