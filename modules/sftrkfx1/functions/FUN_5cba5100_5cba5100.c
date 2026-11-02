/* Module: sftrkfx1.dll
   Function: FUN_5cba5100
   Address: 5cba5100
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cba5100(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cc04150;
  FUN_5cba6c80((int)param_1);
  FUN_5cba5760(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}


