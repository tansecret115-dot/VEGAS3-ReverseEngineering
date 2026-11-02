/* Module: rmme3260.dll
   Function: FUN_66253980
   Address: 66253980
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66253980(undefined4 *param_1)

{
  LONG LVar1;
  
  LVar1 = InterlockedDecrement(param_1 + 1);
  if ((LVar1 < 1) && (param_1 != (undefined4 *)0x0)) {
    FUN_662539c0(param_1);
    operator_delete(param_1);
  }
  return;
}


