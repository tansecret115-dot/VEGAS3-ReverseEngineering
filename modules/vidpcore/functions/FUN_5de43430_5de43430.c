/* Module: vidpcore.dll
   Function: FUN_5de43430
   Address: 5de43430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de43430(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17e20;
  param_2[1] = DAT_5df17e24;
  param_2[2] = DAT_5df17e28;
  param_2[3] = DAT_5df17e2c;
  return 0;
}


