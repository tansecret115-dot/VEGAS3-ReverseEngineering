/* Module: aviplug.dll
   Function: FUN_5f9437f0
   Address: 5f9437f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f9437f0(int *param_1,int param_2)

{
  HGLOBAL pvVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  SIZE_T SVar9;
  UINT UVar10;
  
  param_1[4] = *(int *)(param_2 + 0x38);
  param_1[0x22] = *(int *)(param_2 + 8);
  param_1[0x23] = *(int *)(param_2 + 0xc);
  param_1[0x24] = *(int *)(param_2 + 0x10);
  param_1[0x25] = *(int *)(param_2 + 0x14);
  param_1[0x26] = *(int *)(param_2 + 0x7c);
  param_1[0x2a] = *(int *)(param_2 + 0x80);
  puVar2 = (undefined4 *)param_1[0x1e];
  param_1[0x2b] = *(int *)(param_2 + 0x84);
  piVar6 = (int *)(param_2 + 0x3c);
  piVar8 = param_1 + 5;
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *piVar8 = *piVar6;
    piVar6 = piVar6 + 1;
    piVar8 = piVar8 + 1;
  }
  if (puVar2 == (undefined4 *)0x0) {
    pvVar1 = GlobalAlloc(0x42,*(SIZE_T *)(param_2 + 0x90));
LAB_5f943899:
    puVar2 = GlobalLock(pvVar1);
  }
  else if (*(SIZE_T *)(param_2 + 0x90) != param_1[0x1f]) {
    pvVar1 = GlobalHandle(puVar2);
    GlobalUnlock(pvVar1);
    SVar9 = *(SIZE_T *)(param_2 + 0x90);
    UVar10 = 0;
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x1e]);
    pvVar1 = GlobalReAlloc(pvVar1,SVar9,UVar10);
    goto LAB_5f943899;
  }
  if (puVar2 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  param_1[0x1e] = (int)puVar2;
  uVar5 = *(uint *)(param_2 + 0x90);
  param_1[0x1f] = uVar5;
  puVar7 = *(undefined4 **)(param_2 + 0x94);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  puVar2 = (undefined4 *)param_1[0x15];
  if (*(int *)(param_2 + 0xb0) == 0) {
    if (puVar2 != (undefined4 *)0x0) {
      pvVar1 = GlobalHandle(puVar2);
      GlobalUnlock(pvVar1);
      pvVar1 = GlobalHandle((LPCVOID)param_1[0x15]);
      GlobalFree(pvVar1);
      param_1[0x15] = 0;
      param_1[0x16] = 0;
    }
    iVar3 = (**(code **)(*param_1 + 0x58))
                      (param_1,*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                       *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x18),
                       *(undefined4 *)(param_2 + 0x1c));
    goto LAB_5f9439aa;
  }
  if (puVar2 == (undefined4 *)0x0) {
    pvVar1 = GlobalAlloc(0x42,*(SIZE_T *)(param_2 + 0xb4));
LAB_5f943926:
    puVar2 = GlobalLock(pvVar1);
  }
  else if (*(int *)(param_2 + 0xb4) != param_1[0x16]) {
    pvVar1 = GlobalHandle(puVar2);
    GlobalUnlock(pvVar1);
    SVar9 = *(SIZE_T *)(param_2 + 0xb4);
    UVar10 = 0;
    pvVar1 = GlobalHandle((LPCVOID)param_1[0x15]);
    pvVar1 = GlobalReAlloc(pvVar1,SVar9,UVar10);
    goto LAB_5f943926;
  }
  if (puVar2 == (undefined4 *)0x0) {
    return -0x7ff8fff2;
  }
  param_1[0x15] = (int)puVar2;
  param_1[0x16] = *(int *)(param_2 + 0xb4);
  uVar5 = *(uint *)(param_2 + 0xb4);
  puVar7 = *(undefined4 **)(param_2 + 0xb0);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar2 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar2 = puVar2 + 1;
  }
  for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(undefined1 *)puVar2 = *(undefined1 *)puVar7;
    puVar7 = (undefined4 *)((int)puVar7 + 1);
    puVar2 = (undefined4 *)((int)puVar2 + 1);
  }
  iVar3 = (**(code **)(*param_1 + 0x50))(param_1,0,0);
LAB_5f9439aa:
  if ((-1 < iVar3) && (iVar3 = (**(code **)(*param_1 + 0x60))(param_1), -1 < iVar3)) {
    param_1[0x2e] = *(int *)(param_2 + 0xa8);
    param_1[0x2f] = *(int *)(param_2 + 0xac);
    param_1[0x30] = *(int *)(param_2 + 0xa0);
    piVar6 = *(int **)(param_2 + 0xc0);
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 4))(piVar6);
    }
    piVar6 = (int *)param_1[100];
    if (piVar6 != (int *)0x0) {
      (**(code **)(*piVar6 + 8))(piVar6);
    }
    param_1[100] = *(int *)(param_2 + 0xc0);
  }
  return iVar3;
}


