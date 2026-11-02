/* Module: vidpcore.dll
   Function: FUN_5de17980
   Address: 5de17980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de17980(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17de0;
  param_2[1] = DAT_5df17de4;
  param_2[2] = DAT_5df17de8;
  param_2[3] = DAT_5df17dec;
  return 0;
}


