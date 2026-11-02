/* Module: encn3260.dll
   Function: FUN_664993e0
   Address: 664993e0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_664993e0(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 4);
  if (0 < LVar1) {
    return param_1[4];
  }
  if (param_1 != (int *)0x0) {
    FUN_66499160(param_1);
    operator_delete(param_1);
  }
  return 0;
}


