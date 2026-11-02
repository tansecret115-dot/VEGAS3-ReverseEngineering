/* Module: rmme3260.dll
   Function: FUN_6623bcb0
   Address: 6623bcb0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6623bcb0(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 10);
  if (0 < LVar1) {
    return param_1[10];
  }
  if (param_1 != (int *)0x0) {
    FUN_6623b650(param_1);
    operator_delete(param_1);
  }
  return 0;
}


