/* Module: encn3260.dll
   Function: FUN_664c1ae0
   Address: 664c1ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c1ae0(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 < 1) && (param_1 != (undefined4 *)0x0)) {
    FUN_664c1b10(param_1);
    operator_delete(param_1);
  }
  return;
}


