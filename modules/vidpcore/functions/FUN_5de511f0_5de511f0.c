/* Module: vidpcore.dll
   Function: FUN_5de511f0
   Address: 5de511f0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5de511f0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5df18030;
  param_2[1] = DAT_5df18034;
  param_2[2] = DAT_5df18038;
  param_2[3] = DAT_5df1803c;
  return 0;
}


