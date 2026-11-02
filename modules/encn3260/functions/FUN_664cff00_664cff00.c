/* Module: encn3260.dll
   Function: FUN_664cff00
   Address: 664cff00
   Source: Ghidra pseudocode (Stage 10 batch) */


LONG __fastcall FUN_664cff00(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if (0 < LVar1) {
    return param_1[1];
  }
  if (param_1 != (undefined4 *)0x0) {
    FUN_664cfca0(param_1);
    operator_delete(param_1);
  }
  return 0;
}


