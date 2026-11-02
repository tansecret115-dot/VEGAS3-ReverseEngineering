/* Module: vidpcore.dll
   Function: FUN_5de107e0
   Address: 5de107e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de107e0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17d40;
  param_2[1] = DAT_5df17d44;
  param_2[2] = DAT_5df17d48;
  param_2[3] = DAT_5df17d4c;
  return 0;
}


