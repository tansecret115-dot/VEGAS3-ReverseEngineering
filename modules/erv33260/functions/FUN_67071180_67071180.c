/* Module: erv33260.dll
   Function: FUN_67071180
   Address: 67071180
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_67071180(undefined4 param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  uVar1 = 1;
  switch(param_2) {
  case 0:
  case 2:
  case 3:
    break;
  case 1:
    _DAT_6709a8c0 = param_1;
    return uVar1;
  default:
    uVar1 = 0;
  }
  return uVar1;
}


