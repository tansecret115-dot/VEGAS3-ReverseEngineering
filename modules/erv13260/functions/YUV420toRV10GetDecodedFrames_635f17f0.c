/* Module: erv13260.dll
   Function: YUV420toRV10GetDecodedFrames
   Address: 635f17f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4
YUV420toRV10GetDecodedFrames(undefined4 *param_1,undefined4 *param_2,int *param_3,int param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
                    /* 0x17f0  8  YUV420toRV10GetDecodedFrames */
  piVar3 = param_3;
  iVar1 = *(int *)(param_4 + 0x23cb);
  uVar2 = *(undefined4 *)(param_4 + 0x23cf);
  param_4 = *(int *)(param_4 + 0x4e);
  FUN_635f6910(&local_c,&local_8,&param_3);
  if (*piVar3 == 2) {
    FUN_635f1fb0(DAT_63606cc0,local_18,local_14,local_10,param_4,*param_1,iVar1,uVar2,-iVar1,7,0);
    uVar4 = *param_2;
  }
  else {
    if (*piVar3 == 0) {
      return 0;
    }
    uVar4 = *param_1;
  }
  FUN_635f1fb0(DAT_63606cc0,local_c,local_8,param_3,param_4,uVar4,iVar1,uVar2,-iVar1,7,0);
  return 0;
}


