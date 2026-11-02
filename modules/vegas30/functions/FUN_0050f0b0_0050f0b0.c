/* Module: vegas30.exe
   Function: FUN_0050f0b0
   Address: 0050f0b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0050f0b0(HDC param_1,int *param_2,int param_3,int *param_4,int param_5,undefined4 param_6,
                 int param_7,double param_8)

{
  double dVar1;
  HGDIOBJ pvVar2;
  DWORD color;
  int right;
  int top;
  int left;
  undefined4 uVar3;
  HRGN ho;
  int iVar4;
  int iVar5;
  POINT *pPVar6;
  float fVar7;
  float10 fVar8;
  float10 fVar9;
  float local_b4;
  int local_b0;
  int local_ac;
  HGDIOBJ local_a8;
  float local_a4;
  HGDIOBJ local_a0;
  float local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  double local_88;
  int local_80;
  int local_7c;
  float local_78 [4];
  float local_68;
  HGDIOBJ local_64;
  undefined4 local_58;
  undefined4 local_54;
  int local_50;
  POINT local_4c;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  float local_24;
  double local_20;
  HGDIOBJ local_18;
  COLORREF local_14;
  HGDIOBJ local_10;
  HGDIOBJ local_c;
  tagPOINT local_8;
  
  iVar4 = *param_4;
  local_58 = 0x15;
  local_54 = 0x15;
  local_b4 = 5.60519e-45;
  iVar5 = param_3;
  pPVar6 = &local_4c;
  local_50 = iVar4;
  do {
    FUN_0050d7f0(pPVar6,iVar5,*(undefined4 *)(iVar4 + 0x98),&local_58);
    iVar5 = iVar5 + 0x10;
    pPVar6->x = pPVar6->x + *param_2;
    pPVar6->y = pPVar6->y + param_2[1];
    local_b4 = (float)((int)local_b4 + -1);
    pPVar6 = pPVar6 + 1;
  } while (local_b4 != 0.0);
  local_2c = local_4c.x;
  local_28 = local_4c.y;
  pvVar2 = GetStockObject(5);
  local_c = SelectObject(param_1,pvVar2);
  pvVar2 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0xd,1);
  local_10 = SelectObject(param_1,pvVar2);
  color = GetSysColor(5);
  local_14 = SetBkColor(param_1,color);
  SetBrushOrgEx(param_1,local_4c.x,local_4c.y,&local_8);
  if (param_5 == 0) {
    Polygon(param_1,&local_4c,5);
  }
  else {
    ho = (HRGN)0x0;
    if (param_7 != 0) {
      FUN_0050d990(&local_88,*(int *)(iVar4 + 0x98) + 0x24,*(int *)(iVar4 + 0x98),&local_58);
      ho = CreateRectRgn((int)local_88._0_4_,(int)((ulonglong)local_88 >> 0x20),local_80,local_7c);
    }
    FUN_0050aba0(param_1,&local_4c,5,0x800c0c,param_6,ho,0xfffffffc);
    if (ho != (HRGN)0x0) {
      DeleteObject(ho);
    }
  }
  local_a4 = (float)SetTextAlign(param_1,0);
  local_a0 = SelectObject(param_1,*(HGDIOBJ *)(iVar4 + 0x4a8));
  if (param_5 == 0) {
    FUN_0050fc00(param_1,&local_4c,&DAT_0061a490,1);
  }
  SetTextAlign(param_1,(UINT)local_a4);
  SelectObject(param_1,local_a0);
  FUN_0050d990(&local_98,param_3,*(undefined4 *)(iVar4 + 0x98),&local_58);
  iVar5 = -*(int *)(iVar4 + 0x290);
  iVar4 = *(int *)(iVar4 + 0x290) + 1;
  local_a8 = (HGDIOBJ)_SfGetUIBrush_4();
  local_b4 = (float)_SfGetUIBrush_4();
  local_18 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0xe,0);
  if ((((param_4[3] & 1U) == 0) || ((param_4[3] & 0x7fff8U) != 0x40)) && (param_5 == 0)) {
    FUN_0050fb70(param_1,iVar5,iVar5,iVar4,iVar4,local_98,local_94,local_a8,local_b4);
    FUN_0050fb70(param_1,iVar5,iVar5,iVar4,iVar4,local_90,local_94,local_a8,local_b4);
    FUN_0050fb70(param_1,iVar5,iVar5,iVar4,iVar4,local_90,local_8c,local_a8,local_b4);
    FUN_0050fb70(param_1,iVar5,iVar5,iVar4,iVar4,local_98,local_8c,local_a8,local_b4);
    FUN_0050fb70(param_1,iVar5,iVar5,iVar4,iVar4,(local_98 + local_90) / 2,local_94,local_a8,
                 local_b4);
    FUN_0050fb70(param_1,iVar5,iVar5,iVar4,iVar4,(local_98 + local_90) / 2,local_8c,local_a8,
                 local_b4);
    FUN_0050fb70(param_1,iVar5,iVar5,iVar4,iVar4,local_98,(local_8c + local_94) / 2,local_a8,
                 local_b4);
    FUN_0050fb70(param_1,iVar5,iVar5,iVar4,iVar4,local_90,(local_8c + local_94) / 2,local_a8,
                 local_b4);
  }
  iVar4 = local_50;
  if (_DAT_006106d0 < param_8) {
    FUN_0050da20(&local_b4,&local_24,&local_20,&local_88,param_3,*(undefined4 *)(local_50 + 0x98),
                 &local_58,DAT_00647e50);
    local_a4 = (local_20._0_4_ - local_b4) * _DAT_0061a460 + local_b4;
    local_a0 = (HGDIOBJ)((local_88._0_4_ - local_24) * _DAT_0061a460 + local_24);
    local_9c = (float)ftol();
    pvVar2 = GetStockObject(5);
    SelectObject(param_1,pvVar2);
    pvVar2 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0xd,1);
    SelectObject(param_1,pvVar2);
    iVar5 = ftol();
    right = ftol();
    top = ftol();
    left = ftol();
    Ellipse(param_1,left,top,right,iVar5);
  }
  local_b0 = (local_3c + local_4c.x) / 2;
  local_ac = (local_38 + local_4c.y) / 2;
  pvVar2 = GetStockObject(7);
  SelectObject(param_1,pvVar2);
  iVar5 = *(int *)(iVar4 + 0x290);
  fVar7 = (float)(iVar5 * 4);
  local_9c = fVar7;
  if (((param_4[3] & 1U) == 0) || ((param_4[3] & 0x7fff8U) != 0x40)) {
    if (param_5 != 0) goto LAB_0050fb10;
  }
  else {
    if (param_5 != 0) goto LAB_0050fb10;
    FUN_0050d7f0(&local_b0,param_3 + 0x40,*(undefined4 *)(iVar4 + 0x98),&local_58);
    pvVar2 = GetStockObject(0);
    SelectObject(param_1,pvVar2);
    Ellipse(param_1,local_b0 + iVar5 * -4,local_ac + iVar5 * -4,(int)fVar7 + local_b0,
            (int)fVar7 + local_ac);
    MoveToEx(param_1,local_b0,local_ac + iVar5 * -4,(LPPOINT)0x0);
    LineTo(param_1,local_b0,(int)fVar7 + local_ac);
    MoveToEx(param_1,local_b0 + iVar5 * -4,local_ac,(LPPOINT)0x0);
    LineTo(param_1,(int)fVar7 + local_b0,local_ac);
    local_a4 = (float)(int)local_9c;
    iVar4 = ftol();
    MoveToEx(param_1,local_b0 - iVar4,local_ac - iVar4,(LPPOINT)0x0);
    LineTo(param_1,iVar4 + local_b0,iVar4 + local_ac);
    MoveToEx(param_1,local_b0 - iVar4,iVar4 + local_ac,(LPPOINT)0x0);
    LineTo(param_1,iVar4 + local_b0,local_ac - iVar4);
    iVar4 = (int)(iVar5 * 0xc + (iVar5 * 0xc >> 0x1f & 3U)) >> 2;
    pvVar2 = GetStockObject(6);
    SelectObject(param_1,pvVar2);
    Ellipse(param_1,local_b0 - iVar4,local_ac - iVar4,iVar4 + local_b0,iVar4 + local_ac);
    pvVar2 = GetStockObject(7);
    SelectObject(param_1,pvVar2);
    local_68 = 0.0;
    local_78[1] = 0.0;
    fVar8 = (float10)*(double *)(param_3 + 0x50) * (float10)_DAT_006128b8;
    local_a0 = (HGDIOBJ)(float)(iVar5 * -4);
    local_64 = (HGDIOBJ)((float)(iVar5 * -4) * _DAT_0061a488);
    local_9c = local_a4 * _DAT_00619aac;
    fVar9 = (float10)fcos(fVar8);
    dVar1 = (double)fVar9;
    fVar8 = (float10)fsin(fVar8);
    local_88 = (double)fVar8;
    local_78[0] = local_9c;
    local_20 = dVar1;
    FUN_005a6060(&local_68,local_88,dVar1);
    FUN_005a6060(local_78,local_88._0_4_,(int)((ulonglong)local_88 >> 0x20),dVar1);
    iVar4 = ftol();
    local_88._0_4_ = (float)iVar4;
    iVar4 = ftol();
    iVar5 = ftol();
    local_38 = ftol();
    local_4c.x = (int)local_88._0_4_ + local_b0;
    local_4c.y = iVar4 + local_ac;
    local_44 = iVar5 + local_b0;
    local_3c = local_b0 - iVar5;
    local_40 = local_38 + local_ac;
    local_38 = local_ac - local_38;
    local_34 = local_4c.x;
    local_30 = local_4c.y;
    pvVar2 = GetStockObject(2);
    SelectObject(param_1,pvVar2);
    Polygon(param_1,&local_4c,4);
    fVar8 = (float10)fcos((float10)*(double *)(param_3 + 0x50));
    local_68 = 0.0;
    local_64 = local_a0;
    local_78[0] = local_9c;
    local_78[1] = 0.0;
    fVar9 = (float10)fsin((float10)*(double *)(param_3 + 0x50));
    FUN_005a6060(&local_68,(double)fVar9,(double)fVar8);
    fVar8 = (float10)fcos((float10)*(double *)(param_3 + 0x50));
    fVar9 = (float10)fsin((float10)*(double *)(param_3 + 0x50));
    FUN_005a6060(local_78,(double)fVar9,(double)fVar8);
    uVar3 = ftol();
    local_88 = (double)CONCAT44(local_88._4_4_,uVar3);
    iVar4 = ftol();
    iVar5 = ftol();
    local_38 = ftol();
    local_4c.x = (int)local_88._0_4_ + local_b0;
    local_4c.y = iVar4 + local_ac;
    local_44 = iVar5 + local_b0;
    local_3c = local_b0 - iVar5;
    local_40 = local_38 + local_ac;
    local_38 = local_ac - local_38;
    local_34 = local_4c.x;
    local_30 = local_4c.y;
    pvVar2 = GetStockObject(1);
    SelectObject(param_1,pvVar2);
    Polygon(param_1,&local_4c,4);
    iVar4 = local_50;
  }
  iVar5 = ftol();
  FUN_0050d7f0(&local_b0,param_3 + 0x40,*(undefined4 *)(iVar4 + 0x98),&local_58);
  SelectObject(param_1,local_a8);
  SelectObject(param_1,local_18);
  Ellipse(param_1,local_b0 - iVar5,local_ac - iVar5,iVar5 + local_b0,iVar5 + local_ac);
LAB_0050fb10:
  SetBrushOrgEx(param_1,local_8.x,local_8.y,&local_8);
  SetBkColor(param_1,local_14);
  SelectObject(param_1,local_10);
  SelectObject(param_1,local_c);
  return;
}


