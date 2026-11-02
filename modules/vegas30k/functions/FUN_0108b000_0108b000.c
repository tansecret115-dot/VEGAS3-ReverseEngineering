/* Module: vegas30k.dll
   Function: FUN_0108b000
   Address: 0108b000
   Source: Ghidra pseudocode (Stage 10 batch) */


long FUN_0108b000(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  int *piVar1;
  tagVTS_PGCI_SRP *ptVar2;
  LPVOID pvVar3;
  undefined2 uVar4;
  undefined4 *puVar5;
  HGLOBAL pvVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  ushort *puVar14;
  int iVar15;
  tagVTS_PGCI_SRP *ptVar16;
  UINT uFlags;
  uint local_18;
  tagVTS_PGCI_SRP *local_14;
  int local_10;
  long local_c;
  LPVOID local_8;
  tagVTS_PGCI_SRP *local_4;
  
  pMem = (LPCVOID)*param_2;
  uVar13 = *param_3;
  iVar15 = 0;
  local_c = 0;
  *(uint *)((int)pMem + 0xcc) = (uint)((uVar13 & 0x7ff) != 0) + (uVar13 >> 0xb);
  if (*(int **)(param_1 + 0x48) == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = **(int **)(param_1 + 0x48);
  }
  uVar13 = uVar13 + 8 + iVar9 * 8;
  while( true ) {
    piVar1 = *(int **)(param_1 + 0x4c);
    if (piVar1 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *piVar1;
    }
    if (iVar9 <= iVar15) break;
    if (piVar1 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *piVar1;
    }
    if ((iVar15 < 0) || (iVar9 + -1 < iVar15)) {
      puVar5 = (undefined4 *)0x0;
    }
    else {
      puVar5 = *(undefined4 **)(piVar1[2] + iVar15 * 4);
    }
    SfCdiGetProgramChainSize((tagSFIFO_PGCI *)*puVar5,&local_18);
    uVar13 = uVar13 + local_18;
    iVar15 = iVar15 + 1;
  }
  uVar12 = ((uint)((uVar13 & 0x7ff) != 0) + (uVar13 >> 0xb)) * 0x800;
  pvVar6 = GlobalHandle(pMem);
  GlobalUnlock(pvVar6);
  uFlags = 0x42;
  uVar13 = uVar12;
  pvVar6 = GlobalHandle(pMem);
  pvVar6 = GlobalReAlloc(pvVar6,uVar13,uFlags);
  local_8 = GlobalLock(pvVar6);
  if (local_8 == (LPVOID)0x0) {
    return -0x7ff8fff2;
  }
  local_14 = (tagVTS_PGCI_SRP *)(*(int *)((int)local_8 + 0xcc) * 0x800 + (int)local_8);
  uVar4 = 0;
  if (*(undefined4 **)(param_1 + 0x48) != (undefined4 *)0x0) {
    uVar4 = (undefined2)**(undefined4 **)(param_1 + 0x48);
  }
  *(undefined2 *)local_14 = uVar4;
  iVar15 = 0;
  if (*(int **)(param_1 + 0x48) != (int *)0x0) {
    iVar15 = **(int **)(param_1 + 0x48);
  }
  local_10 = iVar15 * 8 + 8;
  iVar15 = 0;
  ptVar2 = local_14;
  while( true ) {
    ptVar16 = ptVar2 + 8;
    piVar1 = *(int **)(param_1 + 0x48);
    if (piVar1 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *piVar1;
    }
    if (iVar9 <= iVar15) break;
    if (piVar1 == (int *)0x0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *piVar1;
    }
    if ((iVar15 < 0) || (iVar9 + -1 < iVar15)) {
      puVar14 = (ushort *)0x0;
    }
    else {
      puVar14 = *(ushort **)(piVar1[2] + iVar15 * 4);
    }
    uVar13 = *(uint *)ptVar16;
    uVar10 = (uint)(byte)*puVar14 << 0x10;
    *(uint *)ptVar16 = uVar10 | uVar13 & 0xff00ffff;
    uVar7 = (uint)(*puVar14 >> 8) << 0x18;
    *(uint *)ptVar16 = uVar7 | uVar10 | uVar13 & 0xffff;
    uVar11 = ((byte)puVar14[1] & 3) << 0xc;
    *(uint *)ptVar16 = uVar11 | uVar7 | uVar10 | uVar13 & 0xcfff;
    uVar8 = (*(byte *)((int)puVar14 + 3) & 3) << 0xe;
    *(uint *)ptVar16 = uVar8 | uVar11 | uVar7 | uVar10 | uVar13 & 0xfff;
    uVar8 = uVar8 | uVar11 | uVar7 | uVar10 | uVar13 & 0xf80;
    uVar13 = (byte)puVar14[2] & 0x7f | uVar8;
    *(uint *)ptVar16 = uVar13;
    *(uint *)ptVar16 =
         (*(uint *)(puVar14 + 4) & 1) << 7 | CONCAT31((int3)(uVar8 >> 8),(char)uVar13) & 0xffffff7f;
    if (iVar15 == *(int *)(puVar14 + 6)) {
      local_4 = local_14 + local_10;
      *(int *)(ptVar2 + 0xc) = local_10;
      local_c = SfCdiGetProgramChainSize(*(tagSFIFO_PGCI **)(puVar14 + 8),&local_18);
      if ((local_c < 0) ||
         (local_c = SfCdiCreateProgramChain
                              (*(tagSFIFO_PGCI **)(puVar14 + 8),(tagPGCI_GI **)&local_4,&local_18),
         local_c < 0)) break;
      local_10 = local_10 + local_18;
    }
    else {
      *(undefined4 *)(ptVar2 + 0xc) = *(undefined4 *)(local_14 + *(int *)(puVar14 + 6) * 8 + 0xc);
    }
    SfCdiSwap_VTS_PGCI_SRP(ptVar16);
    iVar15 = iVar15 + 1;
    ptVar2 = ptVar16;
  }
  pvVar3 = local_8;
  *(int *)(local_14 + 4) = local_10 + -1;
  SfCdiSwap_VTS_PGCITI((tagVTS_PGCITI *)local_14);
  *param_2 = pvVar3;
  *param_3 = uVar12;
  return local_c;
}


