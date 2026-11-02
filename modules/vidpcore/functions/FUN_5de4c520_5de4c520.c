/* Module: vidpcore.dll
   Function: FUN_5de4c520
   Address: 5de4c520
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de4c520(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17f60;
  param_2[1] = DAT_5df17f64;
  param_2[2] = DAT_5df17f68;
  param_2[3] = DAT_5df17f6c;
  return 0;
}


