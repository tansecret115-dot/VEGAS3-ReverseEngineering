/* Module: erv33260.dll
   Function: YUV420toRV20GetDecodedYUVFrames
   Address: 67071750
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20GetDecodedYUVFrames(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_24;
  uint local_20;
  undefined4 *local_10;
  undefined4 *local_c;
  undefined4 *local_8;
  
                    /* 0x1750  8  YUV420toRV20GetDecodedYUVFrames */
  FUN_67072290(&local_44);
  if (((param_2 != 0) && (*(int *)(param_2 + 0x20) == -0x51403f2f)) &&
     (param_1 != (undefined4 *)0x0)) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x40) + 0x24))(&local_44);
    if (iVar1 == 0) {
      FUN_67071600(local_10,local_8,local_c,local_40,local_3c,local_24,local_20,
                   (undefined4 *)*param_1);
    }
    uVar2 = FUN_67071000(iVar1);
    return uVar2;
  }
  return 0x80004003;
}


