/* Module: vegas30.exe
   Function: FUN_005708b0
   Address: 005708b0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __thiscall FUN_005708b0(int param_1,HDC param_2,int *param_3,int param_4)

{
  LPCSTR lpString;
  HDC hdc;
  HGDIOBJ pvVar1;
  int iVar2;
  DWORD DVar3;
  COLORREF CVar4;
  UINT align;
  UINT c;
  tagSIZE *lpsz;
  INT *lpDx;
  UINT local_48;
  int local_44;
  int local_40;
  int local_3c;
  tagSIZE local_38;
  tagRECT local_30;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  hdc = param_2;
  if ((param_4 != 0) && ((*(uint *)(param_4 + 0xc) & 0x1000) != 0)) {
    local_20 = *param_3;
    local_1c = param_3[1];
    local_18 = param_3[2];
    local_14 = *(int *)(param_4 + 0x234) - *(int *)(param_4 + 0x22c);
    if (param_3[3] - param_3[1] <= local_14) {
      local_14 = param_3[3] - param_3[1];
    }
    local_14 = local_14 + local_1c;
    pvVar1 = (HGDIOBJ)_SfGetUIFont_4(100);
    pvVar1 = SelectObject(param_2,pvVar1);
    lpsz = &local_38;
    lpString = (LPCSTR)(param_4 + 0xa0);
    iVar2 = lstrlenA(lpString);
    GetTextExtentPointA(param_2,lpString,iVar2,lpsz);
    SelectObject(param_2,pvVar1);
    if (*(int *)(param_4 + 8) == 4) {
      local_40 = DAT_0064b448;
      local_3c = DAT_0064b44c;
    }
    else if (*(int *)(param_4 + 8) == 2) {
      local_40 = DAT_0064b458;
      local_3c = DAT_0064b45c;
    }
    else {
      local_40 = DAT_0064b448;
      local_3c = DAT_0064b44c;
    }
    local_10 = local_20 + 1;
    local_c = local_1c;
    local_30.top = param_3[1];
    local_8 = local_18;
    local_30.left = *param_3;
    local_4 = local_14;
    local_30.right = param_3[2];
    local_30.bottom = param_3[3];
    InflateRect(&local_30,-2,0);
    if (local_3c <= local_38.cy) {
      local_3c = local_38.cy;
    }
    local_30.bottom = local_3c + local_30.top;
    if (*(int *)(param_4 + 8) != 1) {
      local_30.left = local_40 + 2 + local_10;
    }
    local_48 = 4;
    *(LONG *)(param_4 + 0x2e8) = local_30.left;
    *(LONG *)(param_4 + 0x2ec) = local_30.top;
    *(LONG *)(param_4 + 0x2f0) = local_30.right;
    *(LONG *)(param_4 + 0x2f4) = local_30.bottom;
    if ((*(byte *)(param_4 + 0x1c) & 1) == 0) {
      param_3 = (int *)SetBkColor(param_2,0xffffff);
      CVar4 = SetTextColor(param_2,0);
      local_44 = SetBkMode(param_2,1);
      FUN_0044e9f0(param_2,&local_30,param_1 + 0x2e4,*(undefined4 *)(param_1 + 0x6c0));
      param_2 = (HDC)CVar4;
    }
    else {
      if (*(int *)(param_1 + 0x73c) == 0) {
        DVar3 = GetSysColor(3);
        param_3 = (int *)SetBkColor(param_2,DVar3);
        iVar2 = 0x13;
      }
      else {
        DVar3 = GetSysColor(0xd);
        param_3 = (int *)SetBkColor(param_2,DVar3);
        iVar2 = 0xe;
      }
      DVar3 = GetSysColor(iVar2);
      CVar4 = SetTextColor(param_2,DVar3);
      local_44 = SetBkMode(param_2,2);
      local_48 = 6;
      param_2 = (HDC)CVar4;
    }
    if (*(int *)(param_4 + 8) != 1) {
      FUN_00570850(hdc,&local_10,param_4);
    }
    align = SetTextAlign(hdc,0);
    pvVar1 = (HGDIOBJ)_SfGetUIFont_4(100);
    pvVar1 = SelectObject(hdc,pvVar1);
    lpDx = (INT *)0x0;
    c = lstrlenA(lpString);
    ExtTextOutA(hdc,local_30.left + 2,((local_30.top - local_38.cy) + local_30.bottom) / 2,local_48,
                &local_30,lpString,c,lpDx);
    SelectObject(hdc,pvVar1);
    SetTextAlign(hdc,align);
    if (((*(uint *)(param_4 + 0xc) & 0x400) != 0) && (*(int *)(param_1 + 0x73c) != 0)) {
      DrawFocusRect(hdc,&local_30);
    }
    SetBkColor(hdc,(COLORREF)param_3);
    SetTextColor(hdc,(COLORREF)param_2);
    SetBkMode(hdc,local_44);
  }
  return;
}


