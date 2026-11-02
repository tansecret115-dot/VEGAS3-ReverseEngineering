/* Module: rv103260.dll
   Function: FUN_636a11b0
   Address: 636a11b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_636a11b0(int param_1)

{
  if (*(void **)(param_1 + 0x60) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x60));
    *(undefined4 *)(param_1 + 0x60) = 0;
  }
  return;
}


