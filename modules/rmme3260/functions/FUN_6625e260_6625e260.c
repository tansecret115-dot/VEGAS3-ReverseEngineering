/* Module: rmme3260.dll
   Function: FUN_6625e260
   Address: 6625e260
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6625e260(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0x2a));
  if (0 < LVar1) {
    return *(LONG *)((int)param_1 + 0x2a);
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_6625e1a0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


