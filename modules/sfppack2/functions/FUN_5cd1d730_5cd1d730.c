/* Module: sfppack2.dll
   Function: FUN_5cd1d730
   Address: 5cd1d730
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_5cd1d730(uint *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  HDC pHVar4;
  HBITMAP pHVar5;
  HBRUSH pHVar6;
  DWORD DVar7;
  DWORD DVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  LPRECT lprc;
  code *pcVar15;
  uint local_98;
  HGDIOBJ local_94;
  undefined1 local_88;
  HBRUSH local_84;
  uint local_80;
  RECT local_7c;
  undefined4 local_6c;
  undefined1 local_68;
  undefined3 uStack_67;
  HDC local_64;
  uint local_60;
  DWORD local_5c;
  byte local_58;
  undefined3 uStack_57;
  undefined1 local_54;
  undefined3 uStack_53;
  undefined1 local_50;
  undefined3 uStack_4f;
  byte local_4c;
  undefined3 uStack_4b;
  byte local_48;
  undefined3 uStack_47;
  undefined4 local_44;
  undefined1 local_40;
  undefined3 uStack_3f;
  tagRECT local_3c;
  float local_2c;
  HGDIOBJ local_28;
  HGDIOBJ local_24;
  LPRECT local_20;
  float local_1c;
  tagRECT local_18;
  uint local_8;
  undefined4 uStack_4;
  
  if ((HGDIOBJ)param_1[0x44] != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)param_1[0x44]);
  }
  uVar10 = param_1[3];
  if ((((uVar10 & 0x80) != 0) && ((uVar10 & 0x20) != 0)) && ((uVar10 & 0x40) != 0)) {
    param_1[0x44] = 0;
    return;
  }
  local_7c.left = param_1[0xf];
  local_7c.top = param_1[0x10];
  uVar9 = param_1[0x11];
  uVar13 = param_1[0x12];
  if ((uVar10 & 8) == 0) {
    uVar9 = uVar9 + param_1[0x20] * param_1[9];
  }
  else {
    uVar13 = uVar13 + param_1[0x20] * param_1[9];
  }
  local_7c.bottom = uVar13 + 1;
  iVar12 = -local_7c.left;
  local_18.left = param_1[0x18];
  local_18.top = param_1[0x19];
  local_18.right = param_1[0x1a];
  local_18.bottom = param_1[0x1b];
  local_3c.left = param_1[0xf];
  local_3c.top = param_1[0x10];
  iVar14 = -local_7c.top;
  local_3c.right = param_1[0x11];
  local_3c.bottom = param_1[0x12];
  OffsetRect(&local_18,iVar12,iVar14);
  OffsetRect(&local_3c,iVar12,iVar14);
  pHVar4 = GetDC((HWND)0x0);
  iVar14 = local_7c.bottom - local_7c.top;
  iVar12 = (uVar9 + 1) - local_7c.left;
  pHVar5 = CreateCompatibleBitmap(pHVar4,iVar12,iVar14);
  param_1[0x44] = (uint)pHVar5;
  ReleaseDC((HWND)0x0,pHVar4);
  pHVar4 = DAT_5cd67d84;
  local_64 = DAT_5cd67d84;
  local_24 = SelectObject(DAT_5cd67d84,(HGDIOBJ)param_1[0x44]);
  pHVar6 = FUN_5cd2cb10(0xf);
  if ((param_1[3] & 0x100) == 0) {
    FillRect(pHVar4,&local_3c,pHVar6);
  }
  else {
    local_7c.left = 0;
    local_7c.top = 0;
    local_7c.right = iVar12;
    local_7c.bottom = iVar14;
    ExtTextOutA(pHVar4,0,0,2,&local_7c,(LPCSTR)0x0,0,(INT *)0x0);
  }
  FUN_5cd1c0b0(param_1,pHVar4,&local_18.left,&local_3c.left,pHVar6);
  FUN_5cd1b520(param_1,pHVar4,&local_18.left);
  if ((param_1[3] & 0x81) != 0) goto LAB_5cd1dff1;
  lprc = (LPRECT)(param_1 + 0x33);
  uVar10 = (uint)(((byte)*param_1 & 0x30) != 0x10);
  if ((param_1[3] & 0x10) == 0) {
    lprc->left = param_1[0x2e];
    param_1[0x34] = param_1[0x2f];
    param_1[0x35] = param_1[0x30];
    param_1[0x36] = param_1[0x31];
    local_20 = lprc;
    if ((param_1[3] & 8) == 0) {
      OffsetRect(lprc,local_3c.right - lprc->left,-param_1[0x34]);
      uVar9 = param_1[0x32];
      uVar13 = param_1[0x34];
    }
    else {
      OffsetRect(lprc,-lprc->left,local_3c.bottom - param_1[0x34]);
      uVar9 = param_1[0x32];
      uVar13 = lprc->left;
    }
    iVar12 = uVar9 - uVar13;
    if ((param_1[3] & 0x800) != 0) {
      FUN_5cd19550((int)param_1,pHVar4);
      goto LAB_5cd1dff1;
    }
    iVar14 = param_1[0x35] - lprc->left;
    iVar11 = param_1[0x36] - param_1[0x34];
    if ((param_1[3] & 0x400) != 0) {
      DVar7 = GetSysColor(0x10);
      local_5c = DVar7;
      DVar8 = GetSysColor(0x14);
      _local_4c = CONCAT31(uStack_4b,(byte)DVar7 >> 1);
      bVar1 = (byte)(DVar7 >> 8);
      _local_58 = CONCAT31(uStack_57,bVar1);
      _local_48 = CONCAT31(uStack_47,bVar1 >> 1);
      local_88 = (undefined1)(DVar7 >> 0x10);
      _local_54 = CONCAT31(uStack_53,local_88);
      local_60 = CONCAT31(local_60._1_3_,(char)(DVar7 >> 0x11)) & 0xffffff7f;
      _local_50 = CONCAT31(uStack_4f,(char)((int)((DVar8 & 0xff) + 0xff) >> 1));
      _local_68 = CONCAT31(uStack_67,(char)((int)((DVar8 >> 8 & 0xff) + 0xff) >> 1));
      _local_40 = CONCAT31(uStack_3f,(char)((int)((DVar8 >> 0x10 & 0xff) + 0xff) >> 1));
      pHVar6 = FUN_5cd2cb10(6);
      local_28 = SelectObject(pHVar4,pHVar6);
      PatBlt(pHVar4,lprc->left + 1,param_1[0x34],iVar14 + -2,1,0xf00021);
      PatBlt(pHVar4,lprc->left + 1,param_1[0x36] - 1,iVar14 + -2,1,0xf00021);
      PatBlt(pHVar4,lprc->left,param_1[0x34] + 1,1,iVar11 + -2,0xf00021);
      PatBlt(pHVar4,param_1[0x35] - 1,param_1[0x34] + 1,1,iVar11 + -2,0xf00021);
      local_84 = CreateSolidBrush(0);
      pcVar15 = SelectObject_exref;
      local_94 = SelectObject(pHVar4,local_84);
      uVar10 = iVar11 - 2;
      local_98 = 0;
      if (uVar10 != 0) {
        local_2c = (float)uVar10;
        do {
          uStack_4 = 0;
          local_80 = 1;
          local_8 = local_98;
          if (iVar14 != 1 && iVar14 != 2) {
            local_1c = (float)iVar14;
            do {
              local_7c.top = 0;
              local_7c.left = local_80;
              if ((((local_98 < 3) || (iVar11 - 5U <= local_98)) ||
                  ((local_80 < 3 || (iVar14 - 4U < local_80)))) &&
                 (((local_98 != 2 && (local_98 != iVar11 - 5U)) ||
                  ((local_80 < 4 || (iVar14 - 4U <= local_80)))))) {
                ftol();
                local_6c = ftol();
                local_44 = ftol();
                ftol();
                ftol();
              }
              else {
                ftol();
                local_6c = ftol();
                local_44 = ftol();
                ftol();
                ftol();
              }
              ftol();
              uVar9 = ftol();
              uVar2 = ftol();
              uVar3 = ftol();
              pHVar4 = local_64;
              SelectObject(local_64,local_94);
              DeleteObject(local_84);
              local_84 = CreateSolidBrush((uint)CONCAT11(uVar3,uVar2) << 8 | uVar9 & 0xff);
              local_94 = SelectObject(pHVar4,local_84);
              PatBlt(pHVar4,local_20->left + local_80,local_20->top + 1 + local_98,1,1,0xf00021);
              local_80 = local_80 + 1;
            } while (local_80 < iVar14 - 1U);
          }
          local_98 = local_98 + 1;
          pcVar15 = SelectObject_exref;
        } while (local_98 < uVar10);
      }
      (*pcVar15)(pHVar4,local_94);
      DeleteObject(local_84);
      (*pcVar15)(pHVar4,local_3c.bottom);
      goto LAB_5cd1dff1;
    }
    iVar14 = 0;
  }
  else {
    lprc->left = param_1[0x2e];
    param_1[0x34] = param_1[0x2f];
    param_1[0x35] = param_1[0x30];
    param_1[0x36] = param_1[0x31];
    if ((param_1[3] & 8) == 0) {
      iVar11 = param_1[0x32] - param_1[0x34];
      iVar14 = -param_1[0x34];
      iVar12 = local_3c.right - lprc->left;
    }
    else {
      iVar11 = param_1[0x32] - lprc->left;
      iVar14 = local_3c.bottom - param_1[0x34];
      iVar12 = -lprc->left;
    }
    OffsetRect(lprc,iVar12,iVar14);
    FUN_5cd1afb0((int)param_1,pHVar4,(int *)lprc,iVar11,1,1,uVar10);
    lprc = (LPRECT)(param_1 + 0x3c);
    lprc->left = param_1[0x37];
    param_1[0x3d] = param_1[0x38];
    param_1[0x3e] = param_1[0x39];
    param_1[0x3f] = param_1[0x3a];
    if ((param_1[3] & 8) == 0) {
      iVar12 = param_1[0x3b] - param_1[0x3d];
      iVar14 = -param_1[0x3d];
      iVar11 = param_1[0x35] - lprc->left;
    }
    else {
      iVar14 = param_1[0x36] - param_1[0x3d];
      iVar12 = param_1[0x3b] - lprc->left;
      iVar11 = -lprc->left;
    }
    OffsetRect(lprc,iVar11,iVar14);
    iVar14 = 1;
  }
  FUN_5cd1afb0((int)param_1,pHVar4,&lprc->left,iVar12,iVar14,0,uVar10);
LAB_5cd1dff1:
  SelectObject(pHVar4,local_24);
  return;
}


