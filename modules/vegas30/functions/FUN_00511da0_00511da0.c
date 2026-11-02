/* Module: vegas30.exe
   Function: FUN_00511da0
   Address: 00511da0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00511da0(int *param_1,HDC param_2)

{
  HGDIOBJ pvVar1;
  DWORD DVar2;
  HPALETTE hPal;
  HBRUSH pHVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  code *pcVar9;
  float10 fVar10;
  undefined8 uVar11;
  undefined1 local_130 [8];
  int iStack_128;
  HGDIOBJ local_124;
  RECT local_120;
  tagPOINT local_110;
  int iStack_108;
  int iStack_104;
  tagRECT local_100;
  int local_f0;
  int iStack_ec;
  int local_e0;
  int local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8 [23];
  undefined4 local_5c [23];
  
  iVar6 = *(int *)(*param_1 + 0x98);
  if (param_1 == (int *)0x0) {
    return;
  }
  GetClientRect((HWND)param_1[1],&local_100);
  if ((*(byte *)(*param_1 + 0xa8) & 1) == 0) {
    pvVar1 = (HGDIOBJ)_SfGetUIBrush_4();
    if (pvVar1 == (HGDIOBJ)0x0) {
      return;
    }
    pvVar1 = SelectObject(param_2,pvVar1);
    local_130._4_4_ = SetTextColor(param_2,0x808080);
    local_130._0_4_ = SetBkColor(param_2,0xc0c0c0);
    PatBlt(param_2,local_100.left,local_100.top,local_100.right - local_100.left,
           local_100.bottom - local_100.top,0xf00021);
    SelectObject(param_2,pvVar1);
    SetTextColor(param_2,local_130._4_4_);
    SetBkColor(param_2,local_130._0_4_);
    return;
  }
  local_e0 = 0x15;
  local_dc = 0x15;
  puVar7 = (undefined4 *)(iVar6 + 0x24);
  puVar8 = local_b8;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_0050d990(&local_120,local_b8,iVar6,&local_e0);
  pvVar1 = (HGDIOBJ)_SfGetUIBrush_4();
  local_130._0_4_ = SelectObject(param_2,pvVar1);
  PatBlt(param_2,local_100.left,local_100.top,local_100.right - local_100.left,
         local_100.bottom - local_100.top,0xf00021);
  SelectObject(param_2,(HGDIOBJ)local_130._0_4_);
  if ((*(uint *)(iVar6 + 4) & 0x1000) == 0) goto LAB_005120dc;
  switch((int)(*(uint *)(iVar6 + 4) << 0xb) >> 0x1c) {
  case 0:
    local_130._0_4_ = _SfGetUIBrush_4();
    if ((HGDIOBJ)local_130._0_4_ != (HGDIOBJ)0x0) {
      SetBrushOrgEx(param_2,local_120.left,local_120.top,&local_110);
      local_130._0_4_ = SelectObject(param_2,(HGDIOBJ)local_130._0_4_);
      DVar2 = GetSysColor(0xf);
      local_130._4_4_ = SetTextColor(param_2,DVar2);
      DVar2 = GetSysColor(0x14);
      local_124 = (HGDIOBJ)SetBkColor(param_2,DVar2);
      PatBlt(param_2,local_120.left,local_120.top,local_120.right - local_120.left,
             local_120.bottom - local_120.top,0xf00021);
      SelectObject(param_2,(HGDIOBJ)local_130._0_4_);
      SetTextColor(param_2,local_130._4_4_);
      SetBkColor(param_2,(COLORREF)local_124);
      SetBrushOrgEx(param_2,local_110.x,local_110.y,&local_110);
    }
    goto LAB_005120dc;
  case 1:
    local_130._0_4_ = _SfGetUIBrush_4();
    if ((HGDIOBJ)local_130._0_4_ != (HGDIOBJ)0x0) {
      SetBrushOrgEx(param_2,local_120.left,local_120.top,&local_110);
      local_130._0_4_ = SelectObject(param_2,(HGDIOBJ)local_130._0_4_);
      DVar2 = GetSysColor(0xf);
      local_124 = (HGDIOBJ)SetTextColor(param_2,DVar2);
      DVar2 = GetSysColor(0x14);
      local_130._4_4_ = SetBkColor(param_2,DVar2);
      PatBlt(param_2,local_120.left,local_120.top,local_120.right - local_120.left,
             local_120.bottom - local_120.top,0xf00021);
      SelectObject(param_2,(HGDIOBJ)local_130._0_4_);
      SetTextColor(param_2,(COLORREF)local_124);
      SetBkColor(param_2,local_130._4_4_);
      SetBrushOrgEx(param_2,local_110.x,local_110.y,&local_110);
    }
    goto LAB_005120dc;
  case 2:
    iVar5 = 0;
    break;
  case 3:
    iVar5 = 4;
    break;
  case 4:
    iVar5 = 2;
    break;
  default:
    goto LAB_005120dc;
  }
  pvVar1 = GetStockObject(iVar5);
  local_130._0_4_ = SelectObject(param_2,pvVar1);
  PatBlt(param_2,local_120.left,local_120.top,local_120.right - local_120.left,
         local_120.bottom - local_120.top,0xf00021);
  SelectObject(param_2,(HGDIOBJ)local_130._0_4_);
LAB_005120dc:
  FUN_0050c1a0();
  FUN_00511620(param_1,param_2,&local_100,iVar6);
  puVar7 = local_b8;
  for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  if (DAT_00647e50 == 0) {
    puVar7 = local_5c;
    for (iVar5 = 0x17; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    FUN_0050db20(local_b8,iVar6,*(undefined4 *)(iVar6 + 0x88),*(undefined4 *)(iVar6 + 0x8c),0,0,0,0,
                 0);
    FUN_0050db20(local_5c,iVar6,*(undefined4 *)(iVar6 + 0x88),*(undefined4 *)(iVar6 + 0x8c),0,1,0,0,
                 0,0);
    puVar7 = local_5c;
  }
  else {
    FUN_0050db20(local_b8,iVar6,*(undefined4 *)(iVar6 + 0x88),*(undefined4 *)(iVar6 + 0x8c),0,1,0,0,
                 0,0);
    puVar7 = local_b8;
  }
  fVar10 = (float10)FUN_0050e0e0(puVar7,iVar6,CONCAT44(1,&local_e0));
  local_110 = (tagPOINT)(double)(fVar10 * (float10)_DAT_00610560);
  FUN_0050d990(&local_f0,local_b8,iVar6,&local_e0);
  if ((*(uint *)(iVar6 + 4) & 0x1000) != 0) {
    FUN_00510010(param_2,&local_100,param_1);
    FUN_00510550(param_2,&local_100,param_1);
  }
  FUN_0050e4b0(param_2,&local_100,local_b8,param_1);
  if (*(int *)(*param_1 + 0x238) != 0) {
    hPal = (HPALETTE)FUN_004019f0();
    iVar5 = _SfIsHighColor_0();
    if (iVar5 == 0) {
      SelectPalette(param_2,hPal,0);
      RealizePalette(param_2);
    }
    iVar5 = *param_1;
    DrawDibDraw(*(undefined4 *)(iVar5 + 0x94),param_2,local_120.left,local_120.top,
                local_120.right - local_120.left,local_120.bottom - local_120.top,
                *(undefined4 *)(iVar5 + 0x238),*(undefined4 *)(iVar5 + 0x23c),0,0,0xffffffff,
                0xffffffff);
    iVar5 = _SfIsHighColor_0();
    if (iVar5 == 0) {
      SelectPalette(param_2,hPal,0);
    }
  }
  local_120.bottom = local_120.bottom + 1;
  local_120.right = local_120.right + 1;
  pHVar3 = (HBRUSH)_SfGetUIBrush_4();
  FrameRect(param_2,&local_120,pHVar3);
  iVar5 = 0;
  pvVar1 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x99,0);
  local_124 = SelectObject(param_2,pvVar1);
  if (*(int **)(iVar6 + 0x94) == (int *)0x0) {
    local_130._0_4_ = 0;
  }
  else {
    local_130._0_4_ = **(int **)(iVar6 + 0x94);
  }
  if (0 < (int)local_130._0_4_) {
    do {
      uStack_d8 = *(undefined4 *)
                   (*(int *)(*(int *)(iVar6 + 0x94) + 4) * iVar5 + 4 +
                   *(int *)(*(int *)(iVar6 + 0x94) + 8));
      uStack_d4 = 0;
      uStack_d0 = 0;
      uStack_cc = 0x3f800000;
      FUN_0050d7f0(local_130 + 4,&uStack_d8,iVar6,&local_e0);
      MoveToEx(param_2,local_130._4_4_,local_dc + local_100.top,(LPPOINT)0x0);
      LineTo(param_2,local_130._4_4_,local_100.bottom);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)local_130._0_4_);
  }
  iVar5 = 0;
  if (*(int **)(iVar6 + 0x98) == (int *)0x0) {
    local_130._0_4_ = 0;
  }
  else {
    local_130._0_4_ = **(int **)(iVar6 + 0x98);
  }
  if (0 < (int)local_130._0_4_) {
    do {
      uStack_d8 = 0;
      uStack_d4 = *(undefined4 *)
                   (*(int *)(*(int *)(iVar6 + 0x98) + 4) * iVar5 + 4 +
                   *(int *)(*(int *)(iVar6 + 0x98) + 8));
      uStack_d0 = 0;
      uStack_cc = 0x3f800000;
      FUN_0050d7f0(local_130 + 4,&uStack_d8,iVar6,&local_e0);
      MoveToEx(param_2,local_e0 + local_100.left,iStack_128,(LPPOINT)0x0);
      LineTo(param_2,local_100.right,iStack_128);
      iVar5 = iVar5 + 1;
    } while (iVar5 < (int)local_130._0_4_);
  }
  SelectObject(param_2,local_124);
  FUN_0050e800(param_2,&local_100,param_1,*(undefined4 *)(iVar6 + 0x88),
               *(undefined4 *)(iVar6 + 0x8c));
  if ((*(uint *)(iVar6 + 4) & 0x1000) != 0) {
    iVar5 = *(int *)(*(int *)(*param_1 + 0x98) + 0x9c);
    if (iVar5 == 1) {
      FUN_005101b0(param_2,&local_100,param_1);
    }
    else if (iVar5 == 2) {
      FUN_005106e0(param_2,&local_100,param_1);
    }
  }
  if (*(int *)(*(int *)(*param_1 + 0x98) + 0x9c) == 0) {
    FUN_0050f0b0(param_2,&local_100,local_b8,param_1,0,0,0,local_110.x,local_110.y);
  }
  pcVar9 = LineTo_exref;
  if ((((*(uint *)(iVar6 + 4) & 0x1e000) == 0x2000) && ((param_1[3] & 1U) != 0)) &&
     ((param_1[3] & 4U) == 0)) {
    GetCursorPos((LPPOINT)(local_130 + 4));
    ScreenToClient((HWND)param_1[1],(LPPOINT)(local_130 + 4));
    pvVar1 = (HGDIOBJ)_SfGetUIPenWithStyle_8(8,1);
    local_124 = SelectObject(param_2,pvVar1);
    MoveToEx(param_2,param_1[4],param_1[5],(LPPOINT)0x0);
    pcVar9 = LineTo_exref;
    LineTo(param_2,local_130._4_4_,param_1[5]);
    LineTo(param_2,local_130._4_4_,iStack_128);
    LineTo(param_2,param_1[4],iStack_128);
    LineTo(param_2,param_1[4],param_1[5]);
    SelectObject(param_2,local_124);
  }
  fVar10 = (float10)FUN_005a5f80();
  local_130._0_4_ = (undefined4)fVar10;
  fVar10 = (float10)FUN_005a5ff0();
  local_130._4_4_ = (undefined4)fVar10;
  uStack_c0 = ftol();
  uStack_bc = ftol();
  uStack_c8 = ftol();
  uStack_c4 = ftol();
  FUN_005424a0(param_1[0x47],&uStack_c0);
  FUN_005424a0(param_1[0x41],&uStack_c8);
  if (DAT_00647e50 == 0) {
    uVar11 = CONCAT44(*(undefined4 *)(iVar6 + 0xc),param_1[0x47]);
  }
  else {
    uVar11 = CONCAT44(*(float *)(iVar6 + 0xc) / (float)*(double *)(iVar6 + 0x80),param_1[0x47]);
  }
  FUN_00542510(uVar11);
  FUN_00542510(param_1[0x41],*(undefined4 *)(iVar6 + 0x10));
  FUN_00541f20(param_1[0x47],param_2,0,(double)((float)local_130._0_4_ * *(float *)(iVar6 + 0x20)));
  FUN_00541f20(param_1[0x41],param_2,0,(double)((float)local_130._4_4_ * *(float *)(iVar6 + 0x20)));
  pvVar1 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x82,0);
  pvVar1 = SelectObject(param_2,pvVar1);
  if (((*(int *)(*(int *)(*param_1 + 0x98) + 0x9c) == 0) && ((param_1[3] & 1U) != 0)) &&
     ((param_1[3] & 0x7fff8U) != 0x40)) {
    MoveToEx(param_2,local_f0,param_1[0x44],(LPPOINT)0x0);
    (*pcVar9)(param_2,local_f0,iStack_ec - *(int *)(*param_1 + 0x290));
    MoveToEx(param_2,local_100.bottom,param_1[0x44],(LPPOINT)0x0);
    (*pcVar9)(param_2,local_100.bottom,local_100.right - *(int *)(*param_1 + 0x290));
    MoveToEx(param_2,param_1[0x3d],iStack_104,(LPPOINT)0x0);
    (*pcVar9)(param_2,iStack_108 - *(int *)(*param_1 + 0x290),iStack_104);
    MoveToEx(param_2,param_1[0x3d],iStack_108,(LPPOINT)0x0);
    iVar6 = local_120.bottom - *(int *)(*param_1 + 0x290);
  }
  else {
    MoveToEx(param_2,local_f0,param_1[0x44],(LPPOINT)0x0);
    (*pcVar9)(param_2,local_f0,param_1[0x46]);
    MoveToEx(param_2,local_100.bottom,param_1[0x44],(LPPOINT)0x0);
    (*pcVar9)(param_2,local_100.bottom,param_1[0x46]);
    MoveToEx(param_2,param_1[0x3d],iStack_104,(LPPOINT)0x0);
    (*pcVar9)(param_2,param_1[0x3f],iStack_104);
    MoveToEx(param_2,param_1[0x3d],iStack_108,(LPPOINT)0x0);
    iVar6 = param_1[0x3f];
  }
  (*pcVar9)(param_2,iVar6,iStack_108);
  SelectObject(param_2,pvVar1);
  iVar6 = (param_1[0x49] + param_1[0x4b]) / 2;
  iVar5 = (param_1[0x4c] + param_1[0x4a]) / 2;
  pHVar3 = (HBRUSH)_SfGetUIBrush_4(0xf);
  FillRect(param_2,(RECT *)&stack0xfffffec0,pHVar3);
  pHVar3 = (HBRUSH)_SfGetUIBrush_4(8);
  FillRect(param_2,(RECT *)&stack0xfffffec0,pHVar3);
  pvVar1 = (HGDIOBJ)_SfGetUIPenWithStyle_8(8,0);
  pvVar1 = SelectObject(param_2,pvVar1);
  MoveToEx(param_2,iVar6 + -6,iVar5,(LPPOINT)0x0);
  LineTo(param_2,iVar6 + 7,iVar5);
  MoveToEx(param_2,iVar6,iVar5 + -6,(LPPOINT)0x0);
  LineTo(param_2,iVar6,iVar5 + 7);
  SelectObject(param_2,pvVar1);
  DrawEdge(param_2,(LPRECT)&stack0xfffffec0,6,0xf);
  pHVar4 = GetFocus();
  if (pHVar4 != (HWND)param_1[1]) {
    DrawEdge(param_2,(LPRECT)local_130,6,0xf);
    return;
  }
  DrawEdge(param_2,(LPRECT)local_130,10,0xf);
  return;
}


