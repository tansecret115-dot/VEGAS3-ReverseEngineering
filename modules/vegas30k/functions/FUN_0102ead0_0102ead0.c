/* Module: vegas30k.dll
   Function: FUN_0102ead0
   Address: 0102ead0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0102ead0(undefined4 param_1,double param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  double local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28 = 0;
  local_24 = 1;
  if (_DAT_011dad58 <= param_2) {
    local_18 = _DAT_011db6e8 / param_2;
  }
  else {
    local_18 = param_2 * _DAT_011db6e8;
  }
  local_8 = 0;
  local_4 = 0;
  switch(param_1) {
  default:
    if (local_20 != 0) break;
  case 0:
    for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    return;
  case 0x10:
    local_20 = 2;
    break;
  case 0x20:
    local_20 = 4;
    break;
  case 0x30:
    local_20 = 6;
  }
  _SfIIR_Design_8(&local_28,param_3);
  return;
}


