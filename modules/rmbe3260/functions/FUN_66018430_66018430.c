/* Module: rmbe3260.dll
   Function: FUN_66018430
   Address: 66018430
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_66018430(int param_1,undefined4 *param_2)

{
  short sVar1;
  int iVar2;
  void *pvVar3;
  void *pvVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  bool bVar11;
  
  iVar2 = FUN_66017d60((void *)(param_1 + -0x14),(int)param_2);
  if (iVar2 < 0) {
    return 0x80070057;
  }
  sVar1 = *(short *)(param_2 + 2);
  if (sVar1 == 1) {
    bVar11 = *(short *)((int)param_2 + 10) == 4;
  }
  else if (sVar1 == 2) {
    bVar11 = *(short *)((int)param_2 + 10) == 3;
  }
  else if (sVar1 == 3) {
    bVar11 = 2 < *(ushort *)((int)param_2 + 10);
  }
  else {
    bVar11 = false;
  }
  if (!bVar11) {
    return 0x80004005;
  }
  uVar7 = *(ushort *)(param_2 + 4);
  if (uVar7 != 0) {
    if (uVar7 < 3) {
      if ((*(short *)((int)param_2 + 0x16) != 0) && (param_2[6] != 0)) {
        bVar11 = true;
        goto LAB_660184df;
      }
    }
    else if (uVar7 == 3) {
      bVar11 = true;
      goto LAB_660184df;
    }
  }
  bVar11 = false;
LAB_660184df:
  if (!bVar11) {
    return 0x80004005;
  }
  uVar7 = *(short *)(param_1 + 6) + 1;
  pvVar3 = operator_new((uint)uVar7 * 0x22);
  if (*(short *)(param_1 + 6) != 0) {
    if (*(int *)(param_1 + 0x18) == 0) {
      return 0x80004005;
    }
    uVar6 = 0;
    if (*(short *)(param_1 + 6) != 0) {
      do {
        puVar8 = (undefined4 *)((uint)uVar6 * 0x22 + *(int *)(param_1 + 0x18));
        puVar9 = (undefined4 *)((int)pvVar3 + (uint)uVar6 * 0x22);
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar9 = *puVar8;
          puVar8 = puVar8 + 1;
          puVar9 = puVar9 + 1;
        }
        uVar6 = uVar6 + 1;
        *(undefined2 *)puVar9 = *(undefined2 *)puVar8;
      } while (uVar6 < *(ushort *)(param_1 + 6));
    }
  }
  puVar8 = (undefined4 *)((int)pvVar3 + (uVar7 - 1 & 0xffff) * 0x22);
  *puVar8 = *param_2;
  puVar8[1] = param_2[1];
  *(undefined2 *)(puVar8 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined2 *)((int)puVar8 + 10) = *(undefined2 *)((int)param_2 + 10);
  if (*(ushort *)((int)param_2 + 10) == 0) {
    puVar8[3] = 0;
  }
  else {
    pvVar4 = operator_new((uint)*(ushort *)((int)param_2 + 10) << 1);
    puVar8[3] = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0x8007000e;
    }
    FUN_6605cf30((void *)(param_1 + 0x48),*(int *)(param_1 + 0x4c),pvVar4);
    uVar6 = 0;
    if (*(short *)((int)param_2 + 10) != 0) {
      do {
        uVar5 = (uint)uVar6;
        uVar6 = uVar6 + 1;
        *(undefined2 *)(puVar8[3] + uVar5 * 2) = *(undefined2 *)(param_2[3] + uVar5 * 2);
      } while (uVar6 < *(ushort *)((int)param_2 + 10));
    }
  }
  *(undefined2 *)(puVar8 + 4) = *(undefined2 *)(param_2 + 4);
  *(undefined4 *)((int)puVar8 + 0x12) = *(undefined4 *)((int)param_2 + 0x12);
  *(undefined2 *)((int)puVar8 + 0x16) = *(undefined2 *)((int)param_2 + 0x16);
  if (*(ushort *)((int)param_2 + 0x16) == 0) {
    puVar8[6] = 0;
  }
  else {
    pvVar4 = operator_new((uint)*(ushort *)((int)param_2 + 0x16));
    puVar8[6] = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0x8007000e;
    }
    FUN_6605cf30((void *)(param_1 + 0x28),*(int *)(param_1 + 0x2c),pvVar4);
    uVar6 = *(ushort *)((int)param_2 + 0x16);
    puVar9 = (undefined4 *)param_2[6];
    puVar10 = (undefined4 *)puVar8[6];
    for (uVar5 = (uint)(uVar6 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar10 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar10 = puVar10 + 1;
    }
    for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar10 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar10 = (undefined4 *)((int)puVar10 + 1);
    }
  }
  *(undefined2 *)(puVar8 + 7) = *(undefined2 *)(param_2 + 7);
  if (*(ushort *)(param_2 + 7) == 0) {
    *(undefined4 *)((int)puVar8 + 0x1e) = 0;
  }
  else {
    pvVar4 = operator_new((uint)*(ushort *)(param_2 + 7));
    *(void **)((int)puVar8 + 0x1e) = pvVar4;
    if (pvVar4 == (void *)0x0) {
      return 0x8007000e;
    }
    FUN_6605cf30((void *)(param_1 + 0x28),*(int *)(param_1 + 0x2c),pvVar4);
    uVar6 = *(ushort *)(param_2 + 7);
    puVar9 = *(undefined4 **)((int)param_2 + 0x1e);
    puVar8 = *(undefined4 **)((int)puVar8 + 0x1e);
    for (uVar5 = (uint)(uVar6 >> 2); uVar5 != 0; uVar5 = uVar5 - 1) {
      *puVar8 = *puVar9;
      puVar9 = puVar9 + 1;
      puVar8 = puVar8 + 1;
    }
    for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *(undefined1 *)puVar8 = *(undefined1 *)puVar9;
      puVar9 = (undefined4 *)((int)puVar9 + 1);
      puVar8 = (undefined4 *)((int)puVar8 + 1);
    }
  }
  if (*(void **)(param_1 + 0x18) != (void *)0x0) {
    operator_delete(*(void **)(param_1 + 0x18));
  }
  *(void **)(param_1 + 0x18) = pvVar3;
  *(ushort *)(param_1 + 6) = uVar7;
  return 0;
}


