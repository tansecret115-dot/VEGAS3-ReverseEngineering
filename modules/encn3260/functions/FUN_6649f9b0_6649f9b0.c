/* Module: encn3260.dll
   Function: FUN_6649f9b0
   Address: 6649f9b0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6649f9b0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 9);
  if (0 < LVar1) {
    return param_1[9];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_6649f3f0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


