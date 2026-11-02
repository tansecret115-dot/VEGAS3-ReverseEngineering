/* Module: rmbe3260.dll
   Function: FUN_6603c1b0
   Address: 6603c1b0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG __fastcall FUN_6603c1b0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 3);
  if (0 < LVar1) {
    return param_1[3];
  }
  if (param_1 != (undefined4 *)0x0) {
    (**(code **)*param_1)(1);
  }
  return 0;
}


