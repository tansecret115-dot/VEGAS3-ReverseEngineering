/* Module: encn3260.dll
   Function: FUN_664c9e80
   Address: 664c9e80
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_664c9e80(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0x2a));
  if (0 < LVar1) {
    return *(LONG *)((int)param_1 + 0x2a);
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_664c9e50(param_1);
    operator_delete(param_1);
  }
  return 0;
}


