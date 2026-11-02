/* Module: vfplugs.dll
   Function: FUN_0041af00
   Address: 0041af00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0041af00(float *param_1,double *param_2)

{
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  double local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((param_2 != (double *)0x0) && (param_1 != (float *)0x0)) {
    local_38 = 0.0;
    local_34 = 0.0;
    local_30 = 0.0;
    local_2c = 0.0;
    if (_DAT_00487598 <= *param_2) {
      local_28 = *(undefined4 *)param_2;
      local_24 = *(undefined4 *)((int)param_2 + 4);
    }
    else {
      local_28 = 0;
      local_24 = 0;
    }
    local_20 = 0;
    local_1c = 0;
    if (_DAT_00487598 <= *param_2) {
      local_1c = 0x3ff00000;
    }
    local_18 = _DAT_00487590 - param_2[1];
    local_10 = 0;
    local_c = 0x3ff00000;
    FUN_00450680(&local_38,(int)&local_28);
    *param_1 = local_38;
    param_1[1] = local_34;
    param_1[3] = local_2c;
    param_1[2] = local_30;
    return 1;
  }
  return 0;
}


