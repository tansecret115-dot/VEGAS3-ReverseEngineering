/* Module: encn3260.dll
   Function: FUN_6649e0d0
   Address: 6649e0d0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6649e0d0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 6);
  if (0 < LVar1) {
    return param_1[6];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_6649dd20(param_1);
    operator_delete(param_1);
  }
  return 0;
}


