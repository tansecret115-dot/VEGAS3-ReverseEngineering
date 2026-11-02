/* Module: vegas30.exe
   Function: FUN_00418ec0
   Address: 00418ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00418ec0(LPVOID param_1)

{
  WPARAM wParam;
  HGLOBAL hMem;
  undefined4 *puVar1;
  BOOL BVar2;
  HWND hWndParent;
  WPARAM WVar3;
  LPCSTR pCVar4;
  HWND pHVar5;
  undefined4 uVar6;
  int iVar7;
  tagWNDCLASSA *ptVar8;
  DWORD DVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  HMENU pHVar13;
  HINSTANCE pHVar14;
  LPVOID pvVar15;
  tagWNDCLASSA local_28;
  
  wParam = _SfGetUIFont_4(100);
  _SfGetUIFontSize_4(100);
  hMem = GlobalAlloc(0x40,0xc);
  puVar1 = GlobalLock(hMem);
  if (puVar1 == (undefined4 *)0x0) {
    puVar1 = (undefined4 *)0x0;
  }
  else {
    puVar1[1] = 0;
    puVar1[2] = param_1;
    *puVar1 = &PTR_LAB_00610490;
  }
  *(undefined4 **)((int)param_1 + 0x234) = puVar1;
  BVar2 = GetClassInfoA(DAT_006471fc,"Vegas.FxViewParent",&local_28);
  if (BVar2 == 0) {
    ptVar8 = &local_28;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      ptVar8->style = 0;
      ptVar8 = (tagWNDCLASSA *)&ptVar8->lpfnWndProc;
    }
    local_28.style = 0;
    local_28.lpfnWndProc = (WNDPROC)&LAB_0041e4d0;
    local_28.hInstance = DAT_006471fc;
    local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_28.lpszClassName = "Vegas.FxViewParent";
    local_28.hbrBackground = (HBRUSH)0x10;
    RegisterClassA(&local_28);
  }
  hWndParent = CreateWindowExA(0x10000,"Vegas.FxViewParent",(LPCSTR)0x0,0x52000000,0,0,0,0,
                               *(HWND *)((int)param_1 + 8),*(HMENU *)((int)param_1 + 0x88),
                               DAT_006471fc,param_1);
  if (hWndParent == (HWND)0x0) {
    return 0;
  }
  *(HWND *)((int)param_1 + 0x1c8) = hWndParent;
  if (*(int *)((int)param_1 + 0x8c) == 5) {
    WVar3 = _SfGetUIFont_4(100);
    pvVar15 = (LPVOID)0x0;
    pHVar13 = (HMENU)0x1;
    iVar12 = 0;
    iVar11 = 0;
    iVar10 = 0;
    iVar7 = 0;
    DVar9 = 0x50030001;
    pHVar5 = hWndParent;
    pHVar14 = DAT_006471fc;
    pCVar4 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4f7b);
    pHVar5 = CreateWindowExA(0,"Button",pCVar4,DVar9,iVar7,iVar10,iVar11,iVar12,pHVar5,pHVar13,
                             pHVar14,pvVar15);
    if (pHVar5 != (HWND)0x0) {
      SendMessageA(pHVar5,0x30,WVar3,0);
    }
    pvVar15 = (LPVOID)0x0;
    pHVar13 = (HMENU)0x2;
    iVar12 = 0;
    iVar11 = 0;
    iVar10 = 0;
    iVar7 = 0;
    DVar9 = 0x50030000;
    pHVar5 = hWndParent;
    pHVar14 = DAT_006471fc;
    pCVar4 = (LPCSTR)_SfGetString_8(DAT_00647204,0x4f7c);
    pHVar5 = CreateWindowExA(0,"Button",pCVar4,DVar9,iVar7,iVar10,iVar11,iVar12,pHVar5,pHVar13,
                             pHVar14,pvVar15);
    if (pHVar5 != (HWND)0x0) {
      SendMessageA(pHVar5,0x30,WVar3,0);
    }
  }
  DAT_0063d318 = DAT_0063d318 | 4;
  pHVar5 = CreateWindowExA(4,"SfKrn_TabControl_Class",(LPCSTR)0x0,0x50000180,0,0,0,0,hWndParent,
                           (HMENU)&DAT_000000cd,DAT_006471fc,&DAT_0063d310);
  if (pHVar5 != (HWND)0x0) {
    SendMessageA(pHVar5,0x30,wParam,0);
  }
  *(HWND *)((int)param_1 + 0x1b4) = pHVar5;
  switch(*(undefined4 *)((int)param_1 + 0x8c)) {
  case 2:
    WVar3 = 1;
    break;
  case 3:
  case 4:
  case 5:
    WVar3 = 0;
    break;
  default:
    goto switchD_004190b6_default;
  }
  SendMessageA(pHVar5,0x60f,WVar3,0);
switchD_004190b6_default:
  BVar2 = GetClassInfoA(DAT_006471fc,"SF.PropPageSite",&local_28);
  if (BVar2 == 0) {
    ptVar8 = &local_28;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      ptVar8->style = 0;
      ptVar8 = (tagWNDCLASSA *)&ptVar8->lpfnWndProc;
    }
    local_28.lpfnWndProc = (WNDPROC)&LAB_0041a3a0;
    local_28.hInstance = DAT_006471fc;
    local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_28.lpszClassName = "SF.PropPageSite";
    local_28.hbrBackground = (HBRUSH)0x10;
    RegisterClassA(&local_28);
  }
  pHVar5 = CreateWindowExA(0x10100,"SF.PropPageSite",(LPCSTR)0x0,0x46000000,0,0,0,0,hWndParent,
                           (HMENU)&DAT_000000c8,DAT_006471fc,param_1);
  *(HWND *)((int)param_1 + 0x238) = pHVar5;
  DAT_0063d318 = DAT_0063d318 & 0xfffffffc;
  pHVar5 = CreateWindowExA(4,"SfKrn_TabControl_Class",(LPCSTR)0x0,0x40020000,0,0,0,0,hWndParent,
                           (HMENU)&DAT_000000c9,DAT_006471fc,&DAT_0063d310);
  if (pHVar5 != (HWND)0x0) {
    SendMessageA(pHVar5,0x30,wParam,0);
  }
  *(HWND *)((int)param_1 + 0x250) = pHVar5;
  BVar2 = GetClassInfoA(DAT_006471fc,"Acid.ClipMeters",&local_28);
  if (BVar2 == 0) {
    ptVar8 = &local_28;
    for (iVar7 = 10; iVar7 != 0; iVar7 = iVar7 + -1) {
      ptVar8->style = 0;
      ptVar8 = (tagWNDCLASSA *)&ptVar8->lpfnWndProc;
    }
    local_28.lpfnWndProc = (WNDPROC)&LAB_0041a480;
    local_28.hInstance = DAT_006471fc;
    local_28.hCursor = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_28.lpszClassName = "Acid.ClipMeters";
    RegisterClassA(&local_28);
  }
  *(undefined4 *)((int)param_1 + 0x328) = 0;
  iVar7 = FUN_00422820(param_1);
  if (iVar7 != 0) {
    FUN_004181a0(param_1);
  }
  uVar6 = FUN_00418bc0(param_1);
  *(undefined4 *)((int)param_1 + 0x204) = uVar6;
  FUN_00418c70(param_1);
  FUN_00417d70(param_1,hWndParent,0xcf);
  pHVar5 = CreateWindowExA(0,"Scrollbar",(LPCSTR)0x0,0x50000010,0,0,0,0,hWndParent,
                           (HMENU)&DAT_000000d1,DAT_006471fc,(LPVOID)0x0);
  *(HWND *)((int)param_1 + 0x2b0) = pHVar5;
  *(undefined4 *)((int)param_1 + 0x2b4) = 0;
  FUN_00419310(param_1);
  if (*(HWND *)((int)param_1 + 0x1b4) != (HWND)0x0) {
    SendMessageA(*(HWND *)((int)param_1 + 0x1b4),0x602,*(WPARAM *)((int)param_1 + 0x1bc),0);
  }
  if (*(int *)((int)param_1 + 0x8c) != 5) {
    SendMessageA(hWndParent,0x111,(uint)*(ushort *)((int)param_1 + 0x1bc) << 0x10 | 0xcd,
                 *(LPARAM *)((int)param_1 + 0x1b4));
    return 1;
  }
  PostMessageA(hWndParent,0x111,(uint)*(ushort *)((int)param_1 + 0x1bc) << 0x10 | 0xcd,
               *(LPARAM *)((int)param_1 + 0x1b4));
  return 1;
}


