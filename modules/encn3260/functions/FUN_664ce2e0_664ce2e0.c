/* Module: encn3260.dll
   Function: FUN_664ce2e0
   Address: 664ce2e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ce2e0(int *param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *param_1;
  local_c = *(int *)(local_8 + 4);
  if (local_c != 0) {
    if (local_c != 0) goto LAB_664ce30f;
    puVar1 = (undefined4 *)0x0;
    while( true ) {
      if (puVar1 != (undefined4 *)0x0) {
        FUN_664ce4a0(puVar1);
        operator_delete(puVar1);
      }
      FUN_664bab40(&local_c);
      if (local_c == 0) break;
LAB_664ce30f:
      puVar1 = (undefined4 *)FUN_664bab80(local_c);
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  (**(code **)(*(int *)*param_1 + 8))();
  FUN_664bdbe0((int *)param_1[2]);
  return;
}


