/* Module: rmme3260.dll
   Function: FUN_6622ce60
   Address: 6622ce60
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6622ce60(void *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 4));
  if (0 < LVar1) {
    return *(LONG *)((int)param_1 + 4);
  }
  operator_delete(param_1);
  return 0;
}


