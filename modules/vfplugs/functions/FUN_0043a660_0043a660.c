/* Module: vfplugs.dll
   Function: FUN_0043a660
   Address: 0043a660
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0043a660(undefined4 param_1,undefined4 param_2,uint *param_3,double param_4)

{
  uint uVar1;
  float10 extraout_ST0;
  
  if ((*param_3 != 0) && (*param_3 < 6)) {
    FUN_00454070(param_1,param_2,(int *)param_3);
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


