/* Module: encn3260.dll
   Function: FUN_66489fb0
   Address: 66489fb0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66489fb0(int param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  void *pvVar3;
  int local_c;
  int *local_8;
  
  local_c = *(int *)(param_1 + 0xfa);
  piVar1 = (int *)(param_1 + 0xf6);
  local_8 = piVar1;
  if (local_c != 0) {
    if (local_c != 0) goto LAB_66489fd6;
    pvVar3 = (void *)0x0;
    while( true ) {
      if (pvVar3 != (void *)0x0) {
        FUN_664bb3e0((int *)((int)pvVar3 + 6));
        operator_delete(pvVar3);
      }
      FUN_664bab40(&local_c);
      if (local_c == 0) break;
LAB_66489fd6:
      puVar2 = (undefined4 *)FUN_664bab80(local_c);
      pvVar3 = (void *)*puVar2;
    }
  }
  (**(code **)(*piVar1 + 8))();
  return;
}


