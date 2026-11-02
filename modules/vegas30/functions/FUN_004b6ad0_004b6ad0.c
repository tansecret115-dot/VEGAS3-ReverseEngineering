/* Module: vegas30.exe
   Function: FUN_004b6ad0
   Address: 004b6ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x004b6c95) */
/* WARNING: Removing unreachable block (ram,0x004b6f6e) */
/* WARNING: Removing unreachable block (ram,0x004b6d23) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004b6ad0(int param_1,HDC param_2)

{
  ulonglong uVar1;
  HGDIOBJ pvVar2;
  int iVar3;
  COLORREF CVar4;
  COLORREF color;
  uint x;
  DWORD DVar5;
  DWORD DVar6;
  int iVar7;
  bool bVar8;
  float10 fVar9;
  float10 fVar10;
  undefined8 uVar11;
  longlong lVar12;
  longlong lVar13;
  undefined1 local_70 [4];
  undefined1 local_6c [4];
  double local_68;
  int local_60;
  int iStack_5c;
  uint local_58;
  int iStack_54;
  double local_50;
  tagSIZE local_48;
  uint local_40;
  undefined4 local_3c;
  RECT local_38;
  CHAR local_28;
  undefined1 local_27;
  undefined1 local_26 [38];
  
  iStack_5c = *(int *)(param_1 + 0xb94);
  local_60 = *(int *)(param_1 + 0xb90);
  if ((-1 < iStack_5c) && ((0 < iStack_5c || (local_60 != 0)))) {
    if ((DAT_006476b8 == 0) || (bVar8 = false, DAT_006476bc == 0)) {
      bVar8 = true;
    }
    local_50 = (double)*(longlong *)(param_1 + 0xb90) / (double)*(int *)(param_1 + 0xb98);
    pvVar2 = (HGDIOBJ)_SfGetUIFont_4(0x6e);
    pvVar2 = SelectObject(param_2,pvVar2);
    local_28 = '(';
    local_27 = 0x29;
    iVar3 = FUN_004b7000(param_1,local_26,(double)*(longlong *)(param_1 + 0x600),0);
    GetTextExtentPointA(param_2,&local_28,iVar3 + 2,&local_48);
    SelectObject(param_2,pvVar2);
    local_68 = (double)local_48.cx * local_50 * _DAT_00613630;
    fVar9 = (float10)FUN_004b7040(param_1 + 0x20,local_68,local_6c,local_70);
    local_68 = (double)fVar9;
    fVar10 = fVar9;
    if (fVar9 < (float10)_DAT_006106d0) {
      fVar10 = (float10)_DAT_006106d0;
    }
    *(double *)(param_1 + 0x1c8) = (double)fVar10;
    if ((DAT_006476c8 == 0) && (DAT_006476cc == 0)) {
      *(double *)(param_1 + 0x1c0) = (double)fVar10;
    }
    if ((float10)_DAT_006128d8 <= fVar9) {
      if (bVar8) {
        CVar4 = SetTextColor(param_2,0x3f3f3f);
        color = SetBkColor(param_2,0xffffff);
        pvVar2 = (HGDIOBJ)_SfGetUIBrush_4(0x2716);
        pvVar2 = SelectObject(param_2,pvVar2);
        uVar11 = ftol();
        iVar3 = (int)((ulonglong)uVar11 >> 0x20);
        local_50 = (double)CONCAT44(local_50._4_4_,(int)uVar11);
        lVar12 = ftol();
        local_58 = local_50._0_4_;
        lVar12 = lVar12 + CONCAT44(iVar3,local_50._0_4_) + 3;
        local_40 = (uint)lVar12;
        iVar7 = (int)((ulonglong)lVar12 >> 0x20);
        iStack_54 = iVar3;
        if (CONCAT44(iVar3,local_50._0_4_) < lVar12) {
          do {
            local_60 = *(int *)(param_1 + 0xb90);
            iStack_5c = *(int *)(param_1 + 0xb94);
            if (local_60 == 0 && iStack_5c == 0) {
              x = 0xffffffff;
            }
            else {
              local_50 = (double)ftol();
              lVar12 = ftol();
              uVar1 = lVar12 + *(int *)(param_1 + 0xac0);
              x = (uint)uVar1;
              if ((uVar1 < 0x8000000000000000) ||
                 ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < x)))) {
                if (0x3fff < (longlong)uVar1) {
                  x = 0x3fff;
                }
              }
              else {
                x = 0xffffc000;
              }
            }
            if (((int)x < *(int *)(param_1 + 0xb80)) ||
               (DVar6 = 0xaf0229, *(int *)(param_1 + 0xb84) + *(int *)(param_1 + 0xb80) < (int)x)) {
              DVar6 = 0xa000c9;
            }
            PatBlt(param_2,x,*(int *)(param_1 + 0xac4),1,*(int *)(param_1 + 0xad4),DVar6);
            bVar8 = 0xfffffffe < local_58;
            local_58 = local_58 + 1;
            iStack_54 = iStack_54 + (uint)bVar8;
          } while ((iStack_54 < iVar7) || ((iStack_54 <= iVar7 && (local_58 < local_40))));
        }
        SelectObject(param_2,pvVar2);
        SetTextColor(param_2,CVar4);
        SetBkColor(param_2,color);
        return;
      }
      DVar6 = GetSysColor(0x10);
      DVar5 = GetSysColor(0xf);
      CVar4 = SetBkColor(param_2,(uint)CONCAT11((char)(((DVar6 >> 0x10 & 0xff) * 6 +
                                                       (DVar5 >> 0x10 & 0xff) * 4) / 10),
                                                (char)(((DVar6 >> 8 & 0xff) * 6 +
                                                       (DVar5 >> 8 & 0xff) * 4) / 10)) << 8 |
                                 ((DVar6 & 0xff) * 6 + (DVar5 & 0xff) * 4) / 10 & 0xff);
      uVar11 = ftol();
      iVar3 = (int)((ulonglong)uVar11 >> 0x20);
      local_40 = (uint)uVar11;
      lVar12 = ftol();
      local_58 = local_40;
      lVar12 = lVar12 + CONCAT44(iVar3,local_40) + 3;
      iVar7 = (int)((ulonglong)lVar12 >> 0x20);
      iStack_54 = iVar3;
      if (iVar3 <= iVar7) {
        if (iVar3 < iVar7) goto LAB_004b6ee2;
        do {
          if ((uint)lVar12 <= local_58) break;
LAB_004b6ee2:
          do {
            iVar3 = iStack_54;
            local_60 = *(int *)(param_1 + 0xb90);
            iStack_5c = *(int *)(param_1 + 0xb94);
            if (local_60 == 0 && iStack_5c == 0) {
              local_38.left = 0xffffffff;
            }
            else {
              local_50 = (double)ftol();
              lVar13 = ftol();
              local_3c = (undefined4)((ulonglong)lVar13 >> 0x20);
              uVar1 = lVar13 + *(int *)(param_1 + 0xac0);
              local_38.left = (LONG)uVar1;
              if ((uVar1 < 0x8000000000000000) ||
                 ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < (uint)local_38.left)))) {
                if (0x3fff < (longlong)uVar1) {
                  local_38.left = 0x3fff;
                }
              }
              else {
                local_38.left = 0xffffc000;
              }
            }
            local_38.top = *(int *)(param_1 + 0xac4);
            local_38.right = local_38.left + 1;
            local_38.bottom = *(int *)(param_1 + 0xad4) + local_38.top;
            ExtTextOutA(param_2,0,0,2,&local_38,(LPCSTR)0x0,0,(INT *)0x0);
            bVar8 = 0xfffffffe < local_58;
            local_58 = local_58 + 1;
            iStack_54 = iVar3 + (uint)bVar8;
          } while (iStack_54 < iVar7);
        } while (iStack_54 <= iVar7);
      }
      SetBkColor(param_2,CVar4);
    }
  }
  return;
}


