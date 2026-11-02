/* Module: vegas30k.dll
   Function: FUN_01087ad0
   Address: 01087ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_01087ad0(int param_1,undefined4 *param_2,uint *param_3)

{
  byte bVar1;
  LPCVOID pMem;
  int *piVar2;
  tagVMGM_LU_SRP *ptVar3;
  ushort uVar4;
  undefined4 *puVar5;
  HGLOBAL pvVar6;
  LPVOID pvVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  ushort uVar12;
  uint uVar13;
  tagVMGM_LU_SRP *ptVar14;
  int iVar15;
  tagVMGM_PGCI_UTI *ptVar16;
  UINT uFlags;
  uint local_1c;
  uint local_18;
  int local_10;
  uint local_c;
  int local_8;
  int local_4;
  
  uVar13 = *param_3;
  pMem = (LPCVOID)*param_2;
  local_10 = 0;
  if ((*(int **)(param_1 + 0x28) == (int *)0x0) || (**(int **)(param_1 + 0x28) == 0)) {
    *(undefined4 *)((int)pMem + 200) = 0;
    return 0;
  }
  *(uint *)((int)pMem + 200) = (uint)((uVar13 & 0x7ff) != 0) + (uVar13 >> 0xb);
  if (*(uint **)(param_1 + 0x28) == (uint *)0x0) {
    local_1c = 0;
  }
  else {
    local_1c = **(uint **)(param_1 + 0x28);
  }
  local_18 = local_1c & 0xffff;
  local_8 = local_18 * 8 + 8;
  uVar13 = uVar13 + local_8;
  uVar12 = (ushort)local_1c;
  if (uVar12 != 0) {
    iVar15 = 0;
    do {
      piVar2 = *(int **)(param_1 + 0x28);
      if (piVar2 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar2;
      }
      if ((iVar15 < 0) || (iVar9 + -1 < iVar15)) {
        iVar9 = 0;
      }
      else {
        iVar9 = *(int *)(piVar2[2] + iVar15 * 4);
      }
      iVar10 = 0;
      if (*(int **)(iVar9 + 4) != (int *)0x0) {
        iVar10 = **(int **)(iVar9 + 4);
      }
      uVar13 = uVar13 + 8 + iVar10 * 8;
      uVar11 = 0;
      while( true ) {
        piVar2 = *(int **)(iVar9 + 8);
        if (piVar2 == (int *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *piVar2;
        }
        if (iVar10 <= (int)(uVar11 & 0xffff)) break;
        if (piVar2 == (int *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *piVar2;
        }
        if ((iVar15 < 0) || (iVar10 + -1 < iVar15)) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = *(undefined4 **)(piVar2[2] + iVar15 * 4);
        }
        SfCdiGetProgramChainSize((tagSFIFO_PGCI *)*puVar5,&local_c);
        uVar13 = uVar13 + local_c;
        uVar11 = uVar11 + 1;
      }
      iVar15 = iVar15 + 1;
      local_18 = local_18 - 1;
    } while (local_18 != 0);
  }
  uVar11 = ((uint)((uVar13 & 0x7ff) != 0) + (uVar13 >> 0xb)) * 0x800;
  pvVar6 = GlobalHandle(pMem);
  GlobalUnlock(pvVar6);
  uFlags = 0x42;
  uVar13 = uVar11;
  pvVar6 = GlobalHandle(pMem);
  pvVar6 = GlobalReAlloc(pvVar6,uVar13,uFlags);
  pvVar7 = GlobalLock(pvVar6);
  if (pvVar7 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  uVar4 = 0;
  ptVar16 = (tagVMGM_PGCI_UTI *)(*(int *)((int)pvVar7 + 200) * 0x800 + (int)pvVar7);
  *(ushort *)ptVar16 = uVar12;
  iVar15 = local_8;
  ptVar3 = (tagVMGM_LU_SRP *)ptVar16;
  if (uVar12 != 0) {
    do {
      ptVar14 = ptVar3 + 8;
      piVar2 = *(int **)(param_1 + 0x28);
      if (piVar2 == (int *)0x0) {
        iVar9 = 0;
      }
      else {
        iVar9 = *piVar2;
      }
      if (iVar9 + -1 < (int)(uint)uVar4) {
        puVar8 = (undefined2 *)0x0;
      }
      else {
        puVar8 = *(undefined2 **)(piVar2[2] + (uint)uVar4 * 4);
      }
      *(undefined2 *)ptVar14 = *puVar8;
      ptVar3[10] = *(tagVMGM_LU_SRP *)(puVar8 + 1);
      bVar1 = *(byte *)((int)puVar8 + 3);
      *(int *)(ptVar3 + 0xc) = iVar15;
      ptVar3[0xb] = (tagVMGM_LU_SRP)((bVar1 ^ (byte)ptVar3[0xb]) & 0x7f ^ bVar1);
      local_10 = FUN_010879b0(puVar8,ptVar16 + iVar15,&local_4);
      if (local_10 < 0) break;
      iVar15 = iVar15 + local_4;
      SfCdiSwap_VMGM_LU_SRP(ptVar14);
      uVar4 = uVar4 + 1;
      ptVar3 = ptVar14;
    } while (uVar4 < uVar12);
  }
  *(int *)(ptVar16 + 4) = iVar15 + -1;
  SfCdiSwap_VMGM_PGCI_UTI(ptVar16);
  *param_2 = pvVar7;
  *param_3 = uVar11;
  return local_10;
}


