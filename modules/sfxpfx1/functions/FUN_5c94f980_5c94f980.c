/* Module: sfxpfx1.dll
   Function: FUN_5c94f980
   Address: 5c94f980
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c94f980(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5c98c320;
  param_2[1] = DAT_5c98c324;
  param_2[2] = DAT_5c98c328;
  param_2[3] = DAT_5c98c32c;
  return 0;
}


