/* Module: vegas30k.dll
   Function: FUN_0108ad60
   Address: 0108ad60
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0108ad60(int param_1,undefined4 *param_2,uint *param_3)

{
  tagVTSM_PGCI_UTI tVar1;
  LPCVOID pMem;
  int *piVar2;
  tagVTSM_PGCI_UTI *ptVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;
  undefined4 *puVar8;
  HGLOBAL pvVar9;
  LPVOID pvVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  undefined2 *puVar14;
  int iVar15;
  uint uVar16;
  tagVTSM_PGCI_UTI *ptVar17;
  uint uVar18;
  tagVTSM_LU_SRP *ptVar19;
  ushort uVar20;
  UINT uFlags;
  uint local_1c;
  uint local_18;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  pMem = (LPCVOID)*param_2;
  iVar15 = 0;
  uVar18 = *param_3;
  local_10 = 0;
  if ((*(int **)(param_1 + 0x18) == (int *)0x0) || (**(int **)(param_1 + 0x18) == 0)) {
    *(undefined4 *)((int)pMem + 0xd0) = 0;
    return 0;
  }
  *(uint *)((int)pMem + 0xd0) = (uint)((uVar18 & 0x7ff) != 0) + (uVar18 >> 0xb);
  if (*(uint **)(param_1 + 0x18) == (uint *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = **(uint **)(param_1 + 0x18);
  }
  local_18 = local_1c & 0xffff;
  local_8 = local_18 * 8 + 8;
  uVar18 = uVar18 + local_8;
  uVar20 = (ushort)local_1c;
  if (uVar20 != 0) {
    do {
      piVar2 = *(int **)(param_1 + 0x18);
      if (piVar2 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar2;
      }
      if ((iVar15 < 0) || (iVar12 + -1 < iVar15)) {
        iVar12 = 0;
      }
      else {
        iVar12 = *(int *)(piVar2[2] + iVar15 * 4);
      }
      iVar13 = 0;
      if (*(int **)(iVar12 + 4) != (int *)0x0) {
        iVar13 = **(int **)(iVar12 + 4);
      }
      uVar18 = uVar18 + 8 + iVar13 * 8;
      uVar16 = 0;
      while( true ) {
        piVar2 = *(int **)(iVar12 + 8);
        if (piVar2 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *piVar2;
        }
        if (iVar13 <= (int)(uVar16 & 0xffff)) break;
        if (piVar2 == (int *)0x0) {
          iVar13 = 0;
        }
        else {
          iVar13 = *piVar2;
        }
        if ((iVar15 < 0) || (iVar13 + -1 < iVar15)) {
          puVar8 = (undefined4 *)0x0;
        }
        else {
          puVar8 = *(undefined4 **)(piVar2[2] + iVar15 * 4);
        }
        SfCdiGetProgramChainSize((tagSFIFO_PGCI *)*puVar8,&local_c);
        uVar18 = uVar18 + local_c;
        uVar16 = uVar16 + 1;
      }
      iVar15 = iVar15 + 1;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  uVar16 = ((uint)((uVar18 & 0x7ff) != 0) + (uVar18 >> 0xb)) * 0x800;
  pvVar9 = GlobalHandle(pMem);
  GlobalUnlock(pvVar9);
  uFlags = 0x42;
  uVar18 = uVar16;
  pvVar9 = GlobalHandle(pMem);
  pvVar9 = GlobalReAlloc(pvVar9,uVar18,uFlags);
  pvVar10 = GlobalLock(pvVar9);
  if (pvVar10 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  uVar7 = 0;
  ptVar17 = (tagVTSM_PGCI_UTI *)(*(int *)((int)pvVar10 + 0xd0) * 0x800 + (int)pvVar10);
  *(ushort *)ptVar17 = uVar20;
  iVar15 = local_8;
  ptVar3 = ptVar17;
  if (uVar20 != 0) {
    do {
      ptVar19 = (tagVTSM_LU_SRP *)(ptVar3 + 8);
      piVar2 = *(int **)(param_1 + 0x18);
      if (piVar2 == (int *)0x0) {
        iVar12 = 0;
      }
      else {
        iVar12 = *piVar2;
      }
      if (iVar12 + -1 < (int)(uint)uVar7) {
        puVar14 = (undefined2 *)0x0;
      }
      else {
        puVar14 = *(undefined2 **)(piVar2[2] + (uint)uVar7 * 4);
      }
      *(undefined2 *)ptVar19 = *puVar14;
      ptVar3[10] = *(tagVTSM_PGCI_UTI *)(puVar14 + 1);
      tVar1 = ptVar3[0xb];
      bVar4 = *(byte *)((int)puVar14 + 3) >> 7;
      ptVar3[0xb] = (tagVTSM_PGCI_UTI)((byte)tVar1 & 0xfe | bVar4);
      bVar5 = *(byte *)((int)puVar14 + 3) >> 5 & 2;
      ptVar3[0xb] = (tagVTSM_PGCI_UTI)(bVar5 | (byte)tVar1 & 0xfc | bVar4);
      bVar11 = *(byte *)((int)puVar14 + 3) >> 3 & 4;
      ptVar3[0xb] = (tagVTSM_PGCI_UTI)(bVar11 | bVar5 | (byte)tVar1 & 0xf8 | bVar4);
      bVar6 = *(byte *)((int)puVar14 + 3) >> 1 & 8;
      ptVar3[0xb] = (tagVTSM_PGCI_UTI)(bVar6 | bVar11 | bVar5 | (byte)tVar1 & 0xf0 | bVar4);
      ptVar3[0xb] = (tagVTSM_PGCI_UTI)
                    ((*(byte *)((int)puVar14 + 3) & 8) << 1 |
                    bVar6 | bVar11 | bVar5 | (byte)tVar1 & 0xe0 | bVar4);
      *(int *)(ptVar3 + 0xc) = iVar15;
      local_10 = FUN_0108ac40(puVar14,ptVar17 + iVar15,&local_4);
      if (local_10 < 0) break;
      iVar15 = iVar15 + local_4;
      SfCdiSwap_VTSM_LU_SRP(ptVar19);
      uVar7 = uVar7 + 1;
      ptVar3 = (tagVTSM_PGCI_UTI *)ptVar19;
    } while (uVar7 < uVar20);
  }
  *(int *)(ptVar17 + 4) = iVar15 + -1;
  SfCdiSwap_VTSM_PGCI_UTI(ptVar17);
  *param_2 = pvVar10;
  *param_3 = uVar16;
  return local_10;
}


