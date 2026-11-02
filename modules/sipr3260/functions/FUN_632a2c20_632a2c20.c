/* Module: sipr3260.dll
   Function: FUN_632a2c20
   Address: 632a2c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_632a2c20(LONG *param_1)

{
  LONG LVar1;
  
  if (*param_1 != -2000000000) {
    LVar1 = InterlockedDecrement(param_1);
    if (LVar1 < 1) {
      operator_delete(param_1);
    }
  }
  return;
}


