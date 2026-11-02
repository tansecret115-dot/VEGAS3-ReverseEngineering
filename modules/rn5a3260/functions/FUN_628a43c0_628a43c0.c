/* Module: rn5a3260.dll
   Function: FUN_628a43c0
   Address: 628a43c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_628a43c0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar1) {
    return param_1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_628a4400(param_1);
    operator_delete(param_1);
  }
  return 0;
}


