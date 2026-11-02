/* Module: vegas30.exe
   Function: FUN_00504a00
   Address: 00504a00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00504a00(HWND param_1,undefined4 *param_2)

{
  SHORT SVar1;
  BOOL BVar2;
  HWND pHVar3;
  HGLOBAL hMem;
  undefined4 *dwNewLong;
  HWND pHVar4;
  LPCSTR pCVar5;
  LPARAM lParam;
  int iVar6;
  int unaff_EBX;
  int unaff_ESI;
  undefined4 *puVar7;
  int unaff_EDI;
  undefined4 *puVar8;
  DWORD DVar9;
  int iVar10;
  int iVar11;
  HMENU pHVar12;
  HINSTANCE pHVar13;
  LPVOID pvVar14;
  int iVar15;
  undefined4 uVar16;
  tagRECT local_b0;
  tagRECT tStack_a0;
  int iStack_90;
  WPARAM WStack_8c;
  int aiStack_88 [5];
  int *local_74;
  int iStack_70;
  tagRECT local_6c;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 local_38 [20];
  HICON pHStack_24;
  HCURSOR local_20;
  HBRUSH local_1c;
  HWND local_14;
  int iStack_10;
  
  GetWindowRect(param_1,&local_6c);
  _SfForceRectOntoDesktop_12(&local_6c,0,0);
  SetWindowPos(param_1,(HWND)0x0,local_6c.left,local_6c.top,local_6c.right - local_6c.left,
               local_6c.bottom - local_6c.top,0x11);
  BVar2 = GetClassInfoA(DAT_006471fc,"Vegas.PanParent",(LPWNDCLASSA)local_38);
  if (BVar2 == 0) {
    puVar7 = (undefined4 *)local_38;
    for (iVar6 = 10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    local_38._4_4_ = &DAT_00505000;
    local_38._16_4_ = DAT_006471fc;
    local_20 = (HCURSOR)_SfGetUICursor_4(0x7f00);
    local_14 = (HWND)0x619e90;
    local_1c = (HBRUSH)0x10;
    RegisterClassA((WNDCLASSA *)local_38);
  }
  pHVar3 = CreateWindowExA(0x10000,"Vegas.PanParent",(LPCSTR)0x0,0x52000000,0,0,0,0,param_1,
                           (HMENU)0x0,DAT_006471fc,(LPVOID)0x0);
  if (pHVar3 != (HWND)0x0) {
    local_74 = (int *)_SfGetUIFont_4(100);
    SendMessageA(pHVar3,0x30,(WPARAM)local_74,1);
    hMem = GlobalAlloc(0x40,0xd8);
    dwNewLong = GlobalLock(hMem);
    uVar16 = 0;
    iVar15 = 0;
    *dwNewLong = param_1;
    dwNewLong[0x15] = pHVar3;
    local_b0.top = (LONG)(dwNewLong + 0x2c);
    dwNewLong[0x1f] = *param_2;
    puVar7 = (undefined4 *)param_2[0x15];
    *(undefined4 *)local_b0.top = *puVar7;
    dwNewLong[0x2d] = puVar7[1];
    dwNewLong[0x2e] = puVar7[2];
    puVar7 = (undefined4 *)param_2[0x16];
    puVar8 = dwNewLong + 0x2f;
    for (iVar6 = 5; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    dwNewLong[0x35] = param_2[0x18];
    dwNewLong[0x34] = (dwNewLong[0x34] ^ DAT_0064880c) & 1 ^ dwNewLong[0x34];
    local_b0.left = 0;
    (**(code **)(*DAT_0064b144 + 0x24))(DAT_0064b144,0,&local_b0,0,0,0);
    dwNewLong[0x1a] = (uint)(iVar15 != 4);
    lstrcpynA((LPSTR)(dwNewLong + 1),(LPCSTR)(iStack_10 + 4),0x50);
    *(undefined1 *)((int)dwNewLong + 0x53) = 0;
    SetWindowTextA(local_14,(LPCSTR)(dwNewLong + 1));
    if ((code *)dwNewLong[0x30] != (code *)0x0) {
      (*(code *)dwNewLong[0x30])(uVar16,dwNewLong + 0x20);
    }
    puVar7 = dwNewLong + 0x20;
    puVar8 = dwNewLong + 0x26;
    for (iVar6 = 6; iVar6 != 0; iVar6 = iVar6 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    SetWindowLongA(local_14,-0x15,(LONG)dwNewLong);
    SetWindowLongA(pHVar3,-0x15,(LONG)dwNewLong);
    SendMessageA(pHVar3,0x30,WStack_8c,1);
    pHVar4 = CreateWindowExA(4,"SfKrn_Pan_Class","",0x50010010,1,0x1b,0x80,0x80,pHVar3,
                             (HMENU)&DAT_000003ea,DAT_006471fc,(LPVOID)0x0);
    dwNewLong[0x17] = pHVar4;
    SVar1 = GetAsyncKeyState(0x10);
    if (SVar1 < 0) {
      GetClientRect(local_14,&local_b0);
      GetWindowRect(local_14,&tStack_a0);
      tStack_a0.right = tStack_a0.right + 0x84 + (local_b0.left - local_b0.right);
      tStack_a0.bottom =
           local_b0.top +
           tStack_a0.bottom +
           (((-(uint)(dwNewLong[0x1a] != 1) & 0xffffffe0) + 0xbd) - local_b0.bottom);
      SetWindowPos(local_14,(HWND)0x0,tStack_a0.left,tStack_a0.top,tStack_a0.right - tStack_a0.left,
                   tStack_a0.bottom - tStack_a0.top,0x16);
      GetClientRect(local_14,&local_b0);
      DAT_00648810 = tStack_a0.left;
      DAT_00648814 = tStack_a0.top;
      DAT_00648818 = local_b0.right - local_b0.left;
      _DAT_0064881c = local_b0.bottom - local_b0.top;
    }
    SetRect((LPRECT)(dwNewLong + 0x1b),1,2,0x3d,0x19);
    pvVar14 = (LPVOID)0x0;
    pHVar12 = (HMENU)&DAT_000003e8;
    iVar11 = 0xe;
    iVar10 = 0x80;
    iVar15 = 0x9b;
    iVar6 = 1;
    DVar9 = 0x54010003;
    pHVar4 = pHVar3;
    pHVar13 = DAT_006471fc;
    pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x5039);
    pHVar4 = CreateWindowExA(4,"Button",pCVar5,DVar9,iVar6,iVar15,iVar10,iVar11,pHVar4,pHVar12,
                             pHVar13,pvVar14);
    dwNewLong[0x18] = pHVar4;
    SendMessageA(pHVar4,0x30,WStack_8c,1);
    pvVar14 = (LPVOID)0x0;
    pHVar12 = (HMENU)&DAT_000003e9;
    iVar11 = 0xe;
    iVar10 = 0x80;
    iVar15 = 0xab;
    iVar6 = 1;
    DVar9 = 0x54010003;
    pHVar13 = DAT_006471fc;
    pCVar5 = (LPCSTR)_SfGetString_8(DAT_00647204,0x503a);
    pHVar3 = CreateWindowExA(4,"Button",pCVar5,DVar9,iVar6,iVar15,iVar10,iVar11,pHVar3,pHVar12,
                             pHVar13,pvVar14);
    dwNewLong[0x19] = pHVar3;
    SendMessageA(pHVar3,0x30,WStack_8c,1);
    pHVar3 = (HWND)dwNewLong[0x17];
    lParam = FUN_00504730(dwNewLong[0x1f]);
    SendMessageA(pHVar3,0x606,0,lParam);
    local_6c.left = (LONG)DAT_0064b380;
    ImageList_GetIconSize(DAT_0064b380,aiStack_88,&iStack_90);
    local_6c.top = 0xb;
    local_6c.bottom = 10;
    uStack_5c = 10;
    local_6c.right = aiStack_88[0];
    if (aiStack_88[0] <= iStack_90) {
      local_6c.right = iStack_90;
    }
    local_74 = DAT_0064b394;
    if (DAT_0064b394 == (int *)0x0) {
      iStack_70 = 0;
    }
    else {
      iVar6 = DAT_0064b394[8];
      if ((iVar6 == 0) && (*(ushort *)((int)DAT_0064b394 + 0xe) < 9)) {
        iVar6 = 1 << ((byte)*(ushort *)((int)DAT_0064b394 + 0xe) & 0x1f);
      }
      iStack_70 = *DAT_0064b394 + iVar6 * 4 + (int)DAT_0064b394;
    }
    uStack_54 = 1;
    uStack_58 = 1;
    SendMessageA(pHVar3,0x60c,0,(LPARAM)&local_74);
    if ((dwNewLong[0x1f] & 8) == 0) {
      pHVar3 = (HWND)dwNewLong[0x19];
      ShowWindow((HWND)dwNewLong[0x18],0);
      ShowWindow(pHVar3,0);
    }
    if ((DAT_0064e4f0 & 1) == 0) {
      DAT_0064e4f0 = DAT_0064e4f0 | 1;
      _DAT_0064e4fc = 400;
      _DAT_0064e4f8 = dwNewLong[0x34] & 1 | 0x4a;
      _DAT_0064e504 = 0;
      DAT_0064e500 = 4;
      DAT_0064e501 = 0x10;
      DAT_0064e502 = 0;
      DAT_0064e503 = 0;
      _DAT_0064e508 = 0;
    }
    pHVar4 = (HWND)FUN_0043bc10(dwNewLong[0x15],200,&DAT_0064e4f8,1,0);
    GetWindowRect(pHVar4,(LPRECT)&stack0xffffff40);
    pHVar3 = local_14;
    MapWindowPoints((HWND)0x0,local_14,(LPPOINT)&stack0xffffff40,2);
    GetClientRect(pHVar3,(LPRECT)(local_38 + 0x10));
    OffsetRect((LPRECT)&stack0xffffff40,(int)local_20 + (-2 - (unaff_EDI + 0x19)),
               (int)pHStack_24 + (2 - unaff_ESI));
    SetWindowPos(pHVar4,(HWND)0x0,unaff_EDI,unaff_ESI,(unaff_EDI + 0x19) - unaff_EDI,
                 unaff_EBX - unaff_ESI,0);
    dwNewLong[0x16] = pHVar4;
    FUN_005047b0(dwNewLong,0,dwNewLong + 0x26);
    if ((code *)dwNewLong[0x33] != (code *)0x0) {
      (*(code *)dwNewLong[0x33])(uVar16,1);
    }
  }
  return;
}


