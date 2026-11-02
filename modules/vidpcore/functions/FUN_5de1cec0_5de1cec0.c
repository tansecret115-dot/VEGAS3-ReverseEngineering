/* Module: vidpcore.dll
   Function: FUN_5de1cec0
   Address: 5de1cec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de1cec0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17ea0;
  param_2[1] = DAT_5df17ea4;
  param_2[2] = DAT_5df17ea8;
  param_2[3] = DAT_5df17eac;
  return 0;
}


