/* Module: vegas30.exe
   Function: FUN_004e5380
   Address: 004e5380
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e5380(int param_1,HDC param_2,undefined4 *param_3,int param_4,int param_5,int param_6,
                 int *param_7,int param_8)

{
  int iVar1;
  int iVar2;
  COLORREF color;
  COLORREF color_00;
  HGDIOBJ pvVar3;
  int iVar4;
  int iVar5;
  int y;
  RECT local_10;
  
  iVar1 = param_6 / (param_5 / 2);
  iVar5 = 1;
  if (0 < iVar1) {
    iVar5 = iVar1;
  }
  y = (param_5 + 1) * param_8 + *(int *)(param_1 + 0xac4);
  iVar1 = DAT_00613d3c / iVar5 + param_4;
  iVar2 = DAT_00613d38 / iVar5 + param_4;
  param_4 = DAT_00613d40 / iVar5 + param_4;
  color = _SfGetUIColorAbsolute_4(param_3[6]);
  color_00 = _SfGetUIColorAbsolute_4(param_3[7]);
  _SfGetUIColorAbsolute_4(*param_3);
  _SfGetUIColorAbsolute_4(param_3[1]);
  if ((*param_7 < param_7[1]) || (param_7[4] < param_7[5])) {
    pvVar3 = (HGDIOBJ)_SfGetUIBrush_4(0x271e);
    SetTextColor(param_2,0x808080);
    UnrealizeObject(pvVar3);
    SetBrushOrgEx(param_2,*(int *)(param_1 + 0xb14),*(int *)(param_1 + 0xb18),(LPPOINT)0x0);
    pvVar3 = SelectObject(param_2,pvVar3);
    iVar5 = *param_7;
    if (iVar5 < param_7[1]) {
      iVar4 = param_7[1] - iVar5;
      iVar5 = *(int *)(param_1 + 0xac0) + iVar5;
      SetBkColor(param_2,0xc0c0c0);
      PatBlt(param_2,iVar5,y,iVar4,param_5,0xf00021);
      SetBkColor(param_2,color);
      iVar4 = iVar4 + iVar5;
      local_10.top = iVar2 + y;
      local_10.bottom = local_10.top + 1;
      local_10.left = iVar5;
      local_10.right = iVar4;
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      if (0x3fff < param_6) {
        SetBkColor(param_2,color_00);
        local_10.top = iVar1 + y;
        local_10.bottom = local_10.top + 1;
        local_10.left = iVar5;
        local_10.right = iVar4;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        local_10.top = param_4 + y;
        local_10.bottom = local_10.top + 1;
        local_10.left = iVar5;
        local_10.right = iVar4;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      }
    }
    iVar5 = param_7[4];
    if (iVar5 < param_7[5]) {
      iVar4 = param_7[5] - iVar5;
      iVar5 = *(int *)(param_1 + 0xac0) + iVar5;
      SetBkColor(param_2,0xc0c0c0);
      PatBlt(param_2,iVar5,y,iVar4,param_5,0xf00021);
      SetBkColor(param_2,color);
      local_10.top = iVar2 + y;
      iVar4 = iVar4 + iVar5;
      local_10.bottom = local_10.top + 1;
      local_10.left = iVar5;
      local_10.right = iVar4;
      ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      if (0x3fff < param_6) {
        SetBkColor(param_2,color_00);
        local_10.top = iVar1 + y;
        local_10.bottom = local_10.top + 1;
        local_10.left = iVar5;
        local_10.right = iVar4;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
        local_10.top = y + param_4;
        local_10.bottom = local_10.top + 1;
        local_10.left = iVar5;
        local_10.right = iVar4;
        ExtTextOutA(param_2,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
      }
    }
    SelectObject(param_2,pvVar3);
  }
  return;
}


