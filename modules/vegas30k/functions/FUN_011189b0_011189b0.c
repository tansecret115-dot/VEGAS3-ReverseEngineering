/* Module: vegas30k.dll
   Function: FUN_011189b0
   Address: 011189b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_011189b0(HWND param_1,HDC param_2,uint *param_3)

{
  DWORD DVar1;
  UINT UVar2;
  HGDIOBJ pvVar3;
  undefined1 *puVar4;
  WPARAM WVar5;
  HWND pHVar6;
  LRESULT LVar7;
  uint uVar8;
  HBRUSH h;
  code *pcVar9;
  int unaff_EBP;
  int unaff_EDI;
  HDC pHVar10;
  int iVar11;
  uint uVar12;
  HDC pHVar13;
  uint uVar14;
  int iVar15;
  HDC__ *pHVar16;
  undefined4 uVar17;
  int iVar18;
  undefined4 uVar19;
  HWND *ppHVar20;
  HDC__ *local_1c4;
  tagRECT local_1c0;
  undefined1 *local_1b0;
  HDC__ *local_1ac;
  uint *local_1a8;
  uint local_1a4;
  uint local_1a0;
  HIMAGELIST local_19c;
  HRGN local_198;
  uint local_194;
  HGDIOBJ local_190;
  BOOL local_18c;
  RECT local_188;
  tagRECT local_178;
  HGDIOBJ local_168;
  int local_164;
  tagRECT local_160;
  tagRECT local_150;
  undefined4 local_140;
  int local_13c;
  undefined4 local_138;
  int local_134;
  int local_120;
  int local_11c;
  int local_118;
  int local_114;
  LONG local_110;
  LONG local_10c;
  LONG local_108;
  LONG local_104;
  RECT local_f0;
  uint local_e0;
  HDC__ *local_dc;
  uint local_d8;
  undefined1 *local_d4;
  uint local_d0;
  HDC__ *local_cc;
  HDC__ *local_c8;
  undefined1 *local_c4;
  uint local_c0;
  undefined1 *local_bc;
  uint local_b8;
  undefined1 *local_b4;
  undefined4 local_a0;
  int local_9c;
  undefined4 local_98;
  int local_94;
  HWND local_70;
  WPARAM local_6c;
  undefined4 local_68;
  HDC local_64;
  tagRECT *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  HWND local_54;
  WPARAM local_50;
  undefined4 local_4c;
  HDC local_48;
  RECT *local_44;
  undefined4 local_40;
  undefined4 local_3c;
  DWORD local_38;
  HIMAGELIST local_34;
  HDC__ *local_30;
  HDC local_2c;
  undefined1 *local_28;
  HDC__ *local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  COLORREF local_10;
  COLORREF local_c;
  UINT local_8;
  DWORD local_4;
  
  local_168 = (HGDIOBJ)_SfGetUIBrush_4(0x10);
  local_190 = (HGDIOBJ)_SfGetUIBrush_4(0x14);
  local_19c = (HIMAGELIST)param_3[0x14];
  GetClientRect(param_1,&local_160);
  local_1a4 = local_160.right;
  local_18c = IsWindowEnabled(param_1);
  pcVar9 = ExtTextOutA_exref;
  if ((param_3[0x23] & 0x70) != 0) {
    if ((*param_3 & 0x40) == 0) {
      if ((*param_3 & 0x20) == 0) {
        local_1b0 = (undefined1 *)local_160.top;
      }
      else {
        local_1b0 = (undefined1 *)(local_160.bottom + -2);
      }
      DVar1 = GetSysColor(0x10);
      SetBkColor(param_2,DVar1);
      local_188.left = param_3[0x1a];
      local_198 = (HRGN)(local_1b0 + 1);
      local_188.top = (LONG)local_1b0;
      local_188.right = local_160.right;
      local_188.bottom = (LONG)local_198;
      ExtTextOutA(param_2,0,0,2,&local_188,(LPCSTR)0x0,0,(INT *)0x0);
      DVar1 = GetSysColor(0x14);
      SetBkColor(param_2,DVar1);
      local_188.left = param_3[0x1a];
      local_188.top = (LONG)local_198;
      local_188.bottom = (int)&local_198->unused + 1;
      local_188.right = local_160.right;
      ExtTextOutA(param_2,0,0,2,&local_188,(LPCSTR)0x0,0,(INT *)0x0);
    }
    UVar2 = 2;
    if ((local_18c == 0) || ((param_3[0x23] & 0x10) == 0)) {
      UVar2 = 0x102;
    }
    if ((param_3[0x23] & 4) != 0) {
      UVar2 = UVar2 | 0x200;
    }
    DrawFrameControl(param_2,(LPRECT)(param_3 + 0x1a),3,UVar2);
    UVar2 = 3;
    if ((local_18c == 0) || ((param_3[0x23] & 0x20) == 0)) {
      UVar2 = 0x103;
    }
    if ((param_3[0x23] & 8) != 0) {
      UVar2 = UVar2 | 0x200;
    }
    DrawFrameControl(param_2,(LPRECT)(param_3 + 0x1e),3,UVar2);
    local_1a4 = param_3[0x1a];
    local_198 = CreateRectRgn(local_160.left,local_160.top,local_1a4,local_160.bottom);
    SelectClipRgn(param_2,local_198);
    DeleteObject(local_198);
  }
  SetBkMode(param_2,1);
  SetTextAlign(param_2,6);
  if ((HGDIOBJ)param_3[0x10] != (HGDIOBJ)0x0) {
    SelectObject(param_2,(HGDIOBJ)param_3[0x10]);
  }
  local_198 = (HRGN)0xffffffff;
  local_164 = 1;
  local_194 = 0;
  if (param_3[0x2c] != 0) {
    local_1a8 = param_3 + 0x4d;
    do {
      local_1c0.left = local_1a8[9];
      local_1c0.top = local_1a8[10];
      local_1c0.right = local_1a8[0xb];
      local_1c0.bottom = local_1a8[0xc];
      if (local_1c0.left <= (int)local_1a4) {
        local_198 = (HRGN)local_1c0.right;
      }
      SetTextColor(param_2,0x12);
      uVar12 = param_3[4];
      local_1c4 = (HDC__ *)0x0;
      local_1a0 = (uint)(local_194 == uVar12);
      if (local_194 == 0) {
        if (local_1a0 != 0) {
          local_1c4 = (HDC__ *)0x2;
        }
      }
      else {
        local_1c4 = (HDC__ *)0x6;
        if (local_194 == uVar12) {
          local_1c4 = (HDC__ *)0x4;
        }
        else if (local_194 - 1 == uVar12) {
          local_1c4 = (HDC__ *)0x5;
        }
      }
      if (local_19c == (HIMAGELIST)0x0) {
        if ((HDC)param_3[0x15] == (HDC)0x0) {
          local_1b0 = (undefined1 *)param_3[0x18];
          if ((*param_3 & 0x40) == 0) {
            DVar1 = GetSysColor(0xf);
            FUN_01116c60(param_1,param_2,local_1c0.left - (int)local_1b0,local_1c0.top,local_1b0,
                         param_3[0x19],local_1c4,1,*param_3 & 0x20,DVar1);
          }
          else {
            DVar1 = GetSysColor(0xf);
            FUN_01117680(param_2,local_1c0.left - (int)local_1b0,local_1c0.top,local_1b0,
                         param_3[0x19],local_1c4,1,DVar1);
          }
        }
        else {
          uVar12 = param_3[0x18];
          BitBlt(param_2,local_1c0.left - uVar12,local_1c0.top,uVar12,param_3[0x19],
                 (HDC)param_3[0x15],uVar12 * (int)local_1c4,0,0xcc0020);
        }
      }
      else {
        ImageList_Draw(local_19c,(int)local_1c4,param_2,local_1c0.left - param_3[0x18],local_1c0.top
                       ,1);
      }
      local_1c4 = (HDC__ *)0x0;
      if ((*param_3 & 0x40) == 0) {
        if ((*param_3 & 0x20) == 0) {
          local_1b0 = (undefined1 *)local_1c0.bottom;
        }
        else {
          local_1b0 = (undefined1 *)((int)(int *)local_1c0.top + 2);
        }
        SelectObject(param_2,local_168);
        PatBlt(param_2,local_1c0.left,(int)(local_1b0 + -2),local_1c0.right - local_1c0.left,1,
               0xf00021);
        SelectObject(param_2,local_190);
        PatBlt(param_2,local_1c0.left,(int)(local_1b0 + -1),local_1c0.right - local_1c0.left,1,
               0xf00021);
      }
      else {
        DVar1 = GetSysColor(6);
        SetBkColor(param_2,DVar1);
        if (local_1a0 == 0) {
          DVar1 = GetSysColor(0x14);
          SetBkColor(param_2,DVar1);
          uVar19 = 0;
          local_e0 = local_1c0.left;
          uVar17 = 0;
          local_dc = (HDC__ *)local_1c0.top;
          local_d4 = (undefined1 *)((int)(int *)local_1c0.top + 1);
          local_d8 = local_1c0.right;
          pHVar13 = param_2;
          (*pcVar9)(param_2,0,0,2,&local_e0,0,0,0);
          DVar1 = GetSysColor(0x10);
          SetBkColor(param_2,DVar1);
          iVar18 = 0;
          local_9c = unaff_EDI + -2;
          local_94 = unaff_EDI + -1;
          uVar14 = 0;
          pHVar10 = param_2;
          local_a0 = uVar17;
          local_98 = uVar19;
          (*pcVar9)(param_2,0,0,2,&local_a0,0,0,0);
          DVar1 = GetSysColor(6);
          SetBkColor(param_2,DVar1);
          uVar12 = 0;
          iVar15 = 0;
          pvVar3 = (HGDIOBJ)0x0;
          local_188.bottom = (int)&pHVar13[-1].unused + 3;
          local_188.right = uVar14;
          local_178.left = iVar18;
          local_178.top = (LONG)pHVar13;
          (*pcVar9)(param_2,0,0,2,&local_188.right,0,0,0);
          DVar1 = GetSysColor(0xf);
          SetBkColor(param_2,DVar1);
          local_18c = iVar15 + 1;
          local_188.top = (local_18c - iVar15) + -3 + (int)pHVar10;
          local_190 = pvVar3;
          local_188.left = uVar12;
          (*pcVar9)(param_2,0,0,2,&local_190,0,0,0);
          local_1c4 = (HDC__ *)0x1;
        }
        else {
          DVar1 = GetSysColor(0x14);
          SetBkColor(param_2,DVar1);
          uVar19 = 0;
          iVar18 = 0;
          local_c0 = local_1c0.left;
          uVar17 = 0;
          local_bc = (undefined1 *)(local_1c0.bottom + -1);
          local_b8 = local_1c0.right;
          local_b4 = (undefined1 *)local_1c0.bottom;
          (*pcVar9)(param_2,0,0,2,&local_c0,0,0,0);
          DVar1 = GetSysColor(0x10);
          SetBkColor(param_2,DVar1);
          pHVar16 = (HDC__ *)0x0;
          iVar15 = 0;
          local_13c = iVar18 + 1;
          local_134 = iVar18 + 2;
          uVar14 = 0;
          pHVar13 = param_2;
          local_140 = uVar17;
          local_138 = uVar19;
          (*pcVar9)(param_2,0,0,2,&local_140,0,0,0);
          DVar1 = GetSysColor(6);
          SetBkColor(param_2,DVar1);
          uVar12 = 0;
          local_c4 = (undefined1 *)(iVar15 + 1);
          iVar11 = 0;
          pHVar10 = param_2;
          local_d0 = uVar14;
          local_cc = (HDC__ *)iVar15;
          local_c8 = pHVar16;
          (*pcVar9)(param_2,0,0,2,&local_d0,0,0,0);
          DVar1 = GetSysColor(0xf);
          SetBkColor(param_2,DVar1);
          local_160.top = (int)&pHVar13[-1].unused + 2;
          iVar18 = 0;
          iVar15 = 0;
          local_160.bottom = (int)&pHVar13[-1].unused + 3;
          local_160.left = iVar11;
          local_160.right = uVar12;
          (*pcVar9)(param_2,0,0,2,&local_160,0,0,0);
          local_120 = iVar18 + -1;
          local_11c = iVar15 + 2;
          local_114 = (local_11c - iVar15) + -4 + (int)pHVar10;
          local_118 = iVar18;
          (*pcVar9)(param_2,0,0,2,&local_120,0,0,0);
          DVar1 = GetSysColor(0xf);
          SetTextColor(param_2,DVar1);
          DVar1 = GetSysColor(0x14);
          SetBkColor(param_2,DVar1);
          pvVar3 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
          SelectObject(param_2,pvVar3);
          PatBlt(param_2,local_1c0.left,(int)((int)(int *)local_1c0.top + 2),
                 (local_1c0.right - local_1c0.left) + -1,
                 (int)(local_1c0.bottom + (-4 - local_1c0.top)),0xf00021);
          SetTextColor(param_2,0x12);
          local_1c4 = (HDC__ *)0x1;
        }
      }
      DVar1 = GetSysColor(0xf);
      SetBkColor(param_2,DVar1);
      if (local_18c == 0) {
        DVar1 = GetSysColor(0x11);
        SetTextColor(param_2,DVar1);
        uVar17 = 0;
        iVar15 = lstrlenA((LPCSTR)local_1a8);
        (*pcVar9)(param_2,(local_1c0.right + local_1c0.left) / 2,local_1c0.top,4,&local_1c0,
                  local_1a8,iVar15,uVar17);
      }
      else {
        if (((local_1a0 == 0) || ((*param_3 & 0x100) != 0)) ||
           (local_1b0 = (undefined1 *)0x1, param_3[0x11] == 0)) {
          local_1b0 = (undefined1 *)0x0;
        }
        InflateRect(&local_1c0,-2,-2);
        if (local_1b0 != (undefined1 *)0x0) {
          SelectObject(param_2,(HGDIOBJ)param_3[0x11]);
        }
        if (param_3[2] == 0) {
          uVar17 = 0;
          iVar15 = lstrlenA((LPCSTR)local_1a8);
          puVar4 = (undefined1 *)(local_1c0.right + local_1c0.left);
LAB_011192c3:
          (*pcVar9)(param_2,(int)puVar4 / 2,(int)(int *)local_1c0.top + (int)&local_1c4->unused,4,
                    &local_1c0,local_1a8,iVar15,uVar17);
        }
        else {
          local_178.bottom = local_1c0.bottom;
          local_178.left = local_1c0.left - 2;
          local_178.right = local_1c0.bottom + (local_178.left - local_1c0.top);
          local_178.top = local_1c0.top;
          InflateRect(&local_178,-1,-1);
          pvVar3 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
          SelectObject(param_2,pvVar3);
          PatBlt(param_2,local_178.left,local_178.top,local_178.right - local_178.left,
                 local_178.bottom - local_178.top,0xf00021);
          local_1ac = (HDC__ *)SetTextAlign(param_2,0);
          if (local_1a8[0xd] == 0) {
            UVar2 = 0x400;
          }
          else {
            UVar2 = 0;
          }
          DrawFrameControl(param_2,&local_178,4,UVar2);
          if ((*param_3 & 0x40) == 0) {
            SetTextAlign(param_2,(UINT)local_1ac);
            uVar17 = 0;
            iVar15 = lstrlenA((LPCSTR)local_1a8);
            puVar4 = (undefined1 *)(local_178.right + local_1c0.right + 3);
            goto LAB_011192c3;
          }
          uVar17 = 0;
          iVar15 = lstrlenA((LPCSTR)local_1a8);
          (*pcVar9)(param_2,(undefined1 *)(local_178.right + 2),
                    (int)(int *)local_1c0.top + (int)&local_1c4->unused,4,&local_1c0,local_1a8,
                    iVar15,uVar17);
          SetTextAlign(param_2,(UINT)local_1ac);
        }
        if (local_1b0 != (undefined1 *)0x0) {
          SelectObject(param_2,(HGDIOBJ)param_3[0x10]);
        }
        InflateRect(&local_1c0,2,2);
      }
      uVar12 = param_3[0x18];
      if (local_1c0.left < (int)uVar12) {
        local_1c4 = (HDC__ *)((-(uint)(local_1a0 != 0) & 2) + 7);
        if (local_19c == (HIMAGELIST)0x0) {
          if ((HDC)param_3[0x15] == (HDC)0x0) {
            if ((*param_3 & 0x40) == 0) {
              DVar1 = GetSysColor(0xf);
              FUN_01116c60(param_1,param_2,0,local_1c0.top,param_3[0x18],param_3[0x19],local_1c4,0,
                           *param_3 & 0x20,DVar1);
            }
            else {
              DVar1 = GetSysColor(0xf);
              FUN_01117680(param_2,0,local_1c0.top,param_3[0x18],param_3[0x19],local_1c4,0,DVar1);
            }
          }
          else {
            BitBlt(param_2,0,local_1c0.top,uVar12,param_3[0x19],(HDC)param_3[0x15],
                   uVar12 * (int)local_1c4,0,0xcc0020);
          }
        }
        else {
          SetRect(&local_150,0,local_1c0.top,uVar12,(int)(int *)local_1c0.top + param_3[0x19]);
          GetParent(param_1);
          local_70 = param_1;
          WVar5 = GetDlgCtrlID(param_1);
          local_60 = &local_150;
          local_5c = 0;
          local_58 = 0;
          ppHVar20 = &local_70;
          UVar2 = 0x4e;
          local_68 = 0x1003;
          local_64 = param_2;
          local_6c = WVar5;
          pHVar6 = GetParent(param_1);
          LVar7 = SendMessageA(pHVar6,UVar2,WVar5,(LPARAM)ppHVar20);
          if (LVar7 == 0) {
            DVar1 = GetSysColor(0xf);
            local_1ac = (HDC__ *)SetBkColor(param_2,DVar1);
            local_10c = local_150.top;
            local_110 = local_150.left;
            local_108 = local_150.right;
            local_104 = local_150.bottom;
            (*pcVar9)(param_2,0,0,2,&local_110,0,0,0);
            SetBkColor(param_2,(COLORREF)local_1ac);
          }
          ImageList_Draw(local_19c,(int)local_1c4,param_2,0,local_1c0.top,1);
        }
      }
      if ((local_164 != 0) &&
         (uVar12 = param_3[0x18], (int)local_1a4 <= (int)(uVar12 + local_1c0.right))) {
        local_164 = 0;
        uVar8 = -(uint)(local_1a0 != 0) & 2;
        local_1c4 = (HDC__ *)(uVar8 + 8);
        uVar14 = local_1a4 - local_1c0.left;
        if ((int)uVar12 < (int)(local_1a4 - local_1c0.left)) {
          uVar14 = uVar12;
        }
        if (local_19c == (HIMAGELIST)0x0) {
          if ((HDC)param_3[0x15] == (HDC)0x0) {
            uVar12 = param_3[0x18];
            if ((*param_3 & 0x40) == 0) {
              DVar1 = GetSysColor(0xf);
              FUN_01116c60(param_1,param_2,local_1a4 - uVar12,local_1c0.top,uVar12,param_3[0x19],
                           local_1c4,0,*param_3 & 0x20,DVar1);
              pcVar9 = ExtTextOutA_exref;
            }
            else {
              DVar1 = GetSysColor(0xf);
              FUN_01117680(param_2,local_1a4 - uVar12,local_1c0.top,uVar12,param_3[0x19],local_1c4,0
                           ,DVar1);
              pcVar9 = ExtTextOutA_exref;
            }
          }
          else {
            BitBlt(param_2,local_1a4 - uVar14,local_1c0.top,uVar14,param_3[0x19],(HDC)param_3[0x15],
                   (uVar8 + 9) * uVar12 - uVar14,0,0xcc0020);
            pcVar9 = ExtTextOutA_exref;
          }
        }
        else {
          local_1b0 = (undefined1 *)(local_1a4 - uVar14);
          SetRect(&local_188,(int)local_1b0,local_1c0.top,local_1a4,
                  (int)(int *)local_1c0.top + param_3[0x19]);
          GetParent(param_1);
          local_54 = param_1;
          WVar5 = GetDlgCtrlID(param_1);
          ppHVar20 = &local_54;
          local_44 = &local_188;
          UVar2 = 0x4e;
          local_4c = 0x1003;
          local_48 = param_2;
          local_40 = 0;
          local_3c = 0;
          local_50 = WVar5;
          pHVar6 = GetParent(param_1);
          LVar7 = SendMessageA(pHVar6,UVar2,WVar5,(LPARAM)ppHVar20);
          if (LVar7 == 0) {
            DVar1 = GetSysColor(0xf);
            local_1ac = (HDC__ *)SetBkColor(param_2,DVar1);
            local_f0.top = local_188.top;
            local_f0.left = local_188.left;
            local_f0.right = local_188.right;
            local_f0.bottom = local_188.bottom;
            ExtTextOutA(param_2,0,0,2,&local_f0,(LPCSTR)0x0,0,(INT *)0x0);
            SetBkColor(param_2,(COLORREF)local_1ac);
          }
          local_34 = local_19c;
          local_24 = (HDC__ *)local_1c0.top;
          local_28 = local_1b0;
          local_38 = 0x38;
          local_20 = (uVar14 - local_1a4) + 2 + (int)local_198;
          local_2c = param_2;
          local_14 = 0;
          local_20 = ((int)local_20 < 0) - 1 & local_20;
          local_1c = param_3[0x19];
          local_10 = 0xffffffff;
          local_c = 0xffffffff;
          local_18 = param_3[0x18] - uVar14;
          local_8 = 1;
          local_4 = 0;
          local_30 = local_1c4;
          ImageList_DrawIndirect((IMAGELISTDRAWPARAMS *)&local_38);
          pcVar9 = ExtTextOutA_exref;
        }
      }
      if (((*param_3 & 0x40) == 0) && (local_1a0 == 0)) {
        if ((local_194 == 0) || (local_194 - 1 != param_3[4])) {
          local_1b0 = (undefined1 *)param_3[0x18];
        }
        else {
          local_1b0 = (undefined1 *)0x0;
        }
        if ((*param_3 & 0x20) == 0) {
          local_1c4 = (HDC__ *)local_1c0.top;
        }
        else {
          local_1c4 = (HDC__ *)(local_1c0.bottom + -2);
        }
        SelectObject(param_2,local_168);
        PatBlt(param_2,local_1c0.left - (int)local_1b0,(int)local_1c4,
               (int)(local_1b0 + (local_1c0.right - local_1c0.left)),1,0xf00021);
        SelectObject(param_2,local_190);
        PatBlt(param_2,local_1c0.left - (int)local_1b0,(int)((int)&local_1c4->unused + 1),
               (int)(local_1b0 + (local_1c0.right - local_1c0.left)),1,0xf00021);
      }
      if (param_3[0x2c] <= local_194 + 1) {
        iVar15 = 1;
        local_1ac = (HDC__ *)0x1;
        if (local_1a0 != 0) {
          iVar15 = 3;
          local_1ac = (HDC__ *)0x3;
        }
        if (local_19c == (HIMAGELIST)0x0) {
          if ((HDC)param_3[0x15] != (HDC)0x0) {
            BitBlt(param_2,local_1c0.right,local_1c0.top,param_3[0x18],param_3[0x19],
                   (HDC)param_3[0x15],param_3[0x18] * (int)local_1ac,0,0xcc0020);
          }
        }
        else {
          ImageList_Draw(local_19c,iVar15,param_2,local_1c0.right,local_1c0.top,1);
        }
        if (local_1a0 != 0) {
          local_1c0.right = local_1c0.right + param_3[0x18];
        }
        if ((*param_3 & 0x40) == 0) {
          if ((*param_3 & 0x20) == 0) {
            local_1ac = (HDC__ *)local_1c0.top;
          }
          else {
            local_1ac = (HDC__ *)(local_1c0.bottom + -2);
          }
          DVar1 = GetSysColor(0x10);
          SetBkColor(param_2,DVar1);
          uVar12 = 0;
          local_cc = local_1ac;
          local_1ac = (HDC__ *)((int)&local_1ac->unused + 1);
          local_d0 = local_1c0.right;
          local_c8 = (HDC__ *)local_1a4;
          local_c4 = (undefined1 *)local_1ac;
          (*pcVar9)(param_2,0,0,2,&local_d0,0,0,0);
          DVar1 = GetSysColor(0x14);
          SetBkColor(param_2,DVar1);
          local_c4 = (undefined1 *)(unaff_EBP + 1);
          local_c8 = local_1c4;
          local_d0 = uVar12;
          local_cc = (HDC__ *)unaff_EBP;
          (*pcVar9)(param_2,0,0,2,&local_d0,0,0,0);
        }
      }
      local_194 = local_194 + 1;
      local_1a8 = local_1a8 + 0xe;
    } while (local_194 < param_3[0x2c]);
  }
  if (param_3[0x22] != 0) {
    h = CreateSolidBrush(param_3[0x22]);
    local_190 = SelectObject(param_2,h);
    UVar2 = 1;
    DVar1 = GetSysColor(0xf);
    ExtFloodFill(param_2,0,4,DVar1,UVar2);
    SelectObject(param_2,local_190);
    DeleteObject(h);
  }
  if ((param_3[0x23] & 0x70) != 0) {
    SelectClipRgn(param_2,(HRGN)0x0);
  }
  return;
}


