/* Module: rmme3260.dll
   Function: FUN_66235da0
   Address: 66235da0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x6623602f) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_66235da0(int param_1)

{
  void *pvVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  iVar4 = param_1;
  _DAT_6626fcc4 = 1;
  pvVar1 = (void *)(param_1 + -8);
  FUN_66237ea0(pvVar1);
  if (((*(int *)(iVar4 + 0x24) != 0) && (*(int *)(iVar4 + 0x109) != 0)) &&
     (*(int *)(iVar4 + 0xf1) != 0)) {
    if (((*(byte *)(iVar4 + 0x58) & 0x20) != 0) && (*(int *)(iVar4 + 0x44) == 0)) {
      FUN_66236fb0((int)pvVar1);
    }
    if ((*(int *)(iVar4 + 0x2c) != 0) && ((*(byte *)(iVar4 + 0x58) & 2) != 0)) {
      local_20 = *(undefined4 *)(iVar4 + 0x109);
      *(byte *)(iVar4 + 0x58) = *(byte *)(iVar4 + 0x58) & 0xfd;
      local_24 = 0x4002;
      local_1c = 0;
      local_18 = 0;
      local_14 = 0;
      local_10 = 0;
      (**(code **)(**(int **)(iVar4 + 0x2c) + 0x14))(*(int **)(iVar4 + 0x2c),&local_24);
    }
    SetWindowLongA(*(HWND *)(iVar4 + 0x109),-4,*(LONG *)(iVar4 + 0xf1));
    if (*(int *)(iVar4 + 0xf5) != 0) {
      SetWindowLongA(*(HWND *)(iVar4 + 0xe9),-4,*(int *)(iVar4 + 0xf5));
      FUN_66251160(&DAT_6627cea0,*(int **)(iVar4 + 0xe9));
    }
    FUN_66251160(&DAT_6627cea0,*(int **)(iVar4 + 0x109));
    if ((*(byte *)(iVar4 + 0x59) & 2) != 0) {
      iVar3 = *(int *)(iVar4 + 0xc5);
      if ((iVar3 != 0) && (*(int *)(iVar3 + 0xc) != 0)) {
        (**(code **)(**(int **)(iVar4 + 0xc9) + 0x14))
                  (*(int **)(iVar4 + 0xc9),*(undefined4 *)(iVar3 + 8));
        *(undefined4 *)(*(int *)(iVar4 + 0xc5) + 0xc) = 0;
      }
      FUN_66244710(*(int *)(iVar4 + 0xb4));
      FUN_6623a6a0(iVar4 + -8);
      piVar5 = *(int **)(iVar4 + 0xb4);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        *(undefined4 *)(iVar4 + 0xb4) = 0;
      }
    }
    if (*(int *)(iVar4 + 0xb8) != 0) {
      FUN_66244710(*(int *)(iVar4 + 0xb8));
      piVar5 = *(int **)(iVar4 + 0xb8);
      if (piVar5 != (int *)0x0) {
        (**(code **)(*piVar5 + 8))(piVar5);
        *(undefined4 *)(iVar4 + 0xb8) = 0;
      }
    }
    DestroyWindow(*(HWND *)(iVar4 + 0xe9));
    bVar2 = *(byte *)(iVar4 + 0x58);
    *(byte *)(iVar4 + 0x58) = bVar2 & 0xdf;
    if (iVar4 == 8) {
      piVar5 = (int *)0x0;
    }
    else {
      piVar5 = (int *)(iVar4 + -4);
    }
    FUN_66243b70(&DAT_6627ce60,piVar5);
    if (*(undefined4 **)(iVar4 + 0x28) != (undefined4 *)0x0) {
      FUN_662438c0(&DAT_6627ce60,*(undefined4 **)(iVar4 + 0x28));
    }
    *(byte *)(iVar4 + 0x58) = (char)((bVar2 & 0x20) >> 5) << 5 | *(byte *)(iVar4 + 0x58) & 0xdf;
    *(undefined4 *)(iVar4 + 0x109) = 0;
    *(undefined4 *)(iVar4 + 0xf1) = 0;
    *(undefined4 *)(iVar4 + 0x24) = 0;
    piVar5 = *(int **)(iVar4 + 0x54);
    if (piVar5 != (int *)0x0) {
      (**(code **)(*piVar5 + 8))(piVar5);
      *(undefined4 *)(iVar4 + 0x54) = 0;
    }
    if (*(undefined4 **)(iVar4 + 0x76) != (undefined4 *)0x0) {
      FUN_66245b80(*(undefined4 **)(iVar4 + 0x76));
      pvVar1 = *(void **)(iVar4 + 0x76);
      if (pvVar1 != (void *)0x0) {
        FUN_66245670((int)pvVar1);
        operator_delete(pvVar1);
        *(undefined4 *)(iVar4 + 0x76) = 0;
      }
    }
    if (*(undefined4 **)(iVar4 + 0x7a) != (undefined4 *)0x0) {
      FUN_66245b80(*(undefined4 **)(iVar4 + 0x7a));
      pvVar1 = *(void **)(iVar4 + 0x7a);
      if (pvVar1 != (void *)0x0) {
        FUN_66245670((int)pvVar1);
        operator_delete(pvVar1);
        *(undefined4 *)(iVar4 + 0x7a) = 0;
      }
    }
    if (*(void **)(iVar4 + 0x28) != (void *)0x0) {
      operator_delete(*(void **)(iVar4 + 0x28));
      *(undefined4 *)(iVar4 + 0x28) = 0;
      puVar6 = *(undefined4 **)(iVar4 + 0xe5);
      if (puVar6 != (undefined4 *)0x0) {
        thunk_FUN_6623ab70(puVar6);
        operator_delete(puVar6);
        *(undefined4 *)(iVar4 + 0xe5) = 0;
      }
      FUN_66237a50();
    }
    if (*(int *)(iVar4 + 0x5a) == 0) {
      puVar6 = operator_new(0x10);
      if (puVar6 == (undefined4 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = FUN_6624fd80(puVar6);
      }
      *(undefined4 *)(iVar4 + 0x5a) = uVar7;
    }
    local_c = *(int *)(iVar4 + 0x34);
    local_8 = (int *)(iVar4 + 0x30);
    while (local_c != 0) {
      puVar6 = (undefined4 *)FUN_66250c10(local_c);
      param_1 = 0;
      FUN_66237a80((int *)*puVar6,&param_1);
      if (param_1 != 0) {
        (**(code **)(*(int *)(param_1 + 8) + 0x10))(param_1 + 8);
        FUN_6624ff10(*(void **)(iVar4 + 0x5a),*(int *)((int)*(void **)(iVar4 + 0x5a) + 4),param_1);
      }
      FUN_66250bf0(&local_c);
    }
    (**(code **)(*(int *)(iVar4 + 0x30) + 8))();
    if ((*(byte *)(iVar4 + 0x59) & 0x10) != 0) {
      *(byte *)(iVar4 + 0x58) = *(byte *)(iVar4 + 0x58) | 0x80;
    }
    if ((*(byte *)(iVar4 + 0x59) & 8) != 0) {
      *(byte *)(iVar4 + 0x59) = *(byte *)(iVar4 + 0x59) | 1;
    }
    return 0;
  }
  return 0x80040009;
}


