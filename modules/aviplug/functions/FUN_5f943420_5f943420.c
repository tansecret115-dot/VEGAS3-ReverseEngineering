/* Module: aviplug.dll
   Function: FUN_5f943420
   Address: 5f943420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f943420(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5f9d7d40;
  param_1[1] = 1;
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return param_1;
}


