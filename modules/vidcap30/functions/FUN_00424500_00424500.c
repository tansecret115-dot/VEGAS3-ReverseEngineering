/* Module: vidcap30.exe
   Function: FUN_00424500
   Address: 00424500
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00424500(int param_1,HDC param_2)

{
  byte bVar1;
  COLORREF CVar2;
  HDC hdc;
  HGDIOBJ pvVar3;
  HBRUSH hbr;
  COLORREF CVar4;
  UINT align;
  int iVar5;
  int iVar6;
  uint uVar7;
  UINT UVar8;
  undefined8 uVar9;
  INT *lpDx;
  int local_18;
  RECT local_10;
  
  CVar2 = _SfGetUIColor_4(0x12);
  CVar2 = SetTextColor(param_2,CVar2);
  bVar1 = (byte)*(undefined4 *)(param_1 + 0xc);
  if ((bVar1 & 0xe) == 0xe) {
    hdc = CreateCompatibleDC(param_2);
    pvVar3 = SelectObject(hdc,*(HGDIOBJ *)(param_1 + 0x96c));
    iVar5 = *(int *)(param_1 + 0x150);
    local_10.top = *(int *)(param_1 + 0x154);
    if ((*(uint *)(param_1 + 0x10) & 0x200) != 0) {
      iVar5 = iVar5 + 2;
      local_10.top = local_10.top + 2;
    }
    StretchBlt(param_2,iVar5,local_10.top,*(int *)(param_1 + 0x158) - iVar5,
               *(int *)(param_1 + 0x15c) - local_10.top,hdc,0,0,*(int *)(param_1 + 0x370),
               *(int *)(param_1 + 0x374),0xcc0020);
    SelectObject(hdc,pvVar3);
    DeleteDC(hdc);
    SetTextColor(param_2,0xffffff);
  }
  else if ((bVar1 & 4) == 4) {
    local_10.left = *(LONG *)(param_1 + 0x150);
    local_10.top = *(int *)(param_1 + 0x154);
    local_10.right = *(LONG *)(param_1 + 0x158);
    local_10.bottom = *(LONG *)(param_1 + 0x15c);
    hbr = GetStockObject(4);
    FillRect(param_2,&local_10,hbr);
    SetTextColor(param_2,0xffffff);
  }
  CVar4 = _SfGetUIColor_4(0xf);
  CVar4 = SetBkColor(param_2,CVar4);
  iVar5 = GetBkMode(param_2);
  if ((*(byte *)(param_1 + 0x10) & 0x20) != 0) {
    SetBkMode(param_2,1);
  }
  pvVar3 = SelectObject(param_2,*(HGDIOBJ *)(param_1 + 0x134));
  local_18 = *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(param_1 + 0x20);
  align = GetTextAlign(param_2);
  uVar7 = 0;
  if ((*(uint *)(param_1 + 0xc) & 1) == 0) {
    if ((*(uint *)(param_1 + 0x10) & 0x200) != 0) {
      local_18 = local_18 + 2;
    }
  }
  else {
    uVar7 = 6;
    local_18 = local_18 + (*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x14)) / 2;
  }
  if ((*(uint *)(param_1 + 0xc) & 0x200) == 0) {
    if ((*(uint *)(param_1 + 0x10) & 0x200) != 0) {
      iVar6 = iVar6 + -2;
    }
    UVar8 = uVar7 | 8;
  }
  else {
    uVar9 = FUN_00421190(param_1 + 0x28,*(undefined4 *)(param_1 + 0x134),0,0);
    iVar6 = (int)((ulonglong)uVar9 >> 0x20);
    local_10.left = (LONG)uVar9;
    iVar6 = (-(((*(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) - iVar6) / 2) -
            ((int)(iVar6 + (iVar6 >> 0x1f & 3U)) >> 2)) + *(int *)(param_1 + 0x20);
    if ((*(uint *)(param_1 + 0x10) & 0x200) != 0) {
      iVar6 = iVar6 + 1;
    }
    UVar8 = uVar7 | 0x18;
  }
  SetTextAlign(param_2,UVar8);
  lpDx = (INT *)0x0;
  UVar8 = lstrlenA((LPCSTR)(param_1 + 0x28));
  ExtTextOutA(param_2,local_18,iVar6,4,(LPRECT)(param_1 + 0x14),(LPCSTR)(param_1 + 0x28),UVar8,lpDx)
  ;
  SetTextAlign(param_2,align);
  if ((*(uint *)(param_1 + 0x10) & 0x200) != 0) {
    DrawEdge(param_2,(LPRECT)(param_1 + 0x14),2,0xf);
  }
  SelectObject(param_2,pvVar3);
  SetTextColor(param_2,CVar2);
  SetBkColor(param_2,CVar4);
  SetBkMode(param_2,iVar5);
  return;
}


