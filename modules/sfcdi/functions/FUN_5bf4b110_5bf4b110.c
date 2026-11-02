/* Module: sfcdi.dll
   Function: FUN_5bf4b110
   Address: 5bf4b110
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5bf4b110(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  undefined1 uVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined2 *puVar14;
  uint uVar15;
  undefined4 *puVar16;
  uint uVar17;
  UINT uFlags;
  uint local_14;
  
  uVar17 = *param_3;
  pMem = (LPCVOID)*param_2;
  if (*(uint **)(param_1 + 8) == (uint *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = **(uint **)(param_1 + 8);
  }
  *(uint *)((int)pMem + 0xd0) = (uint)((uVar17 & 0x7ff) != 0) + (uVar17 >> 0xb);
  uVar13 = uVar15 * 0x30c + 8 & 0xffff;
  uVar17 = uVar13 + uVar17;
  uVar8 = ((uint)((uVar17 & 0x7ff) != 0) + (uVar17 >> 0xb)) * 0x800;
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  uFlags = 0x42;
  uVar17 = uVar8;
  pvVar2 = GlobalHandle(pMem);
  pvVar2 = GlobalReAlloc(pvVar2,uVar17,uFlags);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  puVar14 = (undefined2 *)(*(int *)((int)pvVar3 + 0xd0) * 0x800 + (int)pvVar3);
  *puVar14 = (short)uVar15;
  *(uint *)(puVar14 + 2) = uVar13 - 1;
  FUN_5bf4a540((undefined1 *)puVar14);
  piVar9 = (int *)(puVar14 + 4);
  uVar15 = uVar15 & 0xffff;
  iVar4 = uVar15 * 4 + 8;
  local_14 = 0;
  if (uVar15 != 0) {
    puVar16 = (undefined4 *)(puVar14 + uVar15 * 2 + 10);
    do {
      *piVar9 = iVar4;
      iVar4 = iVar4 + 0x308;
      FUN_5bf4a560((undefined1 *)piVar9);
      piVar5 = *(int **)(param_1 + 8);
      if (piVar5 == (int *)0x0) {
        iVar10 = 0;
      }
      else {
        iVar10 = *piVar5;
      }
      if (((int)local_14 < 0) || (iVar10 + -1 < (int)local_14)) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = *(int **)(piVar5[2] + local_14 * 4);
      }
      iVar10 = *piVar5;
      puVar16[-3] = 0x307;
      puVar16[-2] = (uint)*(byte *)(iVar10 + 2);
      FUN_5bf4a570((undefined1 *)(puVar16 + -3));
      *(undefined2 *)(puVar16 + -1) = *(undefined2 *)(iVar10 + 0x24);
      uVar1 = 0;
      if (*(undefined4 **)(iVar10 + 0x28) != (undefined4 *)0x0) {
        uVar1 = (undefined1)**(undefined4 **)(iVar10 + 0x28);
      }
      *(undefined1 *)((int)puVar16 + -1) = uVar1;
      piVar5 = *(int **)(iVar10 + 0x28);
      if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
        if (piVar5 == (int *)0x0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *piVar5;
        }
        if (iVar11 + -1 < 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = *(undefined4 **)piVar5[2];
        }
        *puVar16 = *puVar6;
        puVar16[1] = puVar6[1];
      }
      uVar1 = 0;
      if (*(undefined4 **)(iVar10 + 0x2c) != (undefined4 *)0x0) {
        uVar1 = (undefined1)**(undefined4 **)(iVar10 + 0x2c);
      }
      *(undefined1 *)((int)puVar16 + 0x51) = uVar1;
      piVar5 = *(int **)(iVar10 + 0x2c);
      if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
        if (piVar5 == (int *)0x0) {
          iVar11 = 0;
        }
        else {
          iVar11 = *piVar5;
        }
        if (iVar11 + -1 < 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = *(undefined4 **)piVar5[2];
        }
        *(undefined4 *)((int)puVar16 + 0x52) = *puVar6;
        *(undefined2 *)((int)puVar16 + 0x56) = *(undefined2 *)(puVar6 + 1);
      }
      *(undefined2 *)(puVar16 + 0x3f) = *(undefined2 *)(iVar10 + 0x54);
      uVar1 = 0;
      if (*(undefined4 **)(iVar10 + 0x58) != (undefined4 *)0x0) {
        uVar1 = (undefined1)**(undefined4 **)(iVar10 + 0x58);
      }
      *(undefined1 *)((int)puVar16 + 0xff) = uVar1;
      iVar11 = 0;
      puVar6 = puVar16 + 0x40;
      while( true ) {
        piVar5 = *(int **)(iVar10 + 0x58);
        if (piVar5 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar5;
        }
        if (iVar12 <= iVar11) break;
        if (piVar5 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar5;
        }
        if ((iVar11 < 0) || (iVar12 + -1 < iVar11)) {
          iVar11 = iVar11 + 1;
          *puVar6 = uRam00000000;
          puVar6[1] = uRam00000004;
          puVar6 = puVar6 + 2;
        }
        else {
          iVar11 = iVar11 + 1;
          puVar7 = *(undefined4 **)(piVar5[2] + -4 + iVar11 * 4);
          *puVar6 = *puVar7;
          puVar6[1] = puVar7[1];
          puVar6 = puVar6 + 2;
        }
      }
      uVar1 = 0;
      if (*(undefined4 **)(iVar10 + 0x5c) != (undefined4 *)0x0) {
        uVar1 = (undefined1)**(undefined4 **)(iVar10 + 0x5c);
      }
      *(undefined1 *)((int)puVar16 + 0x151) = uVar1;
      iVar11 = 0;
      puVar6 = (undefined4 *)((int)puVar16 + 0x152);
      while( true ) {
        piVar5 = *(int **)(iVar10 + 0x5c);
        if (piVar5 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar5;
        }
        if (iVar12 <= iVar11) break;
        if (piVar5 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar5;
        }
        if ((iVar11 < 0) || (iVar12 + -1 < iVar11)) {
          puVar7 = (undefined4 *)0x0;
        }
        else {
          puVar7 = *(undefined4 **)(piVar5[2] + iVar11 * 4);
        }
        iVar11 = iVar11 + 1;
        *puVar6 = *puVar7;
        *(undefined2 *)(puVar6 + 1) = *(undefined2 *)(puVar7 + 1);
        puVar6 = (undefined4 *)((int)puVar6 + 6);
      }
      memmove(puVar16 + 0x85,(void *)(iVar10 + 0x60),0xc0);
      local_14 = local_14 + 1;
      piVar9 = piVar9 + 1;
      puVar16 = puVar16 + 0xc2;
    } while (local_14 < uVar15);
  }
  *param_2 = pvVar3;
  *param_3 = uVar8;
  return 0;
}


