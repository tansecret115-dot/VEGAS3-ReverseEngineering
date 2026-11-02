/* Module: rv203260.dll
   Function: FUN_638af630
   Address: 638af630
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_638af630(LONG *param_1)

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


