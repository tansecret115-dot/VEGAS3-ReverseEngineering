/* Module: sfxpfx1.dll
   Function: FUN_5c97b424
   Address: 5c97b424
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_5c97b424(int param_1)

{
  FUN_5c97b8cf(param_1);
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x30));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x18));
  FUN_5c97b372((undefined4 *)(param_1 + 8));
  FUN_5c97b372((undefined4 *)(param_1 + 4));
  return;
}


