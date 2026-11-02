/* Module: rmbe3260.dll
   Function: FUN_6601b000
   Address: 6601b000
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6601b227) */

void __fastcall FUN_6601b000(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int local_c;
  undefined4 *local_8;
  
  *param_1 = &PTR_FUN_66066ae8;
  param_1[0x14] = &PTR_LAB_66066938;
  param_1[4] = &PTR_LAB_66066a90;
  param_1[5] = &PTR_LAB_66066a78;
  param_1[6] = &PTR_LAB_66066a68;
  param_1[7] = &PTR_LAB_66066a50;
  param_1[8] = &PTR_LAB_66066a40;
  param_1[9] = &PTR_LAB_66066a28;
  param_1[10] = &PTR_LAB_66066a18;
  param_1[0xb] = &PTR_LAB_66066a08;
  param_1[0xc] = &PTR_LAB_660669f0;
  param_1[0xd] = &PTR_LAB_660669d8;
  param_1[0xe] = &PTR_LAB_660669c0;
  param_1[0xf] = &PTR_LAB_660669b0;
  param_1[0x10] = &PTR_LAB_66066990;
  param_1[0x11] = &PTR_LAB_66066980;
  param_1[0x12] = &PTR_LAB_66066968;
  param_1[0x13] = &PTR_LAB_66066950;
  param_1[0x15] = &PTR_LAB_66066920;
  param_1[0x16] = &PTR_LAB_66066910;
  param_1[0x17] = &PTR_LAB_660668f8;
  param_1[0x18] = &PTR_LAB_660668e0;
  param_1[0x19] = &PTR_LAB_660668c0;
  if (param_1[0x6e] != 0) {
    FUN_66009490(param_1[0x6e]);
    (**(code **)(*(int *)param_1[0x6e] + 8))((int *)param_1[0x6e]);
    param_1[0x6e] = 0;
  }
  if (param_1[0x34] != 0) {
    FUN_6601d360(param_1 + 4);
  }
  if ((int *)param_1[0x4c] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x4c] + 0x18))();
    if ((undefined4 *)param_1[0x4c] != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)param_1[0x4c])(1);
    }
    param_1[0x4c] = 0;
  }
  FUN_6601b890((int)param_1);
  FUN_6601dab0((int)param_1);
  FUN_6601dbd0((int)param_1);
  if (param_1[0x1d] != 0) {
    thunk_FUN_6603cf90();
    param_1[0x1d] = 0;
  }
  piVar1 = (int *)param_1[0x1e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1e] = 0;
  }
  piVar1 = (int *)param_1[0x1f];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x1f] = 0;
  }
  piVar1 = (int *)param_1[0x20];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x20] = 0;
  }
  FUN_660518e0(param_1 + 0x52);
  FUN_660518e0(param_1 + 0x58);
  if ((int *)param_1[0x21] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x21] + 0x50))(1);
  }
  if ((int *)param_1[0x22] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x22] + 0x50))(1);
  }
  if ((int *)param_1[0x23] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x23] + 0x50))(1);
  }
  if ((int *)param_1[0x24] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x24] + 0x50))(1);
  }
  if ((int *)param_1[0x25] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0x25] + 0x50))(1);
  }
  FUN_6605cdc0(param_1 + 0x26,0,0xffffffff);
  piVar1 = (int *)param_1[0x50];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x1c))(piVar1);
  }
  piVar1 = (int *)param_1[0x50];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x50] = 0;
  }
  piVar1 = (int *)param_1[0x51];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x51] = 0;
  }
  local_c = param_1[0x5f];
  local_8 = param_1 + 0x5e;
  while (local_c != 0) {
    puVar3 = (undefined4 *)FUN_6605c600(local_c);
    operator_delete((void *)*puVar3);
    FUN_6605c5e0(&local_c);
  }
  (**(code **)(param_1[0x5e] + 8))();
  iVar2 = param_1[0x65];
  if ((iVar2 != 0) && (*(int *)(iVar2 + 0x4c) != 0)) {
    FUN_6602d5a0(iVar2);
  }
  piVar1 = (int *)param_1[0x65];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x65] = 0;
  }
  FUN_6605cdc0(param_1 + 0x67,0,0xffffffff);
  if ((LPCRITICAL_SECTION)param_1[0x66] != (LPCRITICAL_SECTION)0x0) {
    DeleteCriticalSection((LPCRITICAL_SECTION)param_1[0x66]);
    operator_delete((void *)param_1[0x66]);
    param_1[0x66] = 0;
  }
  piVar1 = (int *)param_1[99];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[99] = 0;
  }
  if ((undefined4 *)param_1[0x6d] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[0x6d])(1);
    param_1[0x6d] = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x1c2);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x1c2) = 0;
  }
  piVar1 = (int *)param_1[0x6f];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    param_1[0x6f] = 0;
  }
  iVar2 = *(int *)((int)param_1 + 0x1ca);
  while (iVar2 = iVar2 + -1, -1 < iVar2) {
    piVar1 = *(int **)(*(int *)((int)param_1 + 0x1c6) + iVar2 * 4);
    FUN_6605d000((void *)((int)param_1 + 0x1c6),iVar2,1);
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  if (*(undefined4 **)((int)param_1 + 0x1f6) != (undefined4 *)0x0) {
    FUN_6603c1b0(*(undefined4 **)((int)param_1 + 0x1f6));
    *(undefined4 *)((int)param_1 + 0x1f6) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x1d6);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x1d6) = 0;
  }
  piVar1 = *(int **)((int)param_1 + 0x1da);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)((int)param_1 + 0x1da) = 0;
  }
  if (DAT_66075170 == (-(uint)(param_1 != (undefined4 *)0x0) & (uint)(param_1 + 4))) {
    DAT_66075170 = 0;
  }
  FUN_6605b770((int *)((int)param_1 + 0x1e6));
  FUN_6605cdb0((undefined4 *)((int)param_1 + 0x1c6));
  FUN_6605cdb0(param_1 + 0x67);
  FUN_6605c430(param_1 + 0x5e);
  FUN_66051720(param_1 + 0x58);
  FUN_66051720(param_1 + 0x52);
  FUN_6605b770(param_1 + 0x48);
  FUN_6605b770(param_1 + 0x45);
  FUN_6605b770(param_1 + 0x42);
  FUN_6605b770(param_1 + 0x3f);
  FUN_6605b770(param_1 + 0x3c);
  FUN_6605b770(param_1 + 0x39);
  FUN_6605b770(param_1 + 0x36);
  FUN_6605cdb0(param_1 + 0x26);
  *param_1 = &PTR_FUN_66063e30;
  return;
}


