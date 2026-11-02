/* Module: vegas30k.dll
   Function: FUN_011cb270
   Address: 011cb270
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011cb270(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_011ec494;
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
  DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 0xbf));
  return;
}


