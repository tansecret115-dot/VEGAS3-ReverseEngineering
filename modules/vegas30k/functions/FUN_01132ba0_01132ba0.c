/* Module: vegas30k.dll
   Function: FUN_01132ba0
   Address: 01132ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_01132ba0(HWND param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  HWND hWnd;
  SHORT SVar3;
  int iVar4;
  DWORD DVar5;
  LRESULT LVar6;
  undefined4 *puVar7;
  int iVar8;
  HCURSOR pHVar9;
  undefined4 uVar10;
  RECT *pRVar11;
  uint uVar12;
  HWND *ppHVar13;
  undefined4 local_64;
  int local_60;
  undefined4 local_58;
  RECT local_54;
  RECT local_44;
  tagRECT local_34;
  HWND local_20 [2];
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  undefined4 local_8;
  
  uVar12 = (uint)(*(int *)(param_3 + 8) == -0x6f);
  FUN_011319b0(param_2);
  piVar1 = (int *)(param_2 + 0x494);
  _SfList_CreateExZ_32(piVar1,4,0x40,0x10,0x40000002,0,0,0);
  if (*piVar1 != 0) {
    piVar2 = (int *)(param_2 + 0x498);
    _SfList_CreateExZ_32(piVar2,4,0x40,0x10,0x40000002,0,0,0);
    if (*piVar2 == 0) {
      _SfList_Destroy_4(*piVar1);
      *piVar1 = 0;
      return 0;
    }
    iVar4 = FUN_011327d0(param_2,*piVar2,1);
    if ((iVar4 == 0) || (iVar4 = FUN_011327d0(param_2,*piVar1,0), iVar4 == 0)) {
      _SfList_DeleteList_16(*piVar2,0,0xffffffff,0);
      _SfList_Destroy_4(*piVar2);
      *piVar2 = 0;
      _SfList_Destroy_4(*piVar1);
      *piVar1 = 0;
      return 0;
    }
    uVar10 = *(undefined4 *)(param_2 + 0x2c);
    *(uint *)(param_2 + 0x4a4) = uVar12 << 1 | *(uint *)(param_2 + 0x4a4) & 0xfffffffd;
    ppHVar13 = local_20;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *ppHVar13 = (HWND)0x0;
      ppHVar13 = ppHVar13 + 1;
    }
    local_c = *piVar2;
    local_8 = *(undefined4 *)(param_2 + 0x3c);
    local_18 = (-(uint)(uVar12 != 0) & 5) + 1;
    local_20[0] = param_1;
    local_20[1] = (HWND)uVar10;
    DVar5 = GetMessagePos();
    iVar4 = (int)(short)(DVar5 >> 0x10);
    local_14 = (int)(short)DVar5;
    local_10 = iVar4;
    LVar6 = SendMessageA(*(HWND *)(param_2 + 8),0x4e,*(WPARAM *)(param_2 + 0x2c),(LPARAM)local_20);
    if (LVar6 == 0) {
      _SfList_DeleteList_16(*piVar2,0,0xffffffff,0);
      _SfList_Destroy_4(*piVar2);
      *piVar2 = 0;
    }
    if ((*(uint *)(param_2 + 0x4a4) & 0x20) != 0) {
      *(uint *)(param_2 + 0x4a4) =
           *(uint *)(param_2 + 0x4e0) >> 1 & 0x20 | *(uint *)(param_2 + 0x4a4) & 0xffffffdf;
    }
    if ((*(byte *)(param_2 + 0x4a4) & 0x20) == 0) {
      local_34.left = (int)(short)DVar5;
      local_34.top = iVar4;
      ScreenToClient(param_1,(LPPOINT)&local_34);
      SendMessageA(param_1,0x1012,0,(LPARAM)&local_34);
      hWnd = *(HWND *)(param_2 + 0x18);
      LVar6 = SendMessageA(hWnd,0x110a,9,0);
      uVar10 = 0;
      if ((local_34.bottom != -1) && (LVar6 != 0)) {
        iVar4 = FUN_0112eb70(hWnd,LVar6);
        iVar8 = FUN_011317a0(param_1,local_34.bottom);
        uVar10 = *(undefined4 *)(*(int *)(iVar4 + 8) + iVar8 * 4);
      }
      *(uint *)(param_2 + 0x4a4) = *(uint *)(param_2 + 0x4a4) | 0x600;
      *(undefined4 *)(param_2 + 0x4b4) = 0xfffffffe;
      *(undefined4 *)(param_2 + 0x4b8) = 0xfffffffe;
      SVar3 = GetKeyState(0x10);
      *(uint *)(param_2 + 0x4a4) = (uint)(SVar3 < 0) << 6 | *(uint *)(param_2 + 0x4a4) & 0xffffffbf;
      SVar3 = GetKeyState(0x11);
      *(uint *)(param_2 + 0x4a4) = (uint)(SVar3 < 0) << 7 | *(uint *)(param_2 + 0x4a4) & 0xffffff7f;
      *(undefined4 *)(param_2 + 0x488) = 2;
      FUN_01147250(param_2,uVar10);
      if ((*(uint *)(param_2 + 0x4a4) & 0x100) == 0) {
        *(undefined4 *)(param_2 + 0x4a0) = 0x7f88;
      }
      else if ((*(uint *)(param_2 + 0x4a4) & 4) == 0) {
        *(undefined4 *)(param_2 + 0x4a0) = 0xf;
      }
      else {
        *(undefined4 *)(param_2 + 0x4a0) = 0x10;
      }
    }
    else {
      if (&stack0x00000000 == (undefined1 *)0x64) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        local_64 = 1;
        puVar7 = &local_64;
      }
      SendMessageA(param_1,0x100e,0,(LPARAM)puVar7);
      *(int *)(param_2 + 0x4a8) = local_60;
      if (&stack0x00000000 == (undefined1 *)0x64) {
        puVar7 = (undefined4 *)0x0;
      }
      else {
        local_64 = 1;
        puVar7 = &local_64;
      }
      LVar6 = SendMessageA(param_1,0x1004,0,0);
      SendMessageA(param_1,0x100e,LVar6 - 1,(LPARAM)puVar7);
      *(undefined4 *)(param_2 + 0x4b0) = 0xffffffff;
      *(undefined4 *)(param_2 + 0x4a0) = 0xc;
      *(undefined4 *)(param_2 + 0x4ac) = local_58;
    }
    *(undefined4 *)(param_2 + 0x488) = 2;
    *(uint *)(param_2 + 0x4a4) = *(uint *)(param_2 + 0x4a4) & 0xfffffff7;
    pHVar9 = (HCURSOR)_SfGetUICursor_4(*(undefined4 *)(param_2 + 0x4a0));
    pHVar9 = SetCursor(pHVar9);
    *(HCURSOR *)(param_2 + 0x49c) = pHVar9;
    LVar6 = SendMessageA(param_1,0x1032,0,0);
    if (LVar6 == 1) {
      LVar6 = SendMessageA(param_1,0x1021,*(WPARAM *)(param_3 + 0xc),(LPARAM)&local_14);
      *(LRESULT *)(param_2 + 0x34) = LVar6;
    }
    else {
      uVar10 = FUN_01132350(param_1,*(undefined4 *)(param_3 + 0xc),&local_14);
      *(undefined4 *)(param_2 + 0x34) = uVar10;
    }
    *(uint *)(param_2 + 0x4a4) = *(uint *)(param_2 + 0x4a4) | 0x10;
    if (*(int *)(param_2 + 0x34) != 0) {
      if (&stack0x00000000 == (undefined1 *)0x44) {
        pRVar11 = (RECT *)0x0;
      }
      else {
        local_44.left = 2;
        pRVar11 = &local_44;
      }
      SendMessageA(param_1,0x100e,*(WPARAM *)(param_3 + 0xc),(LPARAM)pRVar11);
      if (&stack0x00000000 == (undefined1 *)0x54) {
        pRVar11 = (RECT *)0x0;
      }
      else {
        local_54.left = 1;
        pRVar11 = &local_54;
      }
      SendMessageA(param_1,0x100e,*(WPARAM *)(param_3 + 0xc),(LPARAM)pRVar11);
      UnionRect(&local_34,&local_44,&local_54);
      local_60 = local_34.bottom;
      uVar12 = SendMessageA(param_1,0x1032,0,0);
      iVar4 = local_60;
      if (1 < uVar12) {
        iVar4 = local_60 - (local_34.bottom - local_34.top) / 2;
      }
      if (local_54.right < *(int *)(param_3 + 0x20)) {
        local_54.right = *(int *)(param_3 + 0x20);
      }
      ImageList_BeginDrag(*(HIMAGELIST *)(param_2 + 0x34),0,local_54.right - local_14,
                          iVar4 - local_10);
      FUN_01053500(param_2,*(undefined4 *)(param_3 + 0x20),*(undefined4 *)(param_3 + 0x24));
    }
    SetCapture(*(HWND *)(param_2 + 4));
  }
  return 0;
}


