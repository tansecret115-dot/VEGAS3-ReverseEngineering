/* Module: rmme3260.dll
   Function: FUN_662350d0
   Address: 662350d0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6623513b) */
/* WARNING: Removing unreachable block (ram,0x6623519e) */

void __fastcall FUN_662350d0(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_1c;
  int *local_18;
  int local_14;
  int *local_10;
  int *local_c;
  int *local_8;
  
  local_10 = param_1 + 0xe;
  *param_1 = &PTR_FUN_6626c430;
  param_1[1] = &PTR_FUN_6626c3e8;
  param_1[2] = &PTR_LAB_6626c3c8;
  param_1[3] = &PTR_LAB_6626c3a8;
  param_1[4] = &PTR_LAB_6626c368;
  param_1[5] = &PTR_LAB_6626c330;
  param_1[6] = &PTR_LAB_6626c2f8;
  param_1[7] = &PTR_LAB_6626c2e8;
  param_1[8] = &PTR_LAB_6626c2d8;
  *(byte *)(param_1 + 0x18) = *(byte *)(param_1 + 0x18) | 0x10;
  local_14 = param_1[0xf];
  local_8 = local_10;
  while (local_14 != 0) {
    puVar3 = (undefined4 *)FUN_66250c10(local_14);
    FUN_66236560((int)(param_1 + 1),(int *)*puVar3);
    FUN_66250bf0(&local_14);
  }
  puVar3 = *(undefined4 **)((int)param_1 + 0x62);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_6624fd90(puVar3);
    operator_delete(puVar3);
    *(undefined4 *)((int)param_1 + 0x62) = 0;
  }
  (**(code **)(*local_8 + 8))();
  local_1c = *(int *)((int)param_1 + 0x6e);
  piVar1 = (int *)((int)param_1 + 0x6a);
  local_18 = piVar1;
  local_c = piVar1;
  while (local_1c != 0) {
    puVar3 = (undefined4 *)FUN_66250c10(local_1c);
    operator_delete((void *)*puVar3);
    FUN_66250bf0(&local_1c);
  }
  (**(code **)(*piVar1 + 8))();
  piVar1 = (int *)param_1[10];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[10] = 0;
  }
  if (*(void **)((int)param_1 + 0xe5) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0xe5));
    *(undefined4 *)((int)param_1 + 0xe5) = 0;
  }
  piVar1 = (int *)param_1[0x14];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x14] = 0;
  }
  if (*(void **)((int)param_1 + 0x66) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x66));
    *(undefined4 *)((int)param_1 + 0x66) = 0;
  }
  if (*(HGDIOBJ *)((int)param_1 + 0xe9) != (HGDIOBJ)0x0) {
    DeleteObject(*(HGDIOBJ *)((int)param_1 + 0xe9));
    *(undefined4 *)((int)param_1 + 0xe9) = 0;
  }
  puVar3 = *(undefined4 **)((int)param_1 + 0xed);
  if (puVar3 != (undefined4 *)0x0) {
    thunk_FUN_6623ab70(puVar3);
    operator_delete(puVar3);
    *(undefined4 *)((int)param_1 + 0xed) = 0;
  }
  piVar1 = (int *)param_1[0x2f];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x2f] = 0;
  }
  piVar1 = (int *)param_1[0x30];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x30] = 0;
  }
  iVar2 = *(int *)((int)param_1 + 0xcd);
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0xc) != 0)) {
    (**(code **)(**(int **)((int)param_1 + 0xd1) + 0x14))
              (*(int **)((int)param_1 + 0xd1),*(undefined4 *)(iVar2 + 8));
  }
  piVar1 = *(int **)((int)param_1 + 0xcd);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0xcd) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0xd1);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0xd1) = 0;
  }
  FUN_66250a40(local_c);
  FUN_66250a40(local_8);
  return;
}


