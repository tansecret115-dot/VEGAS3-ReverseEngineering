/* Module: vfplugs.dll
   Function: FUN_00472070
   Address: 00472070
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004723b4) */
/* WARNING: Removing unreachable block (ram,0x0047239d) */
/* WARNING: Removing unreachable block (ram,0x004723cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00472070(int param_1,int param_2,HDC param_3)

{
  int *piVar1;
  LONG LVar2;
  HDC hdc;
  undefined1 uVar3;
  undefined1 uVar4;
  int iVar5;
  HBRUSH h;
  BOOL BVar6;
  COLORREF color;
  HPEN h_00;
  HPEN ho;
  HPEN ho_00;
  HGDIOBJ h_01;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint local_50;
  int local_48;
  int *local_44;
  HBRUSH local_40;
  HBRUSH local_3c;
  uint local_38;
  HGDIOBJ local_34;
  COLORREF local_30;
  int local_2c;
  HGDIOBJ local_28;
  undefined4 uStack_24;
  tagRECT local_20;
  int local_10 [4];
  
  hdc = param_3;
  piVar1 = *(int **)(param_1 + 0x308);
  if (*piVar1 <= param_2) {
    return 0;
  }
  local_44 = (int *)(param_1 + 0x2cc);
  local_28 = *(HGDIOBJ *)(piVar1[1] * param_2 + piVar1[2]);
  iVar11 = piVar1[1] * param_2 + piVar1[2];
  uStack_24 = *(undefined4 *)(iVar11 + 4);
  if (*(int *)(iVar11 + 0x150) != 0) {
    if (_DAT_00487598 <= (double)CONCAT44(uStack_24,local_28)) {
      if (_DAT_00487590 < (double)CONCAT44(uStack_24,local_28)) {
        local_28 = (HGDIOBJ)0x0;
        uStack_24 = 0x3ff00000;
      }
    }
    else {
      local_28 = (HGDIOBJ)0x0;
      uStack_24 = 0;
    }
  }
  local_3c = (HBRUSH)(*(int *)(param_1 + 0x2d4) - *local_44);
  iVar5 = ftol();
  local_3c = (HBRUSH)(*(int *)(param_1 + 0x2d8) - *(int *)(param_1 + 0x2d0));
  local_2c = ftol();
  if (*(int *)(param_1 + 0x2ec) == 0) {
    local_50 = 0xc8c8c8;
    h = CreateHatchBrush(4,0xc8c8c8);
  }
  else if ((*(int *)(param_1 + 0x2fc) == param_2) && (*(int *)(param_1 + 0x478) == 0)) {
    local_50 = GetSysColor(0xd);
    h = CreateSolidBrush(local_50);
  }
  else {
    uVar3 = ftol();
    uVar4 = ftol();
    uVar10 = ftol();
    local_50 = uVar10 & 0xff | (uint)CONCAT11(uVar3,uVar4) << 8;
    h = CreateSolidBrush(local_50);
  }
  local_28 = SelectObject(param_3,h);
  BVar6 = IsRectEmpty((RECT *)(iVar11 + 0x140));
  if (BVar6 == 0) {
    LVar2 = ((RECT *)(iVar11 + 0x140))->left;
    local_20.top = *(int *)(iVar11 + 0x144) + local_2c;
    local_20.right = *(int *)(iVar11 + 0x148);
    local_20.bottom = *(int *)(iVar11 + 0x14c);
  }
  else {
    local_20.bottom = ftol();
    LVar2 = -local_20.bottom;
    local_20.top = local_2c - local_20.bottom;
    local_20.right = local_20.bottom;
  }
  local_20.left = iVar5 + LVar2;
  local_20.right = local_20.right + iVar5;
  local_20.bottom = local_20.bottom + local_2c;
  if (*(int *)(iVar11 + 0x154) == 0) {
    param_3 = (HDC)0x0;
  }
  else {
    param_3 = (HDC)FUN_00471c60(param_1,iVar11,local_20.left,local_20.top,local_20.right,
                                local_20.bottom,local_10,&local_48);
  }
  local_30 = SetTextColor(hdc,*(COLORREF *)(iVar11 + 0x134));
  if (*(int *)(iVar11 + 0x10) == 3) {
    if (*(int *)(param_1 + 0x2fc) == param_2) {
      color = *(DWORD *)(iVar11 + 0x138);
    }
    else {
      color = GetSysColor(0xd);
    }
    iVar5 = 2;
  }
  else if ((*(int *)(param_1 + 0x2fc) == param_2) && (*(int *)(param_1 + 0x478) != 0)) {
    color = *(COLORREF *)(iVar11 + 0x138);
    iVar5 = 0;
  }
  else {
    color = GetSysColor(0xd);
    iVar5 = 0;
  }
  h_00 = CreatePen(iVar5,0,color);
  local_34 = SelectObject(hdc,h_00);
  local_3c = (HBRUSH)(local_50 >> 8 & 0xff);
  uVar10 = (local_50 & 0xff) + 0x48;
  local_38 = local_50 >> 0x10 & 0xff;
  if (0xff < uVar10) {
    uVar10 = 0xff;
  }
  uVar9 = (int)local_3c + 0x48;
  if (0xff < uVar9) {
    uVar9 = 0xff;
  }
  uVar7 = local_38 + 0x48;
  if (0xff < uVar7) {
    uVar7 = 0xff;
  }
  uVar10 = (uint)CONCAT11((char)uVar7,(char)uVar9) << 8 | uVar10 & 0xff;
  local_40 = CreateSolidBrush(uVar10);
  ho = CreatePen(0,0,uVar10);
  uVar10 = (local_50 & 0xff) - 0x48;
  if ((int)uVar10 < 0) {
    uVar9 = 0;
  }
  else {
    uVar9 = 0xff;
    if ((int)uVar10 < 0x100) {
      uVar9 = uVar10;
    }
  }
  iVar5 = (int)local_3c - 0x48;
  if (iVar5 < 0) {
    iVar5 = 0;
  }
  else if (0xff < iVar5) {
    iVar5 = 0xff;
  }
  iVar8 = local_38 - 0x48;
  if (iVar8 < 0) {
    iVar8 = 0;
  }
  else if (0xff < iVar8) {
    iVar8 = 0xff;
  }
  uVar10 = (uint)CONCAT11((char)iVar8,(char)iVar5) << 8 | uVar9 & 0xff;
  local_3c = CreateSolidBrush(uVar10);
  ho_00 = CreatePen(0,0,uVar10);
  switch(*(undefined4 *)(iVar11 + 0x10)) {
  case 0:
    Ellipse(hdc,local_20.left,local_20.top,local_20.right,local_20.bottom);
    goto LAB_004725cf;
  case 1:
    PatBlt(hdc,local_20.left,(local_20.bottom - local_20.top) / 2 + local_20.top,
           local_20.right - local_20.left,1,0xf00021);
    PatBlt(hdc,(local_20.right - local_20.left) / 2 + local_20.left,local_20.top,1,
           local_20.bottom - local_20.top,0xf00021);
    if (param_3 != (HDC)0x0) {
      FUN_00471ec0(hdc,local_10,local_48,local_50,ho_00,ho,h);
    }
    iVar5 = 0;
    break;
  case 2:
    SelectObject(hdc,local_3c);
    PatBlt(hdc,local_20.left,local_20.top,local_20.right - local_20.left,
           local_20.bottom - local_20.top,0xf00021);
    SelectObject(hdc,local_40);
    PatBlt(hdc,local_20.left,local_20.top,(local_20.right - local_20.left) + -1,
           (local_20.bottom - local_20.top) + -1,0xf00021);
    SelectObject(hdc,h);
    PatBlt(hdc,local_20.left + 1,local_20.top + 1,(local_20.right - local_20.left) + -2,
           (local_20.bottom - local_20.top) + -2,0xf00021);
LAB_004725cf:
    if (param_3 != (HDC)0x0) {
      FUN_00471ec0(hdc,local_10,local_48,local_50,ho_00,ho,h);
    }
    iVar5 = 1;
    break;
  case 3:
    iVar5 = GetBkMode(hdc);
    SetBkMode(hdc,1);
    h_01 = GetStockObject(5);
    SelectObject(hdc,h_01);
    Rectangle(hdc,local_20.left,local_20.top,local_20.right,local_20.bottom);
    SetBkMode(hdc,iVar5);
    if (param_3 != (HDC)0x0) {
      FUN_00471ec0(hdc,local_10,local_48,local_50,ho_00,ho,h);
    }
    iVar5 = 1;
    break;
  default:
    goto switchD_0047248f_default;
  }
  FUN_00471a40(hdc,iVar11,&local_20,local_44,iVar5);
switchD_0047248f_default:
  SelectObject(hdc,local_34);
  SetTextColor(hdc,local_30);
  SelectObject(hdc,local_28);
  DeleteObject(h);
  DeleteObject(local_40);
  DeleteObject(local_3c);
  DeleteObject(h_00);
  DeleteObject(ho);
  DeleteObject(ho_00);
  return 1;
}


