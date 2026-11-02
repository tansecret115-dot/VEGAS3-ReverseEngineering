/* Module: cook3260.dll
   Function: FUN_633a3770
   Address: 633a3770
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_633a3770(int param_1)

{
  FUN_633a5a40(param_1);
  FUN_633a5ea0(param_1);
  if (*(void **)(param_1 + 0x4798) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x4798));
  }
  return;
}


