/* Module: rmbe3260.dll
   Function: FUN_66008f80
   Address: 66008f80
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_66008f80(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar1) {
    return param_1[1];
  }
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 0xc))(1);
  }
  return 0;
}


