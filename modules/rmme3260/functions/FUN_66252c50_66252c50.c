/* Module: rmme3260.dll
   Function: FUN_66252c50
   Address: 66252c50
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66252c50(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)param_1[1];
  *param_1 = &PTR_LAB_6626c9d4;
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


