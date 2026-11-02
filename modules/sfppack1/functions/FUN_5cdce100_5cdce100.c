/* Module: sfppack1.dll
   Function: FUN_5cdce100
   Address: 5cdce100
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdce100(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5ce144a8;
  param_2[1] = DAT_5ce144ac;
  param_2[2] = DAT_5ce144b0;
  param_2[3] = DAT_5ce144b4;
  return 0;
}


