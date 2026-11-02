/* Module: sipr3260.dll
   Function: thunk_FUN_632a2c50
   Address: 632a2da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall thunk_FUN_632a2c50(int *param_1)

{
  LONG LVar1;
  
  if (*(LONG *)(*param_1 + -0xc) != -2000000000) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      operator_delete((void *)(*param_1 + -0xc));
    }
    FUN_632a2c10(param_1);
  }
  return;
}


