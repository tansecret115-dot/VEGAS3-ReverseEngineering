/* Module: encn3260.dll
   Function: FUN_66483490
   Address: 66483490
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_66483490(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar1) {
    return param_1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_66483470(param_1);
    operator_delete(param_1);
  }
  return 0;
}


