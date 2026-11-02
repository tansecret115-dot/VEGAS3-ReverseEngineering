/* Module: erv33260.dll
   Function: YUV420toRV20MaxCompressedSize
   Address: 67071d20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20MaxCompressedSize(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
                    /* 0x1d20  11  YUV420toRV20MaxCompressedSize */
  if (((param_1 != (undefined4 *)0x0) && (param_2 != 0)) &&
     (*(int *)(param_2 + 0x20) == -0x51403f2f)) {
    if ((*(int *)(param_2 + 0x44) != 0) && (*(int *)(param_2 + 0x48) != 0)) {
      FUN_670721d0(&local_30);
      local_2c = *(undefined4 *)(param_2 + 0x44);
      local_28 = *(undefined4 *)(param_2 + 0x48);
      uVar1 = (**(code **)(**(int **)(param_2 + 0x40) + 8))(&local_30,&local_30);
      *param_1 = uVar1;
      return 0;
    }
    return 0x80040fc1;
  }
  return 0x80004003;
}


