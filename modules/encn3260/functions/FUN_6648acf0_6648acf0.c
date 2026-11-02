/* Module: encn3260.dll
   Function: FUN_6648acf0
   Address: 6648acf0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6648acf0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 7);
  if (0 < LVar1) {
    return param_1[7];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_6648abe0(param_1);
    operator_delete(param_1);
  }
  DAT_664f05c0 = 0;
  return 0;
}


