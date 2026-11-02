/* Module: rn5a3260.dll
   Function: FUN_628a5450
   Address: 628a5450
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_628a5450(int *param_1)

{
  LONG LVar1;
  
  if (*(LONG *)(*param_1 + -0xc) != -2000000000) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      operator_delete((void *)(*param_1 + -0xc));
    }
    FUN_628a5410(param_1);
  }
  return;
}


