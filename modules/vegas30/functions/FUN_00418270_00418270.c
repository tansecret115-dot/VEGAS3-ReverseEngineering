/* Module: vegas30.exe
   Function: FUN_00418270
   Address: 00418270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00418270(int param_1)

{
  LPRECT lprc;
  byte bVar1;
  bool bVar2;
  byte bVar3;
  int *piVar4;
  int iVar5;
  char *_Source;
  HWND pHVar6;
  HDWP hWinPosInfo;
  uint uVar7;
  BOOL BVar8;
  int iVar9;
  HDWP pvVar10;
  int iVar11;
  bool bVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *piVar16;
  HDWP local_c4;
  tagRECT local_c0;
  int local_b0;
  int local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  RECT local_70;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  tagRECT local_50;
  undefined1 local_40 [12];
  int local_34;
  tagRECT local_30;
  undefined1 local_20 [16];
  undefined1 local_10 [16];
  
  local_70.left = *(LONG *)(param_1 + 0x26c);
  local_70.top = *(LONG *)(param_1 + 0x270);
  local_70.right = *(LONG *)(param_1 + 0x274);
  local_70.bottom = *(LONG *)(param_1 + 0x278);
  if ((((byte)*(uint *)(param_1 + 0xc) & 3) == 3) ||
     (local_b0 = 0, (*(uint *)(param_1 + 0xc) & 0x80) != 0)) {
    local_b0 = 1;
  }
  piVar4 = (int *)_SfGetUIFontSize_4(100);
  iVar5 = _SfGetUIFontSize_4(0x68);
  local_ac = FUN_00422820(param_1);
  local_a8 = piVar4[1] + 8;
  *(LONG *)(param_1 + 0x26c) = 0;
  *(undefined4 *)(param_1 + 0x270) = 0;
  *(undefined4 *)(param_1 + 0x274) = 0;
  *(undefined4 *)(param_1 + 0x278) = 0;
  *(int *)(param_1 + 0x24c) = *(int *)(iVar5 + 4) + 5;
  *(int *)(param_1 + 0x1dc) = *piVar4 * 10;
  *(int *)(param_1 + 0x1e0) = piVar4[1] * 5;
  GetWindowRect(*(HWND *)(param_1 + 0x254),&local_50);
  GetClientRect(*(HWND *)(param_1 + 0x1c8),&local_c0);
  if (local_c0.right <= *piVar4 * 0x1e) {
    local_c0.right = *piVar4 * 0x1e;
  }
  if (local_c0.bottom <= piVar4[1] * 5) {
    local_c0.bottom = piVar4[1] * 5;
  }
  InflateRect(&local_c0,-2,0);
  *(LONG *)(param_1 + 0x1cc) = local_c0.left;
  *(LONG *)(param_1 + 0x1d0) = local_c0.top;
  *(LONG *)(param_1 + 0x1d4) = local_c0.right;
  *(LONG *)(param_1 + 0x1d8) = local_c0.bottom;
  *(LONG *)(param_1 + 0x26c) = local_c0.left;
  *(LONG *)(param_1 + 0x270) = local_c0.top;
  *(LONG *)(param_1 + 0x274) = local_c0.right;
  *(LONG *)(param_1 + 0x278) = local_c0.bottom;
  local_c4 = BeginDeferWindowPos(0x12);
  lprc = (LPRECT)(param_1 + 0x1e4);
  if (local_b0 == 0) {
    lprc->left = local_c0.left;
    *(LONG *)(param_1 + 0x1e8) = local_c0.top;
    *(LONG *)(param_1 + 0x1ec) = local_c0.right;
    iVar5 = local_c0.bottom;
  }
  else {
    lprc->left = *(LONG *)(param_1 + 0x1cc);
    *(undefined4 *)(param_1 + 0x1e8) = *(undefined4 *)(param_1 + 0x1d0);
    *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)(param_1 + 0x1d4);
    iVar5 = *(int *)(param_1 + 0x1d8);
  }
  *(int *)(param_1 + 0x1f0) = iVar5;
  InflateRect(lprc,-7,-2);
  bVar3 = 0;
  bVar2 = false;
  bVar1 = 1;
  switch(*(undefined4 *)(param_1 + 0x8c)) {
  case 5:
    bVar2 = true;
  case 3:
  case 4:
    bVar1 = 0;
  case 2:
    bVar3 = 1;
  }
  FUN_00412930(param_1,*(undefined4 *)(param_1 + 0x204),local_40,local_10,local_20,&local_90,
               &local_80,&local_60,
               -(uint)bVar2 & 0x20 | (-(uint)bVar3 & 0xfffffff0) + 0x10 |
               (-(uint)bVar1 & 0xfffffffe) + 2);
  if (*(HWND *)(param_1 + 0x204) != (HWND)0x0) {
    local_c4 = DeferWindowPos(local_c4,*(HWND *)(param_1 + 0x204),(HWND)0x0,local_90,local_8c,
                              local_88 - local_90,local_84 - local_8c,0x14);
  }
  _Source = "ERROR";
  local_c0.top = local_34 + 4;
  iVar5 = *(int *)(param_1 + 0x8c);
  if (iVar5 == 2) {
    uVar15 = 0x6e8f;
  }
  else if (iVar5 == 3) {
    uVar15 = 0x6e90;
  }
  else {
    if (iVar5 != 4) goto LAB_00418536;
    iVar5 = FUN_00568df0(*(undefined4 *)(param_1 + 0xa0));
    if (iVar5 == 0) {
      uVar15 = 0x6e92;
    }
    else {
      uVar15 = 0x6e91;
    }
  }
  _Source = (char *)_SfGetString_8(DAT_00647204,uVar15);
LAB_00418536:
  _mbscpy((uchar *)(param_1 + 0x2e8),(uchar *)_Source);
  uVar7 = local_a8;
  if (*(HWND *)(param_1 + 0x1b4) != (HWND)0x0) {
    bVar12 = *(int *)(param_1 + 0x8c) == 1;
    if (bVar12) {
      iVar5 = 0;
    }
    else {
      if (!bVar2) {
        local_88 = local_c0.right;
      }
      iVar5 = local_88 + -2;
    }
    local_c4 = DeferWindowPos(local_c4,*(HWND *)(param_1 + 0x1b4),(HWND)0x0,local_c0.left,
                              local_c0.top,iVar5,~-(uint)bVar12 & local_a8,0x1c);
    local_c0.top = local_c0.top + 6 + uVar7;
  }
  if (*(int *)(param_1 + 0x8c) == 5) {
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x1c8),1);
    if (pHVar6 != (HWND)0x0) {
      local_c4 = DeferWindowPos(local_c4,pHVar6,(HWND)0x0,local_80,local_7c,local_78 - local_80,
                                local_74 - local_7c,0x14);
    }
    pHVar6 = GetDlgItem(*(HWND *)(param_1 + 0x1c8),2);
    if (pHVar6 != (HWND)0x0) {
      local_c4 = DeferWindowPos(local_c4,pHVar6,(HWND)0x0,local_60,local_5c,local_58 - local_60,
                                local_54 - local_5c,0x14);
    }
  }
  *(LONG *)(param_1 + 0x270) = local_c0.top;
  local_c0.top = local_c0.top + 9;
  local_c0.left = local_c0.left + 7;
  local_c0.right = local_c0.right + -7;
  *(LONG *)(param_1 + 0x2c0) = local_c0.left;
  iVar5 = piVar4[1];
  *(undefined1 **)(param_1 + 0x2d8) = &DAT_0064bad8;
  *(undefined1 **)(param_1 + 0x2e4) = &LAB_00418100;
  piVar16 = &local_98;
  *(int *)(param_1 + 0x2c4) = ((local_50.bottom - iVar5) - local_50.top) / 2 + local_c0.top;
  uVar14 = 0xffffffff;
  puVar13 = &DAT_0064bad8;
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  uVar15 = _SfGetUIFont_4(100);
  _SfGetTextExtent_16(uVar15,puVar13,uVar14,piVar16);
  iVar5 = local_ac;
  local_98 = local_98 + *piVar4;
  *(int *)(param_1 + 0x2c8) = *(int *)(param_1 + 0x2c0);
  *(int *)(param_1 + 0x2cc) = *(int *)(param_1 + 0x2c4);
  *(int *)(param_1 + 0x2d4) = *(int *)(param_1 + 0x2c4) + local_94;
  *(int *)(param_1 + 0x2d0) = *(int *)(param_1 + 0x2c0) + local_98;
  iVar9 = local_c0.right - local_c0.left;
  if ((*(int *)(param_1 + 0x220) != 0) &&
     (iVar11 = *(int *)(param_1 + 0x228) - local_98, iVar11 <= iVar9)) {
    iVar9 = iVar11;
  }
  local_c0.left = local_98 + local_c0.left;
  if (local_c0.right <= local_c0.left) {
    local_c0.left = local_c0.right;
  }
  if (iVar9 + local_c0.left <= local_c0.right) {
    local_c0.right = iVar9 + local_c0.left;
  }
  if ((local_ac != 0) || (uVar15 = 0x40, *(int *)(param_1 + 0x244) == 0)) {
    uVar15 = 0x80;
  }
  hWinPosInfo = (HDWP)FUN_00417e50(local_c4,param_1,uVar15,&local_c0);
  local_c0.top = local_c0.top + 2;
  *(LONG *)(param_1 + 0x1e8) = local_c0.top;
  if (*(uint *)(param_1 + 0x224) < 2) {
    local_c4 = (HDWP)0x0;
  }
  else {
    local_c4 = *(HDWP *)(param_1 + 0x24c);
  }
  if (*(int *)(param_1 + 0x220) != 0) {
    iVar9 = *(int *)(param_1 + 0x1ec) - *(int *)(param_1 + 0x1e4);
    pvVar10 = local_c4;
    if ((int)local_c4 < 1) {
      pvVar10 = (HDWP)0x2;
    }
    if (*(int *)(param_1 + 0x228) <= iVar9) {
      iVar9 = *(int *)(param_1 + 0x228);
    }
    local_a4 = *(uint *)(param_1 + 0x22c);
    uVar7 = (*(int *)(param_1 + 0x1f0) - local_c0.top) - (int)pvVar10;
    if ((int)(((int)uVar7 < 0) - 1 & uVar7) < (int)local_a4) {
      local_a4 = uVar7 & ((int)uVar7 < 0) - 1;
    }
    *(int *)(param_1 + 0x274) = *(int *)(param_1 + 0x1e4) + 7 + iVar9;
    iVar11 = *(int *)(param_1 + 0x1e8) + 2 + local_a4;
    *(int *)(param_1 + 0x278) = iVar11;
    if (*(HWND *)(param_1 + 0x250) != (HWND)0x0) {
      hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x250),(HWND)0x0,
                                   *(int *)(param_1 + 0x26c),iVar11 + -2,
                                   (*(int *)(param_1 + 0x274) - *(int *)(param_1 + 0x26c)) + -2,
                                   (int)local_c4,0x14);
      iVar5 = local_ac;
    }
    if (*(HWND *)(param_1 + 0x238) != (HWND)0x0) {
      hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x238),*(HWND *)(param_1 + 0x210)
                                   ,*(int *)(param_1 + 0x1e4),*(int *)(param_1 + 0x1e8),iVar9,
                                   local_a4,(-(uint)(iVar5 != 0) & 0x40) + 0x40 | 0x10);
    }
    if (*(int *)(param_1 + 0x210) != 0) {
      FUN_00418120(param_1,&local_a8);
      hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x210),(HWND)0x0,local_a8,
                                   local_a4,local_a0 - local_a8,local_9c - local_a4,0x10);
      InvalidateRect(*(HWND *)(param_1 + 0x210),(RECT *)0x0,1);
    }
  }
  BVar8 = UnionRect(&local_30,(RECT *)(param_1 + 0x26c),&local_70);
  if (BVar8 != 0) {
    InvalidateRect(*(HWND *)(param_1 + 0x1c8),&local_30,1);
  }
  EndDeferWindowPos(hWinPosInfo);
  return;
}


