/* Module: sfppack2.dll
   Function: FUN_5ccf4680
   Address: 5ccf4680
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5ccf4680(double param_1)

{
  undefined4 uVar1;
  
  if (param_1 * _DAT_5cd51758 < _DAT_5cd51750) {
    return 0x80000000;
  }
  if (_DAT_5cd51748 < param_1 * _DAT_5cd51758) {
    return 0x7fffffff;
  }
  uVar1 = ftol();
  return uVar1;
}


