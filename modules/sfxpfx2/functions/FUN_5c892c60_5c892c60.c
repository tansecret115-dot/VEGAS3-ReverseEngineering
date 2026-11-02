/* Module: sfxpfx2.dll
   Function: FUN_5c892c60
   Address: 5c892c60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c892c60(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5c8dc498;
  param_2[1] = DAT_5c8dc49c;
  param_2[2] = DAT_5c8dc4a0;
  param_2[3] = DAT_5c8dc4a4;
  return 0;
}


