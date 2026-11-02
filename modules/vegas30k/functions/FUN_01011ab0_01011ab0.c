/* Module: vegas30k.dll
   Function: FUN_01011ab0
   Address: 01011ab0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined1 * FUN_01011ab0(tagDIR_ENTRY *param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  tagSFVCD_PSD *ptVar3;
  tagSFVCD_LOT *ptVar4;
  tagSFVCD_INFO *ptVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  SIZE_T SVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
  undefined2 *puVar18;
  undefined1 *local_10;
  
  local_10 = (undefined1 *)0x0;
  ptVar3 = sfvcdGetPSD_VCD(param_1);
  if ((ptVar3 == (tagSFVCD_PSD *)0x0) ||
     (ptVar4 = sfvcdGetLOT_VCD(param_1), ptVar4 == (tagSFVCD_LOT *)0x0)) {
    return &DAT_80070057;
  }
  ptVar5 = sfvcdGetVCD_INFO(param_1);
  *(undefined4 *)(ptVar3 + 0x14) = 0x800;
  pvVar6 = GlobalAlloc(0x42,0x800);
  pvVar7 = GlobalLock(pvVar6);
  *(LPVOID *)(ptVar3 + 8) = pvVar7;
  if (pvVar7 == (LPVOID)0x0) {
    return (undefined1 *)0x8007000e;
  }
  *(LPVOID *)(ptVar3 + 0xc) = pvVar7;
  *(undefined4 *)(ptVar3 + 0x10) = 0;
  iVar14 = 0;
LAB_01011b17:
  while( true ) {
    piVar17 = *(int **)(ptVar3 + 4);
    if (piVar17 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *piVar17;
    }
    if (iVar10 <= iVar14) {
      *(undefined4 *)(ptVar5 + 0x34) = *(undefined4 *)(ptVar3 + 0x14);
      return local_10;
    }
    if (piVar17 == (int *)0x0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *piVar17;
    }
    if ((iVar14 < 0) || (iVar10 + -1 < iVar14)) {
      piVar17 = (int *)0x0;
    }
    else {
      piVar17 = *(int **)(piVar17[2] + iVar14 * 4);
    }
    iVar10 = *piVar17;
    if (iVar10 != 0) break;
    iVar10 = 0;
    if ((int *)piVar17[5] != (int *)0x0) {
      iVar10 = *(int *)piVar17[5];
    }
    uVar12 = iVar10 * 2 + 0xe;
    param_1 = (tagDIR_ENTRY *)0x0;
    if ((uVar12 & 7) != 0) {
      param_1 = (tagDIR_ENTRY *)(8 - (uVar12 & 7));
    }
    if ((int)param_1 + *(int *)(ptVar3 + 0x10) + uVar12 <= *(uint *)(ptVar3 + 0x14)) {
LAB_01011db7:
      puVar1 = *(undefined1 **)(ptVar3 + 0xc);
      *puVar1 = 0x10;
      uVar9 = 0;
      if ((undefined4 *)piVar17[5] != (undefined4 *)0x0) {
        uVar9 = (undefined1)*(undefined4 *)piVar17[5];
      }
      puVar1[1] = uVar9;
      *(short *)(puVar1 + 2) = (short)piVar17[2];
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)((int)piVar17 + 10);
      *(short *)(puVar1 + 6) = (short)piVar17[3];
      *(undefined2 *)(puVar1 + 8) = *(undefined2 *)((int)piVar17 + 0xe);
      *(short *)(puVar1 + 10) = (short)piVar17[4];
      puVar1[0xc] = *(undefined1 *)((int)piVar17 + 0x12);
      puVar1[0xd] = *(undefined1 *)((int)piVar17 + 0x13);
      iVar10 = 0;
      puVar18 = (undefined2 *)(puVar1 + 0xe);
      while( true ) {
        piVar2 = (int *)piVar17[5];
        if (piVar2 == (int *)0x0) {
          iVar16 = 0;
        }
        else {
          iVar16 = *piVar2;
        }
        if (iVar16 <= iVar10) break;
        iVar16 = piVar2[1] * iVar10;
        iVar10 = iVar10 + 1;
        *puVar18 = *(undefined2 *)(iVar16 + piVar2[2]);
        puVar18 = puVar18 + 1;
      }
      FUN_01011410(puVar1);
      puVar15 = (undefined4 *)(*(int *)(ptVar3 + 0xc) + uVar12);
      *(undefined4 **)(ptVar3 + 0xc) = puVar15;
      *(uint *)(ptVar3 + 0x10) = *(int *)(ptVar3 + 0x10) + uVar12;
      goto joined_r0x01011d28;
    }
    uVar13 = *(uint *)(ptVar3 + 0x14) - *(int *)(ptVar3 + 0x10);
    puVar15 = *(undefined4 **)(ptVar3 + 0xc);
    for (uVar11 = uVar13 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
      *puVar15 = 0;
      puVar15 = puVar15 + 1;
    }
    for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
      *(undefined1 *)puVar15 = 0;
      puVar15 = (undefined4 *)((int)puVar15 + 1);
    }
    *(int *)(ptVar3 + 0x10) = *(int *)(ptVar3 + 0x14);
    SVar8 = *(int *)(ptVar3 + 0x14) + 0x800;
    *(SIZE_T *)(ptVar3 + 0x14) = SVar8;
    pvVar6 = GlobalReAlloc(*(HGLOBAL *)(ptVar3 + 8),SVar8,0x42);
    *(HGLOBAL *)(ptVar3 + 8) = pvVar6;
    if (pvVar6 != (HGLOBAL)0x0) {
      *(int *)(ptVar3 + 0xc) = *(int *)(ptVar3 + 0x10) + (int)pvVar6;
      goto LAB_01011db7;
    }
    local_10 = (undefined1 *)0x8007000e;
    iVar14 = iVar14 + 1;
  }
  if (iVar10 == 1) {
    iVar10 = 0;
    if ((int *)piVar17[7] != (int *)0x0) {
      iVar10 = *(int *)piVar17[7];
    }
    uVar12 = iVar10 * 2 + 0x14;
    param_1 = (tagDIR_ENTRY *)0x0;
    if ((uVar12 & 7) != 0) {
      param_1 = (tagDIR_ENTRY *)(8 - (uVar12 & 7));
    }
    if (*(uint *)(ptVar3 + 0x14) < (int)param_1 + *(int *)(ptVar3 + 0x10) + uVar12) {
      uVar13 = *(uint *)(ptVar3 + 0x14) - *(int *)(ptVar3 + 0x10);
      puVar15 = *(undefined4 **)(ptVar3 + 0xc);
      for (uVar11 = uVar13 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      for (uVar13 = uVar13 & 3; uVar13 != 0; uVar13 = uVar13 - 1) {
        *(undefined1 *)puVar15 = 0;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      *(int *)(ptVar3 + 0x10) = *(int *)(ptVar3 + 0x14);
      SVar8 = *(int *)(ptVar3 + 0x14) + 0x800;
      *(SIZE_T *)(ptVar3 + 0x14) = SVar8;
      pvVar6 = GlobalReAlloc(*(HGLOBAL *)(ptVar3 + 8),SVar8,0x42);
      *(HGLOBAL *)(ptVar3 + 8) = pvVar6;
      if (pvVar6 == (HGLOBAL)0x0) {
        local_10 = (undefined1 *)0x8007000e;
        iVar14 = iVar14 + 1;
        goto LAB_01011b17;
      }
      *(int *)(ptVar3 + 0xc) = *(int *)(ptVar3 + 0x10) + (int)pvVar6;
    }
    puVar1 = *(undefined1 **)(ptVar3 + 0xc);
    *puVar1 = 0x18;
    puVar1[1] = 0;
    uVar9 = 0;
    if ((undefined4 *)piVar17[7] != (undefined4 *)0x0) {
      uVar9 = (undefined1)*(undefined4 *)piVar17[7];
    }
    puVar1[2] = uVar9;
    puVar1[3] = *(undefined1 *)((int)piVar17 + 10);
    *(short *)(puVar1 + 4) = (short)piVar17[2];
    *(short *)(puVar1 + 6) = (short)piVar17[3];
    *(undefined2 *)(puVar1 + 8) = *(undefined2 *)((int)piVar17 + 0xe);
    *(short *)(puVar1 + 10) = (short)piVar17[4];
    *(undefined2 *)(puVar1 + 0xc) = *(undefined2 *)((int)piVar17 + 0x12);
    *(short *)(puVar1 + 0xe) = (short)piVar17[5];
    puVar1[0x10] = *(undefined1 *)((int)piVar17 + 0x16);
    puVar1[0x11] = *(undefined1 *)((int)piVar17 + 0x17);
    *(short *)(puVar1 + 0x12) = (short)piVar17[6];
    iVar10 = 0;
    puVar18 = (undefined2 *)(puVar1 + 0x14);
    while( true ) {
      piVar2 = (int *)piVar17[7];
      if (piVar2 == (int *)0x0) {
        iVar16 = 0;
      }
      else {
        iVar16 = *piVar2;
      }
      if (iVar16 <= iVar10) break;
      iVar16 = piVar2[1] * iVar10;
      iVar10 = iVar10 + 1;
      *puVar18 = *(undefined2 *)(iVar16 + piVar2[2]);
      puVar18 = puVar18 + 1;
    }
    FUN_010113e0(puVar1);
    puVar15 = (undefined4 *)(*(int *)(ptVar3 + 0xc) + uVar12);
    *(undefined4 **)(ptVar3 + 0xc) = puVar15;
    *(uint *)(ptVar3 + 0x10) = *(int *)(ptVar3 + 0x10) + uVar12;
joined_r0x01011d28:
    if (param_1 != (tagDIR_ENTRY *)0x0) {
      for (uVar12 = (uint)param_1 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      for (uVar12 = (uint)param_1 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar15 = 0;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      *(int *)(ptVar3 + 0xc) = *(int *)(ptVar3 + 0xc) + (int)param_1;
      *(int *)(ptVar3 + 0x10) = *(int *)(ptVar3 + 0x10) + (int)param_1;
    }
  }
  else if (iVar10 == 2) {
    if (*(uint *)(ptVar3 + 0x14) < *(int *)(ptVar3 + 0x10) + 8U) {
      uVar11 = *(uint *)(ptVar3 + 0x14) - *(int *)(ptVar3 + 0x10);
      puVar15 = *(undefined4 **)(ptVar3 + 0xc);
      for (uVar12 = uVar11 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
        *puVar15 = 0;
        puVar15 = puVar15 + 1;
      }
      for (uVar11 = uVar11 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar15 = 0;
        puVar15 = (undefined4 *)((int)puVar15 + 1);
      }
      *(int *)(ptVar3 + 0x10) = *(int *)(ptVar3 + 0x14);
      SVar8 = *(int *)(ptVar3 + 0x14) + 0x800;
      *(SIZE_T *)(ptVar3 + 0x14) = SVar8;
      pvVar6 = GlobalReAlloc(*(HGLOBAL *)(ptVar3 + 8),SVar8,0x42);
      *(HGLOBAL *)(ptVar3 + 8) = pvVar6;
      if (pvVar6 == (HGLOBAL)0x0) {
        local_10 = (undefined1 *)0x8007000e;
        iVar14 = iVar14 + 1;
        goto LAB_01011b17;
      }
      *(int *)(ptVar3 + 0xc) = *(int *)(ptVar3 + 0x10) + (int)pvVar6;
    }
    puVar15 = *(undefined4 **)(ptVar3 + 0xc);
    *puVar15 = 0;
    puVar15[1] = 0;
    *(undefined1 *)puVar15 = 0x1f;
    *(int *)(ptVar3 + 0xc) = *(int *)(ptVar3 + 0xc) + 8;
    *(int *)(ptVar3 + 0x10) = *(int *)(ptVar3 + 0x10) + 8;
    iVar14 = iVar14 + 1;
    goto LAB_01011b17;
  }
  iVar14 = iVar14 + 1;
  goto LAB_01011b17;
}


