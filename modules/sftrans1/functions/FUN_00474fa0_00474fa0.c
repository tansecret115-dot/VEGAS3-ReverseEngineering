/* Module: sftrans1.dll
   Function: FUN_00474fa0
   Address: 00474fa0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00474fa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  float10 fVar1;
  undefined4 in_stack_0000003c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  double local_10;
  
  local_38 = 0;
  local_34 = 0;
  local_30 = param_4;
  local_2c = param_5;
  local_18 = 0;
  local_14 = 0x3ff00000;
  local_20 = 0;
  local_1c = 0x3ff00000;
  local_28 = 0;
  local_24 = 0x3ff00000;
  fVar1 = (float10)FUN_00474340(in_stack_0000003c);
  fVar1 = (fVar1 + (float10)_DAT_00555908) * (float10)_DAT_00562480;
  if ((float10)_DAT_00555910 <= fVar1) {
    if (fVar1 <= (float10)_DAT_00555908) {
      local_10 = (double)fVar1;
    }
    else {
      local_10 = 1.0;
    }
  }
  else {
    local_10 = 0.0;
  }
  FUN_004cf0a0(param_2,&local_38,param_3,0,param_6,&local_28);
  return;
}


