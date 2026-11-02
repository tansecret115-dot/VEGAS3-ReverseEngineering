/* Module: sfppack2.dll
   Function: FUN_5ccf4600
   Address: 5ccf4600
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5ccf4600(double *param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  
  for (; param_2 != 0; param_2 = param_2 + -1) {
    uVar1 = DAT_5cd764f4 % *(uint *)(param_5 + 4);
    DAT_5cd764f4 = DAT_5cd764f4 + *(int *)(param_5 + 0xc);
    *param_1 = (double)(*(float *)(*(int *)(param_5 + 8) + uVar1 * 4) + (float)*param_1);
    if (1 < param_3) {
      uVar1 = DAT_5cd764f8 % *(uint *)(param_5 + 4);
      DAT_5cd764f8 = DAT_5cd764f8 + 1 + *(int *)(param_5 + 0x10);
      param_1[1] = (double)(*(float *)(*(int *)(param_5 + 8) + uVar1 * 4) + (float)param_1[1]);
    }
    param_1 = param_1 + param_3;
  }
  return;
}


