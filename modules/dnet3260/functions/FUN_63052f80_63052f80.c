/* Module: dnet3260.dll
   Function: FUN_63052f80
   Address: 63052f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_63052f80(int *param_1)

{
  LONG LVar1;
  
  if (*(LONG *)(*param_1 + -0xc) != -2000000000) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      operator_delete((void *)(*param_1 + -0xc));
    }
    FUN_63052f40(param_1);
  }
  return;
}


