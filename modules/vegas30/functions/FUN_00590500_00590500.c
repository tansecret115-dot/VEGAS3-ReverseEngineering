/* Module: vegas30.exe
   Function: FUN_00590500
   Address: 00590500
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00590500(double param_1,undefined4 param_2)

{
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  double local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28 = 0;
  local_24 = 0;
  if (_DAT_006106d0 <= param_1) {
    local_18 = _DAT_00610fb0 / param_1;
  }
  else {
    local_18 = param_1 * _DAT_00610fb0;
  }
  local_8 = 0;
  local_4 = 0;
  local_20 = 8;
  _SfIIR_Design_8(&local_28,param_2);
  return;
}


