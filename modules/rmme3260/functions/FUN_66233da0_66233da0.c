/* Module: rmme3260.dll
   Function: FUN_66233da0
   Address: 66233da0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_66233da0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 6);
  if (0 < LVar1) {
    return param_1[6];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_662339f0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


