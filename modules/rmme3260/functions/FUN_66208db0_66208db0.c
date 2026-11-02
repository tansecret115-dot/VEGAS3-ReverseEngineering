/* Module: rmme3260.dll
   Function: FUN_66208db0
   Address: 66208db0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_66208db0(undefined4 *param_1)

{
  void *pvVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int local_8;
  
  *param_1 = &PTR_FUN_6626b5a0;
  if (*(void **)((int)param_1 + 0x52) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x52));
    *(undefined4 *)((int)param_1 + 0x52) = 0;
  }
  if (*(void **)((int)param_1 + 0x56) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x56));
    *(undefined4 *)((int)param_1 + 0x56) = 0;
  }
  if (*(void **)((int)param_1 + 0x5a) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x5a));
    *(undefined4 *)((int)param_1 + 0x5a) = 0;
  }
  if (*(void **)((int)param_1 + 0x5e) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x5e));
    *(undefined4 *)((int)param_1 + 0x5e) = 0;
  }
  if (*(void **)((int)param_1 + 0x62) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x62));
    *(undefined4 *)((int)param_1 + 0x62) = 0;
  }
  if (*(void **)((int)param_1 + 0x66) != (void *)0x0) {
    operator_delete(*(void **)((int)param_1 + 0x66));
    *(undefined4 *)((int)param_1 + 0x66) = 0;
  }
  if (param_1[3] != 0) {
    iVar3 = *(int *)(param_1[3] + 4);
    iVar5 = 0;
    if (0 < iVar3) {
      do {
        pvVar1 = *(void **)(*(int *)param_1[3] + iVar5 * 4);
        if (pvVar1 != (void *)0x0) {
          if (*(void **)((int)pvVar1 + 0xc) != (void *)0x0) {
            operator_delete(*(void **)((int)pvVar1 + 0xc));
            *(undefined4 *)((int)pvVar1 + 0xc) = 0;
          }
          operator_delete(pvVar1);
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < iVar3);
    }
    puVar4 = (undefined4 *)param_1[3];
    if (puVar4 != (undefined4 *)0x0) {
      FUN_6624fd90(puVar4);
      operator_delete(puVar4);
    }
    param_1[3] = 0;
  }
  iVar3 = 0;
  if (*(int *)((int)param_1 + 0x6a) != 0) {
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x6a) + 4);
    if (0 < iVar5) {
      do {
        pvVar1 = *(void **)(**(int **)((int)param_1 + 0x6a) + iVar3 * 4);
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < iVar5);
    }
    puVar4 = *(undefined4 **)((int)param_1 + 0x6a);
    if (puVar4 != (undefined4 *)0x0) {
      FUN_6624fd90(puVar4);
      operator_delete(puVar4);
    }
    *(undefined4 *)((int)param_1 + 0x6a) = 0;
  }
  iVar3 = 0;
  if ((undefined4 *)param_1[1] != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)param_1[1])(1);
    param_1[1] = 0;
  }
  iVar5 = param_1[0x1c];
  if (iVar5 != 0) {
    local_8 = 0;
    if (*(short *)((int)param_1 + 0x6e) != 0) {
      do {
        iVar6 = 0;
        if (0 < *(int *)(iVar3 + 4 + iVar5)) {
          do {
            operator_delete(*(void **)(*(int *)(iVar3 + iVar5) + iVar6 * 4));
            iVar5 = param_1[0x1c];
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)(iVar3 + 4 + iVar5));
        }
        local_8 = local_8 + 1;
        iVar3 = iVar3 + 0x10;
      } while (local_8 < (int)(uint)*(ushort *)((int)param_1 + 0x6e));
    }
    iVar3 = param_1[0x1c];
    if (iVar3 != 0) {
      iVar5 = *(int *)(iVar3 + -4);
      puVar4 = (undefined4 *)(iVar5 * 0x10 + iVar3);
      if (-1 < iVar5 + -1) {
        do {
          puVar4 = puVar4 + -4;
          FUN_6624fd90(puVar4);
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
      }
      operator_delete((void *)(iVar3 + -4));
    }
    param_1[0x1c] = 0;
  }
  iVar3 = 0;
  if ((void *)param_1[0x1d] != (void *)0x0) {
    operator_delete((void *)param_1[0x1d]);
    param_1[0x1d] = 0;
  }
  if ((void *)param_1[5] != (void *)0x0) {
    operator_delete((void *)param_1[5]);
    param_1[5] = 0;
  }
  if ((short)param_1[0x27] != 0) {
    uVar2 = param_1[0x27] & 0xffff;
    do {
      operator_delete(*(void **)(iVar3 + param_1[0x26]));
      iVar3 = iVar3 + 4;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  FUN_6624fda0(param_1 + 0x26,0,0xffffffff);
  iVar3 = 0;
  if (0 < (int)param_1[0x2c]) {
    do {
      puVar4 = *(undefined4 **)(param_1[0x2b] + iVar3 * 4);
      if (puVar4 != (undefined4 *)0x0) {
        FUN_6620e340(puVar4);
        operator_delete(puVar4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[0x2c]);
  }
  FUN_6624fd90(param_1 + 0x2b);
  FUN_6624fd90(param_1 + 0x26);
  return;
}


