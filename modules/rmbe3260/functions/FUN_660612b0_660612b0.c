/* Module: rmbe3260.dll
   Function: FUN_660612b0
   Address: 660612b0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_660612b0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar1) {
    return param_1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_66061200(param_1);
    operator_delete(param_1);
  }
  return 0;
}


