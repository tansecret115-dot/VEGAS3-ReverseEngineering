/* Module: sfppack3.dll
   Function: FUN_5cc773cf
   Address: 5cc773cf
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cc773cf(int param_1)

{
  FUN_5cc7787a(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_5cc7731d((undefined4 *)(param_1 + 8));
  FUN_5cc7731d((undefined4 *)(param_1 + 4));
  return;
}


