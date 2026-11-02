/* Module: rmto3260.dll
   Function: FUN_662ef900
   Address: 662ef900
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_662ef900(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_1 = &PTR_LAB_66307bb4;
  while (puVar1 != (undefined4 *)0x0) {
    operator_delete((void *)*puVar1);
    param_1[1] = puVar1[2];
    operator_delete(puVar1);
    puVar1 = (undefined4 *)param_1[1];
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


