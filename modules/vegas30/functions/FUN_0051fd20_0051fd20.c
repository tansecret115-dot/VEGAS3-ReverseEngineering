/* Module: vegas30.exe
   Function: FUN_0051fd20
   Address: 0051fd20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0051fd20(int param_1,HDC param_2,undefined4 param_3)

{
  HGDIOBJ pvVar1;
  COLORREF CVar2;
  DWORD DVar3;
  UINT UVar4;
  int iVar5;
  code *pcVar6;
  code *pcVar7;
  undefined4 uVar8;
  INT *lpDx;
  HGDIOBJ local_14c;
  int local_148;
  tagRECT local_144;
  int local_134;
  LPCSTR local_130;
  int local_12c;
  UINT local_128;
  COLORREF local_124;
  int local_120;
  tagSIZE local_11c;
  tagRECT local_114;
  uchar local_104 [260];
  
  GetClipBox(param_2,&local_114);
  FUN_0050aec0(param_2,param_3,&local_114);
  if ((*(byte *)(param_1 + 0xa8) & 1) != 0) {
    pvVar1 = (HGDIOBJ)_SfGetUIFont_4(100);
    pcVar7 = SelectObject_exref;
    local_14c = SelectObject(param_2,pvVar1);
    CVar2 = _SfGetUIColor_4(0x12);
    pcVar6 = SetTextColor_exref;
    local_124 = SetTextColor(param_2,CVar2);
    local_128 = SetTextAlign(param_2,0);
    local_120 = SetBkMode(param_2,1);
    iVar5 = *(int *)(param_1 + 0x98);
    if ((*(uint *)(iVar5 + 4) & 0x1000) == 0) {
      local_134 = *(int *)(*(int *)(iVar5 + 0x90) + 8);
    }
    else {
      local_134 = *(int *)(iVar5 + 0x90);
    }
    if ((*(byte *)(param_1 + 0xac) & 1) != 0) {
      local_144.left = *(int *)(param_1 + 0xb0);
      local_144.top = *(int *)(param_1 + 0xb4);
      local_144.right = *(int *)(param_1 + 0xb8);
      local_144.bottom = *(int *)(param_1 + 0xbc);
      InflateRect(&local_144,-1,-1);
      OffsetRect(&local_144,0,-2);
      pvVar1 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
      if (pvVar1 != (HGDIOBJ)0x0) {
        pvVar1 = SelectObject(param_2,pvVar1);
        DVar3 = GetSysColor(0xf);
        CVar2 = SetTextColor(param_2,DVar3);
        DVar3 = GetSysColor(0x14);
        local_130 = (LPCSTR)SetBkColor(param_2,DVar3);
        PatBlt(param_2,local_144.left,local_144.top,local_144.right - local_144.left,
               local_144.bottom - local_144.top,0xf00021);
        SelectObject(param_2,pvVar1);
        SetTextColor(param_2,CVar2);
        SetBkColor(param_2,(COLORREF)local_130);
      }
      local_12c = *(int *)(param_1 + 0xb4);
      iVar5 = *(int *)(param_1 + 0xb0) + 3;
      local_148 = 0;
      do {
        if (((byte)local_148 & 1) == 1) {
          uVar8 = 100;
        }
        else {
          uVar8 = 0x68;
        }
        uVar8 = _SfGetUIFont_4(uVar8);
        local_14c = (HGDIOBJ)(*pcVar7)(param_2,uVar8);
        if (local_148 == 0) {
          SfPrintF(local_104,&DAT_0061034c,param_1 + 0x294);
        }
        else {
          _mbscpy(local_104,(uchar *)(param_1 + 0x294 + local_148 * 0x104));
        }
        UVar4 = lstrlenA((LPCSTR)local_104);
        GetTextExtentPoint32A(param_2,(LPCSTR)local_104,UVar4,&local_11c);
        if (UVar4 != 0) {
          ExtTextOutA(param_2,iVar5,local_12c,4,(RECT *)(param_1 + 0xb0),(LPCSTR)local_104,UVar4,
                      (INT *)0x0);
          iVar5 = iVar5 + local_11c.cx;
        }
        SelectObject(param_2,local_14c);
        local_148 = local_148 + 1;
        pcVar6 = SetTextColor_exref;
        pcVar7 = SelectObject_exref;
      } while (local_148 < 2);
    }
    if ((local_134 != 0) && ((*(byte *)(param_1 + 0xc4) & 1) != 0)) {
      FUN_004d05e0(DAT_00647630,local_134,param_2,param_1 + 200);
    }
    if ((*(byte *)(param_1 + 0x10c) & 1) != 0) {
      local_130 = (LPCSTR)_SfGetString_8(DAT_00647204,0x697d);
      lpDx = (INT *)0x0;
      UVar4 = lstrlenA(local_130);
      ExtTextOutA(param_2,((RECT *)(param_1 + 0x110))->left,*(int *)(param_1 + 0x114),4,
                  (RECT *)(param_1 + 0x110),local_130,UVar4,lpDx);
    }
    (*pcVar7)(param_2,local_14c);
    (*pcVar6)(param_2,local_12c);
    SetTextAlign(param_2,local_128);
    SetBkMode(param_2,local_120);
  }
  if ((*(byte *)(param_1 + 0x154) & 1) != 0) {
    local_144.left = *(LONG *)(param_1 + 0x158);
    local_144.top = *(LONG *)(param_1 + 0x15c);
    local_144.right = *(LONG *)(param_1 + 0x160);
    local_144.bottom = *(LONG *)(param_1 + 0x164);
    InflateRect(&local_144,2,2);
    DrawEdge(param_2,&local_144,6,0xf);
  }
  return;
}


