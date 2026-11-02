/* Module: erv23260.dll
   Function: YUV420toRV20CustomMessage
   Address: 637f1880
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20CustomMessage(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
                    /* 0x1880  4  YUV420toRV20CustomMessage */
  if (((param_1 != 0) && (param_2 != 0)) && (*(int *)(param_2 + 0x20) == -0x51403f2f)) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x40) + 0x40))(param_1);
    uVar2 = FUN_637f1000(iVar1);
    return uVar2;
  }
  return 0x80004003;
}


