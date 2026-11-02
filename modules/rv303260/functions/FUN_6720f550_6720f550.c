/* Module: rv303260.dll
   Function: FUN_6720f550
   Address: 6720f550
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6720f550(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    operator_delete(param_1);
    param_1 = puVar1;
  }
  return;
}


