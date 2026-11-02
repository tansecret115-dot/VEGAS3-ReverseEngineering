/* Module: rmme3260.dll
   Function: FUN_66257170
   Address: 66257170
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 * __fastcall FUN_66257170(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_6626ce50;
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return param_1;
}


