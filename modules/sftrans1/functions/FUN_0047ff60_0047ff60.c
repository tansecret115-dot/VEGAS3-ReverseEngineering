/* Module: sftrans1.dll
   Function: FUN_0047ff60
   Address: 0047ff60
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 __thiscall FUN_0047ff60(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  byte bVar2;
  int iVar3;
  DWORD DVar4;
  COLORREF CVar5;
  int SrcHeight;
  HDC hdc;
  HBRUSH pHVar6;
  uint uVar7;
  BOOL BVar8;
  HRGN hrgnDst;
  HRGN pHVar9;
  float fVar10;
  int iVar11;
  HGDIOBJ pvVar12;
  HPEN pHVar13;
  int iVar14;
  code *pcVar15;
  float10 extraout_ST0;
  HBITMAP local_100;
  void *local_fc;
  double local_f8;
  double local_f0;
  RECT local_e8;
  int *local_d8;
  double local_d4;
  RECT local_cc;
  double local_bc;
  HDC local_b4;
  tagRECT local_b0;
  RECT local_a0;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  RECT local_80;
  COLORREF local_70;
  RECT local_6c;
  tagRECT local_5c;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  BITMAPINFO local_2c;
  
  if (param_3 != 0) {
    local_d8 = param_1;
    FUN_0047ed60(1,0);
    iVar11 = param_1[0xd];
    iVar14 = *(int *)(iVar11 + 0x490);
    piVar1 = (int *)(iVar11 + 0x414);
    local_f8 = (double)CONCAT44(local_f8._4_4_,iVar14);
    if (iVar14 == 0) {
      iVar3 = *piVar1 - *(int *)(iVar11 + 0x41c);
      iVar14 = *(int *)(iVar11 + 0x418) - *(int *)(iVar11 + 0x420);
    }
    else {
      iVar3 = *piVar1 - *(int *)(iVar14 + 0x4c);
      iVar14 = *(int *)(iVar11 + 0x418) - *(int *)(iVar14 + 0x50);
    }
    local_d4 = (double)iVar3 * _DAT_00557838;
    local_bc = (double)iVar14 * _DAT_00557838;
    iVar14 = ftol();
    iVar3 = ftol();
    local_70 = GetBkColor(*(HDC *)(param_3 + 0x14));
    DVar4 = GetSysColor(0x15);
    SetBkColor(*(HDC *)(param_3 + 0x14),DVar4);
    CVar5 = GetTextColor(*(HDC *)(param_3 + 0x14));
    DVar4 = GetSysColor(0x10);
    SetTextColor(*(HDC *)(param_3 + 0x14),DVar4);
    local_f0._0_4_ = (HBRUSH)FUN_004e53f0(0x271e);
    local_cc.bottom = *(LONG *)(iVar11 + 0x418);
    local_cc.left = 0;
    local_cc.top = 0;
    local_cc.right = iVar14;
    FillRect(*(HDC *)(param_3 + 0x14),&local_cc,local_f0._0_4_);
    local_cc.right = *piVar1 - iVar14;
    local_cc.top = 0;
    local_cc.left = iVar14;
    local_cc.bottom = iVar3;
    FillRect(*(HDC *)(param_3 + 0x14),&local_cc,local_f0._0_4_);
    local_cc.bottom = *(int *)(iVar11 + 0x418);
    local_cc.right = *piVar1 - iVar14;
    local_cc.top = local_cc.bottom - iVar3;
    local_cc.left = iVar14;
    FillRect(*(HDC *)(param_3 + 0x14),&local_cc,local_f0._0_4_);
    local_cc.right = *piVar1;
    local_cc.bottom = *(LONG *)(iVar11 + 0x418);
    local_cc.left = local_cc.right - iVar14;
    local_cc.top = 0;
    FillRect(*(HDC *)(param_3 + 0x14),&local_cc,local_f0._0_4_);
    SetTextColor(*(HDC *)(param_3 + 0x14),CVar5);
    local_a0.bottom = *(int *)(iVar11 + 0x418) - iVar3;
    local_a0.right = *piVar1 - iVar14;
    SrcHeight = local_a0.bottom - iVar3;
    local_fc = (void *)0x0;
    local_100 = (HBITMAP)0x0;
    local_f0 = (double)CONCAT44(local_f0._4_4_,local_a0.right - iVar14);
    local_a0.left = iVar14;
    local_a0.top = iVar3;
    hdc = GetDC((HWND)0x0);
    local_b4 = CreateCompatibleDC(hdc);
    ReleaseDC((HWND)0x0,hdc);
    local_b0.left = 0;
    local_b0.top = 0;
    local_b0.right = 0;
    local_b0.bottom = 0;
    local_6c.left = 0;
    local_6c.top = 0;
    local_6c.right = *piVar1;
    local_6c.bottom = *(LONG *)(iVar11 + 0x418);
    if (local_b4 == (HDC)0x0) {
      pHVar6 = GetStockObject(2);
      FillRect(*(HDC *)(param_3 + 0x14),&local_6c,pHVar6);
      pcVar15 = DeleteObject_exref;
    }
    else {
      iVar14 = FUN_004de3f0(&local_2c,0x1c,local_f0._0_4_,SrcHeight,0,0,0);
      if (iVar14 < 0) {
        pHVar6 = GetStockObject(2);
        FillRect(*(HDC *)(param_3 + 0x14),&local_6c,pHVar6);
        pcVar15 = DeleteObject_exref;
      }
      else {
        local_100 = CreateDIBSection(local_b4,&local_2c,0,&local_fc,(HANDLE)0x0,0);
        if (local_100 == (HBITMAP)0x0) {
          pHVar6 = GetStockObject(2);
          FillRect(*(HDC *)(param_3 + 0x14),&local_6c,pHVar6);
          pcVar15 = DeleteObject_exref;
        }
        else {
          iVar14 = local_d8[0xc];
          local_e8.right = (LONG)(*(float *)(iVar14 + 0x80) * *(float *)(iVar14 + 0x84));
          local_e8.bottom = *(int *)(iVar14 + 0x84);
          local_e8.top = (LONG)(*(float *)(iVar14 + 0x7c) * *(float *)(iVar14 + 0x84));
          local_e8.left = (LONG)(*(float *)(iVar14 + 0x78) * *(float *)(iVar14 + 0x84));
          FUN_004e3070(&local_2c,local_fc,0,0,local_e8.right,local_e8.top,local_e8.left,
                       local_e8.bottom,3);
          local_48 = 0x3f20a0a1;
          uVar7 = (local_2c.bmiHeader._14_4_ & 0xffff) * local_2c.bmiHeader.biWidth + 0x1f;
          local_4c = 0x3f20a0a1;
          local_44 = 0x3f20a0a1;
          local_38 = 0x3f44c4c5;
          local_3c = 0x3f44c4c5;
          local_34 = 0x3f44c4c5;
          if (local_f8._0_4_ == (HRGN)0x0) {
            FUN_0047fc00(&local_2c,local_fc,0,
                         (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3,0,0,0,8,8,
                         &local_4c,&local_3c);
            StretchDIBits(*(HDC *)(param_3 + 0x14),local_a0.left,local_a0.top + -1 + SrcHeight,
                          (int)local_f0._0_4_,-SrcHeight,0,0,(int)local_f0._0_4_,SrcHeight,local_fc,
                          &local_2c,0,0xcc0020);
            pcVar15 = DeleteObject_exref;
          }
          else {
            local_b0.left = *(int *)((int)local_f8._0_4_ + 0x3c);
            local_b0.top = *(int *)((int)local_f8._0_4_ + 0x40);
            local_b0.right = *(int *)((int)local_f8._0_4_ + 0x44);
            local_b0.bottom = *(int *)((int)local_f8._0_4_ + 0x48);
            iVar14 = ftol();
            iVar3 = ftol();
            OffsetRect(&local_b0,iVar3,iVar14);
            iVar14 = -local_a0.left;
            local_80.left = local_b0.left + iVar14;
            local_80.right = local_b0.right + iVar14;
            local_80.bottom = local_a0.bottom - local_b0.top;
            local_80.top = local_a0.bottom - local_b0.bottom;
            local_e8.left = 0;
            local_e8.right = local_a0.right + iVar14;
            local_e8.top = 0;
            uVar7 = (local_2c.bmiHeader._14_4_ & 0xffff) * local_2c.bmiHeader.biWidth + 0x1f;
            local_e8.bottom = local_a0.bottom - local_a0.top;
            iVar14 = (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3;
            BVar8 = IntersectRect(&local_5c,&local_80,&local_e8);
            if (BVar8 != 0) {
              local_90 = local_5c.left + -local_80.left;
              local_88 = local_5c.right + -local_80.left;
              local_84 = local_5c.bottom + -local_80.top;
              local_8c = local_5c.top + -local_80.top;
              uVar7 = (uint)*(ushort *)((int)local_f8._0_4_ + 0x12) *
                      *(int *)((int)local_f8._0_4_ + 8) + 0x1f;
              FUN_004e24a0(&local_2c,local_fc,&local_5c,iVar14,(int)local_f8._0_4_ + 4,
                           *(undefined4 *)((int)local_f8._0_4_ + 0x30),&local_90,
                           (int)((uVar7 & 0xffffffe0) + ((int)uVar7 >> 0x1f & 7U)) >> 3,3);
            }
            FUN_0047fc00(&local_2c,local_fc,0,iVar14,0,0,0,8,8,&local_4c,&local_3c);
            StretchDIBits(*(HDC *)(param_3 + 0x14),local_a0.left,local_a0.top + -1 + SrcHeight,
                          (int)local_f0._0_4_,-SrcHeight,0,0,(int)local_f0._0_4_,SrcHeight,local_fc,
                          &local_2c,0,0xcc0020);
            hrgnDst = CreateRectRgn(0,0,0,0);
            pHVar9 = CreateRectRgnIndirect(&local_b0);
            local_f8 = (double)CONCAT44(local_f8._4_4_,pHVar9);
            pHVar9 = CreateRectRgnIndirect(&local_a0);
            local_f0 = (double)CONCAT44(local_f0._4_4_,pHVar9);
            iVar14 = CombineRgn(hrgnDst,local_f8._0_4_,pHVar9,4);
            pcVar15 = DeleteObject_exref;
            if ((iVar14 != 1) && (iVar14 != -1)) {
              DVar4 = GetSysColor(0xf);
              pHVar6 = CreateHatchBrush(5,DVar4);
              DVar4 = GetSysColor(0x10);
              SetBkColor(*(HDC *)(param_3 + 0x14),DVar4);
              FillRgn(*(HDC *)(param_3 + 0x14),hrgnDst,pHVar6);
              pcVar15 = DeleteObject_exref;
              DeleteObject(pHVar6);
            }
            (*pcVar15)(hrgnDst);
            (*pcVar15)(local_fc);
            (*pcVar15)(local_f8._0_4_);
          }
          local_f8 = (double)CONCAT44(local_f8._4_4_,*(int *)(local_d8[0xc] + 0x15c));
          if (0 < *(int *)(local_d8[0xc] + 0x15c)) {
            local_f0 = (double)*(int *)(iVar11 + 0x418) - (local_bc + local_bc);
            fVar10 = (float)ftol();
            local_e8.left = (LONG)fVar10;
            local_e8.top = ftol();
            local_f8 = (double)((float10)_DAT_00555908 - extraout_ST0 * (float10)_DAT_0055d670);
            local_e8.right = ftol();
            local_e8.bottom = ftol();
            if (((int)fVar10 < local_e8.right) && (local_e8.top < local_e8.bottom)) {
              iVar11 = GetBkMode(*(HDC *)(param_3 + 0x14));
              local_d4 = (double)CONCAT44(local_d4._4_4_,iVar11);
              SetBkMode(*(HDC *)(param_3 + 0x14),1);
              pvVar12 = GetStockObject(5);
              pvVar12 = SelectObject(*(HDC *)(param_3 + 0x14),pvVar12);
              local_bc = (double)CONCAT44(local_bc._4_4_,pvVar12);
              iVar11 = local_d8[0xc];
              if ((*(float *)(iVar11 + 0x80) <= *(float *)(iVar11 + 0x78)) ||
                 (*(float *)(iVar11 + 0x80) <= *(float *)(iVar11 + 0x7c))) {
                bVar2 = 0;
              }
              else {
                bVar2 = 1;
              }
              CVar5 = (-(uint)bVar2 & 0x7fff80) + 0x80;
              pHVar13 = CreatePen(0,0,CVar5);
              local_f8 = (double)CONCAT44(local_f8._4_4_,pHVar13);
              pHVar13 = CreatePen(2,0,CVar5);
              pvVar12 = SelectObject(*(HDC *)(param_3 + 0x14),local_f8._0_4_);
              local_f0 = (double)CONCAT44(local_f0._4_4_,pvVar12);
              Rectangle(*(HDC *)(param_3 + 0x14),local_e8.left,local_e8.top,local_e8.right,
                        local_e8.bottom);
              SelectObject(*(HDC *)(param_3 + 0x14),local_f0._0_4_);
              (*pcVar15)(local_f8._0_4_);
              (*pcVar15)(pHVar13);
              SelectObject(*(HDC *)(param_3 + 0x14),local_bc._0_4_);
              SetBkMode(*(HDC *)(param_3 + 0x14),local_d4._0_4_);
            }
          }
        }
      }
    }
    DrawEdge(*(HDC *)(param_3 + 0x14),(LPRECT)(param_3 + 4),10,0xf);
    SetBkColor(*(HDC *)(param_3 + 0x14),local_70);
    if (local_100 != (HBITMAP)0x0) {
      (*pcVar15)(local_100);
    }
    if (local_b4 != (HDC)0x0) {
      DeleteDC(local_b4);
    }
    (**(code **)(*local_d8 + 8))();
  }
  return 0;
}


