/* Module: sftrkfx1.dll
   Function: FUN_5cbf4ef4
   Address: 5cbf4ef4
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cbf4ef4(int param_1)

{
  FUN_5cbf539f(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_5cbf4e42((undefined4 *)(param_1 + 8));
  FUN_5cbf4e42((undefined4 *)(param_1 + 4));
  return;
}


