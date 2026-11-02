/* Module: sfppack2.dll
   Function: FUN_5ccfeb80
   Address: 5ccfeb80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccfeb80(float *param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = DAT_5cd764fc % *(uint *)(param_5 + 4);
    DAT_5cd764fc = DAT_5cd764fc + *(int *)(param_5 + 0xc);
    *param_1 = *(float *)(*(int *)(param_5 + 8) + uVar1 * 4) + *param_1;
    if (1 < param_3) {
      uVar1 = DAT_5cd76500 % *(uint *)(param_5 + 4);
      DAT_5cd76500 = DAT_5cd76500 + 1 + *(int *)(param_5 + 0x10);
      param_1[1] = *(float *)(*(int *)(param_5 + 8) + uVar1 * 4) + param_1[1];
    }
    param_1 = param_1 + param_3;
  }
  return;
}


