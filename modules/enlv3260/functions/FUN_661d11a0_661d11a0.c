/* Module: enlv3260.dll
   Function: FUN_661d11a0
   Address: 661d11a0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_661d11a0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 0x2a);
  if (0 < LVar1) {
    return param_1[0x2a];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_661d1070(param_1);
    operator_delete(param_1);
  }
  return 0;
}


