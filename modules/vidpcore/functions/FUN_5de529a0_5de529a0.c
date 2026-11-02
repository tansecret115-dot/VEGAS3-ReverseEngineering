/* Module: vidpcore.dll
   Function: FUN_5de529a0
   Address: 5de529a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de529a0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17d80;
  param_2[1] = DAT_5df17d84;
  param_2[2] = DAT_5df17d88;
  param_2[3] = DAT_5df17d8c;
  return 0;
}


