/* Module: vegas30k.dll
   Function: FUN_010590e0
   Address: 010590e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_010590e0(HWND param_1,uint *param_2)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  WPARAM wParam;
  HWND pHVar4;
  undefined4 uVar5;
  HMENU hMenu;
  uint uVar6;
  int iVar7;
  int iVar8;
  LPCSTR lpsz;
  int iVar9;
  int iVar10;
  uint *puVar11;
  LONG LVar12;
  uint uVar13;
  int iVar14;
  LPCSTR lpString;
  WPARAM wParam_00;
  int iVar15;
  int iVar16;
  UINT uIDEnableItem;
  undefined4 uVar17;
  UINT uEnable;
  int *piVar18;
  int local_168;
  int local_164;
  int local_160;
  int local_154;
  int local_148;
  int local_140;
  int local_13c;
  tagRECT local_134;
  int local_124;
  uint local_120;
  tagRECT local_11c;
  int local_10c;
  int local_108;
  int local_104 [2];
  int local_fc;
  tagRECT local_f8;
  tagRECT local_e8;
  tagRECT local_d8;
  uint local_c8 [5];
  undefined1 local_b4 [20];
  undefined1 local_a0 [20];
  undefined1 local_8c [20];
  undefined1 local_78 [120];
  
  piVar2 = (int *)_SfGetUIFontSize_4(100);
  uVar6 = *param_2;
  local_120 = uVar6 & 0x3000;
  uVar3 = uVar6 & 0xc000;
  uVar13 = uVar6 >> 8 & 0xf;
  SetWindowTextA(param_1,&DAT_0120e5e0);
  wParam = _SfGetUIFont_4(100);
  switch(uVar6 & 0xf0) {
  case 0x10:
    wParam_00 = _SfLoadIcon_8(0,0x7f01);
    break;
  case 0x20:
    wParam_00 = _SfLoadIcon_8(0,0x7f02);
    break;
  case 0x30:
    wParam_00 = _SfLoadIcon_8(0,0x7f03);
    break;
  case 0x40:
    wParam_00 = _SfLoadIcon_8(0,0x7f04);
    break;
  default:
    wParam_00 = 0;
  }
  pHVar4 = GetDlgItem(param_1,0x3e9);
  if (wParam_00 == 0) {
    local_11c.left = 0;
    local_11c.top = 0;
    local_11c.right = 0;
    local_11c.bottom = 0;
    ShowWindow(pHVar4,0);
  }
  else {
    GetClientRect(pHVar4,&local_11c);
    SendMessageA(pHVar4,0x170,wParam_00,0);
  }
  switch(uVar6 & 0xf) {
  case 1:
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d0);
    FUN_010590b0(local_c8,1,uVar5);
    iVar15 = 2;
    local_168 = 2;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d1);
    FUN_010590b0(local_b4,2,uVar5);
    break;
  case 2:
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d2);
    FUN_010590b0(local_c8,3,uVar5);
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d3);
    FUN_010590b0(local_b4,4,uVar5);
    iVar15 = 3;
    local_168 = 3;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d4);
    FUN_010590b0(local_a0,5,uVar5);
    param_2[5] = 1;
    break;
  case 3:
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d5);
    FUN_010590b0(local_c8,6,uVar5);
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d6);
    FUN_010590b0(local_b4,7,uVar5);
    iVar15 = 3;
    local_168 = 3;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d1);
    FUN_010590b0(local_a0,2,uVar5);
    break;
  case 4:
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d5);
    FUN_010590b0(local_c8,6,uVar5);
    iVar15 = 2;
    local_168 = 2;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d6);
    FUN_010590b0(local_b4,7,uVar5);
    param_2[5] = 1;
    break;
  case 5:
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d3);
    FUN_010590b0(local_c8,4,uVar5);
    iVar15 = 2;
    local_168 = 2;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d1);
    FUN_010590b0(local_b4,2,uVar5);
    break;
  default:
    iVar15 = 1;
    local_168 = 1;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d0);
    FUN_010590b0(local_c8,1,uVar5);
    *param_2 = *param_2 & 0xfffffff0;
    break;
  case 10:
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d5);
    FUN_010590b0(local_c8,6,uVar5);
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d7);
    FUN_010590b0(local_b4,100,uVar5);
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d6);
    FUN_010590b0(local_a0,7,uVar5);
    iVar15 = 4;
    local_168 = 4;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d1);
    FUN_010590b0(local_8c,2,uVar5);
    break;
  case 0xb:
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d5);
    FUN_010590b0(local_c8,6,uVar5);
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d6);
    FUN_010590b0(local_b4,7,uVar5);
    iVar15 = 3;
    local_168 = 3;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d9);
    FUN_010590b0(local_a0,0x65,uVar5);
    param_2[5] = 1;
    break;
  case 0xc:
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d5);
    FUN_010590b0(local_c8,6,uVar5);
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d6);
    FUN_010590b0(local_b4,7,uVar5);
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d8);
    FUN_010590b0(local_a0,0x66,uVar5);
    iVar15 = 4;
    local_168 = 4;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d1);
    FUN_010590b0(local_8c,2,uVar5);
    break;
  case 0xd:
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d5);
    FUN_010590b0(local_c8,6,uVar5);
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d7);
    FUN_010590b0(local_b4,100,uVar5);
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d6);
    FUN_010590b0(local_a0,7,uVar5);
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d8);
    FUN_010590b0(local_8c,0x66,uVar5);
    iVar15 = 5;
    local_168 = 5;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10d1);
    FUN_010590b0(local_78,2,uVar5);
  }
  if (param_2[5] != 0) {
    uEnable = 1;
    uIDEnableItem = 0xf060;
    hMenu = GetSystemMenu(param_1,0);
    EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  }
  iVar16 = iVar15;
  if (uVar3 == 0xc000) {
    iVar16 = iVar15 + 1;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10da);
    FUN_010590b0(local_c8 + iVar15 * 5,200,uVar5);
    local_168 = iVar16;
  }
  if ((local_120 == 0x1000) && (param_2[6] == 0)) {
    uVar6 = _SfGetString2_8(DAT_0120e5c8,0x10db);
    param_2[6] = uVar6;
  }
  if (iVar16 - 1U <= uVar13) {
    uVar13 = iVar16 - 1U;
  }
  local_fc = uVar13 * 0x14;
  local_c8[uVar13 * 5 + 1] = local_c8[uVar13 * 5 + 1] | 1;
  local_c8[1] = local_c8[1] | 0x20000;
  pHVar4 = GetDlgItem(param_1,0x3ea);
  GetClientRect(pHVar4,&local_134);
  ShowWindow(pHVar4,0);
  if (local_168 != 0) {
    puVar11 = local_c8 + 3;
    local_148 = local_168;
    LVar12 = local_134.right;
    do {
      if (LVar12 - local_134.left < (int)(*puVar11 + *piVar2)) {
        LVar12 = local_134.left + *puVar11 + *piVar2;
        local_134.right = LVar12;
      }
      puVar11 = puVar11 + 5;
      local_148 = local_148 + -1;
    } while (local_148 != 0);
  }
  if (uVar3 == 0xc000) {
    piVar18 = local_104;
    uVar17 = 0xffffffff;
    uVar5 = _SfGetString2_8(DAT_0120e5c8,0x10dc);
    _SfGetTextExtent_16(wParam,uVar5,uVar17,piVar18);
    if (local_134.right - local_134.left < *piVar2 + local_104[0]) {
      local_134.right = *piVar2 + local_104[0] + local_134.left;
    }
  }
  GetClientRect(param_1,&local_f8);
  local_160 = local_f8.bottom - local_f8.top;
  iVar15 = local_f8.right - local_f8.left;
  pHVar4 = GetDlgItem(param_1,0x3e9);
  GetWindowRect(pHVar4,&local_d8);
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_d8,2);
  iVar14 = local_d8.left - local_f8.left;
  iVar16 = local_d8.top - local_f8.top;
  pHVar4 = GetDlgItem(param_1,0x3eb);
  GetClientRect(pHVar4,&local_e8);
  local_154 = local_e8.right - local_e8.left;
  local_140 = local_e8.bottom - local_e8.top;
  iVar7 = GetSystemMetrics(0);
  iVar8 = GetSystemMetrics(1);
  if (uVar3 == 0xc000) {
    iVar8 = iVar8 * 3 + (iVar8 * 3 >> 0x1f & 3U);
    iVar8 = (iVar8 >> 2) - (iVar8 >> 0x1f) >> 1;
  }
  else {
    iVar8 = (int)(iVar8 * 3 + (iVar8 * 3 >> 0x1f & 3U)) >> 2;
  }
  iVar7 = (int)(iVar7 * 3 + (iVar7 * 3 >> 0x1f & 7U)) >> 3;
  if (wParam_00 != 0) {
    iVar7 = iVar7 + ((local_11c.left - local_11c.right) - iVar14);
  }
  lpString = (LPCSTR)param_2[1];
  local_124 = 0;
  local_13c = 0;
  do {
    cVar1 = *lpString;
    lpsz = lpString;
    while ((cVar1 != '\0' && (cVar1 != '\n'))) {
      lpsz = CharNextA(lpsz);
      cVar1 = *lpsz;
    }
    if (*lpsz == '\0') {
      iVar9 = lstrlenA(lpString);
      if (iVar9 == 0) {
LAB_010599e3:
        iVar9 = piVar2[1] * (local_13c + 1);
        if (local_140 <= iVar9) {
          local_140 = iVar9;
        }
        if (iVar7 <= local_154) {
          local_154 = iVar7;
        }
        if (iVar8 <= local_140) {
          local_140 = iVar8;
        }
        if (local_120 == 0x1000) {
          _SfGetTextExtent_16(wParam,param_2[6],0xffffffff,&local_10c);
          iVar8 = local_10c + *piVar2 * 3;
          if (iVar7 <= iVar8) {
            iVar8 = iVar7;
          }
          if (local_154 < iVar8) {
            local_154 = iVar8;
          }
        }
        iVar8 = iVar14 * 2;
        if (iVar15 <= iVar8 + local_154) {
          iVar15 = iVar8 + local_154;
        }
        if (wParam_00 != 0) {
          iVar15 = iVar15 + (local_11c.right - local_11c.left) + iVar14;
        }
        local_160 = local_160 + (local_e8.top - local_e8.bottom) + local_140;
        if (local_120 == 0x1000) {
          local_160 = local_160 + local_108 + iVar16;
        }
        iVar9 = (local_134.right - local_134.left) * local_168 + (local_168 + -1) * *piVar2;
        if (iVar15 <= iVar9 + iVar8) {
          iVar15 = iVar9 + iVar8;
        }
        if (wParam_00 != 0) {
          iVar8 = (iVar14 * 3 - local_11c.left) + local_11c.right;
        }
        if (iVar7 + iVar8 <= iVar15) {
          iVar15 = iVar7 + iVar8;
        }
        if (uVar3 == 0xc000) {
          iVar7 = GetSystemMetrics(0);
          iVar7 = iVar7 * 3 + (iVar7 * 3 >> 0x1f & 3U);
          iVar8 = (iVar7 >> 2) - (iVar7 >> 0x1f) >> 1;
          iVar7 = GetSystemMetrics(1);
          iVar7 = iVar7 * 3 + (iVar7 * 3 >> 0x1f & 3U);
          iVar7 = (iVar7 >> 2) - (iVar7 >> 0x1f) >> 1;
          if (iVar15 < iVar8) {
            iVar15 = iVar8;
          }
          iVar8 = (iVar7 * 2) / 3;
          if ((iVar8 <= local_160) && (iVar8 = iVar7, local_160 < iVar7)) {
            iVar8 = local_160;
          }
          param_2[4] = iVar8 + iVar16 * 2;
          pHVar4 = CreateWindowExA(0x200,"Edit",(LPCSTR)0x0,0x50220844,iVar14,iVar16 + local_160,
                                   iVar15 + iVar14 * -2,iVar8,param_1,(HMENU)&DAT_000000c9,
                                   DAT_0120e5c0,(LPVOID)0x0);
          SendMessageA(pHVar4,0x30,wParam,0);
          SetDlgItemTextA(param_1,0xc9,(LPCSTR)param_2[2]);
        }
        iVar7 = GetSystemMetrics(7);
        iVar8 = GetSystemMetrics(8);
        iVar10 = GetSystemMetrics(4);
        SetWindowPos(param_1,(HWND)0x0,0,0,iVar15 + iVar7 * 2,local_160 + iVar8 * 2 + iVar10,6);
        pHVar4 = GetDlgItem(param_1,0x3eb);
        SendMessageA(pHVar4,0x30,wParam,0);
        iVar7 = iVar14;
        if (wParam_00 != 0) {
          iVar7 = (iVar14 * 2 - local_11c.left) + local_11c.right;
        }
        iVar8 = (((iVar15 - iVar7) + iVar14 * -2) - local_154) / 2 + iVar7;
        if (iVar7 < iVar8) {
          iVar7 = iVar8;
        }
        SetWindowPos(pHVar4,(HWND)0x0,iVar7,iVar16,local_154,local_140,4);
        if (local_120 == 0x1000) {
          pHVar4 = CreateWindowExA(0,"Button",(LPCSTR)param_2[6],0x50030003,iVar7,
                                   local_160 -
                                   (local_108 + iVar16 * 2 + (local_134.bottom - local_134.top)),
                                   local_10c + *piVar2 * 3,local_108,param_1,(HMENU)&DAT_0000012c,
                                   DAT_0120e5c0,(LPVOID)0x0);
          SendMessageA(pHVar4,0x30,wParam,0);
          CheckDlgButton(param_1,300,*(UINT *)param_2[7]);
          iVar14 = (iVar15 - iVar9) - iVar14;
        }
        else {
          iVar14 = (iVar15 - iVar9) / 2;
        }
        local_124 = ((local_134.top - local_134.bottom) - iVar16) + local_160;
        if (local_168 != 0) {
          local_164 = local_168;
          puVar11 = local_c8 + 2;
          do {
            pHVar4 = CreateWindowExA(0,"Button",(LPCSTR)*puVar11,puVar11[-1],iVar14,local_124,
                                     local_134.right - local_134.left,
                                     local_134.bottom - local_134.top,param_1,(HMENU)puVar11[-2],
                                     DAT_0120e5c0,(LPVOID)0x0);
            SendMessageA(pHVar4,0x30,wParam,0);
            puVar11 = puVar11 + 5;
            iVar14 = iVar14 + (*piVar2 - local_134.left) + local_134.right;
            local_164 = local_164 + -1;
          } while (local_164 != 0);
        }
        SetDlgItemTextA(param_1,0x3eb,(LPCSTR)param_2[1]);
        _SfWndCenter_16(param_1,0,0,0x8001);
        SendMessageA(param_1,0x28,1,0);
        pHVar4 = GetDlgItem(param_1,*(int *)((int)local_c8 + local_fc));
        SendMessageA(param_1,0x28,(WPARAM)pHVar4,1);
        return 0;
      }
      local_124 = 1;
      lpsz = lpString + iVar9;
    }
    if ((int)lpsz - (int)lpString < 1) {
      local_13c = local_13c + 1;
      lpString = lpsz + 1;
    }
    else {
      _SfGetTextExtent_16(wParam,lpString,(int)lpsz - (int)lpString,local_104);
      local_104[0] = local_104[0] + *piVar2;
      local_13c = local_13c + (local_104[0] + -1 + iVar7) / iVar7;
      iVar9 = local_104[0];
      if (iVar7 <= local_104[0]) {
        iVar9 = iVar7;
      }
      if ((local_154 <= iVar9) && (local_154 = local_104[0], iVar7 <= local_104[0])) {
        local_154 = iVar7;
      }
      if (local_124 != 0) goto LAB_010599e3;
      lpString = lpsz + 1;
    }
  } while( true );
}


