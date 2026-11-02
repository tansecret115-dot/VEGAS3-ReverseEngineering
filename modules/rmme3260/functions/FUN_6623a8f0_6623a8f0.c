/* Module: rmme3260.dll
   Function: FUN_6623a8f0
   Address: 6623a8f0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_6623a8f0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 4);
  if (0 < LVar1) {
    return param_1[4];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_6623a8e0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


