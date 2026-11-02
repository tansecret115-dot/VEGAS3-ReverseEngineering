/* Module: sfxpfx2.dll
   Function: FUN_5c89b8c0
   Address: 5c89b8c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c89b8c0(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5c8dcea0;
  param_2[1] = DAT_5c8dcea4;
  param_2[2] = DAT_5c8dcea8;
  param_2[3] = DAT_5c8dceac;
  return 0;
}


