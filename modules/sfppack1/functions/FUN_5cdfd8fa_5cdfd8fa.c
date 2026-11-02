/* Module: sfppack1.dll
   Function: FUN_5cdfd8fa
   Address: 5cdfd8fa
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5cdfd8fa(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 4);
  if ((LVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return LVar1;
}


