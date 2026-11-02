/* Module: rmto3260.dll
   Function: FUN_662eef90
   Address: 662eef90
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662eef90(int *param_1)

{
  LONG LVar1;
  
  if (*(LONG *)(*param_1 + -0xc) != -2000000000) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      operator_delete((void *)(*param_1 + -0xc));
    }
    FUN_662eef50(param_1);
  }
  return;
}


