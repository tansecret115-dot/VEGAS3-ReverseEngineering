/* Module: aviplug.dll
   Function: FUN_5f992340
   Address: 5f992340
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5f992340(undefined4 param_1,double param_2,undefined4 *param_3)

{
  int iVar1;
  int local_28 [4];
  double local_18;
  undefined4 local_8;
  undefined4 local_4;
  
  local_28[0] = 0;
  local_28[1] = 1;
  if (_DAT_5f9d7c98 <= param_2) {
    local_18 = _DAT_5f9d7ca0 / param_2;
  }
  else {
    local_18 = param_2 * _DAT_5f9d7ca0;
  }
  local_8 = 0;
  local_4 = 0;
  switch(param_1) {
  default:
    if (local_28[2] != 0) break;
  case 0:
    for (iVar1 = 0x38; iVar1 != 0; iVar1 = iVar1 + -1) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    return;
  case 0x10:
    local_28[2] = 2;
    break;
  case 0x20:
    local_28[2] = 4;
    break;
  case 0x30:
    local_28[2] = 6;
  }
  FUN_5f9d0b50(local_28,param_3);
  return;
}


