/* Module: encn3260.dll
   Function: FUN_6648a020
   Address: 6648a020
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6648a020(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int local_c;
  int *local_8;
  
  local_c = *(int *)(param_1 + 0x10e);
  piVar1 = (int *)(param_1 + 0x10a);
  local_8 = piVar1;
  if (local_c != 0) {
    if (local_c != 0) goto LAB_6648a046;
    pvVar3 = (void *)0x0;
    while( true ) {
      if (pvVar3 != (void *)0x0) {
        FUN_66483730((int)pvVar3);
        operator_delete(pvVar3);
      }
      FUN_664bab40(&local_c);
      if (local_c == 0) break;
LAB_6648a046:
      puVar2 = (undefined4 *)FUN_664bab80(local_c);
      pvVar3 = (void *)*puVar2;
    }
  }
  (**(code **)(*piVar1 + 8))();
  return;
}


