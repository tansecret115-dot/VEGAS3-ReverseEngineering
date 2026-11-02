/* Module: vegas30k.dll
   Function: FUN_01072300
   Address: 01072300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01072300(HWND param_1,HDC param_2)

{
  LONG LVar1;
  undefined4 *puVar2;
  UINT c;
  int iVar3;
  DWORD DVar4;
  CHAR local_180 [260];
  tagPAINTSTRUCT local_7c;
  undefined4 *local_3c;
  int local_38;
  RECT local_34;
  tagRECT local_24;
  tagSIZE local_14;
  int local_c;
  HGDIOBJ local_8;
  
  puVar2 = (undefined4 *)GetWindowLongA(param_1,-0x15);
  local_3c = puVar2;
  if (param_2 == (HDC)0x0) {
    param_2 = BeginPaint((HWND)*puVar2,&local_7c);
  }
  else {
    local_7c.hdc = (HDC)0x0;
    local_7c.fErase = 1;
  }
  if ((int)puVar2[4] < 1) {
    puVar2[4] = 1;
  }
  if ((int)puVar2[4] < (int)puVar2[5]) {
    puVar2[5] = puVar2[4];
  }
  GetClientRect(param_1,&local_24);
  LVar1 = local_24.right;
  local_34.top = local_24.top;
  local_34.right = local_24.right;
  local_8 = (HGDIOBJ)(local_24.right - local_24.left);
  local_34.bottom = local_24.bottom;
  local_38 = local_24.bottom;
  local_c = puVar2[4];
  local_34.left = (LONG)(((longlong)(int)puVar2[5] * (longlong)(int)local_8) / (longlong)local_c);
  local_24.right = local_34.left;
  c = GetWindowTextA(param_1,local_180,0xf5);
  if ((c == 0) || (puVar2[2] != 0)) {
    local_8 = (HGDIOBJ)puVar2[4];
    local_c = 100;
    iVar3 = wsprintfA(local_180 + c,"%d %%",
                      (int)(((longlong)(int)puVar2[5] * 100) / (longlong)(int)local_8));
    c = c + iVar3;
  }
  local_8 = (HGDIOBJ)puVar2[1];
  if (local_8 != (HGDIOBJ)0x0) {
    local_8 = SelectObject(param_2,local_8);
  }
  GetTextExtentPointA(param_2,local_180,c,&local_14);
  param_1 = (HWND)((LVar1 - local_14.cx) / 2);
  if ((int)param_1 < 3) {
    param_1 = (HWND)0x3;
  }
  iVar3 = (local_38 - local_14.cy) / 2;
  DVar4 = GetSysColor(0xd);
  SetBkColor(param_2,DVar4);
  DVar4 = GetSysColor(0xe);
  SetTextColor(param_2,DVar4);
  ExtTextOutA(param_2,(int)param_1,iVar3,6,&local_24,local_180,c,(INT *)0x0);
  DVar4 = GetSysColor(5);
  SetBkColor(param_2,DVar4);
  DVar4 = GetSysColor(8);
  SetTextColor(param_2,DVar4);
  ExtTextOutA(param_2,(int)param_1,iVar3,6,&local_34,local_180,c,(INT *)0x0);
  if (local_8 != (HGDIOBJ)0x0) {
    SelectObject(param_2,local_8);
  }
  if (local_7c.hdc != (HDC)0x0) {
    EndPaint((HWND)*local_3c,&local_7c);
  }
  return;
}


