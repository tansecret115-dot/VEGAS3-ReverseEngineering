/* Module: vegas30.exe
   Function: FUN_004493e0
   Address: 004493e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004493e0(int param_1,HDC param_2)

{
  COLORREF CVar1;
  HGDIOBJ pvVar2;
  DWORD DVar3;
  UINT UVar4;
  LPCSTR pCVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  code *pcVar10;
  code *pcVar11;
  INT *lpDx;
  undefined4 uVar12;
  int local_178;
  tagSIZE local_170;
  tagSIZE local_168;
  tagRECT local_160;
  int local_150;
  int local_14c;
  UINT local_148;
  int local_144;
  undefined4 local_140;
  undefined4 local_13c;
  undefined4 local_138;
  undefined4 local_134;
  UINT local_130;
  undefined1 local_12c [24];
  tagRECT local_114;
  uchar local_104 [260];
  
  local_150 = *(int *)(param_1 + 0x164);
  local_140 = 0;
  local_13c = 0;
  local_14c = *(int *)(param_1 + 0x168);
  local_138 = 0;
  local_134 = 0;
  local_148 = *(UINT *)(param_1 + 0x16c);
  local_144 = *(int *)(param_1 + 0x170);
  if (*(int *)(param_1 + 0xb4) != 0) {
    local_140 = *(undefined4 *)(param_1 + 0x224);
    local_13c = *(undefined4 *)(param_1 + 0x228);
    local_138 = *(undefined4 *)(param_1 + 0x22c);
    local_134 = *(undefined4 *)(param_1 + 0x230);
  }
  GetClipBox(param_2,(LPRECT)(local_12c + 8));
  GetClientRect(*(HWND *)(param_1 + 0x84),&local_114);
  FUN_00449300(param_2,&local_150,&local_140,&local_114,local_12c + 8);
  CVar1 = _SfGetUIColor_4(0x12);
  pcVar10 = SetTextColor_exref;
  local_12c._4_4_ = SetTextColor(param_2,CVar1);
  local_130 = SetTextAlign(param_2,0);
  local_12c._0_4_ = SetBkMode(param_2,1);
  pcVar11 = SelectObject_exref;
  if ((*(byte *)(param_1 + 0xe8) & 1) != 0) {
    local_160.left = *(int *)(param_1 + 0xec) + 1;
    local_160.top = *(int *)(param_1 + 0xf0) + 1;
    local_160.right = *(int *)(param_1 + 0xf4);
    local_160.bottom = *(int *)(param_1 + 0xf8) + -1;
    OffsetRect(&local_160,0,-2);
    pvVar2 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
    pcVar11 = SelectObject_exref;
    if (pvVar2 != (HGDIOBJ)0x0) {
      pvVar2 = SelectObject(param_2,pvVar2);
      DVar3 = GetSysColor(0xf);
      CVar1 = SetTextColor(param_2,DVar3);
      DVar3 = GetSysColor(0x14);
      local_170.cx = SetBkColor(param_2,DVar3);
      PatBlt(param_2,local_160.left,local_160.top,local_160.right - local_160.left,
             local_160.bottom - local_160.top,0xf00021);
      SelectObject(param_2,pvVar2);
      SetTextColor(param_2,CVar1);
      SetBkColor(param_2,local_170.cx);
    }
    if ((*(byte *)(param_1 + 0x9c) & 0x10) != 0) {
      return;
    }
    if (*(int *)(param_1 + 0xac) != 0) {
      local_170.cy = *(int *)(param_1 + 0xf0);
      iVar9 = *(int *)(param_1 + 0xec) + 5;
      local_178 = 0;
      do {
        if (((byte)local_178 & 1) == 1) {
          uVar12 = 100;
        }
        else {
          uVar12 = 0x68;
        }
        uVar12 = _SfGetUIFont_4(uVar12);
        pvVar2 = (HGDIOBJ)(*pcVar11)(param_2,uVar12);
        if ((*(char *)(param_1 + 0x36c) == '\0') || (local_178 != 0)) {
          _mbscpy(local_104,(uchar *)(param_1 + 0x268 + local_178 * 0x104));
        }
        else {
          SfPrintF(local_104,&DAT_0061034c,param_1 + 0x268);
        }
        UVar4 = lstrlenA((LPCSTR)local_104);
        GetTextExtentPoint32A(param_2,(LPCSTR)local_104,UVar4,&local_168);
        if (UVar4 != 0) {
          ExtTextOutA(param_2,iVar9,local_170.cy,4,(RECT *)(param_1 + 0xec),(LPCSTR)local_104,UVar4,
                      (INT *)0x0);
          iVar9 = iVar9 + local_168.cx;
        }
        SelectObject(param_2,pvVar2);
        local_178 = local_178 + 1;
        pcVar10 = SetTextColor_exref;
        pcVar11 = SelectObject_exref;
      } while (local_178 < 2);
    }
  }
  if (((*(byte *)(param_1 + 0x9c) & 0x10) == 0) && (*(int *)(param_1 + 0xac) != 0)) {
    uVar12 = _SfGetUIFont_4(100);
    uVar12 = (*pcVar11)(param_2,uVar12);
    if (*(int *)(param_1 + 0xb4) != 0) {
      if ((*(byte *)(param_1 + 0x9c) & 2) == 0) {
        if ((*(byte *)(param_1 + 0x178) & 1) != 0) {
          pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5085);
          lpDx = (INT *)0x0;
          UVar4 = lstrlenA(pCVar5);
          ExtTextOutA(param_2,((RECT *)(param_1 + 0x17c))->left,*(int *)(param_1 + 0x180),4,
                      (RECT *)(param_1 + 0x17c),pCVar5,UVar4,lpDx);
        }
      }
      else {
        pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x507f);
        UVar4 = lstrlenA(pCVar5);
        GetTextExtentPoint32A(param_2,pCVar5,UVar4,&local_170);
        iVar9 = local_160.right + local_150;
        iVar6 = local_170.cx / 2;
        iVar7 = local_14c + local_160.bottom;
        iVar8 = local_170.cy / 2;
        SetTextAlign(param_2,0);
        ExtTextOutA(param_2,(iVar9 / 2 - iVar6) + -1,(iVar7 / 2 - iVar8) + -1,4,(RECT *)local_12c,
                    pCVar5,UVar4,(INT *)0x0);
        pcVar10 = SetTextColor_exref;
        pcVar11 = SelectObject_exref;
      }
    }
    (*pcVar11)(param_2,uVar12);
    (*pcVar10)(param_2,local_138);
    SetTextAlign(param_2,local_148);
    SetBkMode(param_2,local_144);
    iVar9 = FUN_004492b0(param_1);
    if ((iVar9 != 0) && ((*(byte *)(param_1 + 0xd0) & 1) != 0)) {
      FUN_004d05e0(DAT_00647630,iVar9,param_2,param_1 + 0xd4);
    }
  }
  return;
}


