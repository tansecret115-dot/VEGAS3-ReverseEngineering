/* Module: sfppack1.dll
   Function: FUN_5cdc62a0
   Address: 5cdc62a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cdc62a0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5ce13c38;
  param_2[1] = DAT_5ce13c3c;
  param_2[2] = DAT_5ce13c40;
  param_2[3] = DAT_5ce13c44;
  return 0;
}


