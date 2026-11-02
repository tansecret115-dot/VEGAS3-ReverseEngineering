/* Module: vegas30.exe
   Function: FUN_00480590
   Address: 00480590
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00480590(HWND param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  HDC hdc;
  DWORD DVar1;
  UINT c;
  HGDIOBJ h;
  tagSIZE local_88;
  HGDIOBJ local_80;
  COLORREF local_7c;
  RECT local_78;
  UINT local_68;
  COLORREF local_64;
  tagRECT local_60;
  CHAR local_50 [80];
  
  hdc = GetDC(param_1);
  GetClientRect(param_1,&local_60);
  local_64 = SetBkColor(hdc,0);
  DVar1 = GetSysColor(0x17);
  local_7c = SetTextColor(hdc,DVar1);
  SetTextAlign(hdc,0);
  c = FUN_00497ae0(local_50,0x50,param_4,param_5);
  local_68 = c;
  h = (HGDIOBJ)_SfGetUIFont_4(100);
  local_80 = SelectObject(hdc,h);
  GetTextExtentPointA(hdc,local_50,c,&local_88);
  if (local_60.right < local_88.cx + 3 + param_2) {
    param_2 = (local_60.right - local_88.cx) + -3;
  }
  if (param_2 < local_60.left) {
    param_2 = local_60.left;
  }
  param_3 = param_3 + 0x1a;
  if (((local_60.bottom < local_88.cy + 2 + param_3) &&
      (param_3 = (local_60.bottom - local_88.cy) + -2, param_3 < local_60.top)) ||
     (param_3 < local_60.top)) {
    param_3 = local_60.top;
  }
  _DAT_0064bf88 = local_88.cx + 3 + param_2;
  _DAT_0064bf84 = param_3 + -2;
  _DAT_0064bf80 = param_2 + -3;
  _DAT_0064bf8c = local_88.cy + 2 + param_3;
  local_78.left = _DAT_0064bf80;
  local_78.top = _DAT_0064bf84;
  local_78.right = _DAT_0064bf88;
  local_78.bottom = _DAT_0064bf8c;
  ExtTextOutA(hdc,0,0,2,&local_78,(LPCSTR)0x0,0,(INT *)0x0);
  InflateRect(&local_78,-1,-1);
  DVar1 = GetSysColor(0x18);
  SetBkColor(hdc,DVar1);
  ExtTextOutA(hdc,param_2,param_3,6,&local_78,local_50,local_68,(INT *)0x0);
  SetTextColor(hdc,local_7c);
  SetBkColor(hdc,local_64);
  SelectObject(hdc,local_80);
  ReleaseDC(param_1,hdc);
  return;
}


