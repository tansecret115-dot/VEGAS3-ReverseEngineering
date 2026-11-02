/* Module: sftrkfx1.dll
   Function: FUN_5cbaff00
   Address: 5cbaff00
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5cbaff00(HWND param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  POINT pt_02;
  uint *puVar1;
  HCURSOR hCursor;
  BOOL BVar2;
  uint uVar3;
  int iVar4;
  WPARAM WVar5;
  HWND pHVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  UINT UVar10;
  HWND__ *pHVar11;
  HWND__ local_14;
  uint local_10;
  undefined4 local_c;
  uint local_8;
  uint local_4;
  
  uVar9 = (uint)(short)param_4;
  uVar7 = (uint)(short)(param_4 >> 0x10);
  local_10 = uVar7;
  puVar1 = (uint *)GetWindowLongA(param_1,-0x15);
  switch(param_2) {
  case 0x200:
    pHVar6 = GetCapture();
    if (param_1 == pHVar6) {
      uVar3 = puVar1[0x23];
      if (uVar3 != 1) {
        if (uVar3 == 2) {
          iVar8 = GetSystemMetrics(0x44);
          iVar8 = (iVar8 + 1) / 2;
          if (((-iVar8 <= (int)(uVar9 - puVar1[0x21])) && ((int)(uVar9 - puVar1[0x21]) <= iVar8)) &&
             ((-iVar8 <= (int)(uVar7 - puVar1[0x22]) && ((int)(uVar7 - puVar1[0x22]) <= iVar8)))) {
            return 0;
          }
          uVar3 = puVar1[4];
          puVar1[0xb] = uVar9;
          puVar1[10] = uVar3;
          puVar1[0xd] = uVar9;
          puVar1[0x23] = 3;
          puVar1[0xc] = uVar7;
          puVar1[0xe] = uVar7;
          puVar1[0xb] = puVar1[0xb] - puVar1[uVar3 * 0xe + 0x34];
          puVar1[0xc] = puVar1[0xc] - puVar1[uVar3 * 0xe + 0x35];
          puVar1[0xd] = puVar1[0xd] - puVar1[uVar3 * 0xe + 0x36];
          puVar1[0xe] = puVar1[0xe] - puVar1[uVar3 * 0xe + 0x37];
          hCursor = (HCURSOR)FUN_5cbdec70(0x7f86);
          SetCursor(hCursor);
        }
        else if (uVar3 != 3) {
          return 0;
        }
        FUN_5cbb04c0(param_1,puVar1,uVar9);
        return 0;
      }
      uVar7 = 0;
      param_4 = 0;
      if ((((puVar1[0x20] & 1) == 0) ||
          (pt.y = local_10, pt.x = uVar9, BVar2 = PtInRect((RECT *)(puVar1 + 0x18),pt), BVar2 == 0))
         || ((puVar1[0x20] & 0x10) == 0)) {
        if ((((puVar1[0x20] & 2) != 0) &&
            (pt_00.y = local_10, pt_00.x = uVar9, BVar2 = PtInRect((RECT *)(puVar1 + 0x1c),pt_00),
            BVar2 != 0)) && ((puVar1[0x20] & 0x20) != 0)) {
          uVar7 = 1;
        }
      }
      else {
        param_4 = 1;
      }
      uVar9 = puVar1[0x20];
      if ((param_4 == (uVar9 >> 2 & 1)) && (uVar7 == (uVar9 >> 3 & 1))) {
        return 0;
      }
      puVar1[0x20] = (uVar7 << 1 | param_4) << 2 | uVar9 & 0xfffffff3;
      goto LAB_5cbb0232;
    }
    break;
  case 0x201:
    if (((puVar1[0x20] & 0x70) == 0) || ((int)uVar9 < (int)puVar1[0x18])) {
      iVar8 = FUN_5cbb0670(param_1,uVar9,uVar7,(int)puVar1);
      if (iVar8 < 0) {
        iVar4 = FUN_5cbb0420(param_1,uVar9,uVar7,1);
        if (iVar4 != 0) {
          UpdateWindow(param_1);
        }
        uVar3 = puVar1[4];
        param_4 = 0xffff;
        if ((-1 < (int)uVar3) && ((int)uVar3 < (int)puVar1[0x29])) {
          param_4 = (uint)(ushort)puVar1[uVar3 * 0xe + 0x33];
        }
        pHVar11 = param_1;
        uVar3 = GetDlgCtrlID(param_1);
        uVar3 = uVar3 & 0xffff | param_4 << 0x10;
        UVar10 = 0x111;
      }
      else {
        local_14.unused = (int)param_1;
        uVar3 = GetDlgCtrlID(param_1);
        local_c = 0x1002;
        local_4 = puVar1[(iVar8 + 4) * 0xe];
        pHVar11 = &local_14;
        UVar10 = 0x4e;
        local_10 = uVar3;
        local_8 = iVar8;
      }
      pHVar6 = GetParent(param_1);
      SendMessageA(pHVar6,UVar10,uVar3,(LPARAM)pHVar11);
      puVar1[0x21] = uVar9;
      puVar1[0x22] = uVar7;
      if (((((int)puVar1[4] < 0) || ((int)puVar1[0x29] <= (int)puVar1[4])) || (puVar1[1] == 0)) ||
         (uVar7 = 2, iVar8 != -1)) {
        uVar7 = 4;
      }
      puVar1[0x23] = uVar7;
      SetCapture(param_1);
      return 0;
    }
    pt_01.y = uVar7;
    pt_01.x = uVar9;
    BVar2 = PtInRect((RECT *)(puVar1 + 0x18),pt_01);
    if ((BVar2 == 0) || ((puVar1[0x20] & 0x10) == 0)) {
      pt_02.y = uVar7;
      pt_02.x = uVar9;
      BVar2 = PtInRect((RECT *)(puVar1 + 0x1c),pt_02);
      if (BVar2 == 0) {
        return 0;
      }
      if ((puVar1[0x20] & 0x20) == 0) {
        return 0;
      }
      iVar8 = 1;
      puVar1[0x20] = puVar1[0x20] | 8;
    }
    else {
      iVar8 = -1;
      puVar1[0x20] = puVar1[0x20] | 4;
    }
    puVar1[0x23] = 1;
    puVar1[0x20] = puVar1[0x20] >> 2 & 3 | puVar1[0x20] & 0xfffffffc;
    SetCapture(param_1);
    FUN_5cbb03d0(param_1,(int)puVar1,iVar8);
LAB_5cbb0232:
    InvalidateRect(param_1,(RECT *)0x0,1);
    UpdateWindow(param_1);
    return 0;
  case 0x202:
    pHVar6 = GetCapture();
    if (param_1 == pHVar6) {
      ReleaseCapture();
      if (puVar1[0x23] == 1) {
        uVar7 = puVar1[0x20];
        puVar1[0x20] = uVar7 & 0xfffffffc;
        if ((uVar7 & 0xc) != 0) {
          puVar1[0x20] = uVar7 & 0xfffffff0;
          InvalidateRect(param_1,(RECT *)0x0,1);
          UpdateWindow(param_1);
          puVar1[0x23] = 0;
          return 0;
        }
      }
      else if ((puVar1[0x23] == 3) && (puVar1[10] != puVar1[4])) {
        local_14.unused = (int)param_1;
        WVar5 = GetDlgCtrlID(param_1);
        local_8 = puVar1[10];
        local_4 = puVar1[4];
        pHVar11 = &local_14;
        UVar10 = 0x4e;
        local_c = 0x1001;
        local_10 = WVar5;
        pHVar6 = GetParent(param_1);
        SendMessageA(pHVar6,UVar10,WVar5,(LPARAM)pHVar11);
      }
      puVar1[0x23] = 0;
      return 0;
    }
    break;
  case 0x205:
    local_8 = FUN_5cbafc90((int)puVar1,uVar9,uVar7);
    if (-1 < (int)local_8) {
      local_14.unused = (int)param_1;
      WVar5 = GetDlgCtrlID(param_1);
      pHVar11 = &local_14;
      local_c = 0x1000;
      UVar10 = 0x4e;
      local_10 = WVar5;
      pHVar6 = GetParent(param_1);
      SendMessageA(pHVar6,UVar10,WVar5,(LPARAM)pHVar11);
    }
  }
  return 0;
}


