/* Module: encn3260.dll
   Function: FUN_664bb280
   Address: 664bb280
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664bb280(int *param_1)

{
  LONG LVar1;
  
  if (*(LONG *)(*param_1 + -0xc) != -2000000000) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      operator_delete((void *)(*param_1 + -0xc));
    }
    FUN_664bb240(param_1);
  }
  return;
}


