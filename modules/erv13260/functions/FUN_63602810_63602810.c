/* Module: erv13260.dll
   Function: FUN_63602810
   Address: 63602810
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_63602810(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar1) {
    return param_1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return 0;
}


