/* Module: aviplug.dll
   Function: FUN_5f95f630
   Address: 5f95f630
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __fastcall FUN_5f95f630(void *param_1)

{
  uint *puVar1;
  int *piVar2;
  HWND pHVar3;
  LRESULT LVar4;
  int iVar5;
  uint uVar6;
  float10 fVar7;
  UINT UVar8;
  WPARAM WVar9;
  LPARAM LVar10;
  int local_124;
  undefined8 local_120;
  undefined8 local_118;
  LRESULT local_10c;
  CHAR local_108 [260];
  
  if (*(HWND *)((int)param_1 + 0x10) == (HWND)0x0) {
    return 0;
  }
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xf0;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7d9);
  LVar4 = SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  iVar5 = FUN_5f960030(param_1,(uint)((LVar4 == 1) != 0));
  if (iVar5 == 0) {
    return 0;
  }
  *(uint *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 4) = (uint)(LVar4 == 1);
  *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 0x14) = 0;
  if (*(int *)(*(int *)((int)param_1 + 0x98) + 4) != 0) {
    *(undefined4 *)(*(int *)((int)param_1 + 0x98) + 0x14) = 8;
  }
  local_10c = 0x18;
  if (*(int *)((int)param_1 + 0xec) != 0) {
    LVar10 = 0;
    WVar9 = 0;
    UVar8 = 0xf0;
    pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7e8);
    LVar4 = SendMessageA(pHVar3,UVar8,WVar9,LVar10);
    if (LVar4 == 1) {
      local_10c = 0x20;
    }
  }
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xf0;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3ed);
  LVar4 = SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  if (LVar4 == 1) {
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x98) + 0x14);
    *puVar1 = *puVar1 | 1;
  }
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xf0;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7ed);
  LVar4 = SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  if (LVar4 == 1) {
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x98) + 0x14);
    *puVar1 = *puVar1 | 0x200000;
  }
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xf0;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7eb);
  LVar4 = SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  if (LVar4 == 0) {
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x98) + 0x14);
    *puVar1 = *puVar1 | 0x80000;
  }
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xf0;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3f0);
  LVar4 = SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  if (LVar4 == 1) {
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x98) + 0x14);
    *puVar1 = *puVar1 | 4;
  }
  UVar8 = GetDlgItemInt(*(HWND *)((int)param_1 + 0x10),0x3f1,&local_124,0);
  if (local_124 != 0) {
    *(UINT *)(*(int *)((int)param_1 + 0x98) + 8) = UVar8;
  }
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0xf0;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3f2);
  LVar4 = SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  if (LVar4 == 1) {
    puVar1 = (uint *)(*(int *)((int)param_1 + 0x98) + 0x14);
    *puVar1 = *puVar1 | 2;
  }
  UVar8 = GetDlgItemInt(*(HWND *)((int)param_1 + 0x10),0x3f3,&local_124,0);
  if (local_124 != 0) {
    *(UINT *)(*(int *)((int)param_1 + 0x98) + 0x10) = UVar8 << 10;
  }
  LVar10 = 0;
  WVar9 = 0;
  UVar8 = 0x60a;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x3eb);
  LVar4 = SendMessageA(pHVar3,UVar8,WVar9,LVar10);
  *(LRESULT *)(*(int *)((int)param_1 + 0x98) + 0xc) = LVar4;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7e1);
  WVar9 = SendMessageA(pHVar3,0x147,0,0);
  if (WVar9 != 0xffffffff) {
    local_118 = (double)((ulonglong)local_118 & 0xffffffff00000000);
    local_120 = (double)((ulonglong)local_120._4_4_ << 0x20);
    uVar6 = SendMessageA(pHVar3,0x150,WVar9,0);
    if (uVar6 == 0xffffffff) {
      UVar8 = GetDlgItemInt(*(HWND *)((int)param_1 + 0x10),0x7e2,&local_124,0);
      if (local_124 != 0) {
        local_118 = (double)CONCAT44(local_118._4_4_,UVar8);
      }
      UVar8 = GetDlgItemInt(*(HWND *)((int)param_1 + 0x10),0x7e3,&local_124,0);
      if (local_124 == 0) goto LAB_5f95f8b0;
    }
    else {
      local_118 = (double)(CONCAT44(local_118._4_4_,uVar6) & 0xffffffff0000ffff);
      local_120 = (double)(ulonglong)(uVar6 >> 0x10);
LAB_5f95f8b0:
      UVar8 = (UINT)local_120;
    }
    if (((*(int *)((int)param_1 + 0x34) != 0) &&
        (piVar2 = *(int **)(*(int *)((int)param_1 + 0x34) + 0x428), piVar2 != (int *)0x0)) &&
       (iVar5 = *piVar2, iVar5 != 0)) {
      *(undefined2 *)(iVar5 + 0xe) = (undefined2)local_10c;
      *(undefined4 *)(**(int **)(*(int *)((int)param_1 + 0x34) + 0x428) + 4) = (undefined4)local_118
      ;
      *(UINT *)(**(int **)(*(int *)((int)param_1 + 0x34) + 0x428) + 8) = UVar8;
      iVar5 = **(int **)(*(int *)((int)param_1 + 0x34) + 0x428);
      uVar6 = (uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f;
      *(int *)(iVar5 + 0x14) =
           ((int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3) * *(int *)(iVar5 + 8);
    }
    if (((*(int *)((int)param_1 + 0x34) != 0) &&
        (iVar5 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428), iVar5 != 0)) &&
       (iVar5 = *(int *)(iVar5 + 0x48), iVar5 != 0)) {
      *(undefined2 *)(iVar5 + 0xe) = (undefined2)local_10c;
      *(undefined4 *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x48) + 4) =
           (undefined4)local_118;
      *(UINT *)(*(int *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x48) + 8) = UVar8;
      iVar5 = *(int *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x48);
      uVar6 = (uint)*(ushort *)(iVar5 + 0xe) * *(int *)(iVar5 + 4) + 0x1f;
      *(int *)(iVar5 + 0x14) =
           ((int)((uVar6 & 0xffffffe0) + ((int)uVar6 >> 0x1f & 7U)) >> 3) * *(int *)(iVar5 + 8);
    }
  }
  local_120 = *(double *)((int)param_1 + 0xf0);
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x7e6);
  WVar9 = SendMessageA(pHVar3,0x147,0,0);
  if (WVar9 == 0xffffffff) {
    GetWindowTextA(pHVar3,local_108,0x100);
    fVar7 = FUN_5f9a04a0(local_108,*(double *)((int)param_1 + 0xf0),
                         (double)CONCAT44(DAT_5f9d91ec,DAT_5f9d91e8),
                         (double)CONCAT44(DAT_5f9d91f4,DAT_5f9d91f0),(undefined4 *)0x0);
    local_120 = (double)fVar7;
  }
  else {
    LVar4 = SendMessageA(pHVar3,0x150,WVar9,0);
    if (LVar4 != -1) {
      local_120 = *(double *)("mpg4mp42mp43mrleMPG4MP42MP43MRLE" + LVar4 * 0x10 + 0x20);
    }
  }
  local_118 = 1.0;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x437);
  WVar9 = SendMessageA(pHVar3,0x147,0,0);
  if (WVar9 == 0xffffffff) {
    GetWindowTextA(pHVar3,local_108,0x100);
    fVar7 = FUN_5f9a04a0(local_108,1.0,(double)CONCAT44(DAT_5f9d91fc,DAT_5f9d91f8),
                         (double)CONCAT44(DAT_5f9d9204,DAT_5f9d9200),(undefined4 *)0x0);
  }
  else {
    LVar4 = SendMessageA(pHVar3,0x150,WVar9,0);
    if (LVar4 == -1) goto LAB_5f95fabb;
    fVar7 = (float10)*(double *)(&DAT_5f9f2c08 + LVar4 * 2);
  }
  local_118 = (double)fVar7;
LAB_5f95fabb:
  local_10c = 0;
  pHVar3 = GetDlgItem(*(HWND *)((int)param_1 + 0x10),0x436);
  WVar9 = SendMessageA(pHVar3,0x147,0,0);
  if ((WVar9 == 0xffffffff) || (LVar4 = SendMessageA(pHVar3,0x150,WVar9,0), LVar4 == -1)) {
    LVar4 = local_10c;
  }
  if ((*(int *)((int)param_1 + 0x34) != 0) &&
     (iVar5 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428), iVar5 != 0)) {
    *(UINT *)(iVar5 + 0x60) = (UINT)local_120;
    *(uint *)(iVar5 + 100) = local_120._4_4_;
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428);
    *(UINT *)(iVar5 + 0x18) = (UINT)local_120;
    *(uint *)(iVar5 + 0x1c) = local_120._4_4_;
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428);
    *(undefined4 *)(iVar5 + 0x68) = (undefined4)local_118;
    *(undefined4 *)(iVar5 + 0x6c) = local_118._4_4_;
    iVar5 = *(int *)(*(int *)((int)param_1 + 0x34) + 0x428);
    *(undefined4 *)(iVar5 + 0x20) = (undefined4)local_118;
    *(undefined4 *)(iVar5 + 0x24) = local_118._4_4_;
    *(LRESULT *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x5c) = LVar4;
    *(LRESULT *)(*(int *)(*(int *)((int)param_1 + 0x34) + 0x428) + 0x14) = LVar4;
  }
  return 0;
}


