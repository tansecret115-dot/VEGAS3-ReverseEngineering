/* Module: vegas30.exe
   Function: FUN_00425ec0
   Address: 00425ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00425ec0(COLORREF param_1,HDC param_2,int *param_3)

{
  DWORD color;
  LPCSTR lpString;
  HGDIOBJ pvVar1;
  COLORREF CVar2;
  UINT align;
  int mode;
  UINT c;
  INT *lpDx;
  COLORREF local_14;
  RECT local_10;
  
  if (DAT_00647e4c == 0) {
    local_14 = GetSysColor(0x12);
    CVar2 = local_14;
  }
  else if (DAT_00647e4c == 1) {
    local_14 = 0;
    CVar2 = 0xffffff;
  }
  else {
    CVar2 = param_1;
    if (DAT_00647e4c == 2) {
      local_14 = 0xffffff;
      CVar2 = 0;
    }
  }
  if (*(int *)(param_1 + 0xd4) != 0) {
    if (DAT_00647e4c == 0) {
      FUN_0044e9f0(param_2,param_3,0,&DAT_0064b188);
    }
    else {
      SetBkColor(param_2,CVar2);
      ExcludeClipRect(param_2,*(int *)(param_1 + 0xec),*(int *)(param_1 + 0xf0),
                      *(int *)(param_1 + 0xf4),*(int *)(param_1 + 0xf8));
      local_10.right = *(LONG *)(param_1 + 0xe0);
      local_10.left = *(LONG *)(param_1 + 0xd8);
      local_10.top = *(LONG *)(param_1 + 0xdc);
      local_10.bottom = *(LONG *)(param_1 + 0xe4);
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      color = GetSysColor(0xf);
      SetBkColor(param_2,color);
    }
  }
  if (*(int *)(param_1 + 0x98) == 0) {
    lpString = (LPCSTR)_SfGetString_8(DAT_00647204,0x5090);
    pvVar1 = (HGDIOBJ)_SfGetUIFont_4(100);
    pvVar1 = SelectObject(param_2,pvVar1);
    CVar2 = SetTextColor(param_2,local_14);
    align = SetTextAlign(param_2,0x1e);
    mode = SetBkMode(param_2,1);
    local_10.left = *param_3;
    local_10.top = param_3[1];
    local_10.right = param_3[2];
    local_10.bottom = param_3[3];
    GetClientRect(*(HWND *)(param_1 + 0xb8),&local_10);
    local_10.left = *param_3;
    local_10.right = param_3[2];
    lpDx = (INT *)0x0;
    local_10.top = local_10.bottom;
    local_10.bottom = param_3[3];
    c = lstrlenA(lpString);
    ExtTextOutA(param_2,(local_10.right - local_10.left) / 2 + local_10.left,
                (local_10.bottom - local_10.top) / 2 + local_10.top,4,&local_10,lpString,c,lpDx);
    SelectObject(param_2,pvVar1);
    SetTextColor(param_2,CVar2);
    SetTextAlign(param_2,align);
    SetBkMode(param_2,mode);
  }
  return;
}


