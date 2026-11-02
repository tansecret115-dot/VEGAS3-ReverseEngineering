/* Module: vidpcore.dll
   Function: FUN_5de26640
   Address: 5de26640
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de26640(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17f80;
  param_2[1] = DAT_5df17f84;
  param_2[2] = DAT_5df17f88;
  param_2[3] = DAT_5df17f8c;
  return 0;
}


