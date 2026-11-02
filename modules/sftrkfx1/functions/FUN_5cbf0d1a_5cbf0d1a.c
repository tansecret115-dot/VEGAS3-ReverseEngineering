/* Module: sftrkfx1.dll
   Function: FUN_5cbf0d1a
   Address: 5cbf0d1a
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_5cbf0d1a(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 4);
  if ((LVar1 == 0) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 0x1c))(1);
  }
  return LVar1;
}


