/* Module: aviplug.dll
   Function: FUN_5f95bb60
   Address: 5f95bb60
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f95bb60(void *param_1)

{
  short sVar1;
  int iVar2;
  short *psVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  SIZE_T dwBytes;
  undefined4 *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  
  if (*(HGLOBAL *)((int)param_1 + 200) != (HGLOBAL)0x0) {
    GlobalUnlock(*(HGLOBAL *)((int)param_1 + 200));
    GlobalFree(*(HGLOBAL *)((int)param_1 + 200));
  }
  if (*(HGLOBAL *)((int)param_1 + 0xcc) != (HGLOBAL)0x0) {
    GlobalUnlock(*(HGLOBAL *)((int)param_1 + 0xcc));
    GlobalFree(*(HGLOBAL *)((int)param_1 + 0xcc));
  }
  *(undefined4 *)((int)param_1 + 200) = 0;
  *(undefined4 *)((int)param_1 + 0xcc) = 0;
  puVar11 = (undefined4 *)((int)param_1 + 0x58);
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  puVar11 = (undefined4 *)((int)param_1 + 0x9c);
  for (iVar7 = 0xb; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar11 = 0;
    puVar11 = puVar11 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x60) = 0;
  *(undefined4 *)((int)param_1 + 100) = 0x3fd00000;
  **(undefined4 **)((int)param_1 + 0x98) = 0x73646976;
  *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 4) = 0x20424944;
  *(undefined4 *)((int)param_1 + 0x9c) = 0x73647561;
  *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 0x14) = 0;
  *(undefined4 *)((int)param_1 + 0xb0) = 0;
  if (((*(int *)((int)param_1 + 0x34) != 0) &&
      (iVar7 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428), iVar7 != 0)) &&
     (puVar11 = *(undefined4 **)(iVar7 + 0x94), puVar11 != (undefined4 *)0x0)) {
    puVar6 = puVar11;
    puVar12 = (undefined4 *)((int)param_1 + 0x58);
    for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
      *puVar12 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar12 = puVar12 + 1;
    }
    if (puVar11[0xd] != 0) {
      pvVar4 = GlobalAlloc(0x42,puVar11[0xd]);
      *(HGLOBAL *)((int)param_1 + 200) = pvVar4;
      if (pvVar4 == (HGLOBAL)0x0) {
        return 0x8007000e;
      }
      pvVar5 = GlobalLock(pvVar4);
      *(LPVOID *)(*(int *)((int)param_1 + 0x98) + 0x20) = pvVar5;
      uVar9 = *(uint *)(*(int *)((int)param_1 + 0x98) + 0x24);
      puVar11 = puVar11 + 0x10;
      puVar6 = *(undefined4 **)(*(int *)((int)param_1 + 0x98) + 0x20);
      for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *puVar6 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar6 = puVar6 + 1;
      }
      for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(undefined1 *)puVar6 = *(undefined1 *)puVar11;
        puVar11 = (undefined4 *)((int)puVar11 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 1);
      }
      *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 0x18) = 0;
      *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 0x1c) = 0;
    }
  }
  iVar7 = *(int *)((int)param_1 + 0x34);
  if ((iVar7 != 0) && (*(int *)(iVar7 + 0x424) != 0)) {
    iVar2 = *(int *)(*(int *)(iVar7 + 0x424) + 0x3e);
    if (iVar2 != 0) {
      puVar11 = (undefined4 *)(iVar2 + 0x10);
      puVar6 = (undefined4 *)((int)param_1 + 0x9c);
      for (iVar10 = 0xb; iVar10 != 0; iVar10 = iVar10 + -1) {
        *puVar6 = *puVar11;
        puVar11 = puVar11 + 1;
        puVar6 = puVar6 + 1;
      }
      *(undefined4 *)((int)param_1 + 0xb4) = 0;
      if ((((*(uint *)((int)param_1 + 0xb0) & 0x100000) != 0) &&
          (*(short *)(*(int *)(iVar7 + 0x424) + 0xe) == 0x10)) &&
         (iVar7 = FUN_5f95c930(param_1,iVar7), iVar7 != 0)) {
        *(undefined2 *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0xe) = 0xc;
      }
    }
    if (*(int *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x16) == 0) {
      if (iVar2 == 0) {
        return 0;
      }
      if (*(int *)(iVar2 + 0x2c) == 0) {
        return 0;
      }
      *(int *)((int)param_1 + 0xb8) = *(int *)(iVar2 + 0x2c);
      *(uint *)(*(int *)((int)param_1 + 0x98) + 0x14) =
           *(uint *)(*(int *)((int)param_1 + 0x98) + 0x14) | 8;
      pvVar4 = GlobalAlloc(0x42,*(SIZE_T *)((int)param_1 + 0xb8));
      *(HGLOBAL *)((int)param_1 + 0xcc) = pvVar4;
      if (pvVar4 == (HGLOBAL)0x0) {
        return 0x8007000e;
      }
      puVar6 = GlobalLock(pvVar4);
      uVar9 = *(uint *)((int)param_1 + 0xb8);
      *(undefined4 **)((int)param_1 + 0xb4) = puVar6;
      puVar11 = (undefined4 *)(iVar2 + 0x40);
    }
    else {
      *(uint *)(*(int *)((int)param_1 + 0x98) + 0x14) =
           *(uint *)(*(int *)((int)param_1 + 0x98) + 0x14) | 8;
      psVar3 = *(short **)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x16);
      sVar1 = *psVar3;
      if ((sVar1 == 3) || (sVar1 == 1)) {
        dwBytes = 0x10;
      }
      else {
        dwBytes = (ushort)psVar3[8] + 0x12;
      }
      *(SIZE_T *)((int)param_1 + 0xb8) = dwBytes;
      pvVar4 = GlobalAlloc(0x42,dwBytes);
      *(HGLOBAL *)((int)param_1 + 0xcc) = pvVar4;
      if (pvVar4 == (HGLOBAL)0x0) {
        return 0x8007000e;
      }
      puVar6 = GlobalLock(pvVar4);
      uVar9 = *(uint *)((int)param_1 + 0xb8);
      *(undefined4 **)((int)param_1 + 0xb4) = puVar6;
      puVar11 = *(undefined4 **)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x424) + 0x16);
    }
    for (uVar8 = uVar9 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
      *puVar6 = *puVar11;
      puVar11 = puVar11 + 1;
      puVar6 = puVar6 + 1;
    }
    for (uVar9 = uVar9 & 3; uVar9 != 0; uVar9 = uVar9 - 1) {
      *(undefined1 *)puVar6 = *(undefined1 *)puVar11;
      puVar11 = (undefined4 *)((int)puVar11 + 1);
      puVar6 = (undefined4 *)((int)puVar6 + 1);
    }
    *(undefined4 *)((int)param_1 + 0xbc) = 0;
    *(undefined4 *)((int)param_1 + 0xc0) = 0;
  }
  return 0;
}


