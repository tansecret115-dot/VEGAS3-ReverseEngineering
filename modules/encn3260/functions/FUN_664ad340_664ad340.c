/* Module: encn3260.dll
   Function: FUN_664ad340
   Address: 664ad340
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_664ad340(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (0 < LVar1) {
    return param_1[2];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_664ad1f0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


