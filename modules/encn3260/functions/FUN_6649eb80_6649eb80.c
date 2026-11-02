/* Module: encn3260.dll
   Function: FUN_6649eb80
   Address: 6649eb80
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6649eb80(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar1) {
    return param_1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_6649eae0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


