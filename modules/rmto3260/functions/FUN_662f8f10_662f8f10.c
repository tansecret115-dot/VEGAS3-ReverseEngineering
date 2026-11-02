/* Module: rmto3260.dll
   Function: FUN_662f8f10
   Address: 662f8f10
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662f8f10(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    FUN_662fd160(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


