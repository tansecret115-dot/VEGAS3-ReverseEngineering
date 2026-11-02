/* Module: vegas30.exe
   Function: FUN_005106e0
   Address: 005106e0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005106e0(HDC param_1,int *param_2,int *param_3)

{
  int iVar1;
  HGDIOBJ pvVar2;
  DWORD color;
  COLORREF color_00;
  HGDIOBJ pvVar3;
  LPCSTR lpString;
  UINT c;
  undefined4 uVar4;
  int iVar5;
  POINT *pPVar6;
  undefined1 *puVar7;
  int iVar8;
  code *pcVar9;
  bool bVar10;
  undefined4 uVar11;
  int local_14c;
  tagSIZE local_144;
  undefined4 local_13c;
  undefined4 local_138;
  int local_134;
  int local_130;
  COLORREF local_12c;
  UINT local_128;
  tagPOINT local_124;
  int local_11c;
  int local_118;
  HGDIOBJ local_114;
  COLORREF local_110;
  int local_10c;
  POINT local_108 [4];
  int local_e8;
  int local_e4;
  undefined1 local_e0 [92];
  undefined1 local_84 [132];
  
  iVar5 = *param_3;
  iVar8 = *(int *)(iVar5 + 0x98);
  local_134 = 0x15;
  local_130 = 0x15;
  local_11c = iVar5;
  local_10c = iVar8;
  iVar1 = FUN_0050c470(*(undefined4 *)(iVar5 + 0x98),*(undefined4 *)(iVar8 + 0x88),
                       *(undefined4 *)(iVar8 + 0x8c),local_84,2,0,0);
  if (iVar1 == -1) {
    return;
  }
  FUN_0050db20(local_e0,iVar8,*(undefined4 *)(iVar8 + 0x88),*(undefined4 *)(iVar8 + 0x8c),2,
               DAT_00647e50,0,0,0,0);
  puVar7 = local_e0;
  local_14c = 4;
  pPVar6 = local_108;
  do {
    FUN_0050d7f0(pPVar6,puVar7,*(undefined4 *)(iVar5 + 0x98),&local_134);
    puVar7 = puVar7 + 0x10;
    iVar1 = param_2[1];
    pPVar6->x = pPVar6->x + *param_2;
    pPVar6->y = pPVar6->y + iVar1;
    local_14c = local_14c + -1;
    pPVar6 = pPVar6 + 1;
  } while (local_14c != 0);
  local_e8 = local_108[0].x;
  local_e4 = local_108[0].y;
  pvVar2 = GetStockObject(5);
  pcVar9 = SelectObject_exref;
  local_114 = SelectObject(param_1,pvVar2);
  color = GetSysColor(5);
  local_12c = SetBkColor(param_1,color);
  bVar10 = (*(byte *)(iVar8 + 4) & 8) == 0;
  if (bVar10) {
    uVar11 = 0xd;
  }
  else {
    uVar11 = 0xf;
  }
  pvVar2 = (HGDIOBJ)_SfGetUIPenWithStyle_8(uVar11,bVar10);
  pvVar2 = SelectObject(param_1,pvVar2);
  SetBrushOrgEx(param_1,local_108[0].x,local_108[0].y,&local_124);
  Polygon(param_1,local_108,5);
  if ((*(byte *)(iVar8 + 4) & 8) != 0) {
    color_00 = _SfGetUIColor_4(0xf);
    local_110 = SetTextColor(param_1,color_00);
    local_128 = SetTextAlign(param_1,0);
    pvVar3 = (HGDIOBJ)_SfGetUIFont_4(100);
    pvVar3 = SelectObject(param_1,pvVar3);
    lpString = (LPCSTR)_SfGetString_8(DAT_00647204,0x6e00);
    c = lstrlenA(lpString);
    local_118 = SetBkMode(param_1,1);
    GetTextExtentPoint32A(param_1,lpString,c,&local_144);
    if (c != 0) {
      ExtTextOutA(param_1,((param_2[2] - local_144.cx) + *param_2 + local_134) / 2,
                  ((param_2[3] - local_144.cy) + local_130 + param_2[1]) / 2,0,(RECT *)0x0,lpString,
                  c,(INT *)0x0);
    }
    SelectObject(param_1,pvVar3);
    SetTextColor(param_1,local_110);
    SetTextAlign(param_1,local_128);
    SetBkMode(param_1,local_118);
    iVar5 = local_11c;
    if ((*(byte *)(local_10c + 4) & 8) != 0) goto LAB_00510a39;
  }
  if (((param_3[3] & 1U) == 0) || ((param_3[3] & 0x7fff8U) != 0x40)) {
    FUN_0050d990(&local_144,local_e0,*(undefined4 *)(iVar5 + 0x98),&local_134);
    iVar8 = -*(int *)(iVar5 + 0x290);
    iVar5 = *(int *)(iVar5 + 0x290) + 1;
    uVar11 = _SfGetUIBrush_4(0xd);
    uVar4 = _SfGetUIBrush_4(0xe);
    _SfGetUIPenWithStyle_8(0xe,0);
    FUN_0050fb70(param_1,iVar8,iVar8,iVar5,iVar5,local_144.cx,local_144.cy,uVar11,uVar4);
    FUN_0050fb70(param_1,iVar8,iVar8,iVar5,iVar5,local_13c,local_144.cy,uVar11,uVar4);
    FUN_0050fb70(param_1,iVar8,iVar8,iVar5,iVar5,local_13c,local_138,uVar11,uVar4);
    FUN_0050fb70(param_1,iVar8,iVar8,iVar5,iVar5,local_144.cx,local_138,uVar11,uVar4);
    pcVar9 = SelectObject_exref;
  }
LAB_00510a39:
  SetBrushOrgEx(param_1,local_124.x,local_124.y,&local_124);
  SetBkColor(param_1,local_12c);
  (*pcVar9)(param_1,pvVar2);
  (*pcVar9)(param_1,local_11c);
  return;
}


