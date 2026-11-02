/* Module: encn3260.dll
   Function: FUN_664cffb0
   Address: 664cffb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664cffb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[2];
  *param_1 = &PTR_FUN_664dfe18;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_664c3aa0(puVar1);
    operator_delete(puVar1);
    param_1[2] = 0;
  }
  return;
}


