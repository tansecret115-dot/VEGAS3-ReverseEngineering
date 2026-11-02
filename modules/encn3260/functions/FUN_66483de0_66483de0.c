/* Module: encn3260.dll
   Function: FUN_66483de0
   Address: 66483de0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x66483ec5) */

void __fastcall FUN_66483de0(undefined4 *param_1)

{
  void *pvVar1;
  int *piVar2;
  undefined4 *puVar3;
  int local_c;
  int local_8;
  
  *param_1 = &PTR_FUN_664dde30;
  param_1[0xc] = &PTR_FUN_664ddd80;
  param_1[0xd] = &PTR_LAB_664ddd50;
  param_1[0xe] = &PTR_LAB_664ddd40;
  param_1[0xf] = &PTR_LAB_664ddd28;
  param_1[0x10] = &PTR_LAB_664ddd18;
  param_1[0x11] = &PTR_LAB_664ddd00;
  param_1[0x12] = &PTR_LAB_664ddcf0;
  param_1[0x13] = &PTR_LAB_664ddce0;
  param_1[0x14] = &PTR_LAB_664ddcd0;
  FUN_66489fb0((int)param_1);
  FUN_6648a020((int)param_1);
  FUN_6648a090((int)param_1);
  puVar3 = *(undefined4 **)((int)param_1 + 0x132);
  if (puVar3 != (undefined4 *)0x0) {
    thunk_FUN_664bbcb0(puVar3);
    operator_delete(puVar3);
  }
  puVar3 = *(undefined4 **)((int)param_1 + 0x136);
  if (puVar3 != (undefined4 *)0x0) {
    thunk_FUN_664bbcb0(puVar3);
    operator_delete(puVar3);
  }
  puVar3 = *(undefined4 **)((int)param_1 + 0x13a);
  if (puVar3 != (undefined4 *)0x0) {
    thunk_FUN_664bbcb0(puVar3);
    operator_delete(puVar3);
  }
  puVar3 = *(undefined4 **)((int)param_1 + 0x13e);
  if (puVar3 != (undefined4 *)0x0) {
    thunk_FUN_664bbcb0(puVar3);
    operator_delete(puVar3);
  }
  local_c = *(int *)((int)param_1 + 0x10e);
  local_8 = (int)param_1 + 0x10a;
  while (local_c != 0) {
    puVar3 = (undefined4 *)FUN_664bab80(local_c);
    pvVar1 = (void *)*puVar3;
    if (pvVar1 != (void *)0x0) {
      FUN_66483730((int)pvVar1);
      operator_delete(pvVar1);
    }
    FUN_664bab40(&local_c);
  }
  piVar2 = (int *)param_1[0x23];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x23] = 0;
  }
  piVar2 = (int *)param_1[0x1a];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x1a] = 0;
  }
  piVar2 = *(int **)((int)param_1 + 0xf2);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0xf2) = 0;
  }
  piVar2 = (int *)param_1[0x20];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x20] = 0;
  }
  piVar2 = (int *)param_1[0x21];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x21] = 0;
  }
  piVar2 = (int *)param_1[0x1f];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x1f] = 0;
  }
  piVar2 = (int *)param_1[0x22];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x22] = 0;
  }
  if ((undefined4 *)param_1[0x68] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x68])(1);
    param_1[0x68] = 0;
  }
  piVar2 = *(int **)((int)param_1 + 0x172);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0x172) = 0;
  }
  piVar2 = *(int **)((int)param_1 + 0x17a);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    *(undefined4 *)((int)param_1 + 0x17a) = 0;
  }
  piVar2 = (int *)param_1[0x19];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x19] = 0;
  }
  if (*(int *)((int)param_1 + 0x182) != 0) {
    (**(code **)(*(int *)param_1[0x1e] + 0x14))((int *)param_1[0x1e],*(int *)((int)param_1 + 0x182))
    ;
    *(undefined4 *)((int)param_1 + 0x182) = 0;
  }
  piVar2 = (int *)param_1[0x1e];
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
    param_1[0x1e] = 0;
  }
  FUN_664bb3e0(param_1 + 0x65);
  FUN_664ba950((int *)((int)param_1 + 0x11e));
  FUN_664ba950((int *)((int)param_1 + 0x10a));
  FUN_664ba950((int *)((int)param_1 + 0xf6));
  FUN_664bb3e0((int *)((int)param_1 + 0xe6));
  FUN_664bb3e0(param_1 + 0x36);
  FUN_664bb3e0(param_1 + 0x33);
  FUN_664bb3e0(param_1 + 0x30);
  FUN_664bb3e0(param_1 + 0x2d);
  FUN_664bb3e0(param_1 + 0x2a);
  FUN_664bb3e0(param_1 + 0x27);
  FUN_664bb3e0(param_1 + 0x24);
  FUN_6648c4b0(param_1);
  return;
}


