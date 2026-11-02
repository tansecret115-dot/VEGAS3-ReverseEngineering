/* Module: rmbe3260.dll
   Function: FUN_66052e10
   Address: 66052e10
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG FUN_66052e10(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar1) {
    return param_1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return 0;
}


