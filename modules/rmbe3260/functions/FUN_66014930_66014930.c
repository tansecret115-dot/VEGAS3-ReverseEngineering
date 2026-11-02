/* Module: rmbe3260.dll
   Function: FUN_66014930
   Address: 66014930
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_66014930(undefined4 *param_1)

{
  int *piVar1;
  LONG LVar2;
  
  piVar1 = (int *)param_1[2];
  if (piVar1 != (int *)0x0) {
    LVar2 = (**(code **)(*piVar1 + 8))(piVar1);
    return LVar2;
  }
  LVar2 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar2) {
    return param_1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_66014800(param_1);
    operator_delete(param_1);
  }
  return 0;
}


