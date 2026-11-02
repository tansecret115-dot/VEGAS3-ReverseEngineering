/* Module: erv23260.dll
   Function: YUV420toRV20SetRateControls
   Address: 637f17e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void YUV420toRV20SetRateControls
               (uint param_1,uint param_2,int param_3,uint param_4,int param_5,int param_6)

{
  int iVar1;
  int local_28;
  int local_24;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int *local_8;
  
                    /* 0x17e0  16  YUV420toRV20SetRateControls */
  iVar1 = YUV420toRV20SetRateControl(param_1,param_2,param_4,(char)param_5,param_6);
  if (iVar1 == 0) {
    local_14 = 0x21;
    local_10 = 3;
    local_c = 0;
    local_24 = ((0x1f - param_3) * 10000) / 0x1e;
    local_28 = (param_5 != 0) + 2;
    local_8 = &local_28;
    iVar1 = (**(code **)(**(int **)(param_6 + 0x40) + 0x40))(&local_14);
    FUN_637f1000(iVar1);
  }
  return;
}


