/* Module: vegas30.exe
   Function: FUN_00465c00
   Address: 00465c00
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0046765f) */
/* WARNING: Removing unreachable block (ram,0x004675e3) */
/* WARNING: Removing unreachable block (ram,0x00467431) */
/* WARNING: Removing unreachable block (ram,0x0046774b) */
/* WARNING: Removing unreachable block (ram,0x00467858) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00465c00(int param_1,HDC param_2,uint *param_3,int param_4)

{
  longlong *plVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  uint *puVar5;
  uint *puVar6;
  HGDIOBJ pvVar7;
  DWORD DVar8;
  COLORREF CVar9;
  HPEN pHVar10;
  uint *puVar11;
  BOOL BVar12;
  undefined4 uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  undefined4 uVar19;
  int unaff_EBX;
  int iVar20;
  code *pcVar21;
  int unaff_EBP;
  uint unaff_EDI;
  int iVar22;
  int *piVar23;
  RECT *pRVar24;
  undefined8 uVar25;
  longlong lVar26;
  longlong lVar27;
  uint *local_15c;
  uint *local_158;
  CHAR aCStack_152 [2];
  UINT local_150;
  RECT local_14c;
  uint *local_13c;
  uint *local_138;
  undefined8 uStack_134;
  uint *puStack_12c;
  uint *local_128;
  uint *local_124;
  uint *puStack_120;
  CHAR CStack_119;
  uint *puStack_118;
  CHAR CStack_111;
  double dStack_110;
  uint local_108;
  RECT RStack_104;
  RECT RStack_f4;
  uint uStack_e4;
  int iStack_e0;
  uint *puStack_dc;
  uint local_d8;
  COLORREF CStack_d4;
  tagSIZE tStack_d0;
  int iStack_c8;
  uint uStack_c4;
  double dStack_c0;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  int iStack_98;
  uint uStack_94;
  uint auStack_90 [4];
  int iStack_80;
  uint uStack_7c;
  uint auStack_78 [4];
  int iStack_68;
  uint uStack_64;
  double dStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined8 uStack_48;
  uint *puStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  RECT RStack_30;
  undefined8 uStack_20;
  int iStack_18;
  int iStack_14;
  RECT RStack_10;
  
  *(uint *)(param_4 + 0x58) = *(uint *)(param_4 + 0x58) & 0xfffffdff;
  local_108 = DAT_00647854;
  if ((DAT_00647854 & 0x4000000) != 0) {
    local_108 = GetSysColor(DAT_00647854 & 0xffffff);
  }
  local_d8 = FUN_00460550(local_108,0);
  local_124 = (uint *)GetSysColor(0xd);
  uVar16 = *(uint *)(param_4 + 0x18);
  local_128 = *(uint **)(param_1 + 0xbc4);
  if ((int)uVar16 < (int)param_3[3]) {
    pvVar7 = (HGDIOBJ)_SfGetUIBrush_4(0x271e);
    if (pvVar7 != (HGDIOBJ)0x0) {
      UnrealizeObject(pvVar7);
      SetBrushOrgEx(param_2,*(int *)(param_1 + 0xb14),*(int *)(param_1 + 0xb18),(LPPOINT)0x0);
      local_13c = SelectObject(param_2,pvVar7);
      puVar14 = *(uint **)(param_1 + 0xb80);
      local_15c = (uint *)*param_3;
      puVar18 = local_15c;
      if ((int)local_15c <= (int)puVar14) {
        puVar18 = puVar14;
      }
      puVar14 = (uint *)((int)puVar14 + *(int *)(param_1 + 0xb84));
      if (((int)local_15c <= (int)puVar14) &&
         (local_15c = (uint *)param_3[2], (int)puVar14 <= (int)param_3[2])) {
        local_15c = puVar14;
      }
      SetTextColor(param_2,0x808080);
      DVar8 = GetSysColor(0x10);
      local_138 = (uint *)GetSysColor(0xf);
      uVar15 = (uint)CONCAT11((char)((((uint)local_138 >> 0x10 & 0xff) + 1 + (DVar8 >> 0x10 & 0xff))
                                    / 2),
                              (char)((((uint)local_138 >> 8 & 0xff) + 1 + (DVar8 >> 8 & 0xff)) / 2))
               << 8 | (((uint)local_138 & 0xff) + 1 + (DVar8 & 0xff)) / 2 & 0xff;
      if ((int)*param_3 < (int)puVar18) {
        SetBkColor(param_2,uVar15);
        local_14c.left = *param_3;
        local_14c.bottom = param_3[3];
        local_14c.top = uVar16;
        local_14c.right = (LONG)puVar18;
        ExtTextOutA(param_2,0,0,2,&local_14c,(LPCSTR)0x0,0,(INT *)0x0);
      }
      if ((int)puVar18 < (int)local_15c) {
        CVar9 = FUN_004645e0(uVar15,local_124,DAT_0064aed4);
        SetBkColor(param_2,CVar9);
        local_14c.right = (LONG)local_15c;
        local_14c.bottom = param_3[3];
        local_14c.left = (LONG)puVar18;
        local_14c.top = uVar16;
        ExtTextOutA(param_2,0,0,2,&local_14c,(LPCSTR)0x0,0,(INT *)0x0);
      }
      if ((int)local_15c < (int)param_3[2]) {
        SetBkColor(param_2,uVar15);
        local_14c.left = (LONG)local_15c;
        local_14c.right = param_3[2];
        local_14c.bottom = param_3[3];
        local_14c.top = uVar16;
        ExtTextOutA(param_2,0,0,2,&local_14c,(LPCSTR)0x0,0,(INT *)0x0);
      }
      SelectObject(param_2,local_13c);
    }
    if (local_128 == (uint *)0x0) {
      FUN_00468a60(param_2,param_1 + 0xac0);
    }
    pvVar7 = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
    if (pvVar7 != (HGDIOBJ)0x0) {
      UnrealizeObject(pvVar7);
    }
  }
  if (param_4 != 0) {
    pHVar10 = CreatePen(0,1,0xff0000);
    *(HPEN *)(param_4 + 8) = pHVar10;
    pHVar10 = CreatePen(0,2,0xffffff);
    *(HPEN *)(param_4 + 0x10) = pHVar10;
    CVar9 = FUN_00460550(0xff0000,5);
    pHVar10 = CreatePen(0,1,CVar9);
    *(HPEN *)(param_4 + 0xc) = pHVar10;
    CVar9 = FUN_00460550(0xffffff,6);
    pHVar10 = CreatePen(0,2,CVar9);
    *(HPEN *)(param_4 + 0x14) = pHVar10;
    FUN_004646b0(param_1,param_2,param_3,param_4);
    FUN_00463f40(param_1,param_2,param_3,param_4,1);
    FUN_00455700(param_1,param_2,param_3);
    if ((DAT_00647734 != 0) && (local_150 = 0, 0 < *(int *)(param_4 + 0x5c))) {
      puVar14 = (uint *)(param_4 + 0xc4);
      do {
        if ((*puVar14 & 1) == 0) {
          uVar16 = *puVar14 & 2;
          if (uVar16 == 0) {
            uVar15 = puVar14[-0x13];
          }
          else {
            uVar15 = 0;
          }
          if ((1 < (int)(puVar14[-9] - puVar14[-0xb])) || (uVar16 != 0)) {
            if (uVar16 == 0) {
              if ((((uVar15 != 0) &&
                   (iVar20 = (*(code *)puVar14[1])(param_2,param_3,puVar14 + -0x13,param_4),
                   iVar20 == 0)) && (uVar16 = puVar14[-0x12], uVar16 != 0)) &&
                 (((puStack_12c = (uint *)(*(uint *)(*(int *)(uVar16 + 8) + 0x134) >> 5 & 1),
                   puStack_12c != (uint *)0x0 ||
                   (puStack_12c = (uint *)(*(uint *)(uVar16 + 0x8c) & 1), puStack_12c != (uint *)0x0
                   )) && ((*(uint *)(uVar15 + 0x10) & 0x100000) == 0)))) {
                FUN_00465bb0(param_2,puVar14 + -0xb,param_4,uVar15);
              }
            }
            else {
              (*(code *)puVar14[1])(param_2,param_3,puVar14 + -0x13,param_4);
            }
          }
        }
        local_150 = local_150 + 1;
        puVar14 = puVar14 + 0x16;
      } while ((int)local_150 < *(int *)(param_4 + 0x5c));
    }
    iVar20 = 0;
    if (0 < *(int *)(param_4 + 0x5c)) {
      iVar22 = param_4 + 0x98;
      do {
        if ((*(byte *)(iVar22 + 0x2c) & 0x10) != 0) {
          FUN_004683f0(param_2,iVar22);
        }
        iVar20 = iVar20 + 1;
        iVar22 = iVar22 + 0x58;
      } while (iVar20 < *(int *)(param_4 + 0x5c));
    }
    if (DAT_00647774 != 0) {
      pvVar7 = (HGDIOBJ)_SfGetUIFont_4(100);
      puStack_118 = SelectObject(param_2,pvVar7);
      iVar20 = SetBkMode(param_2,2);
      dStack_c0 = (double)CONCAT44(dStack_c0._4_4_,iVar20);
      puStack_120 = (uint *)SetTextAlign(param_2,0);
      CVar9 = SetTextColor(param_2,DAT_00647838);
      puVar14 = DAT_0064783c;
      dStack_110 = (double)CONCAT44(dStack_110._4_4_,CVar9);
      puStack_12c = DAT_0064783c;
      local_138 = (uint *)FUN_00460550(DAT_0064783c,4);
      puStack_dc = (uint *)SetBkColor(param_2,(COLORREF)puVar14);
      if (0 < *(int *)(param_4 + 0x5c)) {
        puVar18 = (uint *)(param_4 + 0xc4);
        local_158 = (uint *)0x1;
        do {
          if ((((*puVar18 & 3) == 0) &&
              ((*(byte *)(*(int *)(puVar18[-0x13] + 0x218) + 0x68) & 2) == 0)) &&
             (*(int *)(puVar18[-0x13] + 0x50) != 0)) {
            puVar11 = local_138;
            if ((*puVar18 & 8) == 0) {
              puVar11 = puVar14;
            }
            SetBkColor(param_2,(COLORREF)puVar11);
            uVar16 = puVar18[-0x13];
            CVar9 = *(COLORREF *)(uVar16 + 0x50);
            CStack_d4 = CVar9;
            if ((*(LPCSTR *)(CVar9 + 0x20) != (LPCSTR)0x0) &&
               (local_150 = lstrlenA(*(LPCSTR *)(CVar9 + 0x20)), local_150 != 0)) {
              GetTextExtentPointA(param_2,*(LPCSTR *)(CVar9 + 0x20),local_150,&tStack_d0);
              iVar20 = *(int *)(uVar16 + 0x218);
              iVar22 = *(int *)(iVar20 + 0x38);
              if (9 < *(int *)(iVar20 + 0x3c) - iVar22) {
                if ((*(uint *)(param_1 + 0x18) & 0x200400) == 0) {
                  iVar22 = *(int *)(iVar20 + 0x20);
                }
                uStack_134._0_4_ = (uint *)(iVar22 + 4);
                local_14c.top = *(int *)(iVar20 + 0x24) + 4;
                local_14c.bottom = *(int *)(iVar20 + 0x2c) - 2;
                if (local_14c.top + tStack_d0.cy <= local_14c.bottom) {
                  local_14c.bottom = local_14c.top + tStack_d0.cy;
                }
                local_14c.right = tStack_d0.cx + (int)(uint *)uStack_134;
                if ((int)puVar18[-9] < local_14c.right) {
                  puVar14 = (uint *)0x0;
                  local_13c = (uint *)0x0;
                  if ((int)local_158 < *(int *)(param_4 + 0x5c)) {
                    local_128 = (uint *)puVar18[-10];
                    puVar17 = puVar18 + 3;
                    puVar11 = local_158;
                    do {
                      puVar5 = puVar14;
                      puVar6 = local_13c;
                      if (((uint *)puVar17[9] == local_128) &&
                         (puVar14 = local_13c, puVar5 = puVar11, puVar6 = puVar11,
                         *puVar17 != puVar18[-0x13])) break;
                      local_13c = puVar6;
                      puVar14 = puVar5;
                      puVar11 = (uint *)((int)puVar11 + 1);
                      puVar17 = puVar17 + 0x16;
                    } while ((int)puVar11 < *(int *)(param_4 + 0x5c));
                  }
                  puVar14 = *(uint **)(param_4 + 0xa0 + (int)puVar14 * 0x58);
                  if ((int)puVar14 <= local_14c.right) {
                    local_14c.right = (LONG)puVar14;
                  }
                }
                puVar14 = *(uint **)(iVar20 + 0x20);
                if (((int)(uint *)uStack_134 < (int)puVar14) ||
                   (puVar14 = *(uint **)(iVar20 + 0x28), local_14c.left = (LONG)(uint *)uStack_134,
                   (int)puVar14 < (int)(uint *)uStack_134)) {
                  local_14c.left = (LONG)puVar14;
                }
                puVar14 = *(uint **)(iVar20 + 0x20);
                if ((local_14c.right < (int)puVar14) ||
                   (puVar14 = *(uint **)(iVar20 + 0x28), (int)puVar14 < local_14c.right)) {
                  local_14c.right = (LONG)puVar14;
                }
                ExtTextOutA(param_2,(int)(uint *)uStack_134,local_14c.top,4,&local_14c,
                            *(LPCSTR *)(CStack_d4 + 0x20),local_150,(INT *)0x0);
                *(uint *)(iVar20 + 0x68) = *(uint *)(iVar20 + 0x68) | 2;
              }
            }
          }
          puVar18 = puVar18 + 0x16;
          bVar4 = (int)local_158 < *(int *)(param_4 + 0x5c);
          puVar14 = puStack_12c;
          local_158 = (uint *)((int)local_158 + 1);
        } while (bVar4);
      }
      SetBkMode(param_2,dStack_c0._0_4_);
      SetBkColor(param_2,(COLORREF)puStack_dc);
      SetTextColor(param_2,dStack_110._0_4_);
      SetTextAlign(param_2,(UINT)puStack_120);
      SelectObject(param_2,puStack_118);
    }
    if ((DAT_00647724 != 0) && (iVar20 = 0, 0 < *(int *)(param_4 + 0x5c))) {
      puVar14 = (uint *)(param_4 + 0xc4);
      do {
        if (((((*puVar14 & 1) == 0) && (3 < (int)(puVar14[-9] - puVar14[-0xb]))) &&
            ((*puVar14 & 2) == 0)) && (DAT_006477b8 <= (int)(puVar14[-8] - puVar14[-10]))) {
          FUN_00475c60(param_2,param_3,puVar14 + -0x13,param_4);
        }
        iVar20 = iVar20 + 1;
        puVar14 = puVar14 + 0x16;
      } while (iVar20 < *(int *)(param_4 + 0x5c));
    }
    if (DAT_00647860 != (uint *)0xffffffff) {
      puVar14 = DAT_00647860;
      if (((uint)DAT_00647860 & 0x4000000) != 0) {
        puVar14 = (uint *)GetSysColor((uint)DAT_00647860 & 0xffffff);
      }
      local_13c = puVar14;
      puStack_120 = (uint *)SetBkColor(param_2,(COLORREF)puVar14);
      CVar9 = SetTextColor(param_2,(COLORREF)puVar14);
      dStack_110 = (double)CONCAT44(dStack_110._4_4_,CVar9);
      puStack_118 = SelectObject(param_2,DAT_0064b3e0);
      SetBkMode(param_2,1);
      CStack_111 = '(';
      aCStack_152[1] = 0x2a;
      CStack_119 = 'K';
      aCStack_152[0] = 'M';
      uStack_134._0_4_ = (uint *)*param_3;
      puVar14 = *(uint **)(param_1 + 0xb80);
      puStack_12c = (uint *)uStack_134;
      if ((int)(uint *)uStack_134 <= (int)puVar14) {
        puStack_12c = puVar14;
      }
      puVar14 = (uint *)((int)puVar14 + *(int *)(param_1 + 0xb84));
      if (((int)(uint *)uStack_134 <= (int)puVar14) &&
         (uStack_134._0_4_ = (uint *)param_3[2], (int)puVar14 <= (int)param_3[2])) {
        uStack_134._0_4_ = puVar14;
      }
      local_150 = 0;
      if (0 < *(int *)(param_4 + 0x5c)) {
        puVar14 = (uint *)(param_4 + 0xc4);
        do {
          if ((*puVar14 & 1) == 0) {
            local_14c.left = ((RECT *)(puVar14 + -0xb))->left;
            local_14c.top = puVar14[-10];
            local_14c.right = puVar14[-9];
            iVar20 = 1;
            local_14c.bottom = puVar14[-8];
            local_128 = local_124;
            pcVar21 = ExtTextOutA_exref;
            if ((*puVar14 & 2) == 0) {
              local_15c = (uint *)puVar14[-0x13];
              if (local_15c != (uint *)0x0) {
                iVar20 = *(int *)((int)local_15c + 0x218);
                local_14c.left = *(uint *)(iVar20 + 0x20);
                local_14c.top = *(uint *)(iVar20 + 0x24);
                local_14c.right = *(uint *)(iVar20 + 0x28);
                local_14c.bottom = *(uint *)(iVar20 + 0x2c);
                if (((*(byte *)(iVar20 + 0x68) & 4) != 0) &&
                   (BVar12 = PtInRect((RECT *)(puVar14 + -0xb),*(POINT *)(iVar20 + 0x40)),
                   BVar12 != 0)) {
                  local_138 = (uint *)0x2e;
                  iVar20 = *(int *)((int)local_15c + 0x218);
                  if ((*(int **)((int)local_15c + 0x140) != (int *)0x0) &&
                     (**(int **)((int)local_15c + 0x140) != 0)) {
                    local_138 = (uint *)0x2f;
                  }
                  if (((*(int *)(param_1 + 0xa4) != 3) ||
                      ((uint *)*(uint *)(param_1 + 0xcec) != local_15c)) ||
                     (local_158 = (uint *)0x1, *(int *)(param_1 + 0x3b8) != 9)) {
                    local_158 = (uint *)0x0;
                  }
                  RStack_104.bottom = *(int *)(iVar20 + 0x44) + 10;
                  RStack_104.right = *(int *)(iVar20 + 0x40) + 10;
                  RStack_104.top = *(int *)(iVar20 + 0x44) - 10;
                  RStack_104.left = *(int *)(iVar20 + 0x40) - 10;
                  FUN_00468c00(param_2,&RStack_104,2,2,local_138,DAT_0064b314,DAT_0064b318,0,1,0,
                               local_158,*(uint *)(iVar20 + 0x68) >> 7 & 1,*puVar14 >> 3 & 1);
                }
                if (((*(byte *)(*(int *)((int)local_15c + 0x218) + 0x68) & 8) != 0) &&
                   (BVar12 = PtInRect((RECT *)(puVar14 + -0xb),
                                      *(POINT *)(*(int *)((int)local_15c + 0x218) + 0x48)),
                   BVar12 != 0)) {
                  local_138 = (uint *)0x1e;
                  iVar20 = *(int *)((int)local_15c + 0x218);
                  if ((*(int *)(param_1 + 0xa4) != 3) ||
                     (((uint *)*(uint *)(param_1 + 0xcec) != local_15c ||
                      (local_158 = (uint *)0x1, *(int *)(param_1 + 0x3b8) != 0xe)))) {
                    local_158 = (uint *)0x0;
                  }
                  iVar22 = FUN_00522ac0();
                  if ((iVar22 != 0) || (local_158 != (uint *)0x0)) {
                    local_138 = (uint *)0x1f;
                  }
                  iVar22 = *(int *)(iVar20 + 0x4c);
                  iVar20 = *(int *)(iVar20 + 0x48);
                  RStack_f4.bottom = iVar22 + 10;
                  RStack_f4.right = iVar20 + 10;
                  RStack_f4.top = iVar22 - 10;
                  RStack_f4.left = iVar20 - 10;
                  FUN_00468c00(param_2,&RStack_f4,2,2,local_138,DAT_0064b314,DAT_0064b318,0,1,0,
                               local_158,*(uint *)(*(int *)((int)local_15c + 0x218) + 0x68) >> 8 & 1
                               ,*puVar14 >> 3 & 1);
                }
                if (((*(byte *)(*(int *)((int)local_15c + 0x218) + 0x68) & 0x10) != 0) &&
                   (BVar12 = PtInRect((RECT *)(puVar14 + -0xb),
                                      *(POINT *)(*(int *)((int)local_15c + 0x218) + 0x50)),
                   BVar12 != 0)) {
                  iVar20 = *(int *)((int)local_15c + 0x218);
                  if ((*(int *)(param_1 + 0xa4) != 3) ||
                     (((uint *)*(uint *)(param_1 + 0xcec) != local_15c ||
                      (local_138 = (uint *)0x1, *(int *)(param_1 + 0x3b8) != 0xf)))) {
                    local_138 = (uint *)0x0;
                  }
                  iStack_14 = *(int *)(iVar20 + 0x54) + 10;
                  iStack_18 = *(int *)(iVar20 + 0x50) + 10;
                  uStack_20._4_4_ = *(int *)(iVar20 + 0x54) + -10;
                  uStack_20._0_4_ = *(int *)(iVar20 + 0x50) + -10;
                  FUN_00468c00(param_2,&uStack_20,2,2,0x1d,DAT_0064b314,DAT_0064b318,0,1,0,local_138
                               ,*(uint *)(iVar20 + 0x68) >> 9 & 1,*puVar14 >> 3 & 1);
                }
                if ((*puVar14 & 0x100000) == 0) {
                  if (((*puVar14 & 0x80) == 0) || (DAT_0064aee4 == 0)) {
                    iVar20 = 1;
                  }
                  else {
                    local_128 = (uint *)SetBkColor(param_2,(COLORREF)local_124);
                    iVar20 = DAT_0064aee4;
                  }
                }
                else {
                  local_128 = (uint *)SetBkColor(param_2,(COLORREF)local_124);
                  iVar20 = 2;
                }
                pcVar21 = ExtTextOutA_exref;
                if ((*puVar14 & 0x10000) != 0) {
                  RStack_10.left = local_14c.left;
                  RStack_10.top = local_14c.top;
                  RStack_10.bottom = local_14c.top + iVar20;
                  RStack_10.right = local_14c.right;
                  ExtTextOutA(param_2,0,0,2,&RStack_10,(LPCSTR)0x0,0,(INT *)0x0);
                  RStack_30.top = local_14c.bottom - iVar20;
                  RStack_30.bottom = RStack_30.top + iVar20;
                  RStack_30.left = local_14c.left;
                  RStack_30.right = local_14c.right;
                  ExtTextOutA(param_2,0,0,2,&RStack_30,(LPCSTR)0x0,0,(INT *)0x0);
                }
              }
            }
            else {
              local_15c = (uint *)0x0;
            }
            if (((*puVar14 & 2) != 0) &&
               (((*puVar14 & 0x20000) == 0 || (*(int *)(puVar14[-1] + 4) == 0)))) {
              uStack_48._0_4_ = (uint *)local_14c.left;
              uStack_48._4_4_ = local_14c.top;
              iStack_3c = local_14c.top + iVar20;
              puStack_40 = (uint *)local_14c.right;
              (*pcVar21)(param_2,0,0,2,&uStack_48,0,0,0);
              auStack_78[1] = unaff_EBX - iVar20;
              auStack_78[3] = auStack_78[1] + iVar20;
              auStack_78[0] = unaff_EDI;
              auStack_78[2] = unaff_EBP;
              (*pcVar21)(param_2,0,0,2,auStack_78,0,0,0);
            }
            tStack_d0.cx = puVar14[-0xb];
            iStack_c8 = tStack_d0.cx + iVar20;
            tStack_d0.cy = local_14c.top;
            uStack_c4 = local_14c.bottom;
            (*pcVar21)(param_2,0,0,2,&tStack_d0,0,0,0);
            if ((*puVar14 & 0x8000) != 0) {
              uStack_a0 = (puVar14[-9] - iVar20) + 1;
              iStack_98 = uStack_a0 + iVar20;
              uStack_9c = local_14c.top;
              uStack_94 = local_14c.bottom;
              (*pcVar21)(param_2,0,0,2,&uStack_a0,0,0,0);
            }
            if ((local_15c != (uint *)0x0) && ((*puVar14 & 0x100000) != 0)) {
              SetBkColor(param_2,(COLORREF)local_128);
            }
          }
          local_150 = local_150 + 1;
          puVar14 = puVar14 + 0x16;
        } while ((int)local_150 < *(int *)(param_4 + 0x5c));
      }
      puVar14 = puStack_12c;
      if (DAT_0064b3e0 != (HGDIOBJ)0x0) {
        local_15c = (uint *)local_108;
        local_150 = 0;
        if (0 < *(int *)(param_4 + 0x5c)) {
          piVar23 = (int *)(param_4 + 0x9c);
          do {
            uVar16 = piVar23[10];
            if ((uVar16 & 1) == 0) {
              if ((uVar16 & 2) == 0) {
                iVar20 = *(int *)(piVar23[-9] + 0x218);
                local_14c.left = *(uint *)(iVar20 + 0x20);
                local_14c.top = *(uint *)(iVar20 + 0x24);
                local_14c.right = *(uint *)(iVar20 + 0x28);
                local_14c.bottom = *(uint *)(iVar20 + 0x2c);
                CVar9 = FUN_004645e0(local_15c,local_124,
                                     CONCAT31((int3)((uint)(iVar20 + 0x20) >> 8),DAT_0064aed4));
                piVar2 = (int *)piVar23[9];
                if ((((piVar2 != (int *)0x0) && (*piVar2 != 0)) && (piVar2[1] != 0)) &&
                   (uVar16 = piVar23[10], (uVar16 & 0x20000) == 0)) {
                  if ((uVar16 & 0x4000) != 0) {
                    local_14c.left = local_14c.left + 1;
                  }
                  if ((uVar16 & 0x8000) != 0) {
                    local_14c.right = local_14c.right - 1;
                  }
                }
                if (0xc < local_14c.right - local_14c.left) {
                  if ((piVar23[10] & 0x4000U) != 0) {
                    iVar20 = 6;
                    if (((piVar23[10] & 0x8000U) != 0) &&
                       (iVar22 = (local_14c.right - local_14c.left) / 2, iVar22 < 7)) {
                      iVar20 = iVar22;
                    }
                    SetTextColor(param_2,(COLORREF)local_13c);
                    ExtTextOutA(param_2,piVar23[-1],*piVar23,4,&local_14c,&CStack_111,1,(INT *)0x0);
                    iVar22 = piVar23[-1];
                    if (((int)puVar14 < iVar22 + iVar20) && (iVar22 < (int)(uint *)uStack_134)) {
                      if ((iVar22 < (int)puVar14) || ((int)(uint *)uStack_134 < iVar22 + iVar20)) {
                        RStack_104.top = local_14c.top;
                        RStack_104.left = local_14c.left;
                        RStack_104.right = local_14c.right;
                        RStack_104.bottom = local_14c.bottom;
                        SetTextColor(param_2,(COLORREF)local_15c);
                        RStack_104.left = piVar23[-1];
                        RStack_104.right = (LONG)puVar14;
                        ExtTextOutA(param_2,RStack_104.left,*piVar23,4,&RStack_104,aCStack_152 + 1,1
                                    ,(INT *)0x0);
                        RStack_104.right = piVar23[1];
                        RStack_104.left = (LONG)(uint *)uStack_134;
                        ExtTextOutA(param_2,piVar23[-1],*piVar23,4,&RStack_104,aCStack_152 + 1,1,
                                    (INT *)0x0);
                        SetTextColor(param_2,CVar9);
                        RStack_104.right = (LONG)(uint *)uStack_134;
                        RStack_104.left = (LONG)puVar14;
                        ExtTextOutA(param_2,piVar23[-1],*piVar23,4,&RStack_104,aCStack_152 + 1,1,
                                    (INT *)0x0);
                        goto LAB_00466c41;
                      }
                      SetTextColor(param_2,CVar9);
                      iVar20 = *piVar23;
                      iVar22 = piVar23[-1];
                    }
                    else {
                      SetTextColor(param_2,(COLORREF)local_15c);
                      iVar20 = *piVar23;
                      iVar22 = piVar23[-1];
                    }
                    ExtTextOutA(param_2,iVar22,iVar20,4,&local_14c,aCStack_152 + 1,1,(INT *)0x0);
                  }
LAB_00466c41:
                  if ((piVar23[10] & 0x8000U) != 0) {
                    puVar18 = (uint *)((*(int *)(*(int *)(piVar23[-9] + 0x218) + 0x28) -
                                       *(int *)(*(int *)(piVar23[-9] + 0x218) + 0x20)) / 2 +
                                      local_14c.left);
                    if (local_14c.left <= (int)puVar18) {
                      local_14c.left = (LONG)puVar18;
                    }
                    local_14c.right = local_14c.right + 1;
                    SetTextColor(param_2,(COLORREF)local_13c);
                    ExtTextOutA(param_2,piVar23[1] + -9,*piVar23,4,&local_14c,&CStack_119,1,
                                (INT *)0x0);
                    iVar20 = piVar23[1];
                    if (((int)puVar14 < iVar20) && (iVar20 + -6 < (int)(uint *)uStack_134)) {
                      if ((iVar20 + -6 < (int)puVar14) || ((int)(uint *)uStack_134 < iVar20)) {
                        RStack_f4.top = local_14c.top;
                        RStack_f4.left = local_14c.left;
                        RStack_f4.right = local_14c.right;
                        RStack_f4.bottom = local_14c.bottom;
                        SetTextColor(param_2,(COLORREF)local_15c);
                        RStack_f4.right = (LONG)puVar14;
                        ExtTextOutA(param_2,piVar23[1] + -9,*piVar23,4,&RStack_f4,aCStack_152,1,
                                    (INT *)0x0);
                        RStack_f4.left = (LONG)(uint *)uStack_134;
                        RStack_f4.right = local_14c.right;
                        ExtTextOutA(param_2,piVar23[1] + -9,*piVar23,4,&RStack_f4,aCStack_152,1,
                                    (INT *)0x0);
                        SetTextColor(param_2,CVar9);
                        pRVar24 = &RStack_f4;
                        RStack_f4.right = (LONG)(uint *)uStack_134;
                        iVar20 = *piVar23;
                        iVar22 = piVar23[1] + -9;
                        RStack_f4.left = (LONG)puVar14;
                      }
                      else {
                        SetTextColor(param_2,CVar9);
                        iVar20 = *piVar23;
                        pRVar24 = &local_14c;
                        iVar22 = piVar23[1] + -9;
                      }
                    }
                    else {
                      SetTextColor(param_2,(COLORREF)local_15c);
                      iVar20 = *piVar23;
                      pRVar24 = &local_14c;
                      iVar22 = piVar23[1] + -9;
                    }
                    ExtTextOutA(param_2,iVar22,iVar20,4,pRVar24,aCStack_152,1,(INT *)0x0);
                  }
                }
              }
            }
            else if ((uVar16 & 8) == 0) {
              local_15c = (uint *)local_108;
            }
            else {
              local_15c = (uint *)local_d8;
            }
            local_150 = local_150 + 1;
            piVar23 = piVar23 + 0x16;
          } while ((int)local_150 < *(int *)(param_4 + 0x5c));
        }
      }
      SelectObject(param_2,puStack_118);
      SetBkColor(param_2,(COLORREF)puStack_120);
      SetBkColor(param_2,dStack_110._0_4_);
    }
    puVar14 = DAT_00647860;
    if (DAT_00647724 != 0) {
      if (DAT_0064b3e0 != (HGDIOBJ)0x0) {
        SetTextAlign(param_2,0);
        SetBkMode(param_2,1);
        puStack_118 = (uint *)SetTextColor(param_2,0xff0000);
        puStack_120 = SelectObject(param_2,DAT_0064b3e0);
      }
      local_150 = 0;
      puVar14 = DAT_00647860;
      if (0 < *(int *)(param_4 + 0x5c)) {
        puVar18 = (uint *)(param_4 + 0xc4);
        do {
          if ((*puVar18 & 3) == 0) {
            iVar20 = *(int *)(puVar18[-0x13] + 0x218);
            pRVar24 = (RECT *)(iVar20 + 0x20);
            if (((DAT_006477b8 <= *(int *)(iVar20 + 0x2c) - *(int *)(iVar20 + 0x24)) &&
                (iVar22 = *(int *)(iVar20 + 0x28) - pRVar24->left, 0xb < iVar22)) && (0xc < iVar22))
            {
              CVar9 = 0xff0000;
              local_13c = puVar18;
              if ((*puVar18 & 8) != 0) {
                CVar9 = FUN_00460550(0xff0000,2);
              }
              SetTextColor(param_2,CVar9);
              uVar16 = *puVar18;
              if ((uVar16 & 0x4000) != 0) {
                if ((uVar16 & 0x20) == 0) {
                  if ((uVar16 & 0x1000) == 0) {
                    ExtTextOutA(param_2,pRVar24->left + -4,*(int *)(iVar20 + 0x24) + -4,4,pRVar24,
                                "r",1,(INT *)0x0);
                  }
                }
                else if ((int)(puVar18[-9] - puVar18[-0xb]) < 6) {
                  iVar22 = pRVar24->left;
                  iVar3 = *(int *)(iVar20 + 0x24);
                  SetTextColor(param_2,0xffff00);
                  ExtTextOutA(param_2,iVar22 + -4,iVar3 + -4,4,pRVar24,"r",1,(INT *)0x0);
                  SetTextColor(param_2,0xff0000);
                  puVar18 = local_13c;
                }
              }
              uVar16 = *puVar18;
              puVar14 = DAT_00647860;
              if ((uVar16 & 0x8000) != 0) {
                local_14c.left = pRVar24->left;
                local_14c.top = *(uint *)(iVar20 + 0x24);
                local_14c.right = *(int *)(iVar20 + 0x28) + 1;
                local_14c.bottom = *(uint *)(iVar20 + 0x2c);
                if ((uVar16 & 0x20) == 0) {
                  if ((uVar16 & 0x2000) == 0) {
                    ExtTextOutA(param_2,*(int *)(iVar20 + 0x28) + -4,*(int *)(iVar20 + 0x24) + -4,4,
                                &local_14c,"r",1,(INT *)0x0);
                    puVar14 = DAT_00647860;
                  }
                }
                else if ((int)(puVar18[-9] - puVar18[-0xb]) < 6) {
                  iVar22 = *(int *)(iVar20 + 0x28);
                  iVar20 = *(int *)(iVar20 + 0x24);
                  SetTextColor(param_2,0xffff00);
                  ExtTextOutA(param_2,iVar22 + -4,iVar20 + -4,4,&local_14c,"r",1,(INT *)0x0);
                  SetTextColor(param_2,0xff0000);
                  puVar14 = DAT_00647860;
                  puVar18 = local_13c;
                }
              }
            }
          }
          local_150 = local_150 + 1;
          puVar18 = puVar18 + 0x16;
          local_13c = puVar18;
        } while ((int)local_150 < *(int *)(param_4 + 0x5c));
      }
      if (DAT_0064b3e0 != (HGDIOBJ)0x0) {
        SetTextColor(param_2,(COLORREF)puStack_118);
        SelectObject(param_2,puStack_120);
        puVar14 = DAT_00647860;
      }
    }
    if (puVar14 != (uint *)0xffffffff) {
      puStack_12c = *(uint **)(param_1 + 0xbc8);
      if (((uint)puVar14 & 0x4000000) != 0) {
        puVar14 = (uint *)GetSysColor((uint)puVar14 & 0xffffff);
      }
      puVar11 = (uint *)FUN_004645e0(local_108,local_124,DAT_0064aed4);
      puStack_118 = puVar11;
      puStack_120 = (uint *)FUN_004645e0(local_d8,local_124,DAT_0064aed4);
      CStack_d4 = SetBkColor(param_2,(COLORREF)puVar14);
      local_13c = (uint *)*param_3;
      puVar18 = *(uint **)(param_1 + 0xb80);
      local_124 = local_13c;
      if ((int)local_13c <= (int)puVar18) {
        local_124 = puVar18;
      }
      puVar18 = (uint *)((int)puVar18 + *(int *)(param_1 + 0xb84));
      if (((int)local_13c <= (int)puVar18) &&
         (local_13c = (uint *)param_3[2], (int)puVar18 <= (int)param_3[2])) {
        local_13c = puVar18;
      }
      local_150 = 0;
      local_128 = puVar11;
      if (0 < *(int *)(param_4 + 0x5c)) {
        puVar18 = (uint *)(param_4 + 0xc4);
        do {
          uVar16 = *puVar18;
          if ((uVar16 & 1) == 0) {
            if ((uVar16 & 2) == 0) {
              uVar16 = puVar18[-0x13];
              puStack_dc = puVar18 + -0xb;
              if (3 < (int)(puVar18[-9] - puVar18[-0xb])) {
                if (((*(int *)(uVar16 + 4) == 3) && (*(int *)(uVar16 + 0x50) != 0)) &&
                   (*(int *)(*(int *)(uVar16 + 0x50) + 0x18) != 0)) {
                  iVar20 = FUN_005f13f0(3);
                  if ((iVar20 != 0) && (_DAT_00610fd8 == *(double *)(iVar20 + 0x48)))
                  goto LAB_00467865;
                }
                local_138 = *(uint **)(uVar16 + 0x50);
                if ((local_138 != (uint *)0x0) && (local_138[6] != 0)) {
                  iVar20 = FUN_005f13f0(*(undefined4 *)(uVar16 + 4));
                  dStack_c0 = (double)CONCAT44(dStack_c0._4_4_,iVar20);
                  if (iVar20 != 0) {
                    iVar22 = FUN_0047c7d0(uVar16 + 0x98,0xca);
                    puVar11 = puStack_12c;
                    if (iVar22 == 0) {
                      uStack_134._4_4_ = *(undefined4 *)(iVar20 + 0x24);
                      plVar1 = (longlong *)(iVar20 + 0x20);
                      uStack_134._0_4_ = *(uint **)plVar1;
                      if (((*(int *)(uVar16 + 0x28) != 0) ||
                          (lVar26 = *plVar1, *(int *)(uVar16 + 0x2c) != 0x3ff00000)) &&
                         (lVar26 = *plVar1, *(double *)(uVar16 + 0x28) != _DAT_00610fd8)) {
                        uVar15 = *(uint *)(uVar16 + 0x10) >> 0x1c & 3;
                        if (uVar15 < 3) {
                          if ((uVar15 == 2) || (uVar15 == 0)) {
                            uStack_a8 = *(undefined4 *)(uVar16 + 0x28);
                            uStack_a4 = *(undefined4 *)(uVar16 + 0x2c);
                          }
                          else if (uVar15 == 1) goto LAB_0046758c;
                        }
                        else if (uVar15 == 0xffffffff) {
LAB_0046758c:
                          uStack_a8 = 0;
                          uStack_a4 = 0x3ff00000;
                        }
                        lVar26 = ftol();
                      }
                      uStack_134 = lVar26;
                      lVar26 = ftol();
                      if (5 < lVar26) {
                        if (((*(uint *)(uVar16 + 0x10) & 0x100) == 0) &&
                           (*(int *)(iVar20 + 0x6c) == 0)) {
                          lVar26 = uStack_134 +
                                   CONCAT44((*(int *)(uVar16 + 0x1c) - local_138[3]) -
                                            (uint)(*(uint *)(uVar16 + 0x18) < local_138[2]),
                                            *(uint *)(uVar16 + 0x18) - local_138[2]);
                        }
                        else {
                          lVar26 = __allrem(-local_138[2],
                                            -(local_138[3] + (uint)(local_138[2] != 0)),uStack_134);
                          lVar26 = lVar26 + *(longlong *)(uVar16 + 0x18);
                          puVar11 = (uint *)(*(int *)(uVar16 + 0x218) + 0x10);
                          uVar15 = *puVar11;
                          if (lVar26 < *(longlong *)puVar11) {
                            uVar25 = __alldiv(uVar15 - (uint)lVar26,
                                              (*(int *)(*(int *)(uVar16 + 0x218) + 0x14) -
                                              (int)((ulonglong)lVar26 >> 0x20)) -
                                              (uint)(uVar15 < (uint)lVar26),uStack_134);
                            lVar27 = __allmul(uVar25,uStack_134);
                            lVar26 = lVar27 + lVar26;
                          }
                        }
                        tStack_d0.cx = *(uint *)(param_4 + 0x40);
                        tStack_d0.cy = tStack_d0.cx >> 0x1f;
                        dStack_110 = (double)*(longlong *)(param_4 + 0x38) *
                                     (double)(int)(param_3[2] - *(int *)(param_4 + 0x44));
                        uVar25 = __alldiv(tStack_d0.cx,tStack_d0.cy,2,0);
                        RStack_f4._0_8_ = uVar25;
                        uVar25 = ftol();
                        uStack_e4 = (uint)uVar25 + *(uint *)(param_4 + 0x30);
                        iStack_e0 = (int)((ulonglong)uVar25 >> 0x20) + *(int *)(param_4 + 0x34) +
                                    (uint)CARRY4((uint)uVar25,*(uint *)(param_4 + 0x30));
                        uVar15 = *(uint *)(uVar16 + 0x20) + *(uint *)(uVar16 + 0x18);
                        iVar20 = *(int *)(uVar16 + 0x24) + *(int *)(uVar16 + 0x1c) +
                                 (uint)CARRY4(*(uint *)(uVar16 + 0x20),*(uint *)(uVar16 + 0x18));
                        if ((iVar20 <= iStack_e0) && ((iVar20 < iStack_e0 || (uVar15 <= uStack_e4)))
                           ) {
                          uStack_e4 = uVar15;
                          iStack_e0 = iVar20;
                        }
                        if (lVar26 < CONCAT44(iStack_e0,uStack_e4)) {
                          do {
                            uStack_b0 = *(undefined4 *)(param_4 + 0x38);
                            uStack_ac = *(undefined4 *)(param_4 + 0x3c);
                            uVar15 = *(uint *)(param_4 + 0x30);
                            RStack_104.left = (uint)lVar26 - uVar15;
                            RStack_104.top =
                                 ((int)((ulonglong)lVar26 >> 0x20) - *(int *)(param_4 + 0x34)) -
                                 (uint)((uint)lVar26 < uVar15);
                            dStack_110 = (double)(lVar26 - *(longlong *)(param_4 + 0x30)) *
                                         (double)*(int *)(param_4 + 0x40);
                            uVar25 = __alldiv(uStack_b0,uStack_ac,2,0);
                            local_14c._0_8_ = uVar25;
                            iVar20 = ftol();
                            iVar20 = iVar20 + *(int *)(param_4 + 0x44);
                            if (iVar20 < -0x4000) {
                              iVar20 = -0x4000;
                            }
                            else if (0x3fff < iVar20) {
                              iVar20 = 0x3fff;
                            }
                            uVar15 = local_d8;
                            if ((*puVar18 & 8) == 0) {
                              uVar15 = local_108;
                            }
                            FUN_00467ab0(param_2,puVar14,uVar15,local_128,puVar18 + -0xb,iVar20,
                                         local_124,local_13c);
                          } while ((((*(uint *)(uVar16 + 0x10) & 0x100) != 0) ||
                                   (*(int *)(dStack_c0._0_4_ + 0x6c) != 0)) &&
                                  (lVar27 = uStack_134 + lVar26, lVar26 = lVar26 + uStack_134,
                                  lVar27 < CONCAT44(iStack_e0,uStack_e4)));
                        }
                      }
                    }
                    else {
                      uVar15 = *(uint *)(uVar16 + 0x20);
                      puVar17 = auStack_90;
                      for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
                        *puVar17 = 0;
                        puVar17 = puVar17 + 1;
                      }
                      puVar17 = auStack_78;
                      for (iVar20 = 6; iVar20 != 0; iVar20 = iVar20 + -1) {
                        *puVar17 = 0;
                        puVar17 = puVar17 + 1;
                      }
                      auStack_90[0] = *(uint *)(uVar16 + 0x18);
                      auStack_90[1] = *(int *)(uVar16 + 0x1c);
                      auStack_78[0] = uVar15 + auStack_90[0];
                      auStack_78[1] =
                           *(int *)(uVar16 + 0x24) + auStack_90[1] +
                           (uint)CARRY4(uVar15,auStack_90[0]);
                      FUN_005ceab0(puStack_12c,uVar16,0,0,&dStack_60,0,auStack_90 + 2,&iStack_80);
                      uStack_7c = (uint)(dStack_60 < _DAT_00610fd8);
                      FUN_005ceab0(puVar11,uVar16,auStack_78[0] - *(uint *)(uVar16 + 0x18),
                                   (auStack_78[1] - *(int *)(uVar16 + 0x1c)) -
                                   (uint)(auStack_78[0] < *(uint *)(uVar16 + 0x18)),&dStack_60,0,
                                   auStack_78 + 2,&iStack_68);
                      uStack_64 = (uint)(dStack_60 < _DAT_00610fd8);
                      if (((auStack_90[2] != auStack_78[2]) || (auStack_90[3] != auStack_78[3])) ||
                         ((iStack_80 != iStack_68 || (uStack_7c != uStack_64)))) {
                        uStack_58 = 1;
                        uStack_54 = 0;
                        uStack_b8 = *(undefined4 *)(param_4 + 0x38);
                        RStack_30.left = *(uint *)(param_4 + 0x40);
                        uStack_b4 = *(undefined4 *)(param_4 + 0x3c);
                        dStack_110 = (double)CONCAT44(dStack_110._4_4_,RStack_30.left);
                        RStack_30.top = RStack_30.left >> 0x1f;
                        dStack_c0 = (double)*(longlong *)(param_4 + 0x38) * 1.0;
                        uVar25 = __alldiv(RStack_30.left,RStack_30.top,2,0);
                        uStack_48 = uVar25;
                        lVar26 = ftol();
                        if (lVar26 < 2) {
                          lVar26 = 2;
                        }
                        uStack_a0 = (uint)lVar26;
                        uStack_34 = uStack_b4;
                        RStack_10.left = -*(int *)(param_4 + 0x30);
                        RStack_10.top =
                             -(*(int *)(param_4 + 0x34) + (uint)(*(int *)(param_4 + 0x30) != 0));
                        dStack_110 = (double)CONCAT44(RStack_10.top,RStack_10.left) *
                                     (double)(int)dStack_110._0_4_;
                        uStack_38 = uStack_b8;
                        uVar25 = __alldiv(uStack_b8,uStack_b4,2,0);
                        uStack_20 = uVar25;
                        iVar20 = ftol();
                        iVar20 = iVar20 + *(int *)(param_4 + 0x44);
                        if (iVar20 < -0x4000) {
                          DAT_0064be5c = -0x4000;
                        }
                        else {
                          DAT_0064be5c = 0x3fff;
                          if (iVar20 < 0x4000) {
                            DAT_0064be5c = iVar20;
                          }
                        }
                        FUN_00467f50(puStack_12c,param_4,uVar16,param_2,puStack_dc,param_3,
                                     auStack_90,auStack_78,uStack_a0,
                                     (int)((ulonglong)lVar26 >> 0x20));
                      }
                    }
                  }
                }
              }
            }
          }
          else {
            local_128 = puVar11;
            if ((uVar16 & 8) != 0) {
              local_128 = puStack_120;
            }
          }
LAB_00467865:
          local_150 = local_150 + 1;
          puVar18 = puVar18 + 0x16;
          puVar11 = puStack_118;
        } while ((int)local_150 < *(int *)(param_4 + 0x5c));
      }
      SetBkColor(param_2,CStack_d4);
    }
    if ((DAT_00647720 != 0) && (local_150 = 0, 0 < *(int *)(param_4 + 0x5c))) {
      puVar14 = (uint *)(param_4 + 0xc4);
      do {
        if ((*puVar14 & 3) == 0) {
          uVar16 = puVar14[-0x13];
          iVar20 = *(int *)(uVar16 + 0x218);
          if ((DAT_006477b8 <= *(int *)(iVar20 + 0x2c) - *(int *)(iVar20 + 0x24)) &&
             (0xb < *(int *)(iVar20 + 0x28) - *(int *)(iVar20 + 0x20))) {
            if ((*puVar14 & 0x900) == 0) {
              uVar13 = 0;
              uVar19 = 0;
            }
            else {
              uVar13 = *(undefined4 *)(param_4 + 0x70);
              uVar19 = *(undefined4 *)(param_4 + 0x74);
            }
            FUN_0047fb80(param_2,param_1,uVar16,param_3,*(uint *)(uVar16 + 0x10) >> 4 & 1,
                         *(undefined4 *)(param_4 + 0x68),*(undefined4 *)(param_4 + 0x6c),uVar13,
                         uVar19);
          }
        }
        local_150 = local_150 + 1;
        puVar14 = puVar14 + 0x16;
      } while ((int)local_150 < *(int *)(param_4 + 0x5c));
    }
    if ((DAT_00647714 != 0) && (local_150 = 0, 0 < *(int *)(param_4 + 0x5c))) {
      puStack_12c = (uint *)(param_4 + 0xc4);
      do {
        if ((((((*puStack_12c & 3) == 0) && (uVar16 = puStack_12c[-0x13], uVar16 != 0)) &&
             (iVar20 = *(int *)(uVar16 + 0x218),
             DAT_006477b8 <= *(int *)(iVar20 + 0x2c) - *(int *)(iVar20 + 0x24))) &&
            ((0xb < *(int *)(iVar20 + 0x28) - *(int *)(iVar20 + 0x20) &&
             (*(int **)(uVar16 + 0xb0) != (int *)0x0)))) && (**(int **)(uVar16 + 0xb0) != 0)) {
          FUN_00479350(uVar16 + 0x98,param_2,param_1 + 0xc78,(int *)(iVar20 + 0x20),
                       *(uint *)(iVar20 + 0x10) - *(uint *)(uVar16 + 0x18),
                       (*(int *)(iVar20 + 0x14) - *(int *)(uVar16 + 0x1c)) -
                       (uint)(*(uint *)(iVar20 + 0x10) < *(uint *)(uVar16 + 0x18)),
                       *(undefined4 *)(iVar20 + 0x18),*(undefined4 *)(iVar20 + 0x1c),param_3,
                       *puStack_12c >> 3 & 1);
        }
        local_150 = local_150 + 1;
        puStack_12c = puStack_12c + 0x16;
      } while ((int)local_150 < *(int *)(param_4 + 0x5c));
    }
    if (DAT_00647718 != 0) {
      FUN_00463f40(param_1,param_2,param_3,param_4,0);
    }
    FUN_004759e0(param_1,param_2);
    pvVar7 = GetStockObject(7);
    SelectObject(param_2,pvVar7);
    DeleteObject(*(HGDIOBJ *)(param_4 + 8));
    *(undefined4 *)(param_4 + 8) = 0;
    DeleteObject(*(HGDIOBJ *)(param_4 + 0xc));
    *(undefined4 *)(param_4 + 0xc) = 0;
    DeleteObject(*(HGDIOBJ *)(param_4 + 0x10));
    *(undefined4 *)(param_4 + 0x10) = 0;
    DeleteObject(*(HGDIOBJ *)(param_4 + 0x14));
    *(undefined4 *)(param_4 + 0x14) = 0;
    *(uint *)(param_1 + 0x1c) =
         *(uint *)(param_4 + 0x58) >> 6 & 8 | *(uint *)(param_1 + 0x1c) & 0xfffffff7;
  }
  return;
}


