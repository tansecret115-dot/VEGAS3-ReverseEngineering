/* Module: aviplug.dll
   Function: FUN_5f994e30
   Address: 5f994e30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5f994e30(double param_1)

{
  undefined4 uVar1;
  
  if (param_1 * _DAT_5f9ec2c8 < _DAT_5f9ec2e8) {
    return 0x80000000;
  }
  if (_DAT_5f9ec2e0 < param_1 * _DAT_5f9ec2c8) {
    return 0x7fffffff;
  }
  uVar1 = ftol();
  return uVar1;
}


