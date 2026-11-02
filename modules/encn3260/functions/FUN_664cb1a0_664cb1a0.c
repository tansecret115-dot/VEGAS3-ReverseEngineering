/* Module: encn3260.dll
   Function: FUN_664cb1a0
   Address: 664cb1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664cb1a0(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  return;
}


