/* Module: rmme3260.dll
   Function: FUN_66261cd0
   Address: 66261cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66261cd0(int param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  int local_c;
  int local_8;
  
  local_8 = *(int *)(param_1 + 0xc);
  local_c = *(int *)(local_8 + 4);
  if (local_c != 0) {
    if (local_c != 0) goto LAB_66261d00;
    piVar2 = (int *)0x0;
    while( true ) {
      if (piVar2 != (int *)0x0) {
        FUN_66261e10(piVar2);
        operator_delete(piVar2);
      }
      FUN_66250bf0(&local_c);
      if (local_c == 0) break;
LAB_66261d00:
      puVar1 = (undefined4 *)FUN_66250c10(local_c);
      piVar2 = (int *)*puVar1;
    }
  }
  (**(code **)(**(int **)(param_1 + 0xc) + 8))();
  FUN_66252710(*(int **)(param_1 + 4));
  FUN_66252710(*(int **)(param_1 + 8));
  return;
}


