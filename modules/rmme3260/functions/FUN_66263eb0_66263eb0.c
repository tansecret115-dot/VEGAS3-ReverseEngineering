/* Module: rmme3260.dll
   Function: FUN_66263eb0
   Address: 66263eb0
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG __fastcall FUN_66263eb0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar1) {
    return param_1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_66263c40(param_1);
    operator_delete(param_1);
  }
  return 0;
}


