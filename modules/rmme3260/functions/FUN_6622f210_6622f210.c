/* Module: rmme3260.dll
   Function: FUN_6622f210
   Address: 6622f210
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6622f210(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0x19));
  if (0 < LVar1) {
    return *(LONG *)((int)param_1 + 0x19);
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_6622f0f0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


