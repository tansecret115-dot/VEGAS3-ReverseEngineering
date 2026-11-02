/* Module: vegas30.exe
   Function: FUN_00505da0
   Address: 00505da0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00505da0(void)

{
  BOOL BVar1;
  HWND hWnd;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int unaff_ESI;
  int unaff_EDI;
  tagWNDCLASSA *ptVar6;
  undefined4 uVar7;
  int X;
  int Y;
  tagRECT local_b4 [2];
  tagWNDCLASSA local_8c [2];
  undefined1 uStack_29;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_14;
  undefined4 uStack_10;
  LPCSTR pCStack_c;
  undefined4 uStack_8;
  int iStack_4;
  
  BVar1 = GetClassInfoA(DAT_006471fc,"Vegas.PanWnd",local_8c);
  if (BVar1 == 0) {
    ptVar6 = local_8c;
    for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
      ptVar6->style = 0;
      ptVar6 = (tagWNDCLASSA *)&ptVar6->lpfnWndProc;
    }
    local_8c[0].lpfnWndProc = (WNDPROC)&LAB_00505600;
    local_8c[0].hInstance = DAT_006471fc;
    local_8c[0].hCursor = (HCURSOR)_SfGetUICursor_4();
    local_8c[0].lpszClassName = "Vegas.PanWnd";
    local_8c[0].hbrBackground = (HBRUSH)0x10;
    RegisterClassA(local_8c);
  }
  if (DAT_0064e510 == 0) {
    if ((DAT_0064b4a8 != (HWND)0x0) && (DAT_0064880c != 0)) {
      uVar7 = 0;
      local_b4[0].left = 0;
      (**(code **)(*DAT_0064b144 + 0x24))(DAT_0064b144,0,local_b4,0);
      local_8c[0].hInstance = (HINSTANCE)FUN_00504760(uVar7);
      uStack_28 = uStack_14;
      uStack_24 = uStack_10;
      lstrcpynA((LPSTR)&local_8c[0].hIcon,pCStack_c,0x50);
      uStack_29 = 0;
      uStack_20 = uStack_8;
      FUN_00505cb0(DAT_0064b4a8,&local_8c[0].hInstance);
      return;
    }
    Y = 0;
    X = 0;
    iVar3 = 0;
    local_b4[0].left = 0;
    (**(code **)(*DAT_0064b144 + 0x24))(DAT_0064b144,0,local_b4);
    local_8c[0].hInstance = (HINSTANCE)FUN_00504760(iVar3);
    uStack_28 = uStack_14;
    uStack_24 = uStack_10;
    lstrcpynA((LPSTR)&local_8c[0].hIcon,pCStack_c,0x50);
    uStack_29 = 0;
    uStack_20 = uStack_8;
    DAT_0064e510 = 1;
    if (DAT_0064763c == 0) {
      SetRect((LPRECT)&stack0xffffff38,*(int *)(iStack_4 + 8),*(int *)(iStack_4 + 0xc),
              *(int *)(iStack_4 + 8) + 100,*(int *)(iStack_4 + 0xc) + 0x97);
      if (DAT_0064880c != 0) {
        OffsetRect((LPRECT)&stack0xffffff38,DAT_00648810 - X,DAT_00648814 - Y);
      }
      hWnd = CreateWindowExA((-(uint)(DAT_0064880c != 0) & 0xfb) + 0x85,"Vegas.PanWnd","",
                             (-(uint)(DAT_0064880c != 0) & 0x24c0000) + 0x80800000,X,Y,unaff_EDI - X
                             ,unaff_ESI - Y,DAT_00647624,(HMENU)0x0,DAT_006471fc,
                             &local_8c[0].hInstance);
      if (hWnd != (HWND)0x0) {
        GetWindowRect(hWnd,(LPRECT)&stack0xffffff38);
        GetClientRect(hWnd,local_b4);
        iVar2 = ((local_b4[0].left - local_b4[0].right) - X) + unaff_EDI;
        if (DAT_00648818 == 0) {
          DAT_00648818 = 0x84;
        }
        else if (DAT_00648818 < 0x6c) {
          DAT_00648818 = 0x6b;
        }
        iVar5 = iVar2 + X + DAT_00648818;
        iVar4 = 0x1d;
        if (iVar3 != 4) {
          iVar4 = 0x3d;
        }
        iVar3 = ((iVar4 - iVar2) - X) + ((local_b4[0].top - local_b4[0].bottom) - Y) + unaff_ESI +
                -4 + iVar5;
        if (iVar3 != unaff_ESI - Y) {
          unaff_ESI = iVar3 + Y;
        }
        _SfForceRectOntoDesktop_12(&stack0xffffff38,0,0);
        SetWindowPos(hWnd,(HWND)0x0,X,Y,iVar5 - X,unaff_ESI - Y,0x14);
        if (DAT_0064880c == 0) {
          FUN_00403d90(hWnd,1,0,iStack_4,&stack0xffffff48,0);
        }
        else {
          ShowWindow(hWnd,5);
          DAT_0064b4a8 = hWnd;
        }
        DAT_0064e510 = 0;
      }
    }
    return;
  }
  FUN_004043e0();
  return;
}


