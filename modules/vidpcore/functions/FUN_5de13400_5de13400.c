/* Module: vidpcore.dll
   Function: FUN_5de13400
   Address: 5de13400
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de13400(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17da0;
  param_2[1] = DAT_5df17da4;
  param_2[2] = DAT_5df17da8;
  param_2[3] = DAT_5df17dac;
  return 0;
}


