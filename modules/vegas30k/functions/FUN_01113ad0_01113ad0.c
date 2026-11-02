/* Module: vegas30k.dll
   Function: FUN_01113ad0
   Address: 01113ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_01113ad0(HWND param_1,uint param_2,tagPAINTSTRUCT *param_3,int *param_4)

{
  bool bVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  HWND pHVar5;
  HDC hdc;
  COLORREF CVar6;
  int *piVar7;
  WPARAM wParam;
  HWND pHVar8;
  int iVar9;
  HWND pHVar10;
  undefined4 uVar11;
  LPVOID pvVar12;
  BOOL BVar13;
  HANDLE pvVar14;
  short sVar15;
  short sVar16;
  uint uVar17;
  UINT UVar18;
  HDC wParam_00;
  tagRECT local_60;
  tagRECT local_50;
  tagPAINTSTRUCT local_40;
  
  pHVar10 = param_1;
  puVar2 = (undefined4 *)GetWindowLongA(param_1,-0x15);
  param_1 = (HWND)0x0;
  if ((puVar2 == (undefined4 *)0x0) && (param_2 != 1)) goto LAB_01113b08;
  sVar16 = (short)param_4;
  sVar15 = (short)((uint)param_4 >> 0x10);
  if ((0x1ff < param_2) && (param_2 < 0x20b)) {
    if (param_2 == 0x207) {
      _DAT_012af72c = DAT_0120e5c0;
      _DAT_012af730 = (int)sVar16;
      _DAT_012af734 = (int)sVar15;
      _DAT_012af728 = pHVar10;
      _DAT_012af738 = 0;
      _DAT_012af73c = 0;
      _DAT_012af740 = 1;
      _DAT_012af744 = 0x23e7;
      _DAT_012af748 = 0x23e7;
      _DAT_012af74c = 0x23e7;
      _DAT_012af750 = 0x23e7;
      _DAT_012af754 = 1;
      _DAT_012af758 = 0;
      _SfWheel_AutoScrollInit_4(&DAT_012af728);
    }
    else if (param_2 == 0x208) {
      _SfWheel_AutoScrollTerminate_4(&DAT_012af728);
    }
    else if (param_2 == 0x20a) {
      iVar4 = _SfWheel_AutoScrollInProgress_4(&DAT_012af728);
      if (iVar4 != 0) {
        _SfWheel_AutoScrollTerminate_4(&DAT_012af728);
      }
      _SfWheel_ScrollWindow_16(pHVar10,0x23e7,((int)param_3 < 0) + '\x01',0x23e7);
      return 0x69;
    }
    local_40.rgbReserved._20_4_ = (*(code *)puVar2[0x5f])(puVar2,param_2,param_3,param_4);
    FUN_011553c0(puVar2);
    uVar3._0_1_ = local_40.rgbReserved[0x14];
    uVar3._1_1_ = local_40.rgbReserved[0x15];
    uVar3._2_1_ = local_40.rgbReserved[0x16];
    uVar3._3_1_ = local_40.rgbReserved[0x17];
    return uVar3;
  }
  if (0x30 < param_2) {
    if (param_2 < 0x114) {
      if (param_2 == 0x113) {
        if ((param_3 != (tagPAINTSTRUCT *)0x2) && (param_3 != (tagPAINTSTRUCT *)0x1)) {
          if (param_3 != (tagPAINTSTRUCT *)0x3) {
            return 0;
          }
          KillTimer((HWND)*puVar2,3);
          puVar2[9] = 0;
          FUN_011553c0(puVar2);
          return 0;
        }
        FUN_01115320(puVar2,param_3);
        return 0;
      }
      switch(param_2) {
      case 0x31:
        return puVar2[0x43];
      case 0x7b:
        BVar13 = IntersectRect(&local_60,(RECT *)(puVar2 + 0x1e),(RECT *)(puVar2 + 3));
        if (BVar13 == 0) {
          local_60.left = ((RECT *)(puVar2 + 0x1e))->left;
          local_60.top = puVar2[0x1f];
          local_60.right = puVar2[0x20];
          local_60.bottom = puVar2[0x21];
        }
        puVar2[0x48] = pHVar10;
        wParam = GetDlgCtrlID(pHVar10);
        puVar2[0x49] = wParam;
        puVar2[0x4a] = 0xf;
        puVar2[0x4b] = puVar2[0xf];
        puVar2[0x4c] = puVar2[0x10];
        puVar2[0x4d] = local_60.left + 3;
        puVar2[0x4e] = local_60.top + 3;
        SendMessageA((HWND)puVar2[0x47],0x4e,wParam,(LPARAM)(puVar2 + 0x48));
        return 0;
      case 0x83:
        uVar3 = DefWindowProcA(pHVar10,param_2,(WPARAM)param_3,(LPARAM)param_4);
        if (puVar2 == (undefined4 *)0x0) {
          return uVar3;
        }
        if ((*(byte *)(puVar2 + 0x58) & 0x20) == 0) {
          return uVar3;
        }
        *param_4 = *param_4 + -1;
        return uVar3;
      case 0x84:
        uVar3 = DefWindowProcA(pHVar10,param_2,(WPARAM)param_3,(LPARAM)param_4);
        pHVar8 = GetCapture();
        if (pHVar8 == pHVar10) {
          return uVar3;
        }
        if (uVar3 != 1) {
          return uVar3;
        }
        local_60.left = (LONG)sVar16;
        local_60.top = (LONG)sVar15;
        ScreenToClient(pHVar10,(LPPOINT)&local_60);
        if (local_60.left < (int)puVar2[0x1c]) {
          *(undefined2 *)(puVar2 + 0x5d) = 3;
        }
        else {
          iVar4 = local_60.left - puVar2[0x1c];
          uVar3 = 0;
          puVar2[0x5e] = 0;
          if ((puVar2[0x59] & 8) != 0) {
            iVar4 = iVar4 + 2;
          }
          *(undefined2 *)(puVar2 + 0x5d) = 0;
          if (local_60.top < puVar2[0x1d] + 1) {
            *(undefined2 *)(puVar2 + 0x5d) = 2;
          }
          if (puVar2[0x18] != 0) {
            do {
              if ((uVar3 == puVar2[0x19]) && ((uint)puVar2[0x19] < (uint)puVar2[0x2e])) {
                uVar3 = puVar2[0x2e];
              }
              if (0 < *(short *)(uVar3 * 0x10 + 2 + puVar2[0x70])) {
                puVar2[0x5e] = uVar3;
                iVar4 = iVar4 - *(short *)(uVar3 * 0x10 + 2 + puVar2[0x70]);
                if (iVar4 < 1) break;
                if (((*(short *)(puVar2 + 0x5d) == 2) && ((puVar2[0x59] & 8) != 0)) && (iVar4 < 5))
                {
                  *(undefined2 *)(puVar2 + 0x5d) = 1;
                  puVar2[0x60] = iVar4 + -2;
                  break;
                }
              }
              uVar3 = uVar3 + 1;
            } while (uVar3 < (uint)puVar2[0x18]);
          }
        }
        puVar2[0x5f] = &LAB_0114bae0;
        if (3 < *(ushort *)(puVar2 + 0x5d)) {
          return 1;
        }
        puVar2[0x5f] = (&PTR_LAB_01206b98)[*(ushort *)(puVar2 + 0x5d)];
        return 1;
      case 0x87:
        uVar3 = puVar2[0x46];
        uVar17 = uVar3 & 0xffff;
        if (param_3 != (tagPAINTSTRUCT *)0x1b) {
          if (param_3 != (tagPAINTSTRUCT *)0xd) {
            return uVar17;
          }
          if (puVar2[1] == 1) {
            return uVar17;
          }
          return uVar3 & 0xfffb;
        }
        pHVar8 = GetCapture();
        if (pHVar8 == pHVar10) {
          return uVar17 | 4;
        }
        if ((puVar2[0x46] & 0x10000000) == 0) {
          return uVar17;
        }
        return uVar3 & 0xfffb;
      case 0x100:
        uVar3 = FUN_01114c20(puVar2,param_3,param_4);
        return uVar3;
      case 0x101:
        return 0;
      case 0x102:
        if (puVar2[1] != 1) {
          return 0;
        }
        if ((HWND)puVar2[2] == (HWND)0x0) {
          return 0;
        }
        if (param_3 < (HWND)0x20) {
          return 0;
        }
        SendMessageA((HWND)puVar2[2],param_2,(WPARAM)param_3,(LPARAM)param_4);
        return 0;
      case 0x111:
        uVar3 = (uint)param_3 & 0xffff;
        if (uVar3 == 1) {
          FUN_0114efb0(puVar2);
          if (((uint)param_4 & 0x1000000) == 0) {
            return 0;
          }
          PostMessageA(pHVar10,0x100,0x28,(LPARAM)param_4);
          return 0;
        }
        if (uVar3 == 2) {
          FUN_0114f010(puVar2);
          return 0;
        }
        if (uVar3 != 0x62) {
          return 0;
        }
        if ((short)((uint)param_3 >> 0x10) != 0x300) {
          return 0;
        }
        puVar2[7] = 1;
        return 0;
      }
    }
    else if (param_2 < 0x305) {
      if (0x302 < param_2) {
LAB_01114a00:
        uVar11 = FUN_0114eae0(puVar2,puVar2[0xf],puVar2[0x10]);
        param_4 = (int *)(*(code *)puVar2[0x86])(puVar2 + 0x72,uVar11,0,0,param_2);
        if (param_4 == (int *)0x0) {
          return 0;
        }
LAB_01114a26:
        FUN_0114edf0(puVar2,puVar2[0xf],puVar2[0x10],param_4);
        PostMessageA(pHVar10,0x415,8,0);
        PostMessageA(pHVar10,0x415,2,0);
        return (uint)param_1;
      }
      if (param_2 < 0x234) {
        if (param_2 == 0x233) {
          pHVar10 = GetParent(pHVar10);
          if (pHVar10 == (HWND)0x0) {
            return 0;
          }
          PostMessageA(pHVar10,0x233,(WPARAM)param_3,(LPARAM)param_4);
          return 0;
        }
        if (param_2 == 0x114) {
          puVar2[0x2b] = 1;
          iVar4 = FUN_01115270(param_3,param_4,puVar2 + 0x2c);
          if (iVar4 == puVar2[0x2e]) goto LAB_011146e6;
          iVar9 = puVar2[0x32];
        }
        else {
          if (param_2 != 0x115) goto switchD_01113c66_caseD_3;
          puVar2[0x2b] = 1;
          iVar9 = FUN_01115270(param_3,param_4,puVar2 + 0x30);
          if (iVar9 == puVar2[0x32]) goto LAB_011146e6;
          iVar4 = puVar2[0x2e];
        }
        FUN_0114f7d0(puVar2,iVar9,iVar4,0);
LAB_011146e6:
        puVar2[0x2b] = 0;
        return 0;
      }
      if ((0x2ff < param_2) && (param_2 < 0x303)) {
        param_4 = (int *)0x0;
        uVar11 = FUN_0114eae0(puVar2,puVar2[0xf],puVar2[0x10]);
        pvVar12 = (LPVOID)(*(code *)puVar2[0x85])(puVar2 + 0x72,uVar11,&local_40,10,param_2);
        if (pvVar12 == (LPVOID)0x0) {
          return 0;
        }
        local_60.left = (LONG)pvVar12;
        BVar13 = OpenClipboard(pHVar10);
        if (BVar13 == 0) {
          return 0;
        }
        if (param_2 == 0x302) {
          pvVar12 = (LPVOID)0x0;
          pvVar14 = GetClipboardData((UINT)local_40.hdc);
          if (pvVar14 == (HANDLE)0x0) {
            param_3 = &local_40;
            do {
              pvVar12 = (LPVOID)((int)pvVar12 + 1);
              param_3 = (tagPAINTSTRUCT *)&param_3->fErase;
              if ((uint)local_60.left <= pvVar12) goto LAB_0111496c;
              pvVar14 = GetClipboardData(*(UINT *)param_3);
            } while (pvVar14 == (HANDLE)0x0);
          }
          local_60.left = (LONG)GlobalLock(pvVar14);
          local_60.top = GlobalSize(pvVar14);
          param_4 = (int *)(*(code *)puVar2[0x86])
                                     (puVar2 + 0x72,uVar11,
                                      local_40.rgbReserved + (int)pvVar12 * 4 + -0x20,&local_60,
                                      0x302);
          param_1 = (HWND)0x1;
          GlobalUnlock(pvVar14);
          PostMessageA(pHVar10,0x415,8,0);
        }
        else if ((param_2 == 0x300) || (param_2 == 0x301)) {
          bVar1 = true;
          param_3 = (tagPAINTSTRUCT *)(local_40.rgbReserved + (int)pvVar12 * 4 + -0x24);
          local_60.left = (LONG)pvVar12;
          do {
            pvVar14 = (HANDLE)(*(code *)puVar2[0x86])(puVar2 + 0x72,uVar11,param_3,0,param_2);
            if (pvVar14 != (HANDLE)0x0) {
              if (bVar1) {
                EmptyClipboard();
                bVar1 = false;
              }
              pvVar14 = SetClipboardData(*(UINT *)param_3,pvVar14);
              if (pvVar14 != (HANDLE)0x0) {
                param_1 = (HWND)0x1;
              }
            }
            local_60.left = local_60.left + -1;
            param_3 = (tagPAINTSTRUCT *)((int)param_3 + -4);
          } while ((LPVOID)local_60.left != (LPVOID)0x0);
          if ((param_1 != (HWND)0x0) && (param_2 == 0x300)) {
            param_4 = (int *)(*(code *)puVar2[0x86])(puVar2 + 0x72,uVar11,&local_40,0,0x303);
          }
        }
LAB_0111496c:
        CloseClipboard();
        if (param_4 == (int *)0x0) {
          return (uint)param_1;
        }
        goto LAB_01114a26;
      }
    }
    else {
      if (param_2 == 0x307) {
        uVar11 = FUN_0114eae0(puVar2,puVar2[0xf],puVar2[0x10]);
        iVar4 = (*(code *)puVar2[0x86])(puVar2 + 0x72,uVar11,0,0,0x307);
        if (iVar4 == 0) {
          return 0;
        }
        FUN_0114edf0(puVar2,puVar2[0xf],puVar2[0x10],iVar4);
        return 0;
      }
      if ((param_2 == 0x7e9) || (param_2 == 0x7f09)) goto LAB_01114a00;
    }
switchD_01113c66_caseD_3:
    if ((0x3ff < param_2) && (param_2 < 0x7e9)) {
      uVar3 = FUN_011504f0(puVar2,param_2,param_3,param_4);
      return uVar3;
    }
LAB_011149e2:
    uVar3 = DefWindowProcA(pHVar10,param_2,(WPARAM)param_3,(LPARAM)param_4);
    return uVar3;
  }
  if (param_2 == 0x30) {
    if (param_3 == (tagPAINTSTRUCT *)0x0) {
      param_3 = (tagPAINTSTRUCT *)_SfGetUIFont_4(100);
    }
    puVar2[0x43] = param_3;
    if ((HWND)puVar2[2] != (HWND)0x0) {
      SendMessageA((HWND)puVar2[2],0x30,(WPARAM)param_3,0);
    }
switchD_01113c66_caseD_15:
    puVar2[0x37] = 1;
    InvalidateRect(pHVar10,(RECT *)0x0,1);
    return 0;
  }
  switch(param_2) {
  case 1:
    puVar2 = (undefined4 *)FUN_01155a40(pHVar10,param_4);
    if (puVar2 == (undefined4 *)0x0) {
      FUN_01155c20(0);
      return 0xffffffff;
    }
    puVar2[0x47] = param_4[3];
    *puVar2 = pHVar10;
    puVar2[0x5f] = &LAB_0114bae0;
    if ((*(byte *)(puVar2 + 0x59) & 4) != 0) {
      pHVar10 = CreateWindowExA(4,"SfSpreadEdit","",0x40801080,puVar2[0x1c] + 2,puVar2[0x1d] + 1,
                                *(short *)(puVar2[0x70] + 2) + -3,puVar2[0x5b] + -3,pHVar10,
                                (HMENU)&DAT_00000062,(HINSTANCE)param_4[1],(LPVOID)0x0);
      puVar2[2] = pHVar10;
      if (pHVar10 != (HWND)0x0) {
        SendMessageA(pHVar10,0x30,puVar2[0x43],0);
        return 0;
      }
    }
    break;
  case 2:
    FUN_01155c20(puVar2);
    SetWindowLongA(pHVar10,-0x15,0);
    return 0;
  default:
    goto switchD_01113c66_caseD_3;
  case 5:
    if ((param_4 != (int *)0x0) && (param_3 != (tagPAINTSTRUCT *)0x1)) {
      FUN_0114f350(puVar2);
      iVar4 = FUN_011523e0(pHVar10,puVar2[0x70],puVar2[0x18],puVar2);
      if (iVar4 != 0) {
        InvalidateRect(pHVar10,(RECT *)0x0,1);
      }
      FUN_0114f410(puVar2);
      puVar2[0x37] = 1;
      return 0;
    }
    break;
  case 7:
    if ((*(byte *)(puVar2 + 0x59) & 4) != 0) {
      BVar13 = IsWindowVisible((HWND)puVar2[2]);
      if (BVar13 != 0) {
        SetFocus((HWND)puVar2[2]);
      }
      if (param_3 == (tagPAINTSTRUCT *)puVar2[2]) {
        return 0;
      }
    }
    FUN_0114e690(puVar2,5);
    puVar2[0x58] = puVar2[0x58] | 2;
    FUN_01152bc0(puVar2);
    return 0;
  case 8:
    if (((*(byte *)(puVar2 + 0x59) & 4) == 0) || (param_3 != (tagPAINTSTRUCT *)puVar2[2])) {
      FUN_01152bc0(puVar2);
      FUN_0114e690(puVar2,6);
      puVar2[0x58] = puVar2[0x58] & 0xfffffffd;
      return 0;
    }
    break;
  case 10:
    InvalidateRect(pHVar10,(RECT *)0x0,1);
    UpdateWindow(pHVar10);
    return 0;
  case 0xc:
    if (param_4 == (int *)0x0) {
      return 0;
    }
    goto LAB_011149e2;
  case 0xf:
    FUN_011553c0(puVar2);
    hdc = BeginPaint(pHVar10,&local_40);
    if (2 < (uint)puVar2[1]) {
      EndPaint(pHVar10,&local_40);
      return 0;
    }
    if (puVar2[0x37] != 0) {
      FUN_011520e0(puVar2);
    }
    if ((HGDIOBJ)puVar2[0x43] != (HGDIOBJ)0x0) {
      SelectObject(hdc,(HGDIOBJ)puVar2[0x43]);
    }
    SetTextColor(hdc,puVar2[0x45]);
    SetBkColor(hdc,puVar2[0x44]);
    UVar18 = 0x13f;
    wParam_00 = hdc;
    pHVar8 = pHVar10;
    pHVar5 = GetParent(pHVar10);
    SendMessageA(pHVar5,UVar18,(WPARAM)wParam_00,(LPARAM)pHVar8);
    CVar6 = GetTextColor(hdc);
    puVar2[0x45] = CVar6;
    CVar6 = GetBkColor(hdc);
    puVar2[0x44] = CVar6;
    BVar13 = IsWindowEnabled(pHVar10);
    GetClientRect(pHVar10,&local_60);
    if (local_40.rcPaint.top < (int)puVar2[0x1d]) {
      FUN_01152e20(hdc,&local_40.rcPaint,puVar2,BVar13 == 0);
    }
    if (local_40.rcPaint.left < (int)puVar2[0x1c]) {
      FUN_01154fa0(hdc,&local_40.rcPaint,puVar2,BVar13 == 0);
    }
    SetTextColor(hdc,0);
    SetBkColor(hdc,0xffffff);
    FUN_01155230(hdc,&local_60,puVar2);
    local_60.left = puVar2[0x1c];
    local_60.top = puVar2[0x1d];
    local_60.bottom = local_60.top + puVar2[0x5b];
    if ((puVar2[0x59] & 0x1000) != 0) {
      local_60.bottom = local_60.bottom + -1;
    }
    SetTextColor(hdc,puVar2[0x45]);
    SetBkColor(hdc,puVar2[0x44]);
    uVar3 = puVar2[0x32];
    if (uVar3 < (uint)puVar2[0x17]) {
      do {
        BVar13 = IntersectRect(&local_50,&local_60,&local_40.rcPaint);
        if (((BVar13 != 0) &&
            (piVar7 = (int *)(*(code *)puVar2[0x84])(puVar2 + 0x72,uVar3), piVar7 != (int *)0x0)) &&
           (*piVar7 != 0)) {
          local_50.top = local_60.top;
          local_50.bottom = local_60.bottom;
          FUN_01153820(hdc,&local_50,uVar3,puVar2);
        }
        local_60.top = local_60.top + puVar2[0x5b];
        local_60.bottom = local_60.bottom + puVar2[0x5b];
      } while ((local_60.top <= local_40.rcPaint.bottom) &&
              (uVar3 = uVar3 + 1, uVar3 < (uint)puVar2[0x17]));
    }
    iVar4 = puVar2[0x5b];
    for (; (iVar4 != 0 && (local_60.top < local_40.rcPaint.bottom));
        local_60.top = local_60.top + iVar4) {
      FUN_01154d20(hdc,&local_60,uVar3,puVar2);
      iVar4 = puVar2[0x5b];
      local_60.bottom = local_60.bottom + iVar4;
      uVar3 = uVar3 + 1;
    }
    EndPaint(pHVar10,&local_40);
    return 0;
  case 0x14:
    if ((puVar2[0x37] != 0) || (2 < (uint)puVar2[1])) {
      GetClientRect(pHVar10,&local_50);
      UVar18 = 0x133;
      pHVar8 = (HWND)param_3;
      pHVar5 = GetParent(pHVar10);
      SendMessageA(pHVar5,UVar18,(WPARAM)pHVar8,(LPARAM)pHVar10);
      FUN_01151ed0(param_3,&local_50);
    }
    return 1;
  case 0x15:
    goto switchD_01113c66_caseD_15;
  case 0x18:
    if (param_3 != (tagPAINTSTRUCT *)0x0) {
      FUN_0114e940(puVar2,puVar2[0xf],puVar2[0x10],0);
      return 0;
    }
    break;
  case 0x1f:
    (*(code *)puVar2[0x5f])(puVar2,0x100,0x1b,param_4);
    goto LAB_01113b08;
  case 0x20:
    if ((sVar16 == 1) && (param_3 == (tagPAINTSTRUCT *)pHVar10)) {
      SetCursor(*(HCURSOR *)(&DAT_012af7b0 + (uint)*(ushort *)(puVar2 + 0x5d) * 4));
      return 0;
    }
LAB_01113b08:
    uVar3 = DefWindowProcA(pHVar10,param_2,(WPARAM)param_3,(LPARAM)param_4);
    return uVar3;
  case 0x21:
    param_1 = (HWND)DefWindowProcA(pHVar10,param_2,(WPARAM)param_3,(LPARAM)param_4);
    if (((*(byte *)(puVar2 + 0x5a) & 0x10) == 0) &&
       (pHVar10 = GetActiveWindow(), (tagPAINTSTRUCT *)pHVar10 != param_3)) {
      return 2;
    }
  }
  return (uint)param_1;
}


