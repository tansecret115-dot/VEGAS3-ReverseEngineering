/* Module: sfppack2.dll
   Function: FUN_5cce23d0
   Address: 5cce23d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce23d0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5cd521d0;
  param_2[1] = DAT_5cd521d4;
  param_2[2] = DAT_5cd521d8;
  param_2[3] = DAT_5cd521dc;
  return 0;
}


