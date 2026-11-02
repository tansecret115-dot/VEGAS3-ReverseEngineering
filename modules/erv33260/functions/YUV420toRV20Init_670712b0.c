/* Module: erv33260.dll
   Function: YUV420toRV20Init
   Address: 670712b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20Init(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  void *this;
  undefined4 uVar2;
  undefined4 *puVar3;
  int local_8;
  
                    /* 0x12b0  10  YUV420toRV20Init */
  puVar3 = (undefined4 *)0x0;
  local_8 = 0;
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) {
    return 0x80004003;
  }
  bVar1 = FUN_67072170();
  if (CONCAT31(extraout_var,bVar1) == 0) {
    local_8 = 1;
LAB_67071331:
    if (local_8 == 0) goto LAB_67071346;
  }
  else {
    FUN_67072430();
    local_8 = 0;
    this = (void *)FUN_67072130(0x60);
    if (this == (void *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      puVar3 = FUN_670711c0(this,0x17,&local_8);
    }
    if (puVar3 == (undefined4 *)0x0) {
      local_8 = 2;
    }
    if (local_8 == 0) {
      puVar3[0x11] = *param_1;
      puVar3[0x12] = param_1[1];
      goto LAB_67071331;
    }
  }
  if (puVar3 != (undefined4 *)0x0) {
    (**(code **)*puVar3)(1);
  }
  puVar3 = (undefined4 *)0x0;
LAB_67071346:
  *param_2 = puVar3;
  uVar2 = FUN_67071000(local_8);
  return uVar2;
}


