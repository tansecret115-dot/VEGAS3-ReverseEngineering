/* Module: wmfplug2.dll
   Function: FUN_004118a0
   Address: 004118a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_004118a0(void *param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  HGLOBAL pvVar3;
  LPVOID pvVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 *puVar10;
  
  if (*(int *)((int)param_1 + 0x34) == 0) {
    return 0x80004003;
  }
  iVar9 = *(int *)((int)param_1 + 0x18);
  if (iVar9 == 0x318) {
    FUN_00412fb0(param_1,*(HWND *)((int)param_1 + 0x10));
  }
  else if (iVar9 == 0x319) {
    FUN_00413af0(param_1,*(HWND *)((int)param_1 + 0x10));
  }
  else if (iVar9 == 0x31a) {
    FUN_00412710(param_1,*(HWND *)((int)param_1 + 0x10));
  }
  else {
    FUN_00411f80(param_1,*(HWND *)((int)param_1 + 0x10));
  }
  puVar1 = *(undefined2 **)(*(int *)((int)param_1 + 0x34) + 0x424);
  iVar9 = *(int *)(puVar1 + 0x1f);
  if (iVar9 == 0) {
    return 0x80070057;
  }
  if ((*(int *)(iVar9 + 8) != 0) && (puVar1 != (undefined2 *)0x0)) {
    iVar8 = *(int *)(iVar9 + 0x44);
    iVar7 = *(int *)(iVar9 + 0x40);
    puVar1[1] = (short)iVar8;
    uVar2 = iVar8 * 2;
    puVar1[6] = (short)uVar2;
    *puVar1 = 1;
    *(int *)(puVar1 + 2) = iVar7;
    puVar1[7] = 0x10;
    *(uint *)(puVar1 + 4) = (uVar2 & 0xffff) * iVar7;
    puVar1[8] = 0;
    puVar5 = *(undefined4 **)(*(int *)((int)param_1 + 0x34) + 0x424);
    puVar10 = *(undefined4 **)((int)puVar5 + 0x16);
    if (puVar10 != (undefined4 *)0x0) {
      *puVar10 = *puVar5;
      puVar10[1] = puVar5[1];
      puVar10[2] = puVar5[2];
      puVar10[3] = puVar5[3];
      *(undefined2 *)(puVar10 + 4) = *(undefined2 *)(puVar5 + 4);
    }
  }
  if (*(int *)(iVar9 + 4) == 0) {
    iVar9 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428);
    if (iVar9 != 0) {
      *(undefined4 *)(iVar9 + 4) = 0;
      *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x4c) = 0;
    }
  }
  else {
    iVar8 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428);
    if (iVar8 == 0) {
      pvVar3 = GlobalAlloc(0x42,0x98);
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)(*(int *)((int)param_1 + 0x34) + 0x428) = pvVar4;
      iVar8 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428);
      if (iVar8 == 0) {
        return 0x8007000e;
      }
    }
    puVar5 = *(undefined4 **)(iVar8 + 0x48);
    if (puVar5 == (undefined4 *)0x0) {
      pvVar3 = GlobalAlloc(0x42,0x28);
      pvVar4 = GlobalLock(pvVar3);
      *(LPVOID *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x48) = pvVar4;
      puVar5 = *(undefined4 **)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x48);
      if (puVar5 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
    }
    FUN_00431200(puVar5,0x1b,*(int *)(iVar9 + 0x5c),*(int *)(iVar9 + 0x60),(uint *)0x0,0,(int *)0x0)
    ;
    uVar2 = *(uint *)(iVar9 + 100);
    iVar8 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428);
    puVar5 = (undefined4 *)(iVar8 + 0x50);
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(double *)(iVar8 + 0x60) = (double)uVar2;
    *(undefined4 *)(iVar8 + 0x68) = 0;
    *(undefined4 *)(iVar8 + 0x70) = 0;
    *(undefined4 *)(iVar8 + 0x50) = 0x40;
    *(undefined4 *)(iVar8 + 0x54) = 0xffffffff;
    *(undefined4 *)(iVar8 + 0x58) = 0;
    *(undefined4 *)(iVar8 + 0x5c) = 0;
    *(undefined4 *)(iVar8 + 0x6c) = 0x3ff00000;
    *(undefined4 *)(iVar8 + 0x74) = 0;
    *(undefined4 *)(iVar8 + 0x78) = 0;
    *(undefined4 *)(iVar8 + 0x7c) = 0;
    *(undefined4 *)(iVar8 + 0x80) = 0;
    *(undefined4 *)(iVar8 + 0x84) = 0;
    *(undefined4 *)(iVar8 + 0x88) = 0;
    *(undefined4 *)(iVar8 + 0x8c) = 0;
    uVar2 = *(uint *)(iVar9 + 100);
    iVar9 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428);
    puVar5 = (undefined4 *)(iVar9 + 8);
    for (iVar8 = 0x10; iVar8 != 0; iVar8 = iVar8 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    *(double *)(iVar9 + 0x18) = (double)uVar2;
    *(undefined4 *)(iVar9 + 0x20) = 0;
    *(undefined4 *)(iVar9 + 0x28) = 0;
    *(undefined4 *)(iVar9 + 8) = 0x40;
    *(undefined4 *)(iVar9 + 0xc) = 0xffffffff;
    *(undefined4 *)(iVar9 + 0x10) = 0;
    *(undefined4 *)(iVar9 + 0x14) = 0;
    *(undefined4 *)(iVar9 + 0x24) = 0x3ff00000;
    *(undefined4 *)(iVar9 + 0x2c) = 0;
    *(undefined4 *)(iVar9 + 0x30) = 0;
    *(undefined4 *)(iVar9 + 0x34) = 0;
    *(undefined4 *)(iVar9 + 0x38) = 0;
    *(undefined4 *)(iVar9 + 0x3c) = 0;
    *(undefined4 *)(iVar9 + 0x40) = 0;
    *(undefined4 *)(iVar9 + 0x44) = 0;
    puVar5 = *(undefined4 **)(*(int *)((int)param_1 + 0x34) + 0x428);
    puVar10 = (undefined4 *)*puVar5;
    if (puVar10 == (undefined4 *)0x0) {
      pvVar3 = GlobalAlloc(0x42,0x28);
      pvVar4 = GlobalLock(pvVar3);
      **(undefined4 **)(*(int *)((int)param_1 + 0x34) + 0x428) = pvVar4;
      puVar5 = *(undefined4 **)(*(int *)((int)param_1 + 0x34) + 0x428);
      puVar10 = (undefined4 *)*puVar5;
      if (puVar10 == (undefined4 *)0x0) {
        return 0x8007000e;
      }
    }
    puVar5 = (undefined4 *)puVar5[0x12];
    for (iVar9 = 10; iVar9 != 0; iVar9 = iVar9 + -1) {
      *puVar10 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar10 = puVar10 + 1;
    }
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 4) = 1;
    *(undefined4 *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x4c) = 1;
  }
  uVar6 = (**(code **)(**(int **)((int)param_1 + 0x2c) + 100))
                    (*(int **)((int)param_1 + 0x2c),*(undefined4 *)((int)param_1 + 0x34));
  return uVar6;
}


