/* Module: rv103260.dll
   Function: FUN_636a5450
   Address: 636a5450
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_636a5450(undefined4 *param_1)

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


