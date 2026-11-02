/* Module: sfpaplug.dll
   Function: FUN_004332d0
   Address: 004332d0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_004332d0(HWND param_1,WPARAM param_2,undefined4 param_3,int param_4)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  uint *puVar1;
  HCURSOR hCursor;
  BOOL BVar2;
  int iVar3;
  uint uVar4;
  HWND hWnd;
  WPARAM WVar5;
  HWND pHVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  UINT UVar10;
  HWND *ppHVar11;
  HWND local_30;
  uint local_2c;
  undefined4 local_28;
  uint local_24;
  uint local_20;
  HWND local_1c;
  WPARAM local_18;
  undefined4 local_14;
  int local_10;
  uint local_c;
  
  local_2c = (uint)(short)((uint)param_4 >> 0x10);
  uVar9 = (uint)(short)param_4;
  puVar1 = (uint *)GetWindowLongA(param_1,-0x15);
  if ((HWND)puVar1[0x32] != (HWND)0x0) {
    local_14 = param_3;
    local_10 = param_4;
    local_18 = param_2;
    local_1c = param_1;
    SendMessageA((HWND)puVar1[0x32],0x407,0,(LPARAM)&local_1c);
  }
  switch(param_2) {
  case 0x200:
    pHVar6 = GetCapture();
    if (param_1 == pHVar6) {
      uVar4 = puVar1[0x26];
      if (uVar4 != 1) {
        if (uVar4 == 2) {
          iVar7 = GetSystemMetrics(0x44);
          iVar7 = (iVar7 + 1) / 2;
          if ((((-iVar7 <= (int)(uVar9 - puVar1[0x24])) && ((int)(uVar9 - puVar1[0x24]) <= iVar7))
              && (-iVar7 <= (int)(local_2c - puVar1[0x25]))) &&
             ((int)(local_2c - puVar1[0x25]) <= iVar7)) {
            return 0;
          }
          uVar4 = puVar1[4];
          puVar1[0xb] = puVar1[0x24];
          puVar1[0xd] = puVar1[0x24];
          puVar1[10] = uVar4;
          puVar1[0x26] = 3;
          puVar1[0xc] = puVar1[0x25];
          puVar1[0xe] = puVar1[0x25];
          puVar1[0xb] = puVar1[0xb] - puVar1[uVar4 * 0xe + 0x56];
          puVar1[0xc] = puVar1[0xc] - puVar1[uVar4 * 0xe + 0x57];
          puVar1[0xd] = puVar1[0xd] - puVar1[uVar4 * 0xe + 0x58];
          puVar1[0xe] = puVar1[0xe] - puVar1[uVar4 * 0xe + 0x59];
          hCursor = (HCURSOR)FUN_00443390(0x11);
          SetCursor(hCursor);
          pHVar6 = SetFocus(param_1);
          puVar1[0xf] = (uint)pHVar6;
        }
        else if (uVar4 != 3) {
          return 0;
        }
        FUN_00433950(param_1,puVar1,uVar9);
        return 0;
      }
      uVar4 = 0;
      param_2 = 0;
      if ((((puVar1[0x23] & 1) == 0) ||
          (pt.y = local_2c, pt.x = uVar9, BVar2 = PtInRect((RECT *)(puVar1 + 0x1a),pt), BVar2 == 0))
         || ((puVar1[0x23] & 0x10) == 0)) {
        if ((((puVar1[0x23] & 2) != 0) &&
            (pt_00.y = local_2c, pt_00.x = uVar9, BVar2 = PtInRect((RECT *)(puVar1 + 0x1e),pt_00),
            BVar2 != 0)) && ((puVar1[0x23] & 0x20) != 0)) {
          uVar4 = 1;
        }
      }
      else {
        param_2 = 1;
      }
      uVar9 = puVar1[0x23];
      if ((param_2 == (uVar9 >> 2 & 1)) && (uVar4 == (uVar9 >> 3 & 1))) {
        return 0;
      }
      puVar1[0x23] = (uVar4 << 1 | param_2) << 2 | uVar9 & 0xfffffff3;
      goto LAB_00433672;
    }
    break;
  case 0x201:
    if (((puVar1[0x23] & 0x70) == 0) || ((int)uVar9 < (int)puVar1[0x1a])) {
      iVar7 = FUN_00433b20(param_1,uVar9,local_2c,(int)puVar1);
      if (iVar7 < 0) {
        iVar3 = FUN_00433890(param_1,uVar9,local_2c,1);
        if (iVar3 != 0) {
          UpdateWindow(param_1);
        }
        uVar4 = puVar1[4];
        uVar8 = 0xffff;
        if ((-1 < (int)uVar4) && ((int)uVar4 < (int)puVar1[0x2c])) {
          uVar8 = (uint)(ushort)puVar1[uVar4 * 0xe + 0x55];
        }
        pHVar6 = param_1;
        uVar4 = GetDlgCtrlID(param_1);
        uVar4 = uVar4 & 0xffff | uVar8 << 0x10;
        UVar10 = 0x111;
        hWnd = GetParent(param_1);
        SendMessageA(hWnd,UVar10,uVar4,(LPARAM)pHVar6);
      }
      else {
        local_1c = param_1;
        WVar5 = GetDlgCtrlID(param_1);
        local_14 = 0x1002;
        local_c = puVar1[iVar7 * 0xe + 0x5a];
        ppHVar11 = &local_1c;
        UVar10 = 0x4e;
        local_18 = WVar5;
        local_10 = iVar7;
        pHVar6 = GetParent(param_1);
        SendMessageA(pHVar6,UVar10,WVar5,(LPARAM)ppHVar11);
      }
      puVar1[0x24] = uVar9;
      puVar1[0x25] = local_2c;
      if ((((-1 < (int)puVar1[4]) && ((int)puVar1[4] < (int)puVar1[0x2c])) && (puVar1[1] != 0)) &&
         ((iVar7 == -1 && (uVar9 = FUN_00432fa0((int)puVar1,uVar9,local_2c), puVar1[4] == uVar9))))
      {
        puVar1[0x26] = 2;
        SetCapture(param_1);
        return 0;
      }
      puVar1[0x26] = 4;
      SetCapture(param_1);
      return 0;
    }
    pt_01.y = local_2c;
    pt_01.x = uVar9;
    BVar2 = PtInRect((RECT *)(puVar1 + 0x1a),pt_01);
    if ((BVar2 == 0) || ((puVar1[0x23] & 0x10) == 0)) {
      pt_02.y = local_2c;
      pt_02.x = uVar9;
      BVar2 = PtInRect((RECT *)(puVar1 + 0x1e),pt_02);
      if (BVar2 == 0) {
        return 0;
      }
      if ((puVar1[0x23] & 0x20) == 0) {
        return 0;
      }
      iVar7 = 1;
      puVar1[0x23] = puVar1[0x23] | 8;
    }
    else {
      iVar7 = -1;
      puVar1[0x23] = puVar1[0x23] | 4;
    }
    puVar1[0x26] = 1;
    puVar1[0x23] = puVar1[0x23] >> 2 & 3 | puVar1[0x23] & 0xfffffffc;
    SetCapture(param_1);
    FUN_00433840(param_1,(int)puVar1,iVar7);
LAB_00433672:
    InvalidateRect(param_1,(RECT *)0x0,1);
    UpdateWindow(param_1);
    return 0;
  case 0x202:
    pHVar6 = GetCapture();
    if (param_1 == pHVar6) {
      ReleaseCapture();
      if (puVar1[0x26] == 1) {
        uVar9 = puVar1[0x23];
        puVar1[0x23] = uVar9 & 0xfffffffc;
        if ((uVar9 & 0xc) != 0) {
          puVar1[0x23] = uVar9 & 0xfffffff0;
          InvalidateRect(param_1,(RECT *)0x0,1);
          UpdateWindow(param_1);
          puVar1[0x26] = 0;
          return 0;
        }
      }
      else if ((puVar1[0x26] == 3) && (SetFocus((HWND)puVar1[0xf]), puVar1[10] != puVar1[4])) {
        local_30 = param_1;
        WVar5 = GetDlgCtrlID(param_1);
        local_24 = puVar1[10];
        local_20 = puVar1[4];
        ppHVar11 = &local_30;
        UVar10 = 0x4e;
        local_28 = 0x1001;
        local_2c = WVar5;
        pHVar6 = GetParent(param_1);
        SendMessageA(pHVar6,UVar10,WVar5,(LPARAM)ppHVar11);
      }
      puVar1[0x26] = 0;
      return 0;
    }
    break;
  case 0x205:
    local_24 = FUN_00432fa0((int)puVar1,uVar9,local_2c);
    if (-1 < (int)local_24) {
      local_30 = param_1;
      WVar5 = GetDlgCtrlID(param_1);
      ppHVar11 = &local_30;
      local_28 = 0x1000;
      UVar10 = 0x4e;
      local_2c = WVar5;
      pHVar6 = GetParent(param_1);
      SendMessageA(pHVar6,UVar10,WVar5,(LPARAM)ppHVar11);
    }
  }
  return 0;
}


