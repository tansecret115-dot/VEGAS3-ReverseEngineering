/* Module: encn3260.dll
   Function: FUN_66498bd0
   Address: 66498bd0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_66498bd0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0x19));
  if (0 < LVar1) {
    return *(LONG *)((int)param_1 + 0x19);
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_66498ab0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


