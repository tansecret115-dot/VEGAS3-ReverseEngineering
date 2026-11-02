/* Module: vegas30k.dll
   Function: FUN_01087d30
   Address: 01087d30
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_01087d30(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  tagVTS_ATRTI tVar1;
  HGLOBAL pvVar2;
  LPVOID pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  tagVTS_ATRTI *ptVar12;
  tagVTS_ATR_SRP *ptVar13;
  tagVTS_ATRTI *ptVar14;
  uint uVar15;
  uint uVar16;
  UINT uFlags;
  uint local_14;
  
  uVar16 = *param_3;
  pMem = (LPCVOID)*param_2;
  if (*(uint **)(param_1 + 8) == (uint *)0x0) {
    uVar15 = 0;
  }
  else {
    uVar15 = **(uint **)(param_1 + 8);
  }
  *(uint *)((int)pMem + 0xd0) = (uint)((uVar16 & 0x7ff) != 0) + (uVar16 >> 0xb);
  uVar11 = uVar15 * 0x30c + 8 & 0xffff;
  uVar16 = uVar11 + uVar16;
  uVar7 = ((uint)((uVar16 & 0x7ff) != 0) + (uVar16 >> 0xb)) * 0x800;
  pvVar2 = GlobalHandle(pMem);
  GlobalUnlock(pvVar2);
  uFlags = 0x42;
  uVar16 = uVar7;
  pvVar2 = GlobalHandle(pMem);
  pvVar2 = GlobalReAlloc(pvVar2,uVar16,uFlags);
  pvVar3 = GlobalLock(pvVar2);
  if (pvVar3 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  ptVar12 = (tagVTS_ATRTI *)(*(int *)((int)pvVar3 + 0xd0) * 0x800 + (int)pvVar3);
  *(short *)ptVar12 = (short)uVar15;
  *(uint *)(ptVar12 + 4) = uVar11 - 1;
  SfCdiSwap_VTS_ATRTI(ptVar12);
  ptVar13 = (tagVTS_ATR_SRP *)(ptVar12 + 8);
  uVar15 = uVar15 & 0xffff;
  iVar4 = uVar15 * 4 + 8;
  local_14 = 0;
  if (uVar15 != 0) {
    ptVar12 = ptVar12 + uVar15 * 4 + 0x14;
    do {
      *(int *)ptVar13 = iVar4;
      iVar4 = iVar4 + 0x308;
      SfCdiSwap_VTS_ATR_SRP(ptVar13);
      piVar5 = *(int **)(param_1 + 8);
      if (piVar5 == (int *)0x0) {
        iVar8 = 0;
      }
      else {
        iVar8 = *piVar5;
      }
      if (((int)local_14 < 0) || (iVar8 + -1 < (int)local_14)) {
        piVar5 = (int *)0x0;
      }
      else {
        piVar5 = *(int **)(piVar5[2] + local_14 * 4);
      }
      iVar8 = *piVar5;
      *(undefined4 *)(ptVar12 + -0xc) = 0x307;
      *(uint *)(ptVar12 + -8) = (uint)*(byte *)(iVar8 + 2);
      SfCdiSwap_VTS_ATR((tagVTS_ATR *)(ptVar12 + -0xc));
      *(undefined2 *)(ptVar12 + -4) = *(undefined2 *)(iVar8 + 0x24);
      tVar1 = (tagVTS_ATRTI)0x0;
      if (*(undefined4 **)(iVar8 + 0x28) != (undefined4 *)0x0) {
        tVar1 = SUB41(**(undefined4 **)(iVar8 + 0x28),0);
      }
      ptVar12[-1] = tVar1;
      piVar5 = *(int **)(iVar8 + 0x28);
      if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
        if (piVar5 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar5;
        }
        if (iVar9 + -1 < 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = *(undefined4 **)piVar5[2];
        }
        *(undefined4 *)ptVar12 = *puVar6;
        *(undefined4 *)(ptVar12 + 4) = puVar6[1];
      }
      tVar1 = (tagVTS_ATRTI)0x0;
      if (*(undefined4 **)(iVar8 + 0x2c) != (undefined4 *)0x0) {
        tVar1 = SUB41(**(undefined4 **)(iVar8 + 0x2c),0);
      }
      ptVar12[0x51] = tVar1;
      piVar5 = *(int **)(iVar8 + 0x2c);
      if ((piVar5 != (int *)0x0) && (*piVar5 != 0)) {
        if (piVar5 == (int *)0x0) {
          iVar9 = 0;
        }
        else {
          iVar9 = *piVar5;
        }
        if (iVar9 + -1 < 0) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = *(undefined4 **)piVar5[2];
        }
        *(undefined4 *)(ptVar12 + 0x52) = *puVar6;
        *(undefined2 *)(ptVar12 + 0x56) = *(undefined2 *)(puVar6 + 1);
      }
      *(undefined2 *)(ptVar12 + 0xfc) = *(undefined2 *)(iVar8 + 0x54);
      tVar1 = (tagVTS_ATRTI)0x0;
      if (*(undefined4 **)(iVar8 + 0x58) != (undefined4 *)0x0) {
        tVar1 = SUB41(**(undefined4 **)(iVar8 + 0x58),0);
      }
      ptVar12[0xff] = tVar1;
      iVar9 = 0;
      ptVar14 = ptVar12 + 0x100;
      while( true ) {
        piVar5 = *(int **)(iVar8 + 0x58);
        if (piVar5 == (int *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *piVar5;
        }
        if (iVar10 <= iVar9) break;
        if (piVar5 == (int *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *piVar5;
        }
        if ((iVar9 < 0) || (iVar10 + -1 < iVar9)) {
          iVar9 = iVar9 + 1;
          *(undefined4 *)ptVar14 = uRam00000000;
          *(undefined4 *)(ptVar14 + 4) = _DAT_00000004;
          ptVar14 = ptVar14 + 8;
        }
        else {
          iVar9 = iVar9 + 1;
          puVar6 = *(undefined4 **)(piVar5[2] + -4 + iVar9 * 4);
          *(undefined4 *)ptVar14 = *puVar6;
          *(undefined4 *)(ptVar14 + 4) = puVar6[1];
          ptVar14 = ptVar14 + 8;
        }
      }
      tVar1 = (tagVTS_ATRTI)0x0;
      if (*(undefined4 **)(iVar8 + 0x5c) != (undefined4 *)0x0) {
        tVar1 = SUB41(**(undefined4 **)(iVar8 + 0x5c),0);
      }
      ptVar12[0x151] = tVar1;
      iVar9 = 0;
      ptVar14 = ptVar12 + 0x152;
      while( true ) {
        piVar5 = *(int **)(iVar8 + 0x5c);
        if (piVar5 == (int *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *piVar5;
        }
        if (iVar10 <= iVar9) break;
        if (piVar5 == (int *)0x0) {
          iVar10 = 0;
        }
        else {
          iVar10 = *piVar5;
        }
        if ((iVar9 < 0) || (iVar10 + -1 < iVar9)) {
          puVar6 = (undefined4 *)0x0;
        }
        else {
          puVar6 = *(undefined4 **)(piVar5[2] + iVar9 * 4);
        }
        iVar9 = iVar9 + 1;
        *(undefined4 *)ptVar14 = *puVar6;
        *(undefined2 *)(ptVar14 + 4) = *(undefined2 *)(puVar6 + 1);
        ptVar14 = ptVar14 + 6;
      }
      memmove(ptVar12 + 0x214,(void *)(iVar8 + 0x60),0xc0);
      local_14 = local_14 + 1;
      ptVar13 = ptVar13 + 4;
      ptVar12 = ptVar12 + 0x308;
    } while (local_14 < uVar15);
  }
  *param_2 = pvVar3;
  *param_3 = uVar7;
  return 0;
}


