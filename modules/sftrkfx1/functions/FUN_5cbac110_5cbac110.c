/* Module: sftrkfx1.dll
   Function: FUN_5cbac110
   Address: 5cbac110
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5cbac110(HWND param_1,HDC param_2,byte *param_3)

{
  byte *lpString;
  uint uVar1;
  DWORD DVar2;
  UINT UVar3;
  HRGN hrgn;
  HBRUSH pHVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  INT *pIVar9;
  tagRECT local_158;
  byte *local_148;
  int local_144;
  RECT local_140;
  uint local_130;
  UINT local_12c;
  int local_128;
  int local_124;
  BOOL local_120;
  int local_11c;
  HBRUSH local_118;
  HBRUSH local_114;
  tagRECT local_110;
  RECT local_100;
  RECT local_f0;
  RECT local_e0;
  RECT local_d0;
  RECT local_c0;
  RECT local_b0;
  RECT local_a0;
  RECT local_90;
  uchar local_80 [32];
  uchar local_60 [32];
  uchar local_40 [32];
  uchar local_20 [32];
  
  local_114 = FUN_5cbdda90(0x10);
  local_118 = FUN_5cbdda90(0x14);
  GetClientRect(param_1,&local_110);
  local_128 = local_110.right;
  local_120 = IsWindowEnabled(param_1);
  if ((param_3[0x80] & 0x70) != 0) {
    if ((*param_3 & 0x40) == 0) {
      DVar2 = GetSysColor(0x10);
      SetBkColor(param_2,DVar2);
      local_140.left = *(LONG *)(param_3 + 0x60);
      local_140.top = local_110.top;
      local_140.bottom = local_110.top + 1;
      local_140.right = local_110.right;
      ExtTextOutA(param_2,0,0,2,&local_140,(LPCSTR)0x0,0,(INT *)0x0);
      DVar2 = GetSysColor(0x14);
      SetBkColor(param_2,DVar2);
      local_140.left = *(LONG *)(param_3 + 0x60);
      local_140.top = local_110.top + 1;
      local_140.bottom = local_110.top + 2;
      local_140.right = local_110.right;
      ExtTextOutA(param_2,0,0,2,&local_140,(LPCSTR)0x0,0,(INT *)0x0);
    }
    UVar3 = 2;
    if ((local_120 == 0) || ((param_3[0x80] & 0x10) == 0)) {
      UVar3 = 0x102;
    }
    if ((param_3[0x80] & 4) != 0) {
      UVar3 = UVar3 | 0x200;
    }
    DrawFrameControl(param_2,(LPRECT)(param_3 + 0x60),3,UVar3);
    UVar3 = 3;
    if ((local_120 == 0) || ((param_3[0x80] & 0x20) == 0)) {
      UVar3 = 0x103;
    }
    if ((param_3[0x80] & 8) != 0) {
      UVar3 = UVar3 | 0x200;
    }
    DrawFrameControl(param_2,(LPRECT)(param_3 + 0x70),3,UVar3);
    local_128 = ((LPRECT)(param_3 + 0x60))->left;
    hrgn = CreateRectRgn(local_110.left,local_110.top,local_128,local_110.bottom);
    SelectClipRgn(param_2,hrgn);
    DeleteObject(hrgn);
  }
  SetBkMode(param_2,1);
  SetTextAlign(param_2,6);
  if (*(HGDIOBJ *)(param_3 + 0x3c) != (HGDIOBJ)0x0) {
    SelectObject(param_2,*(HGDIOBJ *)(param_3 + 0x3c));
  }
  local_11c = 1;
  local_130 = 0;
  if (*(int *)(param_3 + 0xa4) != 0) {
    local_148 = param_3 + 0xac;
    do {
      uVar1 = local_130;
      local_158.left = *(LONG *)(local_148 + 0x24);
      local_158.top = *(LONG *)(local_148 + 0x28);
      local_158.right = *(LONG *)(local_148 + 0x2c);
      local_158.bottom = *(LONG *)(local_148 + 0x30);
      SetTextColor(param_2,0x12);
      uVar6 = *(uint *)(param_3 + 0x10);
      if ((uVar1 != uVar6) || (local_144 = 1, *(uint *)(param_3 + 0xa4) < 2)) {
        local_144 = 0;
      }
      iVar8 = 0;
      if (uVar1 == 0) {
        if (local_144 != 0) {
          iVar8 = 2;
        }
      }
      else {
        iVar8 = 6;
        if (uVar1 == uVar6) {
          iVar8 = 4;
        }
        else if (uVar1 - 1 == uVar6) {
          iVar8 = 5;
        }
      }
      if (*(HDC *)(param_3 + 0x4c) == (HDC)0x0) {
        iVar5 = *(int *)(param_3 + 0x58);
        if ((*param_3 & 0x40) == 0) {
          FUN_5cbacda0(param_1,param_2,local_158.left - iVar5,local_158.top,iVar5,
                       *(int *)(param_3 + 0x5c),iVar8,1);
        }
        else {
          FUN_5cbad650(param_2,local_158.left - iVar5,local_158.top,iVar5,*(int *)(param_3 + 0x5c),
                       iVar8,1);
        }
      }
      else {
        iVar5 = *(int *)(param_3 + 0x58);
        BitBlt(param_2,local_158.left - iVar5,local_158.top,iVar5,*(int *)(param_3 + 0x5c),
               *(HDC *)(param_3 + 0x4c),iVar5 * iVar8,0,0xcc0020);
      }
      iVar8 = 0;
      if ((*param_3 & 0x40) == 0) {
        SelectObject(param_2,local_114);
        PatBlt(param_2,local_158.left,local_158.bottom + -2,local_158.right - local_158.left,1,
               0xf00021);
        SelectObject(param_2,local_118);
        PatBlt(param_2,local_158.left,local_158.bottom + -1,local_158.right - local_158.left,1,
               0xf00021);
      }
      else {
        DVar2 = GetSysColor(6);
        SetBkColor(param_2,DVar2);
        if (local_144 == 0) {
          DVar2 = GetSysColor(0x14);
          SetBkColor(param_2,DVar2);
          local_c0.left = local_158.left;
          local_c0.top = local_158.top;
          local_c0.bottom = local_158.top + 1;
          local_c0.right = local_158.right;
          ExtTextOutA(param_2,0,0,2,&local_c0,(LPCSTR)0x0,0,(INT *)0x0);
          DVar2 = GetSysColor(0x10);
          SetBkColor(param_2,DVar2);
          local_90.top = local_158.bottom + -2;
          local_90.bottom = local_158.bottom + -1;
          local_90.left = local_158.left;
          local_90.right = local_158.right;
          ExtTextOutA(param_2,0,0,2,&local_90,(LPCSTR)0x0,0,(INT *)0x0);
          DVar2 = GetSysColor(6);
          SetBkColor(param_2,DVar2);
          local_100.left = local_158.left;
          local_100.top = local_158.bottom + -1;
          local_100.right = local_158.right;
          local_100.bottom = local_158.bottom;
          ExtTextOutA(param_2,0,0,2,&local_100,(LPCSTR)0x0,0,(INT *)0x0);
          iVar8 = 1;
        }
        else {
          DVar2 = GetSysColor(0x14);
          SetBkColor(param_2,DVar2);
          local_a0.top = local_158.bottom + -1;
          local_a0.bottom = local_158.bottom;
          local_a0.left = local_158.left;
          local_a0.right = local_158.right;
          ExtTextOutA(param_2,0,0,2,&local_a0,(LPCSTR)0x0,0,(INT *)0x0);
          DVar2 = GetSysColor(0x10);
          SetBkColor(param_2,DVar2);
          local_e0.left = local_158.left;
          local_e0.top = local_158.top + 1;
          local_e0.bottom = local_158.top + 2;
          local_e0.right = local_158.right;
          ExtTextOutA(param_2,0,0,2,&local_e0,(LPCSTR)0x0,0,(INT *)0x0);
          DVar2 = GetSysColor(6);
          SetBkColor(param_2,DVar2);
          local_b0.left = local_158.left;
          local_b0.top = local_158.top;
          local_b0.bottom = local_158.top + 1;
          local_b0.right = local_158.right;
          ExtTextOutA(param_2,0,0,2,&local_b0,(LPCSTR)0x0,0,(INT *)0x0);
          DVar2 = GetSysColor(0xf);
          SetTextColor(param_2,DVar2);
          DVar2 = GetSysColor(0x14);
          SetBkColor(param_2,DVar2);
          pHVar4 = FUN_5cbdda90(0x2711);
          SelectObject(param_2,pHVar4);
          PatBlt(param_2,local_158.left,local_158.top + 2,(local_158.right - local_158.left) + -1,
                 (local_158.bottom - local_158.top) + -4,0xf00021);
          SetTextColor(param_2,0x12);
          iVar8 = 1;
        }
      }
      DVar2 = GetSysColor(0xf);
      SetBkColor(param_2,DVar2);
      if (local_120 == 0) {
        DVar2 = GetSysColor(0x11);
        SetTextColor(param_2,DVar2);
        lpString = local_148;
        pIVar9 = (INT *)0x0;
        UVar3 = lstrlenA((LPCSTR)local_148);
        ExtTextOutA(param_2,(local_158.left + local_158.right) / 2,local_158.top,4,&local_158,
                    (LPCSTR)lpString,UVar3,pIVar9);
      }
      else {
        if ((local_144 == 0) || (local_124 = 1, *(int *)(param_3 + 0x40) == 0)) {
          local_124 = 0;
        }
        InflateRect(&local_158,-2,-2);
        if (local_124 != 0) {
          if (*(HGDIOBJ *)(param_3 + 0x40) == *(HGDIOBJ *)(param_3 + 0x3c)) {
            SetTextColor(param_2,200);
          }
          else {
            SelectObject(param_2,*(HGDIOBJ *)(param_3 + 0x40));
          }
        }
        if (*(int *)(param_3 + 8) == 0) {
          if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x40)) {
            GetTextFaceA(param_2,0x20,(LPSTR)local_60);
            _mbscpy(local_20,(uchar *)"Wingdings");
            iVar5 = lstrcmpA((LPCSTR)local_20,(LPCSTR)local_60);
            if (iVar5 == 0) {
              local_12c = GetTextColor(param_2);
              SetTextColor(param_2,0xffffff);
              FUN_5cbbf190(local_60,"%c");
              ExtTextOutA(param_2,(local_158.right + local_158.left) / 2,iVar8 + local_158.top,0,
                          &local_158,(LPCSTR)local_60,1,(INT *)0x0);
              FUN_5cbbf190(local_60,"%c");
              ExtTextOutA(param_2,(local_158.right + local_158.left) / 2,iVar8 + local_158.top,0,
                          &local_158,(LPCSTR)local_60,1,(INT *)0x0);
              SetTextColor(param_2,local_12c);
            }
          }
          pIVar9 = (INT *)0x0;
          UVar3 = lstrlenA((LPCSTR)local_148);
          iVar5 = local_158.left + local_158.right;
        }
        else {
          local_140.bottom = local_158.bottom;
          local_140.left = local_158.left + -2;
          local_140.right = (local_158.bottom - local_158.top) + local_140.left;
          local_140.top = local_158.top;
          InflateRect(&local_140,-1,-1);
          pHVar4 = FUN_5cbdda90(0x2711);
          SelectObject(param_2,pHVar4);
          PatBlt(param_2,local_140.left,local_140.top,local_140.right - local_140.left,
                 local_140.bottom - local_140.top,0xf00021);
          local_12c = SetTextAlign(param_2,0);
          if (*(int *)(local_148 + 0x34) == 0) {
            UVar3 = 0x400;
          }
          else {
            UVar3 = 0;
          }
          DrawFrameControl(param_2,&local_140,4,UVar3);
          SetTextAlign(param_2,local_12c);
          if (*(int *)(param_3 + 0x3c) == *(int *)(param_3 + 0x40)) {
            GetTextFaceA(param_2,0x20,(LPSTR)local_80);
            _mbscpy(local_40,(uchar *)"Wingdings");
            iVar5 = lstrcmpA((LPCSTR)local_40,(LPCSTR)local_80);
            if (iVar5 == 0) {
              local_12c = GetTextColor(param_2);
              SetTextColor(param_2,0xffffff);
              FUN_5cbbf190(local_80,"%c");
              ExtTextOutA(param_2,(local_140.right + 3 + local_158.right) / 2,iVar8 + local_158.top,
                          0,&local_158,(LPCSTR)local_80,1,(INT *)0x0);
              FUN_5cbbf190(local_80,"%c");
              ExtTextOutA(param_2,(local_140.right + 3 + local_158.right) / 2,iVar8 + local_158.top,
                          0,&local_158,(LPCSTR)local_80,1,(INT *)0x0);
              SetTextColor(param_2,local_12c);
            }
          }
          pIVar9 = (INT *)0x0;
          UVar3 = lstrlenA((LPCSTR)local_148);
          iVar5 = local_140.right + 3 + local_158.right;
        }
        ExtTextOutA(param_2,iVar5 / 2,iVar8 + local_158.top,4,&local_158,(LPCSTR)local_148,UVar3,
                    pIVar9);
        if (local_124 != 0) {
          SelectObject(param_2,*(HGDIOBJ *)(param_3 + 0x3c));
        }
        InflateRect(&local_158,2,2);
      }
      iVar8 = *(int *)(param_3 + 0x58);
      if (local_158.left < iVar8) {
        iVar5 = (-(uint)(local_144 != 0) & 2) + 7;
        if (*(HDC *)(param_3 + 0x4c) == (HDC)0x0) {
          if ((*param_3 & 0x40) == 0) {
            FUN_5cbacda0(param_1,param_2,0,local_158.top,iVar8,*(int *)(param_3 + 0x5c),iVar5,0);
          }
          else {
            FUN_5cbad650(param_2,0,local_158.top,iVar8,*(int *)(param_3 + 0x5c),iVar5,0);
          }
        }
        else {
          BitBlt(param_2,0,local_158.top,iVar8,*(int *)(param_3 + 0x5c),*(HDC *)(param_3 + 0x4c),
                 iVar5 * iVar8,0,0xcc0020);
        }
      }
      iVar8 = local_128;
      if ((local_11c != 0) &&
         (iVar5 = *(int *)(param_3 + 0x58), local_128 <= iVar5 + local_158.right)) {
        local_11c = 0;
        uVar6 = -(uint)(local_144 != 0) & 2;
        iVar7 = uVar6 + 8;
        if (*(int *)(param_3 + 0x4c) == 0) {
          if ((*param_3 & 0x40) == 0) {
            FUN_5cbacda0(param_1,param_2,local_128 - iVar5,local_158.top,iVar5,
                         *(int *)(param_3 + 0x5c),iVar7,0);
          }
          else {
            FUN_5cbad650(param_2,local_128 - iVar5,local_158.top,iVar5,*(int *)(param_3 + 0x5c),
                         iVar7,0);
          }
        }
        else {
          iVar7 = local_128 - local_158.left;
          if (iVar5 < local_128 - local_158.left) {
            iVar7 = iVar5;
          }
          BitBlt(param_2,local_128 - iVar7,local_158.top,iVar7,*(int *)(param_3 + 0x5c),
                 *(HDC *)(param_3 + 0x4c),(uVar6 + 9) * iVar5 - iVar7,0,0xcc0020);
        }
      }
      if (((*param_3 & 0x40) == 0) && (local_144 == 0)) {
        if ((local_130 == 0) || (local_130 - 1 != *(int *)(param_3 + 0x10))) {
          iVar8 = *(int *)(param_3 + 0x58);
        }
        else {
          iVar8 = 0;
        }
        SelectObject(param_2,local_114);
        PatBlt(param_2,local_158.left - iVar8,local_158.top,
               (iVar8 - local_158.left) + local_158.right,1,0xf00021);
        SelectObject(param_2,local_118);
        PatBlt(param_2,local_158.left - iVar8,local_158.top + 1,
               (iVar8 - local_158.left) + local_158.right,1,0xf00021);
        iVar8 = local_128;
      }
      if (*(uint *)(param_3 + 0xa4) <= local_130 + 1) {
        iVar5 = 1;
        if (local_144 != 0) {
          iVar5 = 3;
        }
        BitBlt(param_2,local_158.right,local_158.top,*(int *)(param_3 + 0x58),
               *(int *)(param_3 + 0x5c),*(HDC *)(param_3 + 0x4c),iVar5 * *(int *)(param_3 + 0x58),0,
               0xcc0020);
        if (local_144 != 0) {
          local_158.right = local_158.right + *(int *)(param_3 + 0x58);
        }
        if ((*param_3 & 0x40) == 0) {
          DVar2 = GetSysColor(0x10);
          SetBkColor(param_2,DVar2);
          local_f0.top = local_158.top;
          local_f0.bottom = local_158.top + 1;
          local_f0.left = local_158.right;
          local_f0.right = iVar8;
          ExtTextOutA(param_2,0,0,2,&local_f0,(LPCSTR)0x0,0,(INT *)0x0);
          DVar2 = GetSysColor(0x14);
          SetBkColor(param_2,DVar2);
          local_d0.top = local_158.top + 1;
          local_d0.bottom = local_158.top + 2;
          local_d0.left = local_158.right;
          local_d0.right = iVar8;
          ExtTextOutA(param_2,0,0,2,&local_d0,(LPCSTR)0x0,0,(INT *)0x0);
        }
      }
      local_130 = local_130 + 1;
      local_148 = local_148 + 0x38;
    } while (local_130 < *(uint *)(param_3 + 0xa4));
  }
  if ((param_3[0x80] & 0x70) != 0) {
    SelectClipRgn(param_2,(HRGN)0x0);
  }
  return;
}


