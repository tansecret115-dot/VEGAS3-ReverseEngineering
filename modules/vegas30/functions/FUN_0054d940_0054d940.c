/* Module: vegas30.exe
   Function: FUN_0054d940
   Address: 0054d940
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0054d940(int param_1,int param_2)

{
  ushort uVar1;
  COLORREF *pCVar2;
  HDC hdc;
  undefined4 uVar3;
  DWORD DVar4;
  HWND pHVar5;
  int *piVar6;
  UINT_PTR UVar7;
  int iVar8;
  undefined1 *lParam;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_retaddr;
  UINT format;
  int local_1a4;
  int local_1a0;
  RECT local_19c;
  int *local_18c;
  COLORREF local_188;
  int local_184;
  undefined1 local_180;
  undefined1 uStack_17f;
  undefined1 uStack_17e;
  undefined1 uStack_17d;
  WPARAM local_17c;
  COLORREF local_178;
  WPARAM local_174;
  int local_170;
  COLORREF *local_16c;
  int local_168;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int local_154;
  int *local_150;
  int local_14c;
  int local_148;
  uint local_144;
  tagRECT local_13c;
  undefined4 local_12c;
  CHAR *pCStack_120;
  undefined4 uStack_11c;
  CHAR aCStack_10c [268];
  
  uVar3 = 0;
  if (*(int *)(param_2 + 0xc) != 0x10001) {
    if (*(int *)(param_2 + 0xc) == 1) {
      *(int *)(param_1 + 0x534) = *(int *)(param_1 + 0x534) + 1;
      uVar3 = 0x20;
      *(undefined4 *)(param_1 + 0x4dc) = 0;
    }
    return uVar3;
  }
  local_174 = *(WPARAM *)(param_2 + 0x24);
  pCVar2 = *(COLORREF **)(param_2 + 0x2c);
  local_16c = pCVar2;
  local_144 = SendMessageA(*(HWND *)(param_1 + 0x9c),0x102c,local_174,2);
  local_144 = local_144 & 2;
  if (local_144 == 0) {
    DVar4 = GetSysColor(5);
    *(DWORD *)(param_2 + 0x34) = DVar4;
    DVar4 = GetSysColor(8);
    *(DWORD *)(param_2 + 0x30) = DVar4;
  }
  else {
    DVar4 = GetSysColor(0xd);
    *(DWORD *)(param_2 + 0x34) = DVar4;
    pHVar5 = GetFocus();
    if (pHVar5 == *(HWND *)(param_1 + 0x9c)) {
      DVar4 = GetSysColor(0xe);
      *(DWORD *)(param_2 + 0x30) = DVar4;
    }
    else {
      DVar4 = GetSysColor(8);
      *(DWORD *)(param_2 + 0x30) = DVar4;
    }
  }
  piVar6 = (int *)0x0;
  if (*(int *)(param_1 + 0x84) != 0) {
    return 2;
  }
  hdc = *(HDC *)(param_2 + 0x10);
  if (&stack0x00000000 != (undefined1 *)0x1a4) {
    local_1a4 = 0;
    piVar6 = &local_1a4;
  }
  SendMessageA(*(HWND *)(param_1 + 0x9c),0x100e,local_174,(LPARAM)piVar6);
  GetClientRect(*(HWND *)(param_1 + 0x9c),&local_13c);
  if (local_19c.top <= local_13c.top) {
    return 4;
  }
  if (local_13c.bottom <= local_1a0) {
    return 4;
  }
  if (&stack0x00000000 == (undefined1 *)0x1a4) {
    piVar6 = (int *)0x0;
  }
  else {
    local_1a4 = 1;
    piVar6 = &local_1a4;
  }
  SendMessageA(*(HWND *)(param_1 + 0x9c),0x100e,local_174,(LPARAM)piVar6);
  local_1a4 = local_1a4 + 2;
  local_1a0 = local_1a0 + 2;
  local_19c.left = local_19c.left + -1;
  local_19c.top = local_19c.top + -1;
  local_174 = GetSysColor(0x10);
  DVar4 = GetSysColor(5);
  local_188 = *pCVar2;
  uStack_17f = (undefined1)(DVar4 >> 8);
  local_150 = (int *)0x0;
  local_184 = 0;
  uStack_17d = 0xff;
  uStack_17e = (undefined1)DVar4;
  local_180 = (undefined1)(DVar4 >> 0x10);
  if (pCVar2[0x125] == 0xffffffff) goto LAB_0054dde7;
  local_160 = unaff_EBP + 1;
  local_15c = unaff_EBX + 1;
  local_158 = local_1a4 + -1;
  local_154 = local_1a0 + -1;
  local_148 = FUN_0057b3b0(local_188);
  if ((*(int *)(param_1 + 0x4d8) == 0) && (local_148 == 0)) {
    KillTimer(*(HWND *)(param_1 + 0x8c),0x62);
    UVar7 = SetTimer(*(HWND *)(param_1 + 0x8c),0x62,
                     ((*(int *)(param_1 + 0x4dc) < 1) - 1 & 0xfffffc4a) + 1000,(TIMERPROC)0x0);
    if (UVar7 == 0) {
      *(undefined4 *)(param_1 + 0x4d8) = 1;
    }
    else {
      *(int *)(param_1 + 0x4dc) = *(int *)(param_1 + 0x4dc) + 1;
    }
    goto LAB_0054dde7;
  }
  iVar8 = FUN_0057b470(local_188,&local_150,local_158 - local_160,local_154 - local_15c,&local_180,
                       &local_170);
  if (-1 < iVar8) {
    local_188 = SetBkColor(hdc,DVar4);
    local_19c.top = unaff_EBX + -1;
    local_19c.left = unaff_EBP + -1;
    local_19c.right = unaff_EBP + local_170;
    local_19c.bottom = (local_19c.top - unaff_EBX) + 2 + local_1a0;
    ExtTextOutA(hdc,0,0,2,&local_19c,(LPCSTR)0x0,0,(INT *)0x0);
    local_19c.top = unaff_EBX + -1;
    local_19c.left = local_168 + unaff_EBP;
    local_19c.right = ((local_19c.left - local_168) - unaff_EBP) + 1 + local_1a4;
    local_19c.bottom = (local_19c.top - unaff_EBX) + 2 + local_1a0;
    ExtTextOutA(hdc,0,0,2,&local_19c,(LPCSTR)0x0,0,(INT *)0x0);
    local_19c.top = unaff_EBX + -1;
    local_19c.left = unaff_EBP + local_170;
    local_19c.right = (local_19c.left - local_170) + local_168;
    local_19c.bottom = unaff_EBX + (int)local_16c;
    ExtTextOutA(hdc,0,0,2,&local_19c,(LPCSTR)0x0,0,(INT *)0x0);
    local_19c.top = local_164 + unaff_EBX;
    local_19c.left = unaff_EBP + local_170;
    local_19c.right = (local_19c.left - local_170) + local_168;
    local_19c.bottom = ((local_19c.top - local_164) - unaff_EBX) + 1 + local_1a0;
    ExtTextOutA(hdc,0,0,2,&local_19c,(LPCSTR)0x0,0,(INT *)0x0);
    SetBkColor(hdc,local_188);
    if (local_150[4] == 0) {
      if (((local_150[8] != 0) || (uVar1 = *(ushort *)((int)local_150 + 0xe), uVar1 == 0)) ||
         (8 < uVar1)) goto LAB_0054dd4c;
      iVar8 = 1 << ((byte)uVar1 & 0x1f);
LAB_0054dd4f:
      local_18c = (int *)(*local_150 + iVar8 * 4 + (int)local_150);
    }
    else {
      if (local_150[4] != 3) {
LAB_0054dd4c:
        iVar8 = local_150[8];
        goto LAB_0054dd4f;
      }
      local_18c = local_150 + 0xd;
    }
    local_188 = local_150[1];
    DrawDibDraw(*(undefined4 *)(param_1 + 0x4d4),hdc,local_160,local_15c,local_188,local_150[2],
                local_150,local_18c,0,0,local_188,local_150[2],0x1200);
    local_184 = 1;
    unaff_EBP = local_170 + -1 + local_160;
    unaff_EBX = (int)local_16c + local_15c + -1;
    local_1a4 = local_168 + 1 + local_160;
    local_1a0 = local_164 + 1 + local_15c;
  }
  if (local_148 == 0) {
    *(undefined4 *)(param_1 + 0x4d8) = 0;
  }
LAB_0054dde7:
  local_18c = (int *)0x1;
  if (local_14c != 0) {
    local_18c = (int *)0x2;
    InflateRect((LPRECT)&stack0xfffffe54,1,1);
    pHVar5 = GetFocus();
    if (pHVar5 == *(HWND *)(param_1 + 0x9c)) {
      local_178 = GetSysColor(0xd);
      DVar4 = local_178;
    }
    else {
      local_178 = GetSysColor(0xf);
      DVar4 = local_178;
    }
  }
  local_178 = SetBkColor(hdc,local_178);
  if (local_184 == 0) {
    local_188 = 0;
    local_184 = 0;
    ImageList_GetIconSize(*(HIMAGELIST *)(param_1 + 200),(int *)&local_188,&local_184);
    ImageList_Draw(*(HIMAGELIST *)(param_1 + 200),*(int *)(local_174 + 0x790),hdc,
                   (int)((local_1a4 - local_188) + unaff_EBP) / 2,
                   ((unaff_EBX - local_184) + local_1a0) / 2,1);
  }
  local_19c.right = (int)local_18c + unaff_EBP;
  local_19c.bottom = local_1a0;
  local_19c.left = unaff_EBP;
  local_19c.top = unaff_EBX;
  ExtTextOutA(hdc,0,0,2,&local_19c,(LPCSTR)0x0,0,(INT *)0x0);
  local_19c.left = local_1a4 - (int)local_18c;
  local_19c.right = local_19c.left + (int)local_18c;
  local_19c.bottom = local_1a0;
  local_19c.top = unaff_EBX;
  ExtTextOutA(hdc,0,0,2,&local_19c,(LPCSTR)0x0,0,(INT *)0x0);
  local_19c.bottom = (int)local_18c + unaff_EBX;
  local_19c.right = local_1a4;
  local_19c.left = unaff_EBP;
  local_19c.top = unaff_EBX;
  ExtTextOutA(hdc,0,0,2,&local_19c,(LPCSTR)0x0,0,(INT *)0x0);
  local_19c.top = local_1a0 - (int)local_18c;
  local_19c.bottom = local_19c.top + (int)local_18c;
  local_19c.right = local_1a4;
  local_19c.left = unaff_EBP;
  ExtTextOutA(hdc,0,0,2,&local_19c,(LPCSTR)0x0,0,(INT *)0x0);
  if (&stack0x00000000 == (undefined1 *)0x1ac) {
    lParam = (undefined1 *)0x0;
  }
  else {
    unaff_EBP = 2;
    lParam = &stack0xfffffe54;
  }
  SendMessageA(*(HWND *)(param_1 + 0x9c),0x100e,local_17c,(LPARAM)lParam);
  local_174 = SetTextColor(hdc,*(COLORREF *)(unaff_retaddr + 0x30));
  SetBkColor(hdc,DVar4);
  local_19c.right = local_1a4;
  local_19c.bottom = local_1a0;
  local_19c.left = unaff_EBP;
  local_19c.top = unaff_EBX;
  ExtTextOutA(hdc,0,0,2,&local_19c,(LPCSTR)0x0,0,(INT *)0x0);
  pCStack_120 = aCStack_10c;
  local_12c = 0;
  uStack_11c = 0x104;
  SendMessageA(*(HWND *)(param_1 + 0x9c),0x102d,local_17c,(LPARAM)&local_13c.right);
  if ((*(byte *)(unaff_retaddr + 0x28) & 0x10) == 0) {
    format = 0x8011;
  }
  else {
    format = 0x2011;
  }
  DrawTextA(hdc,aCStack_10c,-1,(LPRECT)&stack0xfffffe54,format);
  SetBkColor(hdc,local_178);
  SetTextColor(hdc,local_174);
  if ((*(byte *)(unaff_retaddr + 0x28) & 0x10) != 0) {
    DrawFocusRect(hdc,(RECT *)&stack0xfffffe54);
  }
  return 4;
}


