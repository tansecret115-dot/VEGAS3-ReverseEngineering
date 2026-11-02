/* Module: erv23260.dll
   Function: YUV420toRV20PreFilterInit
   Address: 637f1d30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
YUV420toRV20PreFilterInit
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6)

{
  void *this;
  int *piVar1;
  int iVar2;
  
                    /* 0x1d30  13  YUV420toRV20PreFilterInit */
  this = (void *)FUN_637f2000(0xf8);
  if (this == (void *)0x0) {
    piVar1 = (int *)0x0;
  }
  else {
    piVar1 = FUN_63804e50(this,param_4,param_5,param_6);
  }
  if (piVar1 == (int *)0x0) {
    *param_1 = 0;
    return 0x80004005;
  }
  *param_1 = piVar1;
  iVar2 = (**(code **)(*piVar1 + 0x28))(param_2,param_3);
  if (iVar2 == 0) {
    (**(code **)(*piVar1 + 0x2c))(1);
    *param_1 = 0;
    return 0x80004005;
  }
  (**(code **)*piVar1)(1);
  return 0;
}


