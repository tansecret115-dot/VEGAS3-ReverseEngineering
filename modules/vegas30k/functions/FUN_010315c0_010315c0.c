/* Module: vegas30k.dll
   Function: FUN_010315c0
   Address: 010315c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_010315c0(double param_1)

{
  undefined4 uVar1;
  
  if (param_1 * _DAT_011db2a8 < _DAT_011db2a0) {
    return 0x80000000;
  }
  if (_DAT_011db298 < param_1 * _DAT_011db2a8) {
    return 0x7fffffff;
  }
  uVar1 = ftol();
  return uVar1;
}


