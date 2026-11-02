/* Module: rmbe3260.dll
   Function: FUN_6605dd70
   Address: 6605dd70
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6605dd70(undefined4 *param_1)

{
  int *piVar1;
  LONG LVar2;
  
  LVar2 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar2) {
    return param_1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    piVar1 = (int *)param_1[2];
    *param_1 = &PTR_FUN_66068d78;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))(piVar1);
    }
    operator_delete(param_1);
  }
  return 0;
}


