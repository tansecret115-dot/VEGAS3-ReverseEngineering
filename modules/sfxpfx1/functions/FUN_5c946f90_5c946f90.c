/* Module: sfxpfx1.dll
   Function: FUN_5c946f90
   Address: 5c946f90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c946f90(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5c98ba70;
  param_2[1] = DAT_5c98ba74;
  param_2[2] = DAT_5c98ba78;
  param_2[3] = DAT_5c98ba7c;
  return 0;
}


