/* Module: sfnetmedia.dll
   Function: FUN_0040b610
   Address: 0040b610
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040b610(HWND param_1,int param_2)

{
  WPARAM wParam;
  HDC hdc;
  undefined4 uVar1;
  DWORD DVar2;
  LONG *lParam;
  tagRECT *lParam_00;
  int unaff_retaddr;
  UINT format;
  int nIndex;
  tagRECT local_170;
  HIMAGELIST local_160;
  HIMAGELIST local_15c;
  COLORREF local_158;
  int local_154;
  uint local_150;
  uint local_14c;
  WPARAM local_148;
  uint local_144;
  WPARAM local_140;
  HIMAGELIST p_Stack_13c;
  int iStack_138;
  undefined1 local_134 [8];
  undefined4 local_12c;
  CHAR *pCStack_120;
  undefined4 uStack_11c;
  CHAR aCStack_10c [264];
  HWND pHStack_4;
  
  uVar1 = 0;
  if (*(int *)(param_2 + 0xc) == 0x10001) {
    wParam = *(WPARAM *)(param_2 + 0x24);
    local_140 = wParam;
    local_144 = SendMessageA(param_1,0x102c,wParam,3);
    local_150 = local_144 & 2;
    if (local_150 == 0) {
      DVar2 = GetSysColor(5);
      *(DWORD *)(param_2 + 0x34) = DVar2;
      nIndex = 8;
    }
    else {
      DVar2 = GetSysColor(0xd);
      *(DWORD *)(param_2 + 0x34) = DVar2;
      nIndex = 0xe;
    }
    DVar2 = GetSysColor(nIndex);
    *(DWORD *)(param_2 + 0x30) = DVar2;
    hdc = *(HDC *)(param_2 + 0x10);
    local_158 = 0;
    local_150 = 0;
    local_15c = (HIMAGELIST)SendMessageA(param_1,0x1002,0,0);
    ImageList_GetIconSize(local_15c,(int *)&local_158,(int *)&local_150);
    if (&stack0x00000000 == (undefined1 *)0x16c) {
      lParam = (LONG *)0x0;
    }
    else {
      local_170.top = 1;
      lParam = &local_170.top;
    }
    SendMessageA(param_1,0x100e,wParam,(LPARAM)lParam);
    local_150 = GetSysColor(5);
    if (local_158 != 0) {
      local_150 = GetSysColor(0xd);
    }
    local_158 = SetBkColor(hdc,local_150);
    p_Stack_13c = local_15c + ((local_170.right - (int)local_15c) + -4 + local_170.left) / 2 + 4;
    iStack_138 = ((local_170.bottom - local_154) + -4 + local_170.top) / 2 + 4 + local_154;
    ExtTextOutA(hdc,0,0,2,(RECT *)&stack0xfffffe80,(LPCSTR)0x0,0,(INT *)0x0);
    ExtTextOutA(hdc,0,0,2,(RECT *)&stack0xfffffe80,(LPCSTR)0x0,0,(INT *)0x0);
    ExtTextOutA(hdc,0,0,2,(RECT *)&stack0xfffffe80,(LPCSTR)0x0,0,(INT *)0x0);
    ExtTextOutA(hdc,0,0,2,(RECT *)&stack0xfffffe80,(LPCSTR)0x0,0,(INT *)0x0);
    ImageList_Draw(local_160,local_148,hdc,((local_170.right - (int)local_15c) + local_170.left) / 2
                   ,((local_170.bottom - local_154) + local_170.top) / 2,1);
    if (&stack0x00000000 == (undefined1 *)0x170) {
      lParam_00 = (tagRECT *)0x0;
    }
    else {
      local_170.left = 2;
      lParam_00 = &local_170;
    }
    SendMessageA(pHStack_4,0x100e,local_148,(LPARAM)lParam_00);
    local_160 = (HIMAGELIST)SetTextColor(hdc,*(COLORREF *)(unaff_retaddr + 0x30));
    SetBkColor(hdc,local_150);
    ExtTextOutA(hdc,0,0,2,(RECT *)&stack0xfffffe80,(LPCSTR)0x0,0,(INT *)0x0);
    pCStack_120 = aCStack_10c;
    local_12c = 0;
    uStack_11c = 0x104;
    SendMessageA(pHStack_4,0x102d,local_148,(LPARAM)local_134);
    if ((local_14c & 1) == 0) {
      format = 0x8011;
    }
    else {
      format = 0x2011;
    }
    DrawTextA(hdc,aCStack_10c,-1,&local_170,format);
    SetBkColor(hdc,local_158);
    SetTextColor(hdc,(COLORREF)local_160);
    if ((local_14c & 1) != 0) {
      DrawFocusRect(hdc,&local_170);
    }
    return 4;
  }
  if (*(int *)(param_2 + 0xc) == 1) {
    uVar1 = 0x20;
  }
  return uVar1;
}


