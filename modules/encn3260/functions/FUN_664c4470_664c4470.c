/* Module: encn3260.dll
   Function: FUN_664c4470
   Address: 664c4470
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c4470(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_664df9d0;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  FUN_664bbfb0(param_1);
  return;
}


