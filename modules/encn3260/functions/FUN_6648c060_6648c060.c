/* Module: encn3260.dll
   Function: FUN_6648c060
   Address: 6648c060
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6648c060(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 0x15);
  if (0 < LVar1) {
    return param_1[0x15];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_6648b1d0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


