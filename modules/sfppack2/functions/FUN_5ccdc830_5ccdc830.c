/* Module: sfppack2.dll
   Function: FUN_5ccdc830
   Address: 5ccdc830
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5ccdc830(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5cd51d48;
  param_2[1] = DAT_5cd51d4c;
  param_2[2] = DAT_5cd51d50;
  param_2[3] = DAT_5cd51d54;
  return 0;
}


