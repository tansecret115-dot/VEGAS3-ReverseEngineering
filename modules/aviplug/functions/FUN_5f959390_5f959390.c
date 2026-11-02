/* Module: aviplug.dll
   Function: FUN_5f959390
   Address: 5f959390
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f959390(undefined4 *param_1)

{
  param_1[1] = 1;
  *param_1 = &PTR_FUN_5f9d8f50;
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return param_1;
}


