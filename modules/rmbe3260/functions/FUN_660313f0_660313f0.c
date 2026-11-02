/* Module: rmbe3260.dll
   Function: FUN_660313f0
   Address: 660313f0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_660313f0(int *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  int local_8;
  
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
    iVar2 = *(int *)(param_1[3] + 4);
    iVar4 = 0;
    if (0 < iVar2) {
      do {
        pvVar1 = *(void **)(*(int *)param_1[3] + iVar4 * 4);
        if (pvVar1 != (void *)0x0) {
          if (*(void **)((int)pvVar1 + 0xc) != (void *)0x0) {
            operator_delete(*(void **)((int)pvVar1 + 0xc));
            *(undefined4 *)((int)pvVar1 + 0xc) = 0;
          }
          operator_delete(pvVar1);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < iVar2);
    }
    puVar3 = (undefined4 *)param_1[3];
    if (puVar3 != (undefined4 *)0x0) {
      FUN_6605cdb0(puVar3);
      operator_delete(puVar3);
    }
    param_1[3] = 0;
  }
  iVar2 = 0;
  if (*(int *)((int)param_1 + 0x6a) != 0) {
    iVar4 = *(int *)(*(int *)((int)param_1 + 0x6a) + 4);
    if (0 < iVar4) {
      do {
        pvVar1 = *(void **)(**(int **)((int)param_1 + 0x6a) + iVar2 * 4);
        if (pvVar1 != (void *)0x0) {
          operator_delete(pvVar1);
        }
        iVar2 = iVar2 + 1;
      } while (iVar2 < iVar4);
    }
    puVar3 = *(undefined4 **)((int)param_1 + 0x6a);
    if (puVar3 != (undefined4 *)0x0) {
      FUN_6605cdb0(puVar3);
      operator_delete(puVar3);
    }
    *(undefined4 *)((int)param_1 + 0x6a) = 0;
  }
  iVar4 = 0;
  iVar2 = param_1[0x1c];
  if (iVar2 != 0) {
    local_8 = 0;
    if (*(short *)((int)param_1 + 0x6e) != 0) {
      do {
        iVar5 = 0;
        if (0 < *(int *)(iVar4 + 4 + iVar2)) {
          do {
            operator_delete(*(void **)(*(int *)(iVar4 + iVar2) + iVar5 * 4));
            iVar2 = param_1[0x1c];
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)(iVar4 + 4 + iVar2));
        }
        local_8 = local_8 + 1;
        iVar4 = iVar4 + 0x10;
      } while (local_8 < (int)(uint)*(ushort *)((int)param_1 + 0x6e));
    }
    iVar2 = param_1[0x1c];
    if (iVar2 != 0) {
      iVar4 = *(int *)(iVar2 + -4);
      puVar3 = (undefined4 *)(iVar4 * 0x10 + iVar2);
      if (-1 < iVar4 + -1) {
        do {
          puVar3 = puVar3 + -4;
          FUN_6605cdb0(puVar3);
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      operator_delete((void *)(iVar2 + -4));
    }
    param_1[0x1c] = 0;
  }
  if ((void *)param_1[0x1d] != (void *)0x0) {
    operator_delete((void *)param_1[0x1d]);
    param_1[0x1d] = 0;
  }
  iVar2 = (**(code **)(*param_1 + 4))();
  if (iVar2 == 0) {
    (**(code **)(*param_1 + 100))();
  }
  return;
}


