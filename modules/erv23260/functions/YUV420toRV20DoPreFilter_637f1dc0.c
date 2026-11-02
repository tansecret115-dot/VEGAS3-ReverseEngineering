/* Module: erv23260.dll
   Function: YUV420toRV20DoPreFilter
   Address: 637f1dc0
   Source: Ghidra pseudocode (Stage 10 batch) */


int YUV420toRV20DoPreFilter
              (int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
              undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
              int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  
                    /* 0x1dc0  5  YUV420toRV20DoPreFilter */
  iVar2 = 0;
  if ((param_1 != (int *)0x0) && (iVar1 = (**(code **)(*param_1 + 4))(), iVar1 != 0)) {
    bVar3 = param_9 != 0;
    if (param_10 != 0) {
      bVar3 = bVar3 | 2;
    }
    if (param_11 != 0) {
      bVar3 = bVar3 | 4;
    }
    (**(code **)(*param_1 + 0xc))(bVar3);
    iVar2 = (**(code **)(*param_1 + 0x24))(param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  }
  return (-(uint)(iVar2 != 0) & 0x7fffbffb) + 0x80004005;
}


