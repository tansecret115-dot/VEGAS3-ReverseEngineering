/* Module: rmme3260.dll
   Function: FUN_66263c40
   Address: 66263c40
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66263c40(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if ((*(int *)((int)param_1 + 0x1a) != 0) &&
     (piVar1 = *(int **)((int)param_1 + 10), piVar1 != (int *)0x0)) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(int *)((int)param_1 + 0xe) != 0) {
    if (*(code **)((int)param_1 + 0x16) != (code *)0x0) {
      (**(code **)((int)param_1 + 0x16))();
      *(undefined4 *)((int)param_1 + 0x16) = 0;
    }
    FUN_66265dd0(*(undefined4 **)((int)param_1 + 0xe));
    puVar2 = *(undefined4 **)((int)param_1 + 0xe);
    if (puVar2 != (undefined4 *)0x0) {
      FUN_66265c10(puVar2);
      operator_delete(puVar2);
    }
    *(undefined4 *)((int)param_1 + 0xe) = 0;
  }
  if ((void *)*param_1 != (void *)0x0) {
    operator_delete((void *)*param_1);
    *param_1 = 0;
  }
  *(undefined4 *)((int)param_1 + 0x12) = 0;
  *(undefined4 *)((int)param_1 + 0x16) = 0;
  return;
}


