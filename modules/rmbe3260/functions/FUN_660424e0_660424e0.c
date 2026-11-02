/* Module: rmbe3260.dll
   Function: FUN_660424e0
   Address: 660424e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660424e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_66051720(puVar1);
    operator_delete(puVar1);
    *param_1 = 0;
  }
  return;
}


