/* Module: sfcdi.dll
   Function: FUN_5bf4e3e0
   Address: 5bf4e3e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4e3e0(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  uint *puVar1;
  LPVOID pvVar2;
  undefined2 uVar3;
  int *piVar4;
  HGLOBAL pvVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  uint *puVar15;
  UINT uFlags;
  uint local_18;
  uint *local_14;
  uint local_10;
  int local_c;
  LPVOID local_8;
  int local_4;
  
  pMem = (LPCVOID)*param_2;
  uVar12 = *param_3;
  iVar14 = 0;
  local_c = 0;
  *(uint *)((int)pMem + 0xcc) = (uint)((uVar12 & 0x7ff) != 0) + (uVar12 >> 0xb);
  if (*(int **)(param_1 + 0x48) == (int *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = **(int **)(param_1 + 0x48);
  }
  uVar12 = uVar12 + 8 + iVar8 * 8;
  while( true ) {
    piVar4 = *(int **)(param_1 + 0x4c);
    if (piVar4 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar4;
    }
    if (iVar8 <= iVar14) break;
    if (piVar4 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar4;
    }
    if ((iVar14 < 0) || (iVar8 + -1 < iVar14)) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = *(int **)(piVar4[2] + iVar14 * 4);
    }
    FUN_5bf52810(*piVar4,(int *)&local_18);
    uVar12 = uVar12 + local_18;
    iVar14 = iVar14 + 1;
  }
  uVar11 = ((uint)((uVar12 & 0x7ff) != 0) + (uVar12 >> 0xb)) * 0x800;
  pvVar5 = GlobalHandle(pMem);
  GlobalUnlock(pvVar5);
  uFlags = 0x42;
  uVar12 = uVar11;
  pvVar5 = GlobalHandle(pMem);
  pvVar5 = GlobalReAlloc(pvVar5,uVar12,uFlags);
  local_8 = GlobalLock(pvVar5);
  if (local_8 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  local_14 = (uint *)(*(int *)((int)local_8 + 0xcc) * 0x800 + (int)local_8);
  uVar3 = 0;
  if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
    uVar3 = (undefined2)**(undefined4 **)(param_1 + 0x48);
  }
  *(undefined2 *)local_14 = uVar3;
  iVar14 = 0;
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    iVar14 = **(int **)(param_1 + 0x48);
  }
  local_10 = iVar14 * 8 + 8;
  iVar14 = 0;
  puVar1 = local_14;
  while( true ) {
    puVar15 = puVar1 + 2;
    piVar4 = *(int **)(param_1 + 0x48);
    if (piVar4 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar4;
    }
    if (iVar8 <= iVar14) break;
    if (piVar4 == (int *)0x0) {
      iVar8 = 0;
    }
    else {
      iVar8 = *piVar4;
    }
    if ((iVar14 < 0) || (iVar8 + -1 < iVar14)) {
      puVar13 = (ushort *)0x0;
    }
    else {
      puVar13 = *(ushort **)(piVar4[2] + iVar14 * 4);
    }
    uVar12 = *puVar15;
    uVar9 = (uint)(byte)*puVar13 << 0x10;
    *puVar15 = uVar9 | uVar12 & 0xff00ffff;
    uVar6 = (uint)(*puVar13 >> 8) << 0x18;
    *puVar15 = uVar6 | uVar9 | uVar12 & 0xffff;
    uVar10 = ((byte)puVar13[1] & 3) << 0xc;
    *puVar15 = uVar10 | uVar6 | uVar9 | uVar12 & 0xcfff;
    uVar7 = (*(byte *)((int)puVar13 + 3) & 3) << 0xe;
    *puVar15 = uVar7 | uVar10 | uVar6 | uVar9 | uVar12 & 0xfff;
    uVar7 = uVar7 | uVar10 | uVar6 | uVar9 | uVar12 & 0xf80;
    uVar12 = (byte)puVar13[2] & 0x7f | uVar7;
    *puVar15 = uVar12;
    *puVar15 = (*(uint *)(puVar13 + 4) & 1) << 7 |
               CONCAT31((int3)(uVar7 >> 8),(char)uVar12) & 0xffffff7f;
    if (iVar14 == *(int *)(puVar13 + 6)) {
      local_4 = local_10 + (int)local_14;
      puVar1[3] = local_10;
      local_c = FUN_5bf52810(*(int *)(puVar13 + 8),(int *)&local_18);
      if ((local_c < 0) ||
         (local_c = FUN_5bf528d0(*(uint *)(puVar13 + 8),&local_4,&local_18), local_c < 0)) break;
      local_10 = local_10 + local_18;
    }
    else {
      puVar1[3] = local_14[*(int *)(puVar13 + 6) * 2 + 3];
    }
    FUN_5bf4cc10((int)puVar15);
    iVar14 = iVar14 + 1;
    puVar1 = puVar15;
  }
  pvVar2 = local_8;
  local_14[1] = local_10 - 1;
  FUN_5bf4cbf0((undefined1 *)local_14);
  *param_2 = pvVar2;
  *param_3 = uVar11;
  return local_c;
}


