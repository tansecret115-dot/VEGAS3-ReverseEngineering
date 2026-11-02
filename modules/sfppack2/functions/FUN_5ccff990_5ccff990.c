/* Module: sfppack2.dll
   Function: FUN_5ccff990
   Address: 5ccff990
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccff990(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5cd54050;
  param_2[1] = DAT_5cd54054;
  param_2[2] = DAT_5cd54058;
  param_2[3] = DAT_5cd5405c;
  return 0;
}


