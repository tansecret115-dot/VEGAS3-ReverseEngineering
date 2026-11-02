/* Module: vegas30k.dll
   Function: FUN_0108aa10
   Address: 0108aa10
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0108aa10(int param_1,undefined4 *param_2,uint *param_3)

{
  tagVTS_TMAP *ptVar1;
  LPCVOID pMem;
  int *piVar2;
  uint uVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  tagVTS_TMAP_SRP *ptVar6;
  int iVar7;
  tagVTS_TMAPTI *ptVar8;
  int iVar9;
  uint uVar10;
  tagVTS_TMAP *ptVar11;
  UINT uFlags;
  int local_10;
  
  pMem = (LPCVOID)*param_2;
  uVar3 = *param_3;
  if ((*(int **)(param_1 + 0x50) == (int *)0x0) || (**(int **)(param_1 + 0x50) == 0)) {
    *(undefined4 *)((int)pMem + 0xd4) = 0;
    return 0;
  }
  *(uint *)((int)pMem + 0xd4) = (uint)((uVar3 & 0x7ff) != 0) + (uVar3 >> 0xb);
  piVar2 = *(int **)(param_1 + 0x50);
  if (piVar2 == (int *)0x0) {
    iVar9 = 0;
    iVar7 = 0;
  }
  else {
    iVar9 = *piVar2;
    iVar7 = *piVar2;
  }
  uVar3 = uVar3 + 8 + (iVar7 + iVar9) * 4;
  iVar9 = 0;
  while( true ) {
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (iVar7 <= iVar9) break;
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if ((iVar9 < 0) || (iVar7 + -1 < iVar9)) {
      iVar9 = iVar9 + 1;
      uVar3 = uVar3 + (uint)_DAT_00000004 * 4;
    }
    else {
      iVar7 = iVar9 * 4;
      iVar9 = iVar9 + 1;
      uVar3 = uVar3 + (uint)*(ushort *)(*(int *)(piVar2[2] + iVar7) + 4) * 4;
    }
  }
  uVar10 = ((uint)((uVar3 & 0x7ff) != 0) + (uVar3 >> 0xb)) * 0x800;
  pvVar4 = GlobalHandle(pMem);
  GlobalUnlock(pvVar4);
  uFlags = 0x42;
  uVar3 = uVar10;
  pvVar4 = GlobalHandle(pMem);
  pvVar4 = GlobalReAlloc(pvVar4,uVar3,uFlags);
  pvVar5 = GlobalLock(pvVar4);
  if (pvVar5 == (LPVOID)0x0) {
    return 0x8007000e;
  }
  ptVar8 = (tagVTS_TMAPTI *)(*(int *)((int)pvVar5 + 0xd4) * 0x800 + (int)pvVar5);
  ptVar6 = (tagVTS_TMAP_SRP *)(ptVar8 + 8);
  iVar9 = 0;
  if (*(int **)(param_1 + 0x50) != (int *)0x0) {
    iVar9 = **(int **)(param_1 + 0x50);
  }
  iVar9 = iVar9 * 4 + 8;
  local_10 = 0;
  while( true ) {
    piVar2 = *(int **)(param_1 + 0x50);
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if (iVar7 <= local_10) break;
    if (piVar2 == (int *)0x0) {
      iVar7 = 0;
    }
    else {
      iVar7 = *piVar2;
    }
    if ((local_10 < 0) || (iVar7 + -1 < local_10)) {
      ptVar11 = (tagVTS_TMAP *)0x0;
    }
    else {
      ptVar11 = *(tagVTS_TMAP **)(piVar2[2] + local_10 * 4);
    }
    *(int *)ptVar6 = iVar9;
    SfCdiSwap_VTS_TMAP_SRP(ptVar6,1);
    ptVar1 = (tagVTS_TMAP *)(ptVar8 + iVar9);
    *ptVar1 = *ptVar11;
    *(undefined2 *)(ptVar1 + 2) = *(undefined2 *)(ptVar11 + 4);
    SfCdiSwap_VTS_TMAP(ptVar1);
    if (*(short *)(ptVar1 + 2) != 0) {
      memmove((tagMAP_ENT *)(ptVar1 + 4),*(void **)(ptVar11 + 8),(uint)*(ushort *)(ptVar11 + 4) << 2
             );
      SfCdiSwap_VTS_MAP_ENT((tagMAP_ENT *)(ptVar1 + 4),*(ushort *)(ptVar11 + 4));
    }
    local_10 = local_10 + 1;
    iVar9 = iVar9 + 4 + (uint)*(ushort *)(ptVar11 + 4) * 4;
    ptVar6 = ptVar6 + 4;
  }
  *(undefined2 *)ptVar8 = (undefined2)local_10;
  *(int *)(ptVar8 + 4) = iVar9 + -1;
  SfCdiSwap_VTS_TMAPTI(ptVar8);
  *param_2 = pvVar5;
  *param_3 = uVar10;
  return 0;
}


