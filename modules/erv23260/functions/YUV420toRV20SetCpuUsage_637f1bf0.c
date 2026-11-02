/* Module: erv23260.dll
   Function: YUV420toRV20SetCpuUsage
   Address: 637f1bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20SetCpuUsage(undefined4 param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x1bf0  14  YUV420toRV20SetCpuUsage */
  if ((param_2 != (int *)0x0) && (param_2[8] == -0x51403f2f)) {
    iVar1 = (**(code **)(*(int *)param_2[0x10] + 0x48))(&param_2);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*param_2 + 8))(param_1);
    }
    uVar2 = FUN_637f1000(iVar1);
    return uVar2;
  }
  return 0x80004003;
}


