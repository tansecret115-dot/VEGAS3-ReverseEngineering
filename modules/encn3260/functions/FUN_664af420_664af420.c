/* Module: encn3260.dll
   Function: FUN_664af420
   Address: 664af420
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_664af420(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (0 < LVar1) {
    return param_1[2];
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x24))(1);
  }
  return 0;
}


