/* Module: mcplug.dll
   Function: FUN_00420350
   Address: 00420350
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00420350(HWND param_1,uint *param_2)

{
  char cVar1;
  uint uVar2;
  LPSIZE ptVar3;
  uint uVar4;
  HFONT wParam;
  HWND pHVar5;
  LPCSTR pCVar6;
  HMENU hMenu;
  undefined *puVar7;
  int iVar8;
  int iVar9;
  LPCSTR lpsz;
  int iVar10;
  int iVar11;
  uint *puVar12;
  LONG LVar13;
  uint uVar14;
  int iVar15;
  WPARAM wParam_00;
  int iVar16;
  int iVar17;
  UINT uIDEnableItem;
  UINT uEnable;
  tagSIZE *ptVar18;
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
  tagSIZE local_10c;
  tagSIZE local_104;
  int local_fc;
  tagRECT local_f8;
  tagRECT local_e8;
  tagRECT local_d8;
  uint local_c8 [5];
  undefined4 local_b4 [5];
  undefined4 local_a0 [5];
  undefined4 local_8c [5];
  undefined4 local_78 [30];
  
  ptVar3 = FUN_00438db0(100);
  uVar2 = *param_2;
  local_120 = uVar2 & 0x3000;
  uVar4 = uVar2 & 0xc000;
  uVar14 = uVar2 >> 8 & 0xf;
  SetWindowTextA(param_1,&DAT_00487ef0);
  wParam = FUN_00438300(100);
  switch(uVar2 & 0xf0) {
  case 0x10:
    wParam_00 = FUN_00419110((undefined4 *)0x0,(LPCSTR)0x7f01);
    break;
  case 0x20:
    wParam_00 = FUN_00419110((undefined4 *)0x0,(LPCSTR)0x7f02);
    break;
  case 0x30:
    wParam_00 = FUN_00419110((undefined4 *)0x0,(LPCSTR)0x7f03);
    break;
  case 0x40:
    wParam_00 = FUN_00419110((undefined4 *)0x0,(LPCSTR)0x7f04);
    break;
  default:
    wParam_00 = 0;
  }
  pHVar5 = GetDlgItem(param_1,0x3e9);
  if (wParam_00 == 0) {
    local_11c.left = 0;
    local_11c.top = 0;
    local_11c.right = 0;
    local_11c.bottom = 0;
    ShowWindow(pHVar5,0);
  }
  else {
    GetClientRect(pHVar5,&local_11c);
    SendMessageA(pHVar5,0x170,wParam_00,0);
  }
  switch(uVar2 & 0xf) {
  case 1:
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d0);
    FUN_00420320(local_c8,1,pCVar6);
    iVar16 = 2;
    local_168 = 2;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d1);
    FUN_00420320(local_b4,2,pCVar6);
    break;
  case 2:
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d2);
    FUN_00420320(local_c8,3,pCVar6);
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d3);
    FUN_00420320(local_b4,4,pCVar6);
    iVar16 = 3;
    local_168 = 3;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d4);
    FUN_00420320(local_a0,5,pCVar6);
    param_2[5] = 1;
    break;
  case 3:
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d5);
    FUN_00420320(local_c8,6,pCVar6);
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d6);
    FUN_00420320(local_b4,7,pCVar6);
    iVar16 = 3;
    local_168 = 3;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d1);
    FUN_00420320(local_a0,2,pCVar6);
    break;
  case 4:
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d5);
    FUN_00420320(local_c8,6,pCVar6);
    iVar16 = 2;
    local_168 = 2;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d6);
    FUN_00420320(local_b4,7,pCVar6);
    param_2[5] = 1;
    break;
  case 5:
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d3);
    FUN_00420320(local_c8,4,pCVar6);
    iVar16 = 2;
    local_168 = 2;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d1);
    FUN_00420320(local_b4,2,pCVar6);
    break;
  default:
    iVar16 = 1;
    local_168 = 1;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d0);
    FUN_00420320(local_c8,1,pCVar6);
    *param_2 = *param_2 & 0xfffffff0;
    break;
  case 10:
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d5);
    FUN_00420320(local_c8,6,pCVar6);
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d7);
    FUN_00420320(local_b4,100,pCVar6);
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d6);
    FUN_00420320(local_a0,7,pCVar6);
    iVar16 = 4;
    local_168 = 4;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d1);
    FUN_00420320(local_8c,2,pCVar6);
    break;
  case 0xb:
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d5);
    FUN_00420320(local_c8,6,pCVar6);
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d6);
    FUN_00420320(local_b4,7,pCVar6);
    iVar16 = 3;
    local_168 = 3;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d9);
    FUN_00420320(local_a0,0x65,pCVar6);
    param_2[5] = 1;
    break;
  case 0xc:
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d5);
    FUN_00420320(local_c8,6,pCVar6);
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d6);
    FUN_00420320(local_b4,7,pCVar6);
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d8);
    FUN_00420320(local_a0,0x66,pCVar6);
    iVar16 = 4;
    local_168 = 4;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d1);
    FUN_00420320(local_8c,2,pCVar6);
    break;
  case 0xd:
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d5);
    FUN_00420320(local_c8,6,pCVar6);
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d7);
    FUN_00420320(local_b4,100,pCVar6);
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d6);
    FUN_00420320(local_a0,7,pCVar6);
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d8);
    FUN_00420320(local_8c,0x66,pCVar6);
    iVar16 = 5;
    local_168 = 5;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10d1);
    FUN_00420320(local_78,2,pCVar6);
  }
  if (param_2[5] != 0) {
    uEnable = 1;
    uIDEnableItem = 0xf060;
    hMenu = GetSystemMenu(param_1,0);
    EnableMenuItem(hMenu,uIDEnableItem,uEnable);
  }
  iVar17 = iVar16;
  if (uVar4 == 0xc000) {
    iVar17 = iVar16 + 1;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10da);
    FUN_00420320(local_c8 + iVar16 * 5,200,pCVar6);
    local_168 = iVar17;
  }
  if ((local_120 == 0x1000) && (param_2[6] == 0)) {
    puVar7 = FUN_0041a210(DAT_00487ed8,0x10db);
    param_2[6] = (uint)puVar7;
  }
  if (iVar17 - 1U <= uVar14) {
    uVar14 = iVar17 - 1U;
  }
  local_fc = uVar14 * 0x14;
  local_c8[uVar14 * 5 + 1] = local_c8[uVar14 * 5 + 1] | 1;
  local_c8[1] = local_c8[1] | 0x20000;
  pHVar5 = GetDlgItem(param_1,0x3ea);
  GetClientRect(pHVar5,&local_134);
  ShowWindow(pHVar5,0);
  if (local_168 != 0) {
    puVar12 = local_c8 + 3;
    local_148 = local_168;
    LVar13 = local_134.right;
    do {
      iVar16 = *puVar12 + ptVar3->cx;
      if (LVar13 - local_134.left < iVar16) {
        LVar13 = local_134.left + iVar16;
        local_134.right = LVar13;
      }
      puVar12 = puVar12 + 5;
      local_148 = local_148 + -1;
    } while (local_148 != 0);
  }
  if (uVar4 == 0xc000) {
    ptVar18 = &local_104;
    iVar16 = -1;
    pCVar6 = FUN_0041a210(DAT_00487ed8,0x10dc);
    FUN_00438d50(wParam,pCVar6,iVar16,ptVar18);
    iVar16 = ptVar3->cx + local_104.cx;
    if (local_134.right - local_134.left < iVar16) {
      local_134.right = iVar16 + local_134.left;
    }
  }
  GetClientRect(param_1,&local_f8);
  local_160 = local_f8.bottom - local_f8.top;
  iVar16 = local_f8.right - local_f8.left;
  pHVar5 = GetDlgItem(param_1,0x3e9);
  GetWindowRect(pHVar5,&local_d8);
  MapWindowPoints((HWND)0x0,param_1,(LPPOINT)&local_d8,2);
  iVar15 = local_d8.left - local_f8.left;
  iVar17 = local_d8.top - local_f8.top;
  pHVar5 = GetDlgItem(param_1,0x3eb);
  GetClientRect(pHVar5,&local_e8);
  local_154 = local_e8.right - local_e8.left;
  local_140 = local_e8.bottom - local_e8.top;
  iVar8 = GetSystemMetrics(0);
  iVar9 = GetSystemMetrics(1);
  if (uVar4 == 0xc000) {
    iVar9 = iVar9 * 3 + (iVar9 * 3 >> 0x1f & 3U);
    iVar9 = (iVar9 >> 2) - (iVar9 >> 0x1f) >> 1;
  }
  else {
    iVar9 = (int)(iVar9 * 3 + (iVar9 * 3 >> 0x1f & 3U)) >> 2;
  }
  iVar8 = (int)(iVar8 * 3 + (iVar8 * 3 >> 0x1f & 7U)) >> 3;
  if (wParam_00 != 0) {
    iVar8 = iVar8 + ((local_11c.left - local_11c.right) - iVar15);
  }
  pCVar6 = (LPCSTR)param_2[1];
  local_124 = 0;
  local_13c = 0;
  do {
    cVar1 = *pCVar6;
    lpsz = pCVar6;
    while ((cVar1 != '\0' && (cVar1 != '\n'))) {
      lpsz = CharNextA(lpsz);
      cVar1 = *lpsz;
    }
    if (*lpsz == '\0') {
      iVar10 = lstrlenA(pCVar6);
      if (iVar10 == 0) {
LAB_00420c53:
        iVar10 = ptVar3->cy * (local_13c + 1);
        if (local_140 <= iVar10) {
          local_140 = iVar10;
        }
        if (iVar8 <= local_154) {
          local_154 = iVar8;
        }
        if (iVar9 <= local_140) {
          local_140 = iVar9;
        }
        if (local_120 == 0x1000) {
          FUN_00438d50(wParam,(LPCSTR)param_2[6],-1,&local_10c);
          iVar9 = local_10c.cx + ptVar3->cx * 3;
          if (iVar8 <= iVar9) {
            iVar9 = iVar8;
          }
          if (local_154 < iVar9) {
            local_154 = iVar9;
          }
        }
        iVar9 = iVar15 * 2;
        if (iVar16 <= iVar9 + local_154) {
          iVar16 = iVar9 + local_154;
        }
        if (wParam_00 != 0) {
          iVar16 = iVar16 + (local_11c.right - local_11c.left) + iVar15;
        }
        local_160 = local_160 + (local_e8.top - local_e8.bottom) + local_140;
        if (local_120 == 0x1000) {
          local_160 = local_160 + local_10c.cy + iVar17;
        }
        iVar10 = (local_134.right - local_134.left) * local_168 + (local_168 + -1) * ptVar3->cx;
        if (iVar16 <= iVar10 + iVar9) {
          iVar16 = iVar10 + iVar9;
        }
        if (wParam_00 != 0) {
          iVar9 = (iVar15 * 3 - local_11c.left) + local_11c.right;
        }
        if (iVar8 + iVar9 <= iVar16) {
          iVar16 = iVar8 + iVar9;
        }
        if (uVar4 == 0xc000) {
          iVar8 = GetSystemMetrics(0);
          iVar8 = iVar8 * 3 + (iVar8 * 3 >> 0x1f & 3U);
          iVar9 = (iVar8 >> 2) - (iVar8 >> 0x1f) >> 1;
          iVar8 = GetSystemMetrics(1);
          iVar8 = iVar8 * 3 + (iVar8 * 3 >> 0x1f & 3U);
          iVar8 = (iVar8 >> 2) - (iVar8 >> 0x1f) >> 1;
          if (iVar16 < iVar9) {
            iVar16 = iVar9;
          }
          iVar9 = (iVar8 * 2) / 3;
          if ((iVar9 <= local_160) && (iVar9 = iVar8, local_160 < iVar8)) {
            iVar9 = local_160;
          }
          param_2[4] = iVar9 + iVar17 * 2;
          pHVar5 = CreateWindowExA(0x200,"Edit",(LPCSTR)0x0,0x50220844,iVar15,iVar17 + local_160,
                                   iVar16 + iVar15 * -2,iVar9,param_1,(HMENU)0xc9,DAT_00487ed0,
                                   (LPVOID)0x0);
          SendMessageA(pHVar5,0x30,(WPARAM)wParam,0);
          SetDlgItemTextA(param_1,0xc9,(LPCSTR)param_2[2]);
        }
        iVar8 = GetSystemMetrics(7);
        iVar9 = GetSystemMetrics(8);
        iVar11 = GetSystemMetrics(4);
        SetWindowPos(param_1,(HWND)0x0,0,0,iVar16 + iVar8 * 2,local_160 + iVar9 * 2 + iVar11,6);
        pHVar5 = GetDlgItem(param_1,0x3eb);
        SendMessageA(pHVar5,0x30,(WPARAM)wParam,0);
        iVar8 = iVar15;
        if (wParam_00 != 0) {
          iVar8 = (iVar15 * 2 - local_11c.left) + local_11c.right;
        }
        iVar9 = (((iVar16 - iVar8) + iVar15 * -2) - local_154) / 2 + iVar8;
        if (iVar8 < iVar9) {
          iVar8 = iVar9;
        }
        SetWindowPos(pHVar5,(HWND)0x0,iVar8,iVar17,local_154,local_140,4);
        if (local_120 == 0x1000) {
          pHVar5 = CreateWindowExA(0,"Button",(LPCSTR)param_2[6],0x50030003,iVar8,
                                   local_160 -
                                   (local_10c.cy + iVar17 * 2 + (local_134.bottom - local_134.top)),
                                   local_10c.cx + ptVar3->cx * 3,local_10c.cy,param_1,(HMENU)0x12c,
                                   DAT_00487ed0,(LPVOID)0x0);
          SendMessageA(pHVar5,0x30,(WPARAM)wParam,0);
          CheckDlgButton(param_1,300,*(UINT *)param_2[7]);
          iVar15 = (iVar16 - iVar10) - iVar15;
        }
        else {
          iVar15 = (iVar16 - iVar10) / 2;
        }
        local_124 = ((local_134.top - local_134.bottom) - iVar17) + local_160;
        if (local_168 != 0) {
          local_164 = local_168;
          puVar12 = local_c8 + 2;
          do {
            pHVar5 = CreateWindowExA(0,"Button",(LPCSTR)*puVar12,puVar12[-1],iVar15,local_124,
                                     local_134.right - local_134.left,
                                     local_134.bottom - local_134.top,param_1,(HMENU)puVar12[-2],
                                     DAT_00487ed0,(LPVOID)0x0);
            SendMessageA(pHVar5,0x30,(WPARAM)wParam,0);
            puVar12 = puVar12 + 5;
            iVar15 = iVar15 + (ptVar3->cx - local_134.left) + local_134.right;
            local_164 = local_164 + -1;
          } while (local_164 != 0);
        }
        SetDlgItemTextA(param_1,0x3eb,(LPCSTR)param_2[1]);
        FUN_0043b820(param_1,(HWND)0x0,(int *)0x0,0x8001);
        SendMessageA(param_1,0x28,1,0);
        pHVar5 = GetDlgItem(param_1,*(int *)((int)local_c8 + local_fc));
        SendMessageA(param_1,0x28,(WPARAM)pHVar5,1);
        return 0;
      }
      local_124 = 1;
      lpsz = pCVar6 + iVar10;
    }
    if ((int)lpsz - (int)pCVar6 < 1) {
      local_13c = local_13c + 1;
      pCVar6 = lpsz + 1;
    }
    else {
      FUN_00438d50(wParam,pCVar6,(int)lpsz - (int)pCVar6,&local_104);
      local_104.cx = local_104.cx + ptVar3->cx;
      local_13c = local_13c + (local_104.cx + -1 + iVar8) / iVar8;
      iVar10 = local_104.cx;
      if (iVar8 <= local_104.cx) {
        iVar10 = iVar8;
      }
      if ((local_154 <= iVar10) && (local_154 = local_104.cx, iVar8 <= local_104.cx)) {
        local_154 = iVar8;
      }
      if (local_124 != 0) goto LAB_00420c53;
      pCVar6 = lpsz + 1;
    }
  } while( true );
}


