/* Module: vidcap30.exe
   Function: FUN_004c0040
   Address: 004c0040
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_004c0040(double param_1)

{
  undefined4 uVar1;
  
  if (param_1 * _DAT_0059a1c0 < _DAT_0059a1b8) {
    return 0x80000000;
  }
  if (_DAT_0059a1b0 < param_1 * _DAT_0059a1c0) {
    return 0x7fffffff;
  }
  uVar1 = ftol();
  return uVar1;
}


