/* Module: rmbe3260.dll
   Function: FUN_6605c1b0
   Address: 6605c1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6605c1b0(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar1) {
    return param_1[1];
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x20))(1);
  }
  return 0;
}


