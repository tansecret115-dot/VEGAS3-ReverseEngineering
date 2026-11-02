/* Module: sftrkfx1.dll
   Function: FUN_5cbbad50
   Address: 5cbbad50
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbbad50(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5cc04d50;
  param_2[1] = DAT_5cc04d54;
  param_2[2] = DAT_5cc04d58;
  param_2[3] = DAT_5cc04d5c;
  return 0;
}


