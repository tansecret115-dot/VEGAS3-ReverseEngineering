/* Module: aviplug.dll
   Function: FUN_5f959ea0
   Address: 5f959ea0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_5f959ea0(undefined4 *param_1)

{
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[9] = 0x22;
  *param_1 = &PTR_LAB_5f9d913c;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  InterlockedIncrement((LONG *)&DAT_5f9f419c);
  return param_1;
}


