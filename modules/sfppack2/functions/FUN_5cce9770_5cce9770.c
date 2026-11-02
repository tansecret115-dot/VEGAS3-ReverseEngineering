/* Module: sfppack2.dll
   Function: FUN_5cce9770
   Address: 5cce9770
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cce9770(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5cd52bf0;
  param_2[1] = DAT_5cd52bf4;
  param_2[2] = DAT_5cd52bf8;
  param_2[3] = DAT_5cd52bfc;
  return 0;
}


