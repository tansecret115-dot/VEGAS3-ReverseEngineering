/* Module: vegas30.exe
   Function: FUN_004126a0
   Address: 004126a0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004126a0(int param_1,HDC param_2,LPCSTR param_3,int param_4)

{
  bool bVar1;
  COLORREF CVar2;
  DWORD color;
  COLORREF color_00;
  HGDIOBJ pvVar3;
  UINT c;
  int y;
  int iVar4;
  tagSIZE local_28;
  tagRECT local_20;
  tagRECT local_10;
  
  CVar2 = _SfGetUIColor_4(0x12);
  CVar2 = SetTextColor(param_2,CVar2);
  color = GetSysColor(0xf);
  color_00 = SetBkColor(param_2,color);
  pvVar3 = (HGDIOBJ)_SfGetUIFont_4(0x91);
  pvVar3 = SelectObject(param_2,pvVar3);
  c = lstrlenA(param_3);
  if ((((byte)*(uint *)(param_1 + 0xc) & 3) == 3) ||
     (bVar1 = false, (*(uint *)(param_1 + 0xc) & 0x80) != 0)) {
    bVar1 = true;
  }
  iVar4 = 0;
  GetTextExtentPoint32A(param_2,param_3,c,&local_28);
  GetClientRect(*(HWND *)(param_1 + 8),&local_20);
  if ((param_4 != 0) || (bVar1)) {
    FUN_00412930(param_1,0,&local_10,0,0,0,0,0,0);
    iVar4 = local_10.bottom - local_10.top;
  }
  y = ((local_20.bottom - local_28.cy) + local_20.top) / 3;
  local_20.top = local_20.top + iVar4;
  if (y <= local_20.top) {
    y = local_20.top;
  }
  if (bVar1) {
    GetClientRect(*(HWND *)(*(int *)(*(int *)(param_1 + 4) + 0x34) + 8),&local_10);
    y = ((local_10.bottom - local_28.cy) + local_10.top) / 3;
    if (y <= local_10.top + iVar4) {
      y = local_10.top + iVar4;
    }
  }
  ExtTextOutA(param_2,((local_20.right - local_28.cx) + local_20.left) / 2,y,6,&local_20,param_3,c,
              (INT *)0x0);
  SetTextColor(param_2,CVar2);
  SetBkColor(param_2,color_00);
  SelectObject(param_2,pvVar3);
  return;
}


