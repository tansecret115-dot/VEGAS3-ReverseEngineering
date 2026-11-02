/* Module: encn3260.dll
   Function: FUN_66481d90
   Address: 66481d90
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_66481d90(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 7);
  if (0 < LVar1) {
    return param_1[7];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_664819f0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


