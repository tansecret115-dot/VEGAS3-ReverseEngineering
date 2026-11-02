/* Module: erv33260.dll
   Function: YUV420toRV20GetDecodedFrames
   Address: 67071580
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 YUV420toRV20GetDecodedFrames(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint local_44;
  int local_40;
  int local_3c;
  int local_24;
  byte *local_10;
  byte *local_c;
  byte *local_8;
  
                    /* 0x1580  7  YUV420toRV20GetDecodedFrames */
  FUN_67072290(&local_44);
  if (((param_2 != 0) && (*(int *)(param_2 + 0x20) == -0x51403f2f)) &&
     (param_1 != (undefined4 *)0x0)) {
    iVar1 = (**(code **)(**(int **)(param_2 + 0x40) + 0x24))(&local_44);
    if (iVar1 == 0) {
      FUN_670724f0(local_10,local_c,local_8,(undefined4 *)*param_1,local_40,local_3c,local_24);
    }
    uVar2 = FUN_67071000(iVar1);
    return uVar2;
  }
  return 0x80004003;
}


