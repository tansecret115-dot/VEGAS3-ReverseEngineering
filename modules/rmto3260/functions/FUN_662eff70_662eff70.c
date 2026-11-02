/* Module: rmto3260.dll
   Function: FUN_662eff70
   Address: 662eff70
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_662eff70(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 0xe);
  if (0 < LVar1) {
    return param_1[0xe];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_662f0060(param_1);
    operator_delete(param_1);
  }
  return 0;
}


