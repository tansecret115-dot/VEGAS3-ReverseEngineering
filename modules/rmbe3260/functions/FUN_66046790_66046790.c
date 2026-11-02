/* Module: rmbe3260.dll
   Function: FUN_66046790
   Address: 66046790
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66046790(int param_1)

{
  if (*(void **)(param_1 + 4) != (void *)0x0) {
    FUN_66059c60(*(void **)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  if (*(void **)(param_1 + 8) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  return;
}


