/* Module: encn3260.dll
   Function: FUN_664cf0f0
   Address: 664cf0f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_664cf0f0(int *param_1)

{
  undefined4 *puVar1;
  int local_c;
  int local_8;
  
  local_8 = *param_1;
  local_c = *(int *)(local_8 + 4);
  if (local_c != 0) {
    if (local_c != 0) goto LAB_664cf11f;
    puVar1 = (undefined4 *)0x0;
    while( true ) {
      if (puVar1 != (undefined4 *)0x0) {
        FUN_664cf200(puVar1);
        operator_delete(puVar1);
      }
      FUN_664bab40(&local_c);
      if (local_c == 0) break;
LAB_664cf11f:
      puVar1 = (undefined4 *)FUN_664bab80(local_c);
      puVar1 = (undefined4 *)*puVar1;
    }
  }
  (**(code **)(*(int *)*param_1 + 8))();
  FUN_664bdbe0((int *)param_1[2]);
  return;
}


