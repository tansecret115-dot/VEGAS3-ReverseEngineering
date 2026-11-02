/* Module: aviplug.dll
   Function: FUN_5f9511b0
   Address: 5f9511b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f9511b0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[6] = 0;
  *param_1 = &PTR_LAB_5f9d8b50;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return param_1;
}


