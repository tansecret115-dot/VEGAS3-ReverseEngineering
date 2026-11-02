/* Module: vidpcore.dll
   Function: FUN_5de4ac90
   Address: 5de4ac90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de4ac90(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17f40;
  param_2[1] = DAT_5df17f44;
  param_2[2] = DAT_5df17f48;
  param_2[3] = DAT_5df17f4c;
  return 0;
}


