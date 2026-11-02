/* Module: auth3260.dll
   Function: thunk_FUN_627a5ba0
   Address: 627a5ca0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall thunk_FUN_627a5ba0(int *param_1)

{
  LONG LVar1;
  
  if (*(LONG *)(*param_1 + -0xc) != -2000000000) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      operator_delete((void *)(*param_1 + -0xc));
    }
    FUN_627a5b60(param_1);
  }
  return;
}


