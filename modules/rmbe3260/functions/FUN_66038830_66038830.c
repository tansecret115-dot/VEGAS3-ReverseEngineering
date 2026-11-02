/* Module: rmbe3260.dll
   Function: FUN_66038830
   Address: 66038830
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66038830(int param_1)

{
  if (*(void **)(param_1 + 0x61) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x61));
    *(undefined4 *)(param_1 + 0x61) = 0;
  }
  return;
}


