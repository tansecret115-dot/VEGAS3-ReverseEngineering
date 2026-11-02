/* Module: encn3260.dll
   Function: FUN_664936f0
   Address: 664936f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_664936f0(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 0x1b);
  if (0 < LVar1) {
    return param_1[0x1b];
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0x14))(1);
  }
  return 0;
}


