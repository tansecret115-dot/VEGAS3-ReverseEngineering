/* Module: encn3260.dll
   Function: FUN_664c1de0
   Address: 664c1de0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_664c1de0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 5);
  if (0 < LVar1) {
    return param_1[5];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_664c1ea0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


