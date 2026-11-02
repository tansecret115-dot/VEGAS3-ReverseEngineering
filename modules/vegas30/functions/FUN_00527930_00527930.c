/* Module: vegas30.exe
   Function: FUN_00527930
   Address: 00527930
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00527930(LPVOID param_1)

{
  undefined4 uVar1;
  WPARAM wParam;
  BOOL BVar2;
  HWND hWndParent;
  HGLOBAL hMem;
  LPVOID pvVar3;
  HWND pHVar4;
  LPCSTR pCVar5;
  LPCSTR lpClassName;
  int iVar6;
  tagWNDCLASSA *ptVar7;
  uint *puVar8;
  DWORD DVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  HMENU pHVar13;
  HINSTANCE pHVar14;
  tagWNDCLASSA local_85c;
  tagRECT local_834;
  uint local_824 [127];
  undefined1 local_628 [532];
  uint local_414 [3];
  undefined4 local_408;
  undefined4 local_404;
  undefined4 local_4;
  
  uVar1 = FUN_00509ea0(0);
  *(undefined4 *)((int)param_1 + 0xfc) = uVar1;
  *(undefined4 *)((int)param_1 + 0x100) = 0;
  FUN_005277b0(param_1);
  wParam = _SfGetUIFont_4(100);
  _SfGetUIFontSize_4(100);
  BVar2 = GetClassInfoA(DAT_006471fc,"Vegas.PlugInExplorerParent",&local_85c);
  if (BVar2 == 0) {
    ptVar7 = &local_85c;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      ptVar7->style = 0;
      ptVar7 = (tagWNDCLASSA *)&ptVar7->lpfnWndProc;
    }
    local_85c.lpfnWndProc = (WNDPROC)&LAB_0052a250;
    local_85c.hInstance = DAT_006471fc;
    local_85c.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_85c.lpszClassName = "Vegas.PlugInExplorerParent";
    local_85c.hbrBackground = (HBRUSH)0x10;
    local_85c.style = 0xb;
    RegisterClassA(&local_85c);
  }
  BVar2 = GetClassInfoA(DAT_006471fc,"Vegas.PlugInExplorerBox",&local_85c);
  if (BVar2 == 0) {
    ptVar7 = &local_85c;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      ptVar7->style = 0;
      ptVar7 = (tagWNDCLASSA *)&ptVar7->lpfnWndProc;
    }
    local_85c.lpfnWndProc = (WNDPROC)&LAB_0052a230;
    local_85c.hInstance = DAT_006471fc;
    local_85c.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_85c.lpszClassName = "Vegas.PlugInExplorerBox";
    local_85c.hbrBackground = (HBRUSH)0x10;
    local_85c.style = 0xb;
    RegisterClassA(&local_85c);
  }
  *(undefined4 *)((int)param_1 + 0xe8) = 0;
  hWndParent = CreateWindowExA(0x10000,"Vegas.PlugInExplorerParent",(LPCSTR)0x0,0x52000000,0,0,0,0,
                               *(HWND *)((int)param_1 + 8),*(HMENU *)((int)param_1 + 0x80),
                               DAT_006471fc,param_1);
  if (hWndParent != (HWND)0x0) {
    *(HWND *)((int)param_1 + 0x8c) = hWndParent;
    hMem = GlobalAlloc(0x40,0x10);
    pvVar3 = GlobalLock(hMem);
    if (pvVar3 == (LPVOID)0x0) {
      uVar1 = 0;
    }
    else {
      uVar1 = FUN_00523bd0(param_1);
    }
    *(undefined4 *)((int)param_1 + 0x11c) = uVar1;
    puVar8 = local_824;
    for (iVar6 = 0x104; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = 0;
      puVar8 = puVar8 + 1;
    }
    iVar6 = FUN_00524280(param_1,local_414);
    if (iVar6 < 0) {
      local_824[0] = local_824[0] | 5;
      local_824[3] = 0x96;
      iVar6 = FUN_00527890(param_1);
    }
    else {
      local_824[3] = local_408;
      local_824[4] = local_404;
      local_824[0] = local_824[0] ^ (local_824[0] ^ local_414[0]) & 1;
      local_824[0] = local_824[0] ^ (local_824[0] ^ local_414[0]) & 2;
      local_824[0] = local_824[0] ^ (local_824[0] ^ local_414[0]) & 4;
      iVar6 = FUN_0050a040(*(undefined4 *)((int)param_1 + 0x10c),local_4);
      if (iVar6 == 0) {
        iVar6 = FUN_00527890(param_1);
      }
    }
    FUN_00524310(param_1,iVar6,local_628,0x208);
    local_824[1] = *(undefined4 *)((int)param_1 + 0x11c);
    GetClientRect(*(HWND *)((int)param_1 + 8),&local_834);
    pHVar4 = CreateWindowExA(0x10000,"SfKrn_ExplorerEx_Class","",0x52000010,0,0,local_834.right,
                             local_834.bottom,hWndParent,(HMENU)&DAT_000000d4,DAT_006471fc,local_824
                            );
    if (pHVar4 != (HWND)0x0) {
      *(HWND *)((int)param_1 + 0xb0) = pHVar4;
      *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0xe8) + 1;
    }
    if (*(int *)((int)param_1 + 0x84) != 0) {
      pvVar3 = (LPVOID)0x0;
      pHVar13 = (HMENU)&DAT_000000d6;
      iVar12 = 0;
      iVar11 = 0;
      iVar10 = 0;
      iVar6 = 0;
      DVar9 = 0x50010001;
      pHVar4 = hWndParent;
      pHVar14 = DAT_006471fc;
      pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4f7b);
      pHVar4 = CreateWindowExA(0,"Button",pCVar5,DVar9,iVar6,iVar10,iVar11,iVar12,pHVar4,pHVar13,
                               pHVar14,pvVar3);
      if (pHVar4 != (HWND)0x0) {
        SendMessageA(pHVar4,0x30,wParam,0);
        *(HWND *)((int)param_1 + 0xc4) = pHVar4;
        *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0xe8) + 1;
      }
      pvVar3 = (LPVOID)0x0;
      pHVar13 = (HMENU)&DAT_000000d5;
      iVar12 = 0;
      iVar11 = 0;
      iVar10 = 0;
      iVar6 = 0;
      DVar9 = 0x50010000;
      pHVar4 = hWndParent;
      pHVar14 = DAT_006471fc;
      pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4f7c);
      pHVar4 = CreateWindowExA(0,"Button",pCVar5,DVar9,iVar6,iVar10,iVar11,iVar12,pHVar4,pHVar13,
                               pHVar14,pvVar3);
      if (pHVar4 != (HWND)0x0) {
        SendMessageA(pHVar4,0x30,wParam,0);
        *(HWND *)((int)param_1 + 200) = pHVar4;
        *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0xe8) + 1;
      }
      pvVar3 = (LPVOID)0x0;
      pHVar13 = (HMENU)&DAT_000000d2;
      iVar12 = 0;
      iVar11 = 0;
      iVar10 = 0;
      iVar6 = 0;
      DVar9 = 0x50010000;
      pHVar4 = hWndParent;
      pHVar14 = DAT_006471fc;
      pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4f7d);
      pHVar4 = CreateWindowExA(0,"Button",pCVar5,DVar9,iVar6,iVar10,iVar11,iVar12,pHVar4,pHVar13,
                               pHVar14,pvVar3);
      if (pHVar4 != (HWND)0x0) {
        SendMessageA(pHVar4,0x30,wParam,0);
        *(HWND *)((int)param_1 + 0xcc) = pHVar4;
        *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0xe8) + 1;
      }
      pvVar3 = (LPVOID)0x0;
      pHVar13 = (HMENU)&DAT_00000192;
      iVar12 = 0;
      iVar11 = 0;
      iVar10 = 0;
      iVar6 = 0;
      DVar9 = 0x50010000;
      pHVar4 = hWndParent;
      pHVar14 = DAT_006471fc;
      pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6d78);
      pHVar4 = CreateWindowExA(0,"Button",pCVar5,DVar9,iVar6,iVar10,iVar11,iVar12,pHVar4,pHVar13,
                               pHVar14,pvVar3);
      if (pHVar4 != (HWND)0x0) {
        SendMessageA(pHVar4,0x30,wParam,0);
        *(HWND *)((int)param_1 + 0xd0) = pHVar4;
        *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0xe8) + 1;
      }
      pvVar3 = (LPVOID)0x0;
      pHVar13 = (HMENU)&DAT_000000d1;
      iVar12 = 0;
      iVar11 = 0;
      iVar10 = 0;
      iVar6 = 0;
      DVar9 = 0x50010000;
      pHVar4 = hWndParent;
      pHVar14 = DAT_006471fc;
      pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x6d79);
      pHVar4 = CreateWindowExA(0,"Button",pCVar5,DVar9,iVar6,iVar10,iVar11,iVar12,pHVar4,pHVar13,
                               pHVar14,pvVar3);
      if (pHVar4 != (HWND)0x0) {
        SendMessageA(pHVar4,0x30,wParam,0);
        *(HWND *)((int)param_1 + 0xd4) = pHVar4;
        *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0xe8) + 1;
      }
      pHVar4 = CreateWindowExA(0,"Vegas.PlugInExplorerBox",(LPCSTR)0x0,0x54000000,0,0,0,0,hWndParent
                               ,(HMENU)&DAT_000000d8,DAT_006471fc,(LPVOID)0x0);
      if (pHVar4 != (HWND)0x0) {
        SendMessageA(pHVar4,0x30,wParam,0);
        *(HWND *)((int)param_1 + 0xd8) = pHVar4;
        *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0xe8) + 1;
      }
      _DAT_00657348 = 0x34;
      _DAT_0065734c = **(int **)((int)param_1 + 0x84);
      if (_DAT_0065734c == -1) {
        _DAT_0065734c = (*(int **)((int)param_1 + 0x84))[1] + 0x20;
      }
      pHVar4 = CreateWindowExA(4,"SfKrn_TabControl_Class",(LPCSTR)0x0,0x50000180,0,0,0,0,hWndParent,
                               (HMENU)&DAT_000000cd,DAT_006471fc,&DAT_00657348);
      if (pHVar4 != (HWND)0x0) {
        SendMessageA(pHVar4,0x30,wParam,0);
        *(HWND *)((int)param_1 + 0xdc) = pHVar4;
        *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0xe8) + 1;
      }
      SendMessageA(pHVar4,0x60f,1,0);
      FUN_005249d0(param_1);
      pvVar3 = (LPVOID)0x0;
      pHVar13 = (HMENU)&DAT_000000d7;
      iVar12 = 0;
      iVar11 = 0;
      iVar10 = 0;
      iVar6 = 0;
      DVar9 = 0x50000001;
      pHVar4 = hWndParent;
      pHVar14 = DAT_006471fc;
      pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4f7f);
      lpClassName = (LPCSTR)_SfGetString_8(DAT_00647204,0x4f7e);
      pHVar4 = CreateWindowExA(0,lpClassName,pCVar5,DVar9,iVar6,iVar10,iVar11,iVar12,pHVar4,pHVar13,
                               pHVar14,pvVar3);
      if (pHVar4 != (HWND)0x0) {
        SendMessageA(pHVar4,0x30,wParam,0);
        *(HWND *)((int)param_1 + 0xe0) = pHVar4;
        *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0xe8) + 1;
      }
      *(undefined4 *)((int)param_1 + 0xa0) = DAT_0064b320;
      *(undefined4 *)((int)param_1 + 0xa4) = DAT_0064b324;
      iVar6 = FUN_0043bc10(hWndParent,0xd9,&DAT_0061a690,2,0);
      if (iVar6 != 0) {
        *(int *)((int)param_1 + 0xe4) = iVar6;
        *(int *)((int)param_1 + 0xe8) = *(int *)((int)param_1 + 0xe8) + 1;
      }
    }
    FUN_00524880(param_1);
    FUN_00524ad0(param_1);
    SendMessageA(*(HWND *)((int)param_1 + 0xdc),0x602,*(WPARAM *)((int)param_1 + 0xec),0);
    SetFocus(*(HWND *)((int)param_1 + 0xc4));
    return 1;
  }
  return 0;
}


