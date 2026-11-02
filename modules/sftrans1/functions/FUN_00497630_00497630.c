/* Module: sftrans1.dll
   Function: FUN_00497630
   Address: 00497630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00497630(undefined4 *param_1)

{
  if (param_1 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_1 = 0;
  param_1[2] = 0;
  param_1[4] = 0;
  param_1[1] = 0x3ff00000;
  param_1[3] = 0;
  param_1[5] = 0;
  return 0;
}


