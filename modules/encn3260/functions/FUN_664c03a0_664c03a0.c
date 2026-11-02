/* Module: encn3260.dll
   Function: FUN_664c03a0
   Address: 664c03a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664c03a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_664c3aa0(puVar1);
    operator_delete(puVar1);
  }
  return;
}


