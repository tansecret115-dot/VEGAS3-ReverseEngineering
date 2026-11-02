/* Module: sfcdi.dll
   Function: FUN_5bf3fa30
   Address: 5bf3fa30
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf3fa30(uint param_1)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  SIZE_T SVar7;
  undefined1 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  undefined2 *puVar17;
  undefined4 local_10;
  
  local_10 = 0;
  iVar3 = FUN_5bf3f300(param_1);
  if ((iVar3 == 0) || (iVar4 = FUN_5bf3f2c0(param_1), iVar4 == 0)) {
    return 0x80070057;
  }
  iVar4 = FUN_5bf3f280(param_1);
  *(undefined4 *)(iVar3 + 0x14) = 0x800;
  pvVar5 = GlobalAlloc(0x42,0x800);
  pvVar6 = GlobalLock(pvVar5);
  *(LPVOID *)(iVar3 + 8) = pvVar6;
  if (pvVar6 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  *(LPVOID *)(iVar3 + 0xc) = pvVar6;
  *(undefined4 *)(iVar3 + 0x10) = 0;
  iVar13 = 0;
LAB_5bf3fa97:
  while( true ) {
    piVar16 = *(int **)(iVar3 + 4);
    if (piVar16 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *piVar16;
    }
    if (iVar9 <= iVar13) {
      *(undefined4 *)(iVar4 + 0x34) = *(undefined4 *)(iVar3 + 0x14);
      return local_10;
    }
    if (piVar16 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *piVar16;
    }
    if ((iVar13 < 0) || (iVar9 + -1 < iVar13)) {
      piVar16 = (int *)0x0;
    }
    else {
      piVar16 = *(int **)(piVar16[2] + iVar13 * 4);
    }
    iVar9 = *piVar16;
    if (iVar9 != 0) break;
    iVar9 = 0;
    if ((int *)piVar16[5] != (int *)0x0) {
      iVar9 = *(int *)piVar16[5];
    }
    uVar11 = iVar9 * 2 + 0xe;
    param_1 = 0;
    if ((uVar11 & 7) != 0) {
      param_1 = 8 - (uVar11 & 7);
    }
    if (param_1 + *(int *)(iVar3 + 0x10) + uVar11 <= *(uint *)(iVar3 + 0x14)) {
LAB_5bf3fd37:
      puVar1 = *(undefined1 **)(iVar3 + 0xc);
      *puVar1 = 0x10;
      uVar8 = 0;
      if ((undefined4 *)piVar16[5] != (undefined4 *)0x0) {
        uVar8 = (undefined1)*(undefined4 *)piVar16[5];
      }
      puVar1[1] = uVar8;
      *(short *)(puVar1 + 2) = (short)piVar16[2];
      *(undefined2 *)(puVar1 + 4) = *(undefined2 *)((int)piVar16 + 10);
      *(short *)(puVar1 + 6) = (short)piVar16[3];
      *(undefined2 *)(puVar1 + 8) = *(undefined2 *)((int)piVar16 + 0xe);
      *(short *)(puVar1 + 10) = (short)piVar16[4];
      puVar1[0xc] = *(undefined1 *)((int)piVar16 + 0x12);
      puVar1[0xd] = *(undefined1 *)((int)piVar16 + 0x13);
      iVar9 = 0;
      puVar17 = (undefined2 *)(puVar1 + 0xe);
      while( true ) {
        piVar2 = (int *)piVar16[5];
        if (piVar2 == (int *)0x0) {
          iVar15 = 0;
        }
        else {
          iVar15 = *piVar2;
        }
        if (iVar15 <= iVar9) break;
        iVar15 = piVar2[1] * iVar9;
        iVar9 = iVar9 + 1;
        *puVar17 = *(undefined2 *)(iVar15 + piVar2[2]);
        puVar17 = puVar17 + 1;
      }
      FUN_5bf3f390((int)puVar1);
      puVar14 = (undefined4 *)(*(int *)(iVar3 + 0xc) + uVar11);
      *(undefined4 **)(iVar3 + 0xc) = puVar14;
      *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + uVar11;
      goto joined_r0x5bf3fca8;
    }
    uVar12 = *(uint *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10);
    puVar14 = *(undefined4 **)(iVar3 + 0xc);
    for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined1 *)puVar14 = 0;
      puVar14 = (undefined4 *)((int)puVar14 + 1);
    }
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x14);
    SVar7 = *(int *)(iVar3 + 0x14) + 0x800;
    *(SIZE_T *)(iVar3 + 0x14) = SVar7;
    pvVar5 = GlobalReAlloc(*(HGLOBAL *)(iVar3 + 8),SVar7,0x42);
    *(HGLOBAL *)(iVar3 + 8) = pvVar5;
    if (pvVar5 != (HGLOBAL)0x0) {
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0x10) + (int)pvVar5;
      goto LAB_5bf3fd37;
    }
    local_10 = 0x8007000e;
    iVar13 = iVar13 + 1;
  }
  if (iVar9 == 1) {
    iVar9 = 0;
    if ((int *)piVar16[7] != (int *)0x0) {
      iVar9 = *(int *)piVar16[7];
    }
    uVar11 = iVar9 * 2 + 0x14;
    param_1 = 0;
    if ((uVar11 & 7) != 0) {
      param_1 = 8 - (uVar11 & 7);
    }
    if (*(uint *)(iVar3 + 0x14) < param_1 + *(int *)(iVar3 + 0x10) + uVar11) {
      uVar12 = *(uint *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10);
      puVar14 = *(undefined4 **)(iVar3 + 0xc);
      for (uVar10 = uVar12 >> 2; uVar10 != 0; uVar10 = uVar10 - 1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      for (uVar12 = uVar12 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
        *(undefined1 *)puVar14 = 0;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x14);
      SVar7 = *(int *)(iVar3 + 0x14) + 0x800;
      *(SIZE_T *)(iVar3 + 0x14) = SVar7;
      pvVar5 = GlobalReAlloc(*(HGLOBAL *)(iVar3 + 8),SVar7,0x42);
      *(HGLOBAL *)(iVar3 + 8) = pvVar5;
      if (pvVar5 == (HGLOBAL)0x0) {
        local_10 = 0x8007000e;
        iVar13 = iVar13 + 1;
        goto LAB_5bf3fa97;
      }
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0x10) + (int)pvVar5;
    }
    puVar1 = *(undefined1 **)(iVar3 + 0xc);
    *puVar1 = 0x18;
    puVar1[1] = 0;
    uVar8 = 0;
    if ((undefined4 *)piVar16[7] != (undefined4 *)0x0) {
      uVar8 = (undefined1)*(undefined4 *)piVar16[7];
    }
    puVar1[2] = uVar8;
    puVar1[3] = *(undefined1 *)((int)piVar16 + 10);
    *(short *)(puVar1 + 4) = (short)piVar16[2];
    *(short *)(puVar1 + 6) = (short)piVar16[3];
    *(undefined2 *)(puVar1 + 8) = *(undefined2 *)((int)piVar16 + 0xe);
    *(short *)(puVar1 + 10) = (short)piVar16[4];
    *(undefined2 *)(puVar1 + 0xc) = *(undefined2 *)((int)piVar16 + 0x12);
    *(short *)(puVar1 + 0xe) = (short)piVar16[5];
    puVar1[0x10] = *(undefined1 *)((int)piVar16 + 0x16);
    puVar1[0x11] = *(undefined1 *)((int)piVar16 + 0x17);
    *(short *)(puVar1 + 0x12) = (short)piVar16[6];
    iVar9 = 0;
    puVar17 = (undefined2 *)(puVar1 + 0x14);
    while( true ) {
      piVar2 = (int *)piVar16[7];
      if (piVar2 == (int *)0x0) {
        iVar15 = 0;
      }
      else {
        iVar15 = *piVar2;
      }
      if (iVar15 <= iVar9) break;
      iVar15 = piVar2[1] * iVar9;
      iVar9 = iVar9 + 1;
      *puVar17 = *(undefined2 *)(iVar15 + piVar2[2]);
      puVar17 = puVar17 + 1;
    }
    FUN_5bf3f360((int)puVar1);
    puVar14 = (undefined4 *)(*(int *)(iVar3 + 0xc) + uVar11);
    *(undefined4 **)(iVar3 + 0xc) = puVar14;
    *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + uVar11;
joined_r0x5bf3fca8:
    if (param_1 != 0) {
      for (uVar11 = param_1 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      for (uVar11 = param_1 & 3; uVar11 != 0; uVar11 = uVar11 - 1) {
        *(undefined1 *)puVar14 = 0;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      *(uint *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + param_1;
      *(uint *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + param_1;
    }
  }
  else if (iVar9 == 2) {
    if (*(uint *)(iVar3 + 0x14) < *(int *)(iVar3 + 0x10) + 8U) {
      uVar10 = *(uint *)(iVar3 + 0x14) - *(int *)(iVar3 + 0x10);
      puVar14 = *(undefined4 **)(iVar3 + 0xc);
      for (uVar11 = uVar10 >> 2; uVar11 != 0; uVar11 = uVar11 - 1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      for (uVar10 = uVar10 & 3; uVar10 != 0; uVar10 = uVar10 - 1) {
        *(undefined1 *)puVar14 = 0;
        puVar14 = (undefined4 *)((int)puVar14 + 1);
      }
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x14);
      SVar7 = *(int *)(iVar3 + 0x14) + 0x800;
      *(SIZE_T *)(iVar3 + 0x14) = SVar7;
      pvVar5 = GlobalReAlloc(*(HGLOBAL *)(iVar3 + 8),SVar7,0x42);
      *(HGLOBAL *)(iVar3 + 8) = pvVar5;
      if (pvVar5 == (HGLOBAL)0x0) {
        local_10 = 0x8007000e;
        iVar13 = iVar13 + 1;
        goto LAB_5bf3fa97;
      }
      *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0x10) + (int)pvVar5;
    }
    puVar14 = *(undefined4 **)(iVar3 + 0xc);
    *puVar14 = 0;
    puVar14[1] = 0;
    *(undefined1 *)puVar14 = 0x1f;
    *(int *)(iVar3 + 0xc) = *(int *)(iVar3 + 0xc) + 8;
    *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 8;
    iVar13 = iVar13 + 1;
    goto LAB_5bf3fa97;
  }
  iVar13 = iVar13 + 1;
  goto LAB_5bf3fa97;
}


