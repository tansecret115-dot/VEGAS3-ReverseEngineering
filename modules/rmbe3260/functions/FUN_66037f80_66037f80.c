/* Module: rmbe3260.dll
   Function: FUN_66037f80
   Address: 66037f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66037f80(int param_1)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


