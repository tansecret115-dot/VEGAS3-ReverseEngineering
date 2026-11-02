/* Module: encn3260.dll
   Function: FUN_664cc590
   Address: 664cc590
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_664cc590(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 0xf);
  if (0 < LVar1) {
    return param_1[0xf];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_664cc270(param_1);
    operator_delete(param_1);
  }
  return 0;
}


