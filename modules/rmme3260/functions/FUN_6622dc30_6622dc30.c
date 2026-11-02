/* Module: rmme3260.dll
   Function: FUN_6622dc30
   Address: 6622dc30
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6622dc30(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (0 < LVar1) {
    return param_1[2];
  }
  if (param_1 != (int *)0x0) {
    FUN_6622db10(param_1);
    operator_delete(param_1);
  }
  return 0;
}


