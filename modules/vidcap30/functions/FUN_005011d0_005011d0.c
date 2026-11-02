/* Module: vidcap30.exe
   Function: FUN_005011d0
   Address: 005011d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_005011d0(undefined4 *param_1,double *param_2)

{
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  double local_18;
  undefined4 local_10;
  undefined4 local_c;
  
  if ((param_2 != (double *)0x0) && (param_1 != (undefined4 *)0x0)) {
    local_38 = 0;
    local_34 = 0;
    local_30 = 0;
    local_2c = 0;
    if (_DAT_00589f10 <= *param_2) {
      local_28 = *(undefined4 *)param_2;
      local_24 = *(undefined4 *)((int)param_2 + 4);
    }
    else {
      local_28 = 0;
      local_24 = 0;
    }
    local_20 = 0;
    local_1c = 0;
    if (_DAT_00589f10 <= *param_2) {
      local_1c = 0x3ff00000;
    }
    local_18 = _DAT_00587ad0 - param_2[1];
    local_10 = 0;
    local_c = 0x3ff00000;
    _SFHSL_To_SFRGBAFLOAT_8(&local_38,&local_28);
    *param_1 = local_38;
    param_1[1] = local_34;
    param_1[3] = local_2c;
    param_1[2] = local_30;
    return 1;
  }
  return 0;
}


