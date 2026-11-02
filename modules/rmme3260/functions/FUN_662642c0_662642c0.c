/* Module: rmme3260.dll
   Function: FUN_662642c0
   Address: 662642c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_662642c0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 2);
  if (0 < LVar1) {
    return param_1[2];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_66264420(param_1);
    operator_delete(param_1);
  }
  return 0;
}


