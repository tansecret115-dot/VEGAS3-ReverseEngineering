/* Module: erv33260.dll
   Function: YUV420toRV20Free
   Address: 67071da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void YUV420toRV20Free(undefined4 *param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int iVar2;
  
                    /* 0x1da0  6  YUV420toRV20Free */
  iVar2 = 0;
  if ((param_1 != (undefined4 *)0x0) && (param_1[8] == -0x51403f2f)) {
    iVar2 = (**(code **)(*(int *)param_1[0x10] + 0x1c))();
    (**(code **)*param_1)(1);
  }
  bVar1 = FUN_670721a0();
  if ((CONCAT31(extraout_var,bVar1) == 0) && (iVar2 == 0)) {
    iVar2 = 1;
  }
  FUN_67071000(iVar2);
  return;
}


