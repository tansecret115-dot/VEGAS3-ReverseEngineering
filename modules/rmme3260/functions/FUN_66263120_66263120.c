/* Module: rmme3260.dll
   Function: FUN_66263120
   Address: 66263120
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66263120(int *param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *param_1;
  local_c = *(int *)(local_8 + 4);
  if (local_c != 0) {
    if (local_c != 0) goto LAB_6626314f;
    puVar1 = (undefined4 *)0x0;
    while( true ) {
      if (puVar1 != (undefined4 *)0x0) {
        FUN_662631a0(puVar1);
        operator_delete(puVar1);
      }
      FUN_66250bf0(&local_c);
      if (local_c == 0) break;
LAB_6626314f:
      puVar1 = (undefined4 *)FUN_66250c10(local_c);
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  (**(code **)(*(int *)*param_1 + 8))();
  FUN_66252710((int *)param_1[2]);
  return;
}


