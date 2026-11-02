/* Module: sfnetmedia.dll
   Function: FUN_0040bc50
   Address: 0040bc50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __fastcall FUN_0040bc50(int param_1)

{
  SHORT SVar1;
  HWND pHVar2;
  int *piVar3;
  HIMAGELIST himl;
  LRESULT LVar4;
  int iVar5;
  int iVar6;
  uchar *puVar7;
  HICON hicon;
  HBITMAP hbmImage;
  HWND hWndTo;
  undefined4 *puVar8;
  int iVar9;
  uint uVar10;
  DWORD DVar11;
  LPSTR lpString;
  UINT_PTR UVar12;
  WPARAM WVar13;
  BYTE *pBVar14;
  uint uVar15;
  tagRECT *lpPoints;
  LPCSTR pCVar16;
  uint uVar17;
  WINDOWPLACEMENT *pWVar18;
  UINT UVar19;
  uint uVar20;
  uint uVar21;
  int local_2c0;
  int local_2b8;
  int local_2ac;
  tagRECT local_2a8;
  undefined4 local_298;
  undefined4 local_294;
  int local_290;
  LPSTR local_28c;
  undefined4 local_284;
  undefined4 local_27c;
  tagRECT local_278;
  undefined4 local_268 [3];
  int local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  int local_23c;
  int local_238;
  tagRECT local_230;
  undefined1 local_220 [12];
  undefined4 local_214;
  undefined4 local_210;
  WINDOWPLACEMENT local_1f8;
  uchar local_1cc [200];
  BYTE local_104 [260];
  
  FUN_0041c3e0(*(HWND *)(param_1 + 4),(HWND)0x0,(int *)0x0,0x8001);
  pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f5);
  *(HWND *)(param_1 + 0x48) = pHVar2;
  if (*(int *)(param_1 + 0xb8) != 0) {
    SendMessageA(*(HWND *)(param_1 + 4),0x80,0,*(int *)(param_1 + 0xb8));
  }
  *(undefined4 *)(param_1 + 0x4c) = 0;
  if (&stack0x00000000 == (undefined1 *)0x2b8) {
    local_2b8 = -0x7fffbffd;
  }
  else {
    piVar3 = (int *)SendMessageA(*(HWND *)(param_1 + 0x48),DAT_004414d0,0,0);
    local_2b8 = (-(uint)(piVar3 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
    if (-1 < local_2b8) {
      local_2b8 = (**(code **)*piVar3)();
    }
    if (piVar3 != (int *)0x0) {
      (**(code **)(*piVar3 + 8))();
    }
  }
  if (-1 < local_2b8) {
    FUN_0040fd20(*(undefined4 **)(param_1 + 0x4c));
    if (&stack0x00000000 == (undefined1 *)0x2b8) {
      local_2b8 = -0x7fffbffd;
    }
    else {
      piVar3 = (int *)SendMessageA(*(HWND *)(param_1 + 0x48),DAT_004414d4,0,0);
      local_2b8 = (-(uint)(piVar3 != (int *)0x0) & 0x7fffbffb) + 0x80004005;
      if (-1 < local_2b8) {
        local_2b8 = (**(code **)*piVar3)();
      }
      if (piVar3 != (int *)0x0) {
        (**(code **)(*piVar3 + 8))();
      }
    }
    if (-1 < local_2b8) {
      SVar1 = GetKeyState(0x10);
      if ((-1 < SVar1) || (SVar1 = GetKeyState(0x11), -1 < SVar1)) {
        local_2b8 = (**(code **)(iRam00000000 + 0x74))();
      }
      (**(code **)(iRam00000000 + 8))();
    }
    if (*(int *)(param_1 + 0x70) == 0) {
      local_2b8 = -0x7fffbffb;
    }
    else {
      iVar9 = **(int **)(param_1 + 0x74);
      himl = ImageList_Create(0x30,0x30,0xff,1,1);
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x3e9);
      local_2ac = 0;
      local_2c0 = 0;
      if (0 < iVar9) {
        do {
          iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x74) + 8) + local_2c0 * 4);
          LVar4 = SendMessageA(pHVar2,0x1011,0,*(LPARAM *)(iVar5 + 8));
          if (local_2ac <= LVar4) {
            local_2ac = SendMessageA(pHVar2,0x1011,0,*(LPARAM *)(iVar5 + 8));
          }
          local_2c0 = local_2c0 + 1;
        } while (local_2c0 < iVar9);
      }
      iVar5 = GetSystemMetrics(0x20);
      iVar6 = GetSystemMetrics(2);
      DAT_0043f3c8 = local_2ac + iVar6 + 4 + iVar5 * 4;
      SendMessageA(pHVar2,0x1035,0,DAT_0043f3c8 & 0xffff | 0x480000);
      local_2c0 = 0;
      if (0 < iVar9) {
        do {
          iVar5 = *(int *)(*(int *)(*(int *)(param_1 + 0x74) + 8) + local_2c0 * 4);
          local_248 = 0xffffffff;
          local_24c = 0;
          local_258 = 0xf;
          local_244 = *(undefined4 *)(iVar5 + 8);
          local_250 = 0;
          local_254 = 0x7fff;
          local_23c = local_2c0;
          local_238 = iVar5;
          SendMessageA(pHVar2,0x1007,0,(LPARAM)&local_258);
          _mbscpy(local_1cc,*(uchar **)(iVar5 + 0xc));
          _mbslwr(local_1cc);
          puVar7 = _mbsstr(local_1cc,".ico");
          if (puVar7 == (uchar *)0x0) {
            puVar7 = _mbsstr(local_1cc,".bmp");
            if ((puVar7 != (uchar *)0x0) &&
               (hbmImage = (HBITMAP)FUN_00418050((undefined4 *)0x0,(LPCSTR)local_1cc,0,0x30,0x30,
                                                 0x2010), hbmImage != (HBITMAP)0x0)) {
              ImageList_AddMasked(himl,hbmImage,0xff00ff);
              DeleteObject(hbmImage);
            }
          }
          else {
            hicon = (HICON)FUN_00418050((undefined4 *)0x0,(LPCSTR)local_1cc,1,0x30,0x30,0x2010);
            if (hicon != (HICON)0x0) {
              ImageList_ReplaceIcon(himl,-1,hicon);
              DestroyIcon(hicon);
            }
          }
          local_2c0 = local_2c0 + 1;
        } while (local_2c0 < iVar9);
      }
      SendMessageA(pHVar2,0x1003,0,(LPARAM)himl);
      WVar13 = 0;
      iVar5 = DAT_0043f3c8 - 0x30;
      iVar6 = 4;
      if (0 < iVar9) {
        do {
          SendMessageA(pHVar2,0x100f,WVar13,iVar6 << 0x10 | iVar5 / 2 & 0xffffU);
          SendMessageA(pHVar2,0x102a,WVar13,0);
          if (&stack0x00000000 == (undefined1 *)0x268) {
            puVar8 = (undefined4 *)0x0;
          }
          else {
            local_268[0] = 0;
            puVar8 = local_268;
          }
          SendMessageA(pHVar2,0x100e,WVar13,(LPARAM)puVar8);
          WVar13 = WVar13 + 1;
          iVar6 = local_25c + 4;
        } while ((int)WVar13 < iVar9);
      }
      local_210 = 3;
      local_214 = 3;
      SendMessageA(pHVar2,0x102b,*(WPARAM *)(param_1 + 0x78),(LPARAM)local_220);
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x1f5);
      GetClientRect(pHVar2,&local_278);
      lpPoints = &local_278;
      UVar19 = 2;
      hWndTo = GetParent(pHVar2);
      MapWindowPoints(pHVar2,hWndTo,(LPPOINT)lpPoints,UVar19);
      MoveWindow(*(HWND *)(param_1 + 0x48),local_278.left,local_278.top,
                 local_278.right - local_278.left,local_278.bottom - local_278.top,1);
      ShowWindow(pHVar2,0);
      FUN_0040b4b0(param_1);
      uVar20 = 0x6b;
      *(undefined4 *)(param_1 + 0xa0) = 0;
      puVar8 = (undefined4 *)FUN_004012d0();
      puVar7 = (uchar *)FUN_00418380(puVar8,uVar20);
      FUN_004170b0(*(HWND *)(param_1 + 4),puVar7);
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x25a);
      uVar20 = 0x3ed;
      do {
        SVar1 = GetKeyState(0x11);
        if ((SVar1 < 0) && (SVar1 = GetKeyState(0x10), SVar1 < 0)) break;
        iVar5 = 1;
        pCVar16 = (LPCSTR)0x0;
        pBVar14 = local_104;
        uVar15 = 0x104;
        uVar10 = uVar20;
        iVar9 = FUN_00401310();
        iVar9 = FUN_0041a4a0(iVar9,uVar10,pBVar14,uVar15,pCVar16,iVar5);
        if (iVar9 == 0) break;
        LVar4 = SendMessageA(pHVar2,0x158,0,(LPARAM)local_104);
        if (LVar4 == -1) {
          if (uVar20 == 1) {
            SendMessageA(pHVar2,0x14b,0,0);
          }
          SendMessageA(pHVar2,0x143,0,(LPARAM)local_104);
        }
        uVar20 = uVar20 + 1;
      } while ((int)uVar20 < 0x3ef);
      SendMessageA(pHVar2,0x14e,0,0);
      pBVar14 = *(BYTE **)(param_1 + 0x60);
      if ((pBVar14 != (BYTE *)0x0) && (*pBVar14 == '\0')) {
        FUN_00413260(pBVar14,0x104);
        WVar13 = SendMessageA(pHVar2,0x158,0,*(LPARAM *)(param_1 + 0x60));
        if (WVar13 == 0xffffffff) {
          SendMessageA(pHVar2,0x14a,0,*(LPARAM *)(param_1 + 0x60));
          WVar13 = 0;
        }
        SendMessageA(pHVar2,0x14e,WVar13,0);
      }
      uVar20 = *(uint *)(param_1 + 0xa0);
      uVar15 = 0x3f2;
      uVar10 = FUN_00401310();
      uVar20 = FUN_0041a170(uVar10,uVar15,uVar20);
      uVar21 = 0;
      uVar17 = 0xfa;
      uVar15 = 0;
      uVar10 = 0x3f4;
      *(uint *)(param_1 + 0xa0) = uVar20;
      DVar11 = FUN_00401310();
      uVar20 = FUN_0041a0c0(DVar11,uVar10,uVar15,uVar17,uVar21);
      *(uint *)(param_1 + 0xa8) = uVar20;
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x25a);
      GetWindowTextA(pHVar2,(LPSTR)local_104,0x104);
      if (local_104[0] != '\0') {
        pBVar14 = *(BYTE **)(param_1 + 0x60);
        if ((pBVar14 == (BYTE *)0x0) || (*pBVar14 == '\0')) {
          GetCurrentDirectoryA(0x104,(LPSTR)local_104);
          FUN_00413260(local_104,0x104);
          pBVar14 = local_104;
          UVar19 = 0x143;
        }
        else {
          UVar19 = 0x14a;
        }
        SendMessageA(pHVar2,UVar19,0,(LPARAM)pBVar14);
        SendMessageA(pHVar2,0x14e,0,0);
      }
      pWVar18 = &local_1f8;
      uVar10 = 0x2c;
      uVar20 = 0x3ef;
      iVar9 = FUN_00401310();
      uVar20 = FUN_0041a270(iVar9,uVar20,(LPBYTE)pWVar18,uVar10);
      if (uVar20 != 0) {
        local_1f8.length = 0x2c;
        SetWindowPlacement(*(HWND *)(param_1 + 4),&local_1f8);
      }
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),0x20c);
      if (*(int *)(param_1 + 0x9c) == 0) {
        if (*(int *)(param_1 + 0xa0) == 0) {
          uVar20 = 0x7e;
        }
        else {
          uVar20 = 0x7f;
        }
        puVar8 = (undefined4 *)FUN_004012d0();
        lpString = FUN_00418380(puVar8,uVar20);
        SetWindowTextA(pHVar2,lpString);
      }
      else {
        ShowWindow(pHVar2,0);
        *(undefined4 *)(param_1 + 0xa0) = 0;
      }
      pHVar2 = GetDlgItem(*(HWND *)(param_1 + 4),600);
      SendMessageA(pHVar2,0x1036,0,0x65);
      GetWindowRect(pHVar2,&local_230);
      uVar20 = 0x72;
      local_298 = 0x2f;
      local_294 = 0;
      puVar8 = (undefined4 *)FUN_004012d0();
      local_28c = FUN_00418380(puVar8,uVar20);
      local_290 = (local_230.right - local_230.left) + -0x86;
      local_27c = 0;
      local_284 = 0;
      SendMessageA(pHVar2,0x101b,0,(LPARAM)&local_298);
      uVar20 = 0x71;
      local_294 = 2;
      puVar8 = (undefined4 *)FUN_004012d0();
      local_28c = FUN_00418380(puVar8,uVar20);
      local_27c = 2;
      local_284 = 2;
      local_290 = 0x5a;
      SendMessageA(pHVar2,0x101b,2,(LPARAM)&local_298);
      uVar20 = 0x73;
      local_294 = 2;
      puVar8 = (undefined4 *)FUN_004012d0();
      local_28c = FUN_00418380(puVar8,uVar20);
      local_27c = 1;
      local_284 = 1;
      local_290 = 0x28;
      SendMessageA(pHVar2,0x101b,1,(LPARAM)&local_298);
      SendMessageA(pHVar2,0x101e,2,0xfffe);
      GetWindowRect(*(HWND *)(param_1 + 4),&local_2a8);
      MapWindowPoints(*(HWND *)(param_1 + 4),*(HWND *)(param_1 + 4),(LPPOINT)&local_2a8,2);
      MoveWindow(*(HWND *)(param_1 + 4),local_2a8.left,local_2a8.top,
                 local_2a8.right - local_2a8.left,(local_2a8.bottom - local_2a8.top) + 1,0);
      MoveWindow(*(HWND *)(param_1 + 4),local_2a8.left,local_2a8.top,
                 local_2a8.right - local_2a8.left,local_2a8.bottom - local_2a8.top,1);
      iVar9 = FUN_00410250(*(int *)(param_1 + 0x70));
      if (iVar9 != 0) {
        UVar12 = SetTimer(*(HWND *)(param_1 + 4),0x108a,500,(TIMERPROC)0x0);
        *(UINT_PTR *)(param_1 + 0xb0) = UVar12;
      }
    }
  }
  return (-1 < local_2b8) - 1;
}


