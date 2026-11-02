/* Module: vidpcore.dll
   Function: FUN_5de2d760
   Address: 5de2d760
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de2d760(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17fe0;
  param_2[1] = DAT_5df17fe4;
  param_2[2] = DAT_5df17fe8;
  param_2[3] = DAT_5df17fec;
  return 0;
}


