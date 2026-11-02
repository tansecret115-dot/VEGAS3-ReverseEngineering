/* Module: rmbe3260.dll
   Function: FUN_6602ef00
   Address: 6602ef00
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6602ef00(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (0 < LVar1) {
    return param_1[2];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_6602ee20(param_1);
    operator_delete(param_1);
  }
  return 0;
}


