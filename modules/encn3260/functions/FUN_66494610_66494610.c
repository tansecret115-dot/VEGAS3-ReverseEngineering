/* Module: encn3260.dll
   Function: FUN_66494610
   Address: 66494610
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66494610(int *param_1)

{
  undefined4 *puVar1;
  
  FUN_66494630(param_1);
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_664c03a0(puVar1);
    operator_delete(puVar1);
  }
  return;
}


