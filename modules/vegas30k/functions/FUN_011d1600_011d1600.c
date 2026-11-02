/* Module: vegas30k.dll
   Function: FUN_011d1600
   Address: 011d1600
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_011d1600(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_011ec5c4;
  if (param_1[0x12] == 0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 3));
    DeleteCriticalSection((LPCRITICAL_SECTION)(param_1 + 9));
  }
  return;
}


