/* Module: rmme3260.dll
   Function: FUN_6622fa60
   Address: 6622fa60
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6622fa60(int *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 4);
  if (0 < LVar1) {
    return param_1[4];
  }
  if (param_1 != (int *)0x0) {
    FUN_6622f7c0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


