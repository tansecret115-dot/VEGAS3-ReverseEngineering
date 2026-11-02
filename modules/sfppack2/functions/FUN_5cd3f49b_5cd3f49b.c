/* Module: sfppack2.dll
   Function: FUN_5cd3f49b
   Address: 5cd3f49b
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5cd3f49b(int param_1)

{
  FUN_5cd3f946(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_5cd3f3e9((undefined4 *)(param_1 + 8));
  FUN_5cd3f3e9((undefined4 *)(param_1 + 4));
  return;
}


