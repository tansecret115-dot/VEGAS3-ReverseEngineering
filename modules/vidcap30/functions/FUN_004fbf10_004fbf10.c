/* Module: vidcap30.exe
   Function: FUN_004fbf10
   Address: 004fbf10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_004fbf10(LPVOID param_1,HWND param_2,UINT param_3,undefined4 *param_4,uint *param_5)

{
  ushort uVar1;
  POINT pt;
  bool bVar2;
  uchar *lpsz;
  short sVar3;
  int *piVar4;
  HWND pHVar5;
  HWND pHVar6;
  LONG LVar7;
  HANDLE pvVar8;
  undefined1 *puVar9;
  WPARAM wParam;
  LRESULT LVar10;
  WPARAM WVar11;
  uchar *puVar12;
  undefined4 uVar13;
  LRESULT LVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  BOOL BVar18;
  LRESULT LVar19;
  int iVar20;
  uchar *puVar21;
  uchar uVar22;
  uint uVar23;
  uint *puVar24;
  uint *puVar25;
  undefined4 *puVar26;
  uint **ppuVar27;
  undefined4 *puVar28;
  WPARAM WVar29;
  WPARAM *pWVar30;
  WPARAM local_9c4;
  uchar *local_9c0;
  uint local_9bc;
  WPARAM local_9b4;
  tagPOINT local_9a8;
  uint local_99c;
  undefined4 local_998 [2];
  uint local_990;
  LPCSTR local_978;
  int local_974;
  int local_970 [5];
  undefined1 *local_95c;
  uchar *local_958;
  tagRECT local_950;
  WPARAM local_940 [3];
  uint local_934;
  undefined4 local_930;
  int local_92c;
  tagPOINT local_918;
  uint local_90c;
  DWORD local_904;
  uint *local_900 [12];
  uchar local_8d0 [512];
  undefined1 auStack_6d0 [8];
  uchar local_6c8 [524];
  undefined4 local_4bc;
  undefined4 local_4b8;
  uint local_4b0;
  undefined1 local_488 [520];
  undefined1 local_280 [640];
  
  local_9bc = 0;
  sVar3 = (short)((uint)param_5 >> 0x10);
  switch(param_3) {
  case 0x600:
    if (param_4 != (undefined4 *)0xffffffff) {
      FUN_004fa070(param_1,param_4);
      SendMessageA(*(HWND *)((int)param_1 + 0x14),0x14e,(WPARAM)param_4,0);
      return 0;
    }
    break;
  case 0x601:
    pHVar5 = *(HWND *)((int)param_1 + 0x10);
    *(uint **)((int)param_1 + 8) = param_5;
    piVar4 = (int *)GetWindowLongA(pHVar5,-0x15);
    local_9c4 = 0;
    if (0 < piVar4[2]) {
      local_9c0 = local_280;
      do {
        SendMessageA(pHVar5,0x417,local_9c4,(LPARAM)local_9c0);
        local_9c4 = local_9c4 + 1;
        local_9c0 = local_9c0 + 0x14;
      } while ((int)local_9c4 < piVar4[2]);
    }
    SendMessageA(pHVar5,0x436,0,0);
    SendMessageA(pHVar5,0x430,0,0);
    SendMessageA(pHVar5,0x434,0,0);
    LVar7 = GetWindowLongA(pHVar5,-0xc);
    FUN_00497bc0(pHVar5,&local_950);
    DestroyWindow(pHVar5);
    pHVar5 = (HWND)_SfCreateToolbarEmpty_16
                             (DAT_005c16d8,*(undefined4 *)((int)param_1 + 4),0x5600094e,LVar7);
    *(HWND *)((int)param_1 + 0x10) = pHVar5;
    SetWindowLongA(pHVar5,-0x15,(LONG)piVar4);
    SendMessageA(pHVar5,0x454,0,1);
    pHVar6 = (HWND)SendMessageA(pHVar5,0x423,0,0);
    piVar4[6] = (int)pHVar6;
    uVar17 = GetWindowLongA(pHVar6,-0x10);
    SetWindowLongA((HWND)piVar4[6],-0x10,uVar17 | 1);
    SendMessageA(pHVar5,0x414,piVar4[2],(LPARAM)local_280);
    SendMessageA(pHVar5,0x434,0,piVar4[3]);
    SendMessageA(pHVar5,0x430,0,piVar4[4]);
    SendMessageA(pHVar5,0x436,0,piVar4[5]);
    MoveWindow(pHVar5,local_950.left,0,*piVar4,*(int *)((int)param_1 + 0x4c8),0);
    return 0;
  case 0x602:
    puVar25 = param_5;
    for (iVar20 = 0x104; iVar20 != 0; iVar20 = iVar20 + -1) {
      *puVar25 = 0;
      puVar25 = puVar25 + 1;
    }
    param_5[1] = *(uint *)((int)param_1 + 0x3c);
    if (*(HWND *)((int)param_1 + 0x4ec) != (HWND)0x0) {
      uVar17 = GetWindowLongA(*(HWND *)((int)param_1 + 0x4ec),-0xc);
      param_5[2] = uVar17;
    }
    if (*(uint *)((int)param_1 + 0x468) == 0xffffffff) {
      param_5[3] = *(uint *)((int)param_1 + 0x458);
    }
    else {
      param_5[3] = *(uint *)((int)param_1 + 0x468);
    }
    if (*(uint *)((int)param_1 + 0x480) == 0xffffffff) {
      param_5[4] = *(uint *)((int)param_1 + 0x474);
    }
    else {
      param_5[4] = *(uint *)((int)param_1 + 0x480);
    }
    param_5[5] = *(uint *)((int)param_1 + 0x4c0);
    if ((*(byte *)((int)param_1 + 0x46c) & 4) != 0) {
      *param_5 = *param_5 | 4;
    }
    if ((*(byte *)((int)param_1 + 0x484) & 4) != 0) {
      *param_5 = *param_5 | 8;
    }
    uVar17 = *param_5;
    uVar16 = (uVar17 ^ *(uint *)((int)param_1 + 0x4e0)) & 0x10 ^ uVar17;
    *param_5 = uVar16;
    param_5[0x103] = *(uint *)((int)param_1 + 0xbac);
    uVar16 = (uVar16 ^ *(uint *)((int)param_1 + 0x4e0)) & 2 ^ uVar16;
    *param_5 = uVar16;
    uVar16 = (uVar16 ^ *(uint *)((int)param_1 + 0x4e0)) & 1 ^ uVar16;
    *param_5 = uVar16;
    uVar23 = *(uint *)((int)param_1 + 0x4e0) >> 1 & 0x20;
    uVar17 = CONCAT31((int3)(uVar17 >> 8),(char)uVar16);
    *param_5 = uVar23 | uVar17 & 0xffffffdf;
    uVar17 = uVar17 & 0xffffff9f;
    uVar16 = *(uint *)((int)param_1 + 0x4e0) >> 10 & 0x40 | uVar23 | uVar17;
    *param_5 = uVar16;
    *param_5 = *(uint *)((int)param_1 + 0x4e0) >> 10 & 0x80 |
               CONCAT31((int3)(uVar17 >> 8),(char)uVar16) & 0xffffff7f;
    puVar25 = (uint *)((int)param_1 + 0x708);
    puVar24 = param_5 + 6;
    for (iVar20 = 0x68; iVar20 != 0; iVar20 = iVar20 + -1) {
      *puVar24 = *puVar25;
      puVar25 = puVar25 + 1;
      puVar24 = puVar24 + 1;
    }
    pHVar5 = *(HWND *)((int)param_1 + 0x1c);
    puVar26 = local_998;
    for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
      *puVar26 = 0;
      puVar26 = puVar26 + 1;
    }
    local_998[0] = 2;
    WVar29 = 0;
    do {
      LVar19 = SendMessageA(pHVar5,0x1019,WVar29,(LPARAM)local_998);
      if (LVar19 == 0) break;
      iVar20 = WVar29 + *(int *)((int)param_1 + 0x704) * 0x1a;
      WVar29 = WVar29 + 1;
      *(undefined2 *)((int)param_5 + iVar20 * 2 + 0x18) = (undefined2)local_990;
    } while (WVar29 < 0x18);
    if ((*(byte *)((int)param_1 + 0x4e0) & 8) != 0) {
      pHVar5 = *(HWND *)((int)param_1 + 0x24);
      SendMessageA(pHVar5,0x1019,0,(LPARAM)local_998);
      param_5[0x77] = local_990;
      SendMessageA(pHVar5,0x1019,1,(LPARAM)local_998);
      param_5[0x78] = local_990;
      SendMessageA(pHVar5,0x1019,2,(LPARAM)local_998);
      param_5[0x79] = local_990;
      SendMessageA(pHVar5,0x1019,3,(LPARAM)local_998);
      param_5[0x7a] = local_990;
    }
    BVar18 = IsWindowEnabled(*(HWND *)((int)param_1 + 4));
    if (BVar18 == 0) {
      _mbscpy((uchar *)(param_5 + 0x7f),(uchar *)((int)param_1 + 0x48));
    }
    else {
      pHVar5 = *(HWND *)((int)param_1 + 0x18);
      LVar19 = SendMessageA(pHVar5,0x110a,9,0);
      if (LVar19 == 0) {
        *(undefined1 *)(param_5 + 0x7f) = 0;
      }
      else {
        FUN_004f8340(pHVar5,LVar19,param_5 + 0x7f);
      }
    }
    if ((*(byte *)((int)param_1 + 0x4e0) & 8) != 0) {
      LVar7 = GetWindowLongA(*(HWND *)((int)param_1 + 0x24),-0x15);
      puVar25 = (uint *)(LVar7 + 0x10);
      puVar24 = param_5 + 0x6e;
      for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar24 = *puVar25;
        puVar25 = puVar25 + 1;
        puVar24 = puVar24 + 1;
      }
      param_5[0x76] = *(uint *)(LVar7 + 0xc);
      return 0;
    }
    break;
  case 0x603:
    BVar18 = IsWindowEnabled(*(HWND *)((int)param_1 + 4));
    if (BVar18 != 0) {
      FUN_00497cd0(param_1,param_5);
      ppuVar27 = local_900;
      for (iVar20 = 0xc; iVar20 != 0; iVar20 = iVar20 + -1) {
        *ppuVar27 = (uint *)0x0;
        ppuVar27 = ppuVar27 + 1;
      }
      local_900[0] = param_5;
      FUN_00497c50(param_1,1,0,local_900);
      GetClientRect(*(HWND *)((int)param_1 + 4),&local_950);
      *(undefined4 *)((int)param_1 + 0x45c) = *(undefined4 *)((int)param_1 + 0x4c8);
      FUN_00498230(param_1,local_950.bottom << 0x10 | local_950.right & 0xffffU);
      *(uint *)((int)param_1 + 0x44) = param_5[2];
      _mbscpy((uchar *)((int)param_1 + 0x48),(uchar *)(param_5 + 0x7f));
      if ((*(uchar *)((int)param_1 + 0x48) != '\0') &&
         ((*(byte *)((int)param_1 + 0x4e0) & 0x80) == 0)) {
        pvVar8 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,FUN_00498140,param_1,0,&local_904);
        *(HANDLE *)((int)param_1 + 0x40) = pvVar8;
        return 0;
      }
      FUN_00498140(param_1);
      return 0;
    }
    break;
  case 0x604:
    *(uint **)((int)param_1 + 0x4c0) = param_5;
    return 0;
  case 0x605:
    if (param_5 != (uint *)0x0) {
      uVar17 = FUN_004f4c50(param_1,param_5,param_4);
      return uVar17;
    }
    break;
  case 0x606:
    puVar25 = param_5;
    for (iVar20 = 0xc0; iVar20 != 0; iVar20 = iVar20 + -1) {
      *puVar25 = 0;
      puVar25 = puVar25 + 1;
    }
    pHVar5 = *(HWND *)((int)param_1 + 0x1c);
    WVar29 = 0;
    puVar26 = local_998;
    for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
      *puVar26 = 0;
      puVar26 = puVar26 + 1;
    }
    local_998[0] = 2;
    LVar19 = SendMessageA(pHVar5,0x1019,0,(LPARAM)local_998);
    if (LVar19 != 0) {
      do {
        WVar29 = WVar29 + 1;
        LVar19 = SendMessageA(pHVar5,0x1019,WVar29,(LPARAM)local_998);
      } while (LVar19 != 0);
      if (0 < (int)WVar29) {
        SendMessageA(pHVar5,0x103b,WVar29,
                     *(int *)((int)param_1 + 0x704) * 0x60 + 0x8a8 + (int)param_1);
      }
    }
    puVar25 = (uint *)((int)param_1 + 0x8a8);
    for (iVar20 = 0xc0; iVar20 != 0; iVar20 = iVar20 + -1) {
      *param_5 = *puVar25;
      puVar25 = puVar25 + 1;
      param_5 = param_5 + 1;
    }
    return 0;
  case 0x607:
    BVar18 = IsWindowEnabled(*(HWND *)((int)param_1 + 4));
    if (BVar18 != 0) {
      pHVar5 = *(HWND *)((int)param_1 + 0x1c);
      puVar25 = (uint *)((int)param_1 + 0x8a8);
      puVar24 = puVar25;
      for (iVar20 = 0xc0; iVar20 != 0; iVar20 = iVar20 + -1) {
        *puVar24 = *param_5;
        param_5 = param_5 + 1;
        puVar24 = puVar24 + 1;
      }
      iVar20 = 8;
      do {
        if (*puVar25 == puVar25[1]) {
          uVar17 = 0;
          puVar24 = puVar25;
          do {
            *puVar24 = uVar17;
            uVar17 = uVar17 + 1;
            puVar24 = puVar24 + 1;
          } while (uVar17 < 0x18);
        }
        puVar25 = puVar25 + 0x18;
        iVar20 = iVar20 + -1;
      } while (iVar20 != 0);
      if (((*(uint *)((int)param_1 + 0x4e0) & 0x40) != 0) &&
         ((*(uint *)((int)param_1 + 0x4e0) & 0x100000) != 0)) {
        puVar26 = local_998;
        for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
          *puVar26 = 0;
          puVar26 = puVar26 + 1;
        }
        WVar29 = 0;
        local_998[0] = 2;
        iVar20 = SendMessageA(pHVar5,0x1019,0,(LPARAM)local_998);
        while (iVar20 != 0) {
          WVar29 = WVar29 + 1;
          iVar20 = SendMessageA(pHVar5,0x1019,WVar29,(LPARAM)local_998);
        }
        SendMessageA(pHVar5,0x103a,WVar29,
                     *(int *)((int)param_1 + 0x704) * 0x60 + 0x8a8 + (int)param_1);
        return 0;
      }
    }
    break;
  default:
    local_9bc = DefWindowProcA(param_2,param_3,(WPARAM)param_4,(LPARAM)param_5);
    break;
  case 0x60a:
    iVar20 = (int)(short)param_4;
    iVar15 = (int)(short)((uint)param_4 >> 0x10);
    puVar25 = param_5 + 2;
    *puVar25 = 0;
    pHVar5 = *(HWND *)((int)param_1 + 0x1c);
    pHVar6 = *(HWND *)((int)param_1 + 0x18);
    local_918.x = iVar20;
    local_918.y = iVar15;
    ScreenToClient(pHVar5,&local_918);
    SendMessageA(pHVar5,0x1012,0,(LPARAM)&local_918);
    if (local_90c != 0xffffffff) {
      local_99c = SendMessageA(pHVar6,0x110a,9,0);
      uVar17 = FUN_004f6ec0(pHVar6,local_99c);
      *puVar25 = uVar17;
      uVar17 = FUN_004f3c20(pHVar5,local_90c);
      param_5[3] = uVar17;
      iVar15 = FUN_004f8340(pHVar6,local_99c,param_5[6]);
      *(undefined1 *)(iVar15 + param_5[6]) = 0x5c;
      iVar20 = *(int *)(*(int *)(*puVar25 + 8) + param_5[3] * 4);
      uVar1 = *(ushort *)(iVar20 + 0x10);
      puVar26 = (undefined4 *)(iVar20 + 0x14);
      puVar28 = (undefined4 *)(iVar15 + 1 + param_5[6]);
      for (uVar17 = (uint)(uVar1 >> 2); uVar17 != 0; uVar17 = uVar17 - 1) {
        *puVar28 = *puVar26;
        puVar26 = puVar26 + 1;
        puVar28 = puVar28 + 1;
      }
      for (uVar17 = uVar1 & 3; uVar17 != 0; uVar17 = uVar17 - 1) {
        *(undefined1 *)puVar28 = *(undefined1 *)puVar26;
        puVar26 = (undefined4 *)((int)puVar26 + 1);
        puVar28 = (undefined4 *)((int)puVar28 + 1);
      }
      param_5[5] = 0;
      param_5[4] = local_90c;
      return 1;
    }
    local_9a8.x = iVar20;
    local_9a8.y = iVar15;
    ScreenToClient(pHVar6,&local_9a8);
    SendMessageA(pHVar6,0x1111,0,(LPARAM)&local_9a8);
    if (local_99c != 0) {
      uVar17 = FUN_004f79a0(pHVar6,local_99c,puVar25);
      param_5[3] = uVar17;
      FUN_004f8340(pHVar6,local_99c,param_5[6]);
      param_5[5] = param_5[6];
      param_5[4] = local_99c;
      return 1;
    }
    GetWindowRect(pHVar5,&local_950);
    pt.y = iVar15;
    pt.x = iVar20;
    BVar18 = PtInRect(&local_950,pt);
    if ((BVar18 != 0) && (local_99c = SendMessageA(pHVar6,0x110a,9,0), local_99c != 0)) {
      uVar17 = FUN_004f6ec0(pHVar6,local_99c);
      *puVar25 = uVar17;
      uVar17 = FUN_004f79a0(pHVar6,local_99c,puVar25);
      param_5[3] = uVar17;
      FUN_004f8340(pHVar6,local_99c,param_5[6]);
      param_5[5] = 0;
      param_5[4] = local_99c;
      return 0;
    }
    break;
  case 0x60b:
    if (param_4 != (undefined4 *)0x0) {
      SendMessageA(*(HWND *)((int)param_1 + 0x18),0x110b,8,(LPARAM)param_5);
      *(uint *)((int)param_1 + 0x4a4) = *(uint *)((int)param_1 + 0x4a4) | 8;
      return 0;
    }
    pHVar5 = *(HWND *)((int)param_1 + 0x1c);
    WVar29 = SendMessageA(pHVar5,0x100c,0xffffffff,8);
    if (WVar29 != 0xffffffff) {
      local_930 = 0xf;
      local_934 = SendMessageA(pHVar5,0x102c,WVar29,0xf);
      local_934 = local_934 & 0xfffffff7;
      SendMessageA(pHVar5,0x102b,WVar29,(LPARAM)local_940);
    }
    local_930 = 0xf;
    local_934 = SendMessageA(pHVar5,0x102c,(WPARAM)param_5,0xf);
    local_934 = local_934 | 8;
    SendMessageA(pHVar5,0x102b,(WPARAM)param_5,(LPARAM)local_940);
    *(uint *)((int)param_1 + 0x4a4) = *(uint *)((int)param_1 + 0x4a4) | 8;
    return 0;
  case 0x60c:
    BVar18 = IsWindowEnabled(*(HWND *)((int)param_1 + 4));
    if (BVar18 != 0) {
      pHVar5 = *(HWND *)((int)param_1 + 0x18);
      pHVar6 = *(HWND *)((int)param_1 + 0x1c);
      LVar19 = SendMessageA(pHVar5,0x110f,0,0);
      if (LVar19 != 0) {
        SendMessageA(pHVar5,0x1116,1,0);
      }
      SendMessageA(pHVar6,0x1018,0,0);
      if ((param_5 == (uint *)0x0) || ((char)*param_5 == '\0')) {
        FUN_004f93e0(param_1);
        LVar19 = SendMessageA(pHVar5,0x110a,9,0);
        if ((LVar19 == 0) && (LVar19 = SendMessageA(pHVar5,0x110a,0,0), LVar19 != 0)) {
          SendMessageA(pHVar5,0x110b,9,LVar19);
          return 0;
        }
      }
      else {
        _mbscpy(local_8d0,(uchar *)param_5);
        puVar9 = (undefined1 *)_SfGetFileNamePtrA_4(local_8d0);
        *puVar9 = 0;
        pHVar5 = *(HWND *)((int)param_1 + 0x18);
        LVar19 = SendMessageA(pHVar5,0x110a,9,0);
        if (LVar19 == 0) {
          FUN_004f93e0(param_1);
          LVar19 = SendMessageA(pHVar5,0x110a,0,0);
          if (LVar19 != 0) {
            SendMessageA(pHVar5,0x110b,9,LVar19);
            return 0;
          }
        }
        else {
          piVar4 = local_970;
          for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          local_970[3] = FUN_004f79a0(pHVar5,LVar19,local_970 + 2);
          puVar21 = local_6c8;
          for (iVar20 = 0x82; iVar20 != 0; iVar20 = iVar20 + -1) {
            puVar21[0] = '\0';
            puVar21[1] = '\0';
            puVar21[2] = '\0';
            puVar21[3] = '\0';
            puVar21 = puVar21 + 4;
          }
          FUN_004f8340(pHVar5,LVar19,local_488);
          local_958 = local_6c8;
          local_95c = local_488;
          local_970[0] = 2;
          (**(code **)(**(int **)((int)param_1 + 0x3c) + 0xc))
                    (*(int **)((int)param_1 + 0x3c),local_970);
          _SfAddSlashToPathName_8(local_8d0,0x104);
          _SfAddSlashToPathName_8(local_6c8,0x208);
          iVar20 = lstrcmpiA((LPCSTR)local_8d0,(LPCSTR)local_6c8);
          if (iVar20 == 0) {
            wParam = SendMessageA(pHVar6,0x1027,0,0);
            LVar14 = SendMessageA(pHVar6,0x1004,0,0);
            LVar10 = SendMessageA(pHVar6,0x1028,0,0);
            WVar29 = LVar10 + -1 + wParam;
            if ((int)(LVar14 - 1U) <= (int)WVar29) {
              WVar29 = LVar14 - 1U;
            }
            FUN_004f96e0(param_1,LVar19,1);
            LVar19 = SendMessageA(pHVar6,0x1004,0,0);
            if ((wParam != 0) && (LVar10 < LVar19)) {
              WVar11 = LVar19 - 1;
              if ((int)WVar11 <= (int)wParam) {
                wParam = WVar11;
              }
              if ((int)WVar11 <= (int)WVar29) {
                WVar29 = WVar11;
              }
              SendMessageA(pHVar6,0x1013,WVar29,1);
              SendMessageA(pHVar6,0x1013,wParam,0);
              return 0;
            }
          }
          else {
            if ((*(byte *)((int)param_1 + 0x4e0) & 0x20) == 0) {
              FUN_004f93e0(param_1);
              return 0;
            }
            puVar12 = local_8d0;
            puVar21 = local_8d0;
            while (lpsz = puVar12, local_8d0[0] != '\0') {
              puVar12 = (uchar *)CharNextA((LPCSTR)lpsz);
              local_8d0[0] = *puVar12;
              puVar21 = lpsz;
            }
            if (*puVar21 == '\\') {
              *puVar21 = '\0';
            }
            iVar20 = FUN_004fa580(param_1,local_8d0);
            if (iVar20 != 0) {
              FUN_004f96e0(param_1,iVar20,0xffffffff);
              return 0;
            }
          }
        }
      }
    }
    break;
  case 0x60d:
    *(uint **)((int)param_1 + 0x700) = param_5;
    return 60000;
  case 0x60e:
    if ((param_4 != (undefined4 *)0x0) || (param_5 != (uint *)0x0)) {
      iVar20 = *(int *)((int)param_1 + 0x6fc);
      pHVar5 = *(HWND *)((int)param_1 + 0x18);
      if ((iVar20 != 0) || (iVar20 = SendMessageA(pHVar5,0x110a,9,0), iVar20 != 0)) {
        local_970[3] = FUN_004f79a0(pHVar5,iVar20,local_970 + 2);
        puVar26 = *(undefined4 **)(*(int *)(local_970[2] + 8) + local_970[3] * 4);
        if (param_4 != (undefined4 *)0x0) {
          *param_4 = puVar26[3];
        }
        local_9bc = (uint)(param_4 != (undefined4 *)0x0);
        if (param_5 != (uint *)0x0) {
          puVar21 = local_6c8;
          for (iVar15 = 0x90; iVar15 != 0; iVar15 = iVar15 + -1) {
            puVar21[0] = '\0';
            puVar21[1] = '\0';
            puVar21[2] = '\0';
            puVar21[3] = '\0';
            puVar21 = puVar21 + 4;
          }
          FUN_004f8340(pHVar5,iVar20,local_488);
          local_95c = local_488;
          local_958 = local_6c8;
          local_970[0] = 2;
          local_4bc = puVar26[3];
          local_4b8 = *puVar26;
          local_4b0 = local_4b0 | 0x20;
          (**(code **)(**(int **)((int)param_1 + 0x3c) + 0xc))
                    (*(int **)((int)param_1 + 0x3c),local_970);
          _SfList_AllocAndInsertItem_20(param_3,auStack_6d0,0x240,0xffffffff,0);
          return 1;
        }
      }
    }
    break;
  case 0x60f:
    BVar18 = IsWindowEnabled(*(HWND *)((int)param_1 + 4));
    if (BVar18 != 0) {
      pHVar5 = *(HWND *)((int)param_1 + 0x1c);
      pHVar6 = *(HWND *)((int)param_1 + 0x18);
      if (((param_5 != (uint *)0x0) && ((char)*param_5 != '\0')) &&
         (iVar20 = FUN_004f8100(param_1,param_5,0,0), iVar20 != 0)) {
        uVar17 = FUN_004f4690(pHVar5,*(uint *)((int)param_1 + 0x4e0) >> 0x11 & 1);
        LVar19 = SendMessageA(pHVar6,0x110a,9,0);
        uVar13 = FUN_004f7a20(pHVar6,LVar19);
        FUN_004f8340(pHVar6,LVar19,local_8d0);
        FUN_004f96e0(param_1,iVar20,0xffffffff);
        LVar14 = SendMessageA(pHVar6,0x110a,9,0);
        if (LVar14 != LVar19) {
          FUN_004f8100(param_1,local_8d0,1,uVar13);
        }
        iVar15 = lstrcmpiA((LPCSTR)local_8d0,(LPCSTR)param_5);
        if (iVar15 == 0) {
          FUN_004f6fe0(param_1,iVar20,1);
          uVar16 = SendMessageA(pHVar5,0x1004,0,0);
          if (uVar16 != 0) {
            if (uVar17 < uVar16) {
              SendMessageA(pHVar5,0x1013,uVar17,0);
              return 0;
            }
            SendMessageA(pHVar5,0x1013,uVar16 - 1,0);
            return 0;
          }
        }
      }
    }
    break;
  case 0x610:
    FUN_00498430(param_1);
    return 0;
  case 0x611:
    FUN_00498330(param_1);
    return 0;
  case 0x612:
    FUN_004f4750(*(undefined4 *)((int)param_1 + 0x1c));
    return 0;
  case 0x613:
    BVar18 = IsWindowEnabled(*(HWND *)((int)param_1 + 4));
    if (BVar18 != 0) {
      pHVar5 = *(HWND *)((int)param_1 + 0x18);
      pHVar6 = *(HWND *)((int)param_1 + 0x1c);
      local_9b4 = 0xffffffff;
      bVar2 = true;
      LVar19 = SendMessageA(pHVar5,0x110a,9,0);
      SendMessageA(pHVar5,0x110b,9,0);
      _mbscpy(local_8d0,*(uchar **)param_5[2]);
      iVar20 = FUN_004f8100(param_1,local_8d0,1,1);
      uVar22 = local_8d0[0];
      while( true ) {
        if (iVar20 != 0) {
          FUN_004f96e0(param_1,iVar20,1);
          if (bVar2) {
            SetFocus(pHVar5);
            return 0;
          }
          local_9c0 = (uchar *)0x0;
          FUN_004f8340(pHVar5,iVar20,local_8d0);
          _SfAddSlashToPathName_8(local_8d0,0x208);
          local_974 = FUN_004f6ec0(pHVar5,iVar20);
          LVar19 = SendMessageA(pHVar6,0x1004,0,0);
          local_9c4 = 0;
          uVar17 = *param_5;
          if (0 < (int)uVar17) {
            do {
              WVar29 = 0;
              local_978 = *(LPCSTR *)(param_5[2] + local_9c4 * 4);
              if (0 < LVar19) {
                do {
                  iVar20 = FUN_004f3c20(pHVar6,WVar29);
                  iVar20 = *(int *)(*(int *)(local_974 + 8) + iVar20 * 4);
                  _mbscpy(local_6c8,local_8d0);
                  _mbscat(local_6c8,(uchar *)(iVar20 + 0x14));
                  iVar20 = lstrcmpiA((LPCSTR)local_6c8,local_978);
                  if (iVar20 == 0) {
                    local_930 = 0xf;
                    local_934 = 2;
                    SendMessageA(pHVar6,0x102b,WVar29,(LPARAM)local_940);
                    local_9c0 = (uchar *)((int)local_9c0 + 1);
                    if (local_9b4 == 0xffffffff) {
                      local_9b4 = WVar29;
                    }
                  }
                  WVar29 = WVar29 + 1;
                } while ((int)WVar29 < LVar19);
              }
              local_9c4 = local_9c4 + 1;
            } while ((int)local_9c4 < (int)uVar17);
            if (local_9b4 != 0xffffffff) {
              SendMessageA(pHVar6,0x1013,local_9b4,0);
              pWVar30 = local_940;
              for (iVar20 = 8; iVar20 != 0; iVar20 = iVar20 + -1) {
                *pWVar30 = 0;
                pWVar30 = pWVar30 + 1;
              }
              local_940[2] = 0x1f;
              local_940[0] = *(WPARAM *)((int)param_1 + 4);
              local_940[1] = *(WPARAM *)((int)param_1 + 0x2c);
              local_92c = (int)local_9c0;
              SendMessageA(*(HWND *)((int)param_1 + 8),0x4e,local_940[1],(LPARAM)local_940);
            }
          }
          SetFocus(pHVar6);
          return 0;
        }
        if (uVar22 == '\0') break;
        puVar21 = local_8d0;
        bVar2 = false;
        local_9c0 = (uchar *)0x0;
        local_8d0[0] = uVar22;
        do {
          if (uVar22 == '\\') {
            local_9c0 = puVar21;
          }
          puVar21 = (uchar *)CharNextA((LPCSTR)puVar21);
          uVar22 = *puVar21;
        } while (uVar22 != '\0');
        if (local_9c0 == (uchar *)0x0) break;
        *local_9c0 = '\0';
        iVar20 = FUN_004f8100(param_1,local_8d0,1,1);
        uVar22 = local_8d0[0];
      }
      SendMessageA(pHVar5,0x110b,9,LVar19);
      return 0;
    }
    break;
  case 0x614:
    FUN_00498550(param_1,param_4);
    return 0;
  case 0x615:
    FUN_004983b0(param_1);
    return 0;
  case 0x616:
    if (param_4 != (undefined4 *)0x0) {
      uVar17 = FUN_004ff2e0(param_1,param_4,(int)(short)param_5,(int)sVar3);
      return uVar17;
    }
    uVar17 = FUN_004ff2a0(param_1);
    return uVar17;
  case 0x617:
  case 0x618:
    uVar17 = FUN_004ff450(param_1,param_4,(int)(short)param_5,(int)sVar3,param_3 == 0x618);
    return uVar17;
  case 0x619:
    FUN_004f3eb0(param_1,param_5);
    return 0;
  case 0x61a:
    if (param_5 != (uint *)0x0) {
      uVar17 = FUN_004f4ea0(param_1,param_5);
      return uVar17;
    }
    break;
  case 0x61b:
    *(undefined4 *)((int)param_1 + 0xc1c) = 4;
    return 0;
  }
  return local_9bc;
}


