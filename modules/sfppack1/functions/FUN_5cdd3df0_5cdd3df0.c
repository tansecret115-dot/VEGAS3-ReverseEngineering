/* Module: sfppack1.dll
   Function: FUN_5cdd3df0
   Address: 5cdd3df0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdd3df0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5ce149a0;
  param_2[1] = DAT_5ce149a4;
  param_2[2] = DAT_5ce149a8;
  param_2[3] = DAT_5ce149ac;
  return 0;
}


