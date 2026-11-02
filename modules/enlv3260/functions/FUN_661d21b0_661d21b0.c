/* Module: enlv3260.dll
   Function: FUN_661d21b0
   Address: 661d21b0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_661d21b0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement((LONG *)((int)param_1 + 0x6a));
  if (0 < LVar1) {
    return *(LONG *)((int)param_1 + 0x6a);
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_661d1f00(param_1);
    operator_delete(param_1);
  }
  return 0;
}


