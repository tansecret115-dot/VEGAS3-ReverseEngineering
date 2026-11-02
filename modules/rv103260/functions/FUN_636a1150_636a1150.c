/* Module: rv103260.dll
   Function: FUN_636a1150
   Address: 636a1150
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_636a1150(int param_1)

{
  if (*(void **)(param_1 + 0x5c) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x5c));
    *(undefined4 *)(param_1 + 0x5c) = 0;
  }
  return;
}


