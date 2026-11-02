/* Module: rmbe3260.dll
   Function: FUN_6603f580
   Address: 6603f580
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_6603f580(undefined4 *param_1)

{
  undefined4 *puVar1;
  int *piVar2;
  void *pvVar3;
  LONG LVar4;
  
  puVar1 = *(undefined4 **)((int)param_1 + 0xae);
  *param_1 = &PTR_FUN_66068080;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_66056360(puVar1);
    operator_delete(puVar1);
    *(undefined4 *)((int)param_1 + 0xae) = 0;
  }
  if (*(int **)((int)param_1 + 0xaa) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xaa) + 8))();
    *(undefined4 *)((int)param_1 + 0xaa) = 0;
  }
  if (*(int *)((int)param_1 + 0xa6) != 0) {
    FUN_660427a0(*(void **)(param_1[0x4a] + 8),*(int *)((int)param_1 + 0xa6));
    *(undefined4 *)((int)param_1 + 0xa6) = 0;
  }
  if (*(int *)((int)param_1 + 0x113) != 0) {
    (**(code **)(*(int *)param_1[0x48] + 0x1c))(*(int *)((int)param_1 + 0x113));
    *(undefined4 *)((int)param_1 + 0x113) = 0;
  }
  puVar1 = (undefined4 *)param_1[0x48];
  if (puVar1 != (undefined4 *)0x0) {
    FUN_66056360(puVar1);
    operator_delete(puVar1);
    param_1[0x48] = 0;
  }
  piVar2 = (int *)param_1[0x4a];
  if (piVar2 != (int *)0x0) {
    *piVar2 = *piVar2 + -1;
    piVar2 = (int *)param_1[0x4a];
    if ((*piVar2 == 0) && ((void *)piVar2[2] != (void *)0x0)) {
      FUN_66042750((void *)piVar2[2],piVar2[1]);
      *(undefined4 *)(param_1[0x4a] + 4) = 0;
      puVar1 = *(undefined4 **)(param_1[0x4a] + 8);
      if (puVar1 != (undefined4 *)0x0) {
        FUN_660424e0(puVar1);
        operator_delete(puVar1);
      }
      *(undefined4 *)(param_1[0x4a] + 8) = 0;
    }
    pvVar3 = (void *)param_1[0x4a];
    LVar4 = InterlockedDecrement((LONG *)((int)pvVar3 + 0xc));
    if (LVar4 < 1) {
      operator_delete(pvVar3);
    }
    param_1[0x4a] = 0;
  }
  if (*(void **)((int)param_1 + 0x3a) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x3a));
  }
  if ((void *)param_1[0x60] != (void *)0x0) {
    operator_delete((void *)param_1[0x60]);
  }
  FUN_6605b770(param_1 + 0x6d);
  FUN_66042bc0((undefined4 *)((int)param_1 + 0xc2));
  FUN_6603ec00(param_1);
  return;
}


