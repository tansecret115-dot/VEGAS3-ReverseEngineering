/* Module: sfppack1.dll
   Function: FUN_5cdb2440
   Address: 5cdb2440
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_5cdb2440(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = _DAT_5ce12a28;
  param_2[1] = DAT_5ce12a2c;
  param_2[2] = DAT_5ce12a30;
  param_2[3] = DAT_5ce12a34;
  return 0;
}


