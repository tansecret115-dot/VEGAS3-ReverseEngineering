/* Module: sftrkfx1.dll
   Function: FUN_5cbb0960
   Address: 5cbb0960
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cbb0960(double *param_1,double param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 int param_6)

{
  float10 fVar1;
  
  *param_1 = param_2;
  *(undefined4 *)(param_1 + 1) = param_3;
  *(undefined4 *)((int)param_1 + 0xc) = param_4;
  *(int *)((int)param_1 + 0x14) = param_6;
  *(int *)(param_1 + 2) = param_5;
  fVar1 = (float10)log2((float10)(double)CONCAT44(param_4,param_3) / (float10)param_2);
  fVar1 = ((float10)0.6931471805599453 * fVar1) / (float10)(param_6 - param_5);
  param_1[3] = (double)fVar1;
  param_1[4] = (double)((float10)_DAT_5cc040b8 / fVar1);
  fVar1 = (float10)log2((float10)param_2);
  param_1[5] = (double)((float10)0.6931471805599453 * fVar1);
  return;
}


