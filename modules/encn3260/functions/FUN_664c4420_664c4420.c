/* Module: encn3260.dll
   Function: FUN_664c4420
   Address: 664c4420
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_664c4420(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664df9d0;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return param_1;
}


