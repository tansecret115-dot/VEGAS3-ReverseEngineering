/* Module: sfxpfx2.dll
   Function: FUN_5c89f430
   Address: 5c89f430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c89f430(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5c8dd228;
  param_2[1] = DAT_5c8dd22c;
  param_2[2] = DAT_5c8dd230;
  param_2[3] = DAT_5c8dd234;
  return 0;
}


