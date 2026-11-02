/* Module: erv33260.dll
   Function: YUV420toRV20CustomMessage
   Address: 67071980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20CustomMessage(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x1980  4  YUV420toRV20CustomMessage */
  if (((param_1 != 0) && (param_2 != 0)) && (*(int *)(param_2 + 0x20) == -0x51403f2f)) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x40) + 0x40))(param_1);
    uVar2 = FUN_67071000(iVar1);
    return uVar2;
  }
  return 0x80004003;
}


