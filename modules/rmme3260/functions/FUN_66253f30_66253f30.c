/* Module: rmme3260.dll
   Function: FUN_66253f30
   Address: 66253f30
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_66253f30(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 0xe);
  if (0 < LVar1) {
    return param_1[0xe];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_66254020(param_1);
    operator_delete(param_1);
  }
  return 0;
}


