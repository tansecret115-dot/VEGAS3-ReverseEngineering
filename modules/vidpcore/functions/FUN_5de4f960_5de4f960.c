/* Module: vidpcore.dll
   Function: FUN_5de4f960
   Address: 5de4f960
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de4f960(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df17e40;
  param_2[1] = DAT_5df17e44;
  param_2[2] = DAT_5df17e48;
  param_2[3] = DAT_5df17e4c;
  return 0;
}


