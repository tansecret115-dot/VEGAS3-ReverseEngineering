/* Module: vidcap30.exe
   Function: FUN_00431360
   Address: 00431360
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00431360(int param_1,HDC param_2,int *param_3,HGDIOBJ param_4)

{
  HDC hdc;
  int *piVar1;
  DWORD DVar2;
  LPCSTR lpString;
  int y;
  int local_44;
  HIMAGELIST local_40;
  UINT local_3c;
  int local_38;
  int local_34;
  COLORREF local_30;
  int local_2c;
  HGDIOBJ local_28;
  COLORREF local_24;
  COLORREF local_20;
  int local_1c;
  HDC local_18;
  COLORREF local_14;
  tagRECT local_10;
  
  piVar1 = param_3;
  local_40 = *(HIMAGELIST *)(param_1 + 0x7c);
  local_10.left = *param_3;
  local_44 = 6;
  local_38 = 0;
  local_10.top = param_3[1];
  local_3c = 0;
  local_34 = 0x12;
  local_10.right = param_3[2];
  local_18 = (HDC)0x0;
  local_10.bottom = param_3[3];
  param_3 = (int *)(*(byte *)((int)param_3 + 0x16) & 1);
  local_14 = 0;
  DVar2 = GetSysColor(0x12);
  hdc = param_2;
  local_24 = SetTextColor(param_2,DVar2);
  DVar2 = GetSysColor(0xf);
  local_20 = SetBkColor(hdc,DVar2);
  local_1c = SetBkMode(hdc,1);
  local_28 = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x98));
  if (local_40 != (HIMAGELIST)0x0) {
    ImageList_GetIconSize(local_40,(int *)&param_2,(int *)&local_30);
    local_18 = param_2;
    local_14 = local_30;
  }
  if (param_3 != (int *)0x0) {
    param_4 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
    if (param_4 != (HGDIOBJ)0x0) {
      UnrealizeObject(param_4);
      SetBrushOrgEx(hdc,0,0,(LPPOINT)0x0);
      param_4 = SelectObject(hdc,param_4);
      DVar2 = GetSysColor(0x14);
      param_2 = (HDC)SetTextColor(hdc,DVar2);
      DVar2 = GetSysColor(0xf);
      local_30 = SetBkColor(hdc,DVar2);
      PatBlt(hdc,*piVar1 + 2,piVar1[1] + 2,(piVar1[2] - *piVar1) + -4,(piVar1[3] - piVar1[1]) + -4,
             0xf00021);
      SetTextColor(hdc,(COLORREF)param_2);
      SetBkColor(hdc,local_30);
      SelectObject(hdc,param_4);
    }
    param_4 = (HGDIOBJ)0x3;
  }
  if (param_4 == (HGDIOBJ)0x1) {
    if (*(HIMAGELIST *)(param_1 + 0x80) != (HIMAGELIST)0x0) {
      local_40 = *(HIMAGELIST *)(param_1 + 0x80);
    }
    local_3c = 4;
  }
  else if (param_4 == (HGDIOBJ)0x2) {
    if (*(HIMAGELIST *)(param_1 + 0x84) != (HIMAGELIST)0x0) {
      local_40 = *(HIMAGELIST *)(param_1 + 0x84);
    }
    local_34 = 0x10;
  }
  else if (param_4 == (HGDIOBJ)0x3) {
    if (*(HIMAGELIST *)(param_1 + 0x88) != (HIMAGELIST)0x0) {
      local_40 = *(HIMAGELIST *)(param_1 + 0x88);
    }
    local_44 = 7;
    local_38 = 1;
    local_3c = 2;
  }
  if (piVar1[6] == 0) {
    local_44 = ((local_10.right - (int)local_18) + local_10.left) / 2;
  }
  else {
    local_44 = local_44 + local_10.left;
  }
  ImageList_Draw(local_40,(int)(short)piVar1[5],hdc,local_44,
                 local_38 + (int)((local_10.bottom - local_14) + local_10.top) / 2,0);
  if (local_3c != 0) {
    DrawEdge(hdc,&local_10,local_3c,0x200f);
  }
  if (piVar1[6] != 0) {
    lpString = (LPCSTR)_SfGetString_8(DAT_005ba2a0,piVar1[6]);
    param_2 = (HDC)lstrlenA(lpString);
    _SfGetTextExtent_16(*(undefined4 *)(param_1 + 0x98),lpString,0xffffffff,&local_30);
    DVar2 = GetSysColor(local_34);
    SetTextColor(hdc,DVar2);
    local_10.left = (int)&local_18[1].unused + local_44 + 1;
    y = ((local_10.bottom - local_2c) + local_10.top) / 2;
    if ((param_4 == (HGDIOBJ)0x3) || (param_3 != (int *)0x0)) {
      y = y + 1;
    }
    ExtTextOutA(hdc,local_10.left,y,4,&local_10,lpString,(UINT)param_2,(INT *)0x0);
  }
  SelectObject(hdc,local_28);
  SetTextColor(hdc,local_24);
  SetBkColor(hdc,local_20);
  SetBkMode(hdc,local_1c);
  return;
}


