/* Module: vegas30.exe
   Function: FUN_004e7320
   Address: 004e7320
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e7320(undefined4 param_1,undefined4 param_2)

{
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
  _DAT_0064cdf8 = param_2;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0064cd90);
  return;
}


