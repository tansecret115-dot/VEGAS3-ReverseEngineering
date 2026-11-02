/* Module: sfcdi.dll
   Function: FUN_5bf4aeb0
   Address: 5bf4aeb0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf4aeb0(int param_1,undefined4 *param_2,uint *param_3)

{
  byte bVar1;
  LPCVOID pMem;
  ushort *puVar2;
  ushort uVar3;
  int *piVar4;
  HGLOBAL pvVar5;
  LPVOID pvVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  ushort uVar11;
  uint uVar12;
  ushort *puVar13;
  int iVar14;
  ushort *puVar15;
  UINT uFlags;
  uint local_1c;
  uint local_18;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  uVar12 = *param_3;
  pMem = (LPCVOID)*param_2;
  local_10 = 0;
  if ((*(int **)(param_1 + 0x28) == (int *)0x0) || (**(int **)(param_1 + 0x28) == 0)) {
    *(undefined4 *)((int)pMem + 200) = 0;
    return 0;
  }
  *(uint *)((int)pMem + 200) = (uint)((uVar12 & 0x7ff) != 0) + (uVar12 >> 0xb);
  if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = **(uint **)(param_1 + 0x28);
  }
  local_18 = local_1c & 0xffff;
  local_8 = local_18 * 8 + 8;
  uVar12 = uVar12 + local_8;
  uVar11 = (ushort)local_1c;
  if (uVar11 != 0) {
    iVar14 = 0;
    do {
      piVar4 = *(int **)(param_1 + 0x28);
      if (piVar4 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar4;
      }
      if ((iVar14 < 0) || (iVar8 + -1 < iVar14)) {
        iVar8 = 0;
      }
      else {
        iVar8 = *(int *)(piVar4[2] + iVar14 * 4);
      }
      iVar9 = 0;
      if (*(int **)(iVar8 + 4) != (int *)0x0) {
        iVar9 = **(int **)(iVar8 + 4);
      }
      uVar12 = uVar12 + 8 + iVar9 * 8;
      uVar10 = 0;
      while( true ) {
        piVar4 = *(int **)(iVar8 + 8);
        if (piVar4 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar4;
        }
        if (iVar9 <= (int)(uVar10 & 0xffff)) break;
        if (piVar4 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar4;
        }
        if ((iVar14 < 0) || (iVar9 + -1 < iVar14)) {
          piVar4 = (int *)0x0;
        }
        else {
          piVar4 = *(int **)(piVar4[2] + iVar14 * 4);
        }
        FUN_5bf52810(*piVar4,&local_c);
        uVar12 = uVar12 + local_c;
        uVar10 = uVar10 + 1;
      }
      iVar14 = iVar14 + 1;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  uVar10 = ((uint)((uVar12 & 0x7ff) != 0) + (uVar12 >> 0xb)) * 0x800;
  pvVar5 = GlobalHandle(pMem);
  GlobalUnlock(pvVar5);
  uFlags = 0x42;
  uVar12 = uVar10;
  pvVar5 = GlobalHandle(pMem);
  pvVar5 = GlobalReAlloc(pvVar5,uVar12,uFlags);
  pvVar6 = GlobalLock(pvVar5);
  if (pvVar6 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  uVar3 = 0;
  puVar15 = (ushort *)(*(int *)((int)pvVar6 + 200) * 0x800 + (int)pvVar6);
  *puVar15 = uVar11;
  iVar14 = local_8;
  puVar2 = puVar15;
  if (uVar11 != 0) {
    do {
      puVar13 = puVar2 + 4;
      piVar4 = *(int **)(param_1 + 0x28);
      if (piVar4 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar4;
      }
      if (iVar8 + -1 < (int)(uint)uVar3) {
        puVar7 = (ushort *)0x0;
      }
      else {
        puVar7 = *(ushort **)(piVar4[2] + (uint)uVar3 * 4);
      }
      *puVar13 = *puVar7;
      *(char *)(puVar2 + 5) = (char)puVar7[1];
      bVar1 = *(byte *)((int)puVar7 + 3);
      *(int *)(puVar2 + 6) = iVar14;
      *(byte *)((int)puVar2 + 0xb) = (bVar1 ^ *(byte *)((int)puVar2 + 0xb)) & 0x7f ^ bVar1;
      local_10 = FUN_5bf4ad90((int)puVar7,(byte *)((int)puVar15 + iVar14),&local_4);
      if (local_10 < 0) break;
      iVar14 = iVar14 + local_4;
      FUN_5bf4a470((undefined1 *)puVar13);
      uVar3 = uVar3 + 1;
      puVar2 = puVar13;
    } while (uVar3 < uVar11);
  }
  *(int *)(puVar15 + 2) = iVar14 + -1;
  FUN_5bf4a490((undefined1 *)puVar15);
  *param_2 = pvVar6;
  *param_3 = uVar10;
  return local_10;
}


