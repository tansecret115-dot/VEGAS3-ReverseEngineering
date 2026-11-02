/* Module: rmme3260.dll
   Function: FUN_66230770
   Address: 66230770
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_66230770(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 3);
  if (0 < LVar1) {
    return param_1[3];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_66230390(param_1);
    operator_delete(param_1);
  }
  return 0;
}


