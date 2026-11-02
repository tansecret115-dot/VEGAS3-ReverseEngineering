/* Module: vidcap30.exe
   Function: FUN_004a9650
   Address: 004a9650
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004a9650(HWND param_1,WPARAM param_2,undefined4 param_3,int param_4)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  LONG LVar1;
  HCURSOR hCursor;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  HWND hWnd;
  WPARAM WVar6;
  HWND pHVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  UINT UVar11;
  HWND *ppHVar12;
  HWND local_30;
  WPARAM local_2c;
  undefined4 local_28;
  int local_24;
  undefined4 local_20;
  HWND local_1c;
  WPARAM local_18;
  undefined4 local_14;
  int local_10;
  undefined4 local_c;
  
  local_2c = (WPARAM)(short)((uint)param_4 >> 0x10);
  iVar10 = (int)(short)param_4;
  LVar1 = GetWindowLongA(param_1,-0x15);
  if (*(HWND *)(LVar1 + 200) != (HWND)0x0) {
    local_14 = param_3;
    local_10 = param_4;
    local_18 = param_2;
    local_1c = param_1;
    SendMessageA(*(HWND *)(LVar1 + 200),0x407,0,(LPARAM)&local_1c);
  }
  switch(param_2) {
  case 0x200:
    pHVar7 = GetCapture();
    if (param_1 == pHVar7) {
      iVar3 = *(int *)(LVar1 + 0x98);
      if (iVar3 != 1) {
        if (iVar3 == 2) {
          iVar3 = GetSystemMetrics(0x44);
          iVar3 = (iVar3 + 1) / 2;
          iVar4 = iVar10 - *(int *)(LVar1 + 0x90);
          if ((((-iVar3 <= iVar4) && (iVar4 <= iVar3)) &&
              (iVar4 = local_2c - *(int *)(LVar1 + 0x94), -iVar3 <= iVar4)) && (iVar4 <= iVar3)) {
            return 0;
          }
          *(undefined4 *)(LVar1 + 0x2c) = *(undefined4 *)(LVar1 + 0x90);
          *(undefined4 *)(LVar1 + 0x34) = *(undefined4 *)(LVar1 + 0x90);
          *(int *)(LVar1 + 0x28) = *(int *)(LVar1 + 0x10);
          *(undefined4 *)(LVar1 + 0x98) = 3;
          *(undefined4 *)(LVar1 + 0x30) = *(undefined4 *)(LVar1 + 0x94);
          iVar3 = LVar1 + *(int *)(LVar1 + 0x10) * 0x38;
          *(undefined4 *)(LVar1 + 0x38) = *(undefined4 *)(LVar1 + 0x94);
          *(int *)(LVar1 + 0x2c) = *(int *)(LVar1 + 0x2c) - *(int *)(iVar3 + 0x158);
          *(int *)(LVar1 + 0x30) = *(int *)(LVar1 + 0x30) - *(int *)(iVar3 + 0x15c);
          *(int *)(LVar1 + 0x34) = *(int *)(LVar1 + 0x34) - *(int *)(iVar3 + 0x160);
          *(int *)(LVar1 + 0x38) = *(int *)(LVar1 + 0x38) - *(int *)(iVar3 + 0x164);
          hCursor = (HCURSOR)_SfGetUICursor_4(0x11);
          SetCursor(hCursor);
          pHVar7 = SetFocus(param_1);
          *(HWND *)(LVar1 + 0x3c) = pHVar7;
        }
        else if (iVar3 != 3) {
          return 0;
        }
        FUN_004a9cd0(param_1,LVar1,iVar10,local_2c);
        return 0;
      }
      uVar9 = 0;
      param_2 = 0;
      if ((((*(byte *)(LVar1 + 0x8c) & 1) == 0) ||
          (pt.y = local_2c, pt.x = iVar10, BVar2 = PtInRect((RECT *)(LVar1 + 0x68),pt), BVar2 == 0))
         || ((*(byte *)(LVar1 + 0x8c) & 0x10) == 0)) {
        if ((((*(byte *)(LVar1 + 0x8c) & 2) != 0) &&
            (pt_00.y = local_2c, pt_00.x = iVar10, BVar2 = PtInRect((RECT *)(LVar1 + 0x78),pt_00),
            BVar2 != 0)) && ((*(byte *)(LVar1 + 0x8c) & 0x20) != 0)) {
          uVar9 = 1;
        }
      }
      else {
        param_2 = 1;
      }
      uVar5 = *(uint *)(LVar1 + 0x8c);
      if ((param_2 == (uVar5 >> 2 & 1)) && (uVar9 == (uVar5 >> 3 & 1))) {
        return 0;
      }
      *(uint *)(LVar1 + 0x8c) = (uVar9 << 1 | param_2) << 2 | uVar5 & 0xfffffff3;
      goto LAB_004a99f2;
    }
    break;
  case 0x201:
    if (((*(byte *)(LVar1 + 0x8c) & 0x70) == 0) || (iVar10 < *(int *)(LVar1 + 0x68))) {
      iVar3 = FUN_004a9ea0(param_1,iVar10,local_2c,LVar1);
      if (iVar3 < 0) {
        iVar4 = FUN_004a9c10(param_1,iVar10,local_2c,1);
        if (iVar4 != 0) {
          UpdateWindow(param_1);
        }
        iVar4 = *(int *)(LVar1 + 0x10);
        uVar9 = 0xffff;
        if ((-1 < iVar4) && (iVar4 < *(int *)(LVar1 + 0xb0))) {
          uVar9 = (uint)*(ushort *)(LVar1 + 0x154 + iVar4 * 0x38);
        }
        pHVar7 = param_1;
        uVar5 = GetDlgCtrlID(param_1);
        uVar9 = uVar5 & 0xffff | uVar9 << 0x10;
        UVar11 = 0x111;
        hWnd = GetParent(param_1);
        SendMessageA(hWnd,UVar11,uVar9,(LPARAM)pHVar7);
      }
      else {
        local_1c = param_1;
        WVar6 = GetDlgCtrlID(param_1);
        local_14 = 0x1002;
        local_c = *(undefined4 *)(LVar1 + 0x168 + iVar3 * 0x38);
        ppHVar12 = &local_1c;
        UVar11 = 0x4e;
        local_18 = WVar6;
        local_10 = iVar3;
        pHVar7 = GetParent(param_1);
        SendMessageA(pHVar7,UVar11,WVar6,(LPARAM)ppHVar12);
      }
      *(int *)(LVar1 + 0x90) = iVar10;
      *(WPARAM *)(LVar1 + 0x94) = local_2c;
      if ((((-1 < *(int *)(LVar1 + 0x10)) && (*(int *)(LVar1 + 0x10) < *(int *)(LVar1 + 0xb0))) &&
          (*(int *)(LVar1 + 4) != 0)) &&
         ((iVar3 == -1 &&
          (iVar10 = FUN_004a9320(LVar1,iVar10,local_2c), *(int *)(LVar1 + 0x10) == iVar10)))) {
        *(undefined4 *)(LVar1 + 0x98) = 2;
        SetCapture(param_1);
        return 0;
      }
      *(undefined4 *)(LVar1 + 0x98) = 4;
      SetCapture(param_1);
      return 0;
    }
    pt_01.y = local_2c;
    pt_01.x = iVar10;
    BVar2 = PtInRect((RECT *)(LVar1 + 0x68),pt_01);
    if ((BVar2 == 0) || ((*(uint *)(LVar1 + 0x8c) & 0x10) == 0)) {
      pt_02.y = local_2c;
      pt_02.x = iVar10;
      BVar2 = PtInRect((RECT *)(LVar1 + 0x78),pt_02);
      if (BVar2 == 0) {
        return 0;
      }
      if ((*(uint *)(LVar1 + 0x8c) & 0x20) == 0) {
        return 0;
      }
      uVar8 = 1;
      *(uint *)(LVar1 + 0x8c) = *(uint *)(LVar1 + 0x8c) | 8;
    }
    else {
      uVar8 = 0xffffffff;
      *(uint *)(LVar1 + 0x8c) = *(uint *)(LVar1 + 0x8c) | 4;
    }
    *(undefined4 *)(LVar1 + 0x98) = 1;
    *(uint *)(LVar1 + 0x8c) =
         *(uint *)(LVar1 + 0x8c) >> 2 & 3 | *(uint *)(LVar1 + 0x8c) & 0xfffffffc;
    SetCapture(param_1);
    FUN_004a9bc0(param_1,LVar1,uVar8);
LAB_004a99f2:
    InvalidateRect(param_1,(RECT *)0x0,1);
    UpdateWindow(param_1);
    return 0;
  case 0x202:
    pHVar7 = GetCapture();
    if (param_1 == pHVar7) {
      ReleaseCapture();
      if (*(int *)(LVar1 + 0x98) == 1) {
        uVar9 = *(uint *)(LVar1 + 0x8c);
        *(uint *)(LVar1 + 0x8c) = uVar9 & 0xfffffffc;
        if ((uVar9 & 0xc) != 0) {
          *(uint *)(LVar1 + 0x8c) = uVar9 & 0xfffffff0;
          InvalidateRect(param_1,(RECT *)0x0,1);
          UpdateWindow(param_1);
          *(undefined4 *)(LVar1 + 0x98) = 0;
          return 0;
        }
      }
      else if ((*(int *)(LVar1 + 0x98) == 3) &&
              (SetFocus(*(HWND *)(LVar1 + 0x3c)), *(int *)(LVar1 + 0x28) != *(int *)(LVar1 + 0x10)))
      {
        local_30 = param_1;
        WVar6 = GetDlgCtrlID(param_1);
        local_24 = *(undefined4 *)(LVar1 + 0x28);
        local_20 = *(undefined4 *)(LVar1 + 0x10);
        ppHVar12 = &local_30;
        UVar11 = 0x4e;
        local_28 = 0x1001;
        local_2c = WVar6;
        pHVar7 = GetParent(param_1);
        SendMessageA(pHVar7,UVar11,WVar6,(LPARAM)ppHVar12);
      }
      *(undefined4 *)(LVar1 + 0x98) = 0;
      return 0;
    }
    break;
  case 0x205:
    local_24 = FUN_004a9320(LVar1,iVar10,local_2c);
    if (-1 < local_24) {
      local_30 = param_1;
      WVar6 = GetDlgCtrlID(param_1);
      ppHVar12 = &local_30;
      local_28 = 0x1000;
      UVar11 = 0x4e;
      local_2c = WVar6;
      pHVar7 = GetParent(param_1);
      SendMessageA(pHVar7,UVar11,WVar6,(LPARAM)ppHVar12);
    }
  }
  return 0;
}


