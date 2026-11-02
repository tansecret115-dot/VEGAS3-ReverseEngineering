/* Module: sfpagepeel.dll
   Function: FUN_00415410
   Address: 00415410
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00415410(int param_1,float *param_2)

{
  int iVar1;
  float local_20;
  float fStack_1c;
  float local_18;
  float fStack_14;
  double local_10;
  double local_8;
  
  if (*(int *)(param_1 + 0x138) == 0) {
    iVar1 = FUN_004152c0(&local_20,param_1,0);
    if (iVar1 != 0) {
      param_2[1] = fStack_1c;
      param_2[2] = local_20;
      *param_2 = local_18;
      param_2[3] = fStack_14;
      return 1;
    }
  }
  else if (*(int *)(param_1 + 0x138) == 1) {
    iVar1 = FUN_00415340((double *)&local_20,param_1,0);
    if (iVar1 != 0) {
      *param_2 = (float)(double)CONCAT44(fStack_1c,local_20);
      param_2[1] = (float)(double)CONCAT44(fStack_14,local_18);
      param_2[2] = (float)local_10;
      param_2[3] = (float)local_8;
      if (((_DAT_0046fdc8 == (double)CONCAT44(fStack_14,local_18)) || (_DAT_0046fdc8 == local_10))
         || (_DAT_0046fdc0 == local_10)) {
        *param_2 = (float)*(double *)(param_1 + 0x148);
      }
      if (_DAT_0046fdc8 == local_10) {
        param_2[1] = (float)*(double *)(param_1 + 0x150);
      }
      else if (_DAT_0046fdc0 == local_10) {
        param_2[1] = (float)*(double *)(param_1 + 0x150);
        return 1;
      }
      return 1;
    }
  }
  return 0;
}


