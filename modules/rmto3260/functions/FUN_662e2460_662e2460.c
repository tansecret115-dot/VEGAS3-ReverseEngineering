/* Module: rmto3260.dll
   Function: FUN_662e2460
   Address: 662e2460
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662e2460(int param_1)

{
  if (*(void **)(param_1 + 0x38) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x38));
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  return;
}


