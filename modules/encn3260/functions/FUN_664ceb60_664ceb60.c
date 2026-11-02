/* Module: encn3260.dll
   Function: FUN_664ceb60
   Address: 664ceb60
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664ceb60(int param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0xc);
  local_c = *(int *)(local_8 + 4);
  if (local_c != 0) {
    if (local_c != 0) goto LAB_664ceb90;
    puVar1 = (undefined4 *)0x0;
    while( true ) {
      if (puVar1 != (undefined4 *)0x0) {
        FUN_664cee20(puVar1);
        operator_delete(puVar1);
      }
      FUN_664bab40(&local_c);
      if (local_c == 0) break;
LAB_664ceb90:
      puVar1 = (undefined4 *)FUN_664bab80(local_c);
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  FUN_664bdbe0(*(int **)(param_1 + 4));
  FUN_664bdbe0(*(int **)(param_1 + 8));
  return;
}


