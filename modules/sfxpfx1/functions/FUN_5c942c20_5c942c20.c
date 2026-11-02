/* Module: sfxpfx1.dll
   Function: FUN_5c942c20
   Address: 5c942c20
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5c942c20(undefined4 param_1,undefined4 *param_2)

{
  if (param_2 == (undefined4 *)0x0) {
    return 0x80004003;
  }
  *param_2 = DAT_5c98b520;
  param_2[1] = DAT_5c98b524;
  param_2[2] = DAT_5c98b528;
  param_2[3] = DAT_5c98b52c;
  return 0;
}


