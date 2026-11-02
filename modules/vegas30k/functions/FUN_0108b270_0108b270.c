/* Module: vegas30k.dll
   Function: FUN_0108b270
   Address: 0108b270
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0108b270(int param_1,undefined4 *param_2,uint *param_3)

{
  LPCVOID pMem;
  int *piVar1;
  undefined2 uVar2;
  int iVar3;
  HGLOBAL pvVar4;
  LPVOID pvVar5;
  undefined2 *puVar6;
  tagVTS_TTU_SRP *ptVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  tagVTS_PTT_SRPTI *ptVar12;
  tagVTS_PTT_SRPTI *ptVar13;
  UINT uFlags;
  int local_14;
  int local_c;
  
  pMem = (LPCVOID)*param_2;
  uVar10 = *param_3;
  *(uint *)((int)pMem + 200) = (uint)((uVar10 & 0x7ff) != 0) + (uVar10 >> 0xb);
  piVar1 = *(int **)(param_1 + 0x30);
  if (piVar1 == (int *)0x0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *piVar1;
  }
  uVar10 = uVar10 + 8 + iVar9 * 4;
  iVar9 = 0;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if (iVar3 <= iVar9) break;
    if (piVar1 == (int *)0x0) {
      iVar3 = 0;
    }
    else {
      iVar3 = *piVar1;
    }
    if ((iVar9 < 0) || (iVar3 + -1 < iVar9)) {
      iVar3 = 0;
    }
    else {
      iVar3 = *(int *)(piVar1[2] + iVar9 * 4);
    }
    if (*(int **)(iVar3 + 0x1c) == (int *)0x0) {
      iVar9 = iVar9 + 1;
    }
    else {
      iVar9 = iVar9 + 1;
      uVar10 = uVar10 + **(int **)(iVar3 + 0x1c) * 4;
    }
  }
  uVar11 = ((uint)((uVar10 & 0x7ff) != 0) + (uVar10 >> 0xb)) * 0x800;
  pvVar4 = GlobalHandle(pMem);
  GlobalUnlock(pvVar4);
  uFlags = 0x42;
  uVar10 = uVar11;
  pvVar4 = GlobalHandle(pMem);
  pvVar4 = GlobalReAlloc(pvVar4,uVar10,uFlags);
  pvVar5 = GlobalLock(pvVar4);
  if (pvVar5 != (LPVOID)0x0) {
    ptVar12 = (tagVTS_PTT_SRPTI *)(*(int *)((int)pvVar5 + 200) * 0x800 + (int)pvVar5);
    ptVar7 = (tagVTS_TTU_SRP *)(ptVar12 + 8);
    iVar9 = 0;
    if (*(int **)(param_1 + 0x30) != (int *)0x0) {
      iVar9 = **(int **)(param_1 + 0x30);
    }
    iVar9 = iVar9 * 4 + 8;
    local_14 = 0;
    while( true ) {
      iVar3 = 0;
      if (*(int **)(param_1 + 0x30) != (int *)0x0) {
        iVar3 = **(int **)(param_1 + 0x30);
      }
      if (iVar3 <= local_14) break;
      *(int *)ptVar7 = iVar9;
      SfCdiSwap_VTS_TTU_SRP(ptVar7);
      piVar1 = *(int **)(param_1 + 0x30);
      if (piVar1 == (int *)0x0) {
        iVar3 = 0;
      }
      else {
        iVar3 = *piVar1;
      }
      if ((local_14 < 0) || (iVar3 + -1 < local_14)) {
        local_c = 0;
      }
      else {
        local_c = *(int *)(piVar1[2] + local_14 * 4);
      }
      ptVar13 = ptVar12 + iVar9;
      iVar3 = 0;
      while( true ) {
        piVar1 = *(int **)(local_c + 0x1c);
        if (piVar1 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar1;
        }
        if (iVar8 <= iVar3) break;
        if (piVar1 == (int *)0x0) {
          iVar8 = 0;
        }
        else {
          iVar8 = *piVar1;
        }
        if ((iVar3 < 0) || (iVar8 + -1 < iVar3)) {
          puVar6 = (undefined2 *)0x0;
        }
        else {
          puVar6 = *(undefined2 **)(piVar1[2] + iVar3 * 4);
        }
        *(undefined2 *)ptVar13 = *puVar6;
        *(tagVTS_PTT_SRP *)(ptVar13 + 3) = *(tagVTS_PTT_SRP *)(puVar6 + 1);
        SfCdiSwap_VTS_PTT_SRP((tagVTS_PTT_SRP *)ptVar13);
        iVar3 = iVar3 + 1;
        ptVar13 = ptVar13 + 4;
      }
      local_14 = local_14 + 1;
      ptVar7 = ptVar7 + 4;
      iVar9 = iVar9 + iVar3 * 4;
    }
    uVar2 = 0;
    if (*(undefined4 **)(param_1 + 0x30) != (undefined4 *)0x0) {
      uVar2 = (undefined2)**(undefined4 **)(param_1 + 0x30);
    }
    *(undefined2 *)ptVar12 = uVar2;
    *(int *)(ptVar12 + 4) = iVar9 + -1;
    SfCdiSwap_VTS_PTT_SRPTI(ptVar12);
    *param_2 = pvVar5;
    *param_3 = uVar11;
    return 0;
  }
  return 0x8007000e;
}


