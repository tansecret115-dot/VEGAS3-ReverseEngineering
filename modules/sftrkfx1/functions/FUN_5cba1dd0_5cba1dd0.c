/* Module: sftrkfx1.dll
   Function: FUN_5cba1dd0
   Address: 5cba1dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cba1dd0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5cc03d18;
  param_2[1] = DAT_5cc03d1c;
  param_2[2] = DAT_5cc03d20;
  param_2[3] = DAT_5cc03d24;
  return 0;
}


