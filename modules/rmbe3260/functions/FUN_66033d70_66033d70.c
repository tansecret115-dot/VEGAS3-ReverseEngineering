/* Module: rmbe3260.dll
   Function: FUN_66033d70
   Address: 66033d70
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66033d70(int param_1)

{
  if (*(void **)(param_1 + 0xc) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0xc));
  }
  return;
}


