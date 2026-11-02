/* Module: sfcdi.dll
   Function: FUN_5bf4e140
   Address: 5bf4e140
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4e140(int param_1,undefined4 *param_2,uint *param_3)

{
  byte bVar1;
  LPCVOID pMem;
  ushort *puVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  ushort uVar6;
  int *piVar7;
  HGLOBAL pvVar8;
  LPVOID pvVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  ushort *puVar13;
  int iVar14;
  uint uVar15;
  ushort *puVar16;
  uint uVar17;
  ushort *puVar18;
  ushort uVar19;
  UINT uFlags;
  uint local_1c;
  uint local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  pMem = (LPCVOID)*param_2;
  iVar14 = 0;
  uVar17 = *param_3;
  local_10 = 0;
  if ((*(int **)(param_1 + 0x18) == (int *)0x0) || (**(int **)(param_1 + 0x18) == 0)) {
    *(undefined4 *)((int)pMem + 0xd0) = 0;
    return 0;
  }
  *(uint *)((int)pMem + 0xd0) = (uint)((uVar17 & 0x7ff) != 0) + (uVar17 >> 0xb);
  if (*(uint **)(param_1 + 0x18) == (uint *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = **(uint **)(param_1 + 0x18);
  }
  local_18 = local_1c & 0xffff;
  local_8 = local_18 * 8 + 8;
  uVar17 = uVar17 + local_8;
  uVar19 = (ushort)local_1c;
  if (uVar19 != 0) {
    do {
      piVar7 = *(int **)(param_1 + 0x18);
      if (piVar7 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *piVar7;
      }
      if ((iVar14 < 0) || (iVar11 + -1 < iVar14)) {
        iVar11 = 0;
      }
      else {
        iVar11 = *(int *)(piVar7[2] + iVar14 * 4);
      }
      iVar12 = 0;
      if (*(int **)(iVar11 + 4) != (int *)0x0) {
        iVar12 = **(int **)(iVar11 + 4);
      }
      uVar17 = uVar17 + 8 + iVar12 * 8;
      uVar15 = 0;
      while( true ) {
        piVar7 = *(int **)(iVar11 + 8);
        if (piVar7 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar7;
        }
        if (iVar12 <= (int)(uVar15 & 0xffff)) break;
        if (piVar7 == (int *)0x0) {
          iVar12 = 0;
        }
        else {
          iVar12 = *piVar7;
        }
        if ((iVar14 < 0) || (iVar12 + -1 < iVar14)) {
          piVar7 = (int *)0x0;
        }
        else {
          piVar7 = *(int **)(piVar7[2] + iVar14 * 4);
        }
        FUN_5bf52810(*piVar7,&local_c);
        uVar17 = uVar17 + local_c;
        uVar15 = uVar15 + 1;
      }
      iVar14 = iVar14 + 1;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  uVar15 = ((uint)((uVar17 & 0x7ff) != 0) + (uVar17 >> 0xb)) * 0x800;
  pvVar8 = GlobalHandle(pMem);
  GlobalUnlock(pvVar8);
  uFlags = 0x42;
  uVar17 = uVar15;
  pvVar8 = GlobalHandle(pMem);
  pvVar8 = GlobalReAlloc(pvVar8,uVar17,uFlags);
  pvVar9 = GlobalLock(pvVar8);
  if (pvVar9 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  uVar6 = 0;
  puVar16 = (ushort *)(*(int *)((int)pvVar9 + 0xd0) * 0x800 + (int)pvVar9);
  *puVar16 = uVar19;
  iVar14 = local_8;
  puVar2 = puVar16;
  if (uVar19 != 0) {
    do {
      puVar18 = puVar2 + 4;
      piVar7 = *(int **)(param_1 + 0x18);
      if (piVar7 == (int *)0x0) {
        iVar11 = 0;
      }
      else {
        iVar11 = *piVar7;
      }
      if (iVar11 + -1 < (int)(uint)uVar6) {
        puVar13 = (ushort *)0x0;
      }
      else {
        puVar13 = *(ushort **)(piVar7[2] + (uint)uVar6 * 4);
      }
      *puVar18 = *puVar13;
      *(char *)(puVar2 + 5) = (char)puVar13[1];
      bVar1 = *(byte *)((int)puVar2 + 0xb);
      bVar3 = *(byte *)((int)puVar13 + 3) >> 7;
      *(byte *)((int)puVar2 + 0xb) = bVar1 & 0xfe | bVar3;
      bVar4 = *(byte *)((int)puVar13 + 3) >> 5 & 2;
      *(byte *)((int)puVar2 + 0xb) = bVar4 | bVar1 & 0xfc | bVar3;
      bVar10 = *(byte *)((int)puVar13 + 3) >> 3 & 4;
      *(byte *)((int)puVar2 + 0xb) = bVar10 | bVar4 | bVar1 & 0xf8 | bVar3;
      bVar5 = *(byte *)((int)puVar13 + 3) >> 1 & 8;
      *(byte *)((int)puVar2 + 0xb) = bVar5 | bVar10 | bVar4 | bVar1 & 0xf0 | bVar3;
      *(byte *)((int)puVar2 + 0xb) =
           (*(byte *)((int)puVar13 + 3) & 8) << 1 | bVar5 | bVar10 | bVar4 | bVar1 & 0xe0 | bVar3;
      *(int *)(puVar2 + 6) = iVar14;
      local_10 = FUN_5bf4e020((int)puVar13,(byte *)(iVar14 + (int)puVar16),&local_4);
      if (local_10 < 0) break;
      iVar14 = iVar14 + local_4;
      FUN_5bf4cc50((undefined1 *)puVar18);
      uVar6 = uVar6 + 1;
      puVar2 = puVar18;
    } while (uVar6 < uVar19);
  }
  *(int *)(puVar16 + 2) = iVar14 + -1;
  FUN_5bf4cc30((undefined1 *)puVar16);
  *param_2 = pvVar9;
  *param_3 = uVar15;
  return local_10;
}


