/* Module: sfppack1.dll
   Function: FUN_5cdf1370
   Address: 5cdf1370
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cdf1370(undefined4 param_1,undefined4 param_2,uint *param_3,double param_4)

{
  uint uVar1;
  float10 extraout_ST0;
  
  if ((*param_3 != 0) && (*param_3 < 6)) {
    FUN_5cdfa5b0(param_1,param_2,(int *)param_3);
    return;
  }
  uVar1 = ftol();
  param_3[1] = uVar1;
  param_3[1] = uVar1 % 0x18;
  uVar1 = ftol();
  param_3[2] = uVar1;
  uVar1 = ftol();
  param_3[3] = uVar1;
  floor((double)((extraout_ST0 - (float10)uVar1) * (float10)param_4));
  uVar1 = ftol();
  param_3[4] = uVar1;
  return;
}


