/* Module: sftrkfx1.dll
   Function: FUN_5cbbcba0
   Address: 5cbbcba0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbbcba0(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_5cc04fd0;
  FUN_5cbbce00((int)param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 1));
  return;
}


