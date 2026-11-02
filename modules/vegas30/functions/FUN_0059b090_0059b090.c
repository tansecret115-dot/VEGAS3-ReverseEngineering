/* Module: vegas30.exe
   Function: FUN_0059b090
   Address: 0059b090
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0059b090(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9,
                 undefined4 param_10)

{
  float fVar1;
  
  switch(param_10) {
  case 0:
    break;
  case 1:
    FUN_0059b950(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  case 2:
    FUN_0059b260(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,0);
    return;
  case 3:
    FUN_0059b260(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,0xc0080000);
    return;
  case 4:
    FUN_0059b260(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8,0,0xc0180000);
  default:
    return;
  }
  fVar1 = (float)(double)CONCAT44(param_7,param_6);
  if (param_9 == 0) {
    *(float *)(param_1 + 8) = (_DAT_00619ab0 - *(float *)(param_1 + 0x10)) * fVar1;
    *(float *)(param_1 + 0xc) = (_DAT_00619ab0 - *(float *)(param_1 + 0x14)) * fVar1;
    *(float *)(param_2 + 8) = *(float *)(param_2 + 0x10) * fVar1;
    *(float *)(param_2 + 0xc) = *(float *)(param_2 + 0x14) * fVar1;
    FUN_0059a860(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
    return;
  }
  *(float *)(param_1 + 8) = (*(float *)(param_1 + 0x10) + _DAT_00619ab0) * fVar1;
  *(float *)(param_1 + 0xc) = (*(float *)(param_1 + 0x14) + _DAT_00619ab0) * fVar1;
  *(float *)(param_2 + 8) = -*(float *)(param_2 + 0x10) * fVar1;
  *(float *)(param_2 + 0xc) = -*(float *)(param_2 + 0x14) * fVar1;
  FUN_0059a1e0(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  return;
}


