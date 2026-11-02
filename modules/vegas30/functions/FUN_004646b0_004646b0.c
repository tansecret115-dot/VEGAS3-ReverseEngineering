/* Module: vegas30.exe
   Function: FUN_004646b0
   Address: 004646b0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00464a1a) */
/* WARNING: Removing unreachable block (ram,0x00464c3d) */
/* WARNING: Removing unreachable block (ram,0x00464d1f) */

void FUN_004646b0(int *param_1,HDC param_2,int *param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  COLORREF CVar4;
  DWORD DVar5;
  HGDIOBJ h;
  DWORD DVar6;
  COLORREF CVar7;
  HICON hIcon;
  int iVar8;
  undefined4 uVar9;
  RECT *lprect;
  int iVar10;
  uint uVar11;
  short sVar12;
  int unaff_EBP;
  longlong lVar13;
  longlong lVar14;
  undefined8 uVar15;
  uint local_17c;
  int local_174;
  COLORREF local_170;
  COLORREF local_16c;
  int local_15c;
  uint local_158;
  HGDIOBJ local_154;
  undefined8 local_150;
  COLORREF local_148;
  int local_144;
  undefined8 local_140;
  int local_130;
  tagRECT local_128;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  uint local_108;
  int local_104;
  int local_100;
  uint local_fc;
  uint uStack_f8;
  int local_f4;
  int iStack_f0;
  undefined8 local_ec;
  int local_e4;
  int iStack_e0;
  RECT local_dc;
  RECT local_c4;
  RECT local_b4;
  RECT local_a4;
  RECT local_94;
  undefined1 local_84 [12];
  int local_78;
  int local_74;
  int local_70;
  undefined1 local_64 [12];
  int local_58;
  int local_54;
  int local_50;
  undefined1 local_44 [12];
  int local_38;
  int local_34;
  int local_30;
  RECT local_24;
  undefined4 local_10;
  undefined1 local_c [4];
  double local_8;
  
  local_16c = DAT_00647854;
  if ((DAT_00647854 & 0x4000000) != 0) {
    local_16c = GetSysColor(DAT_00647854 & 0xffffff);
  }
  local_158 = local_16c;
  DVar5 = GetSysColor(0xd);
  local_148 = FUN_004645e0(local_16c,DVar5,DAT_0064aed4);
  local_108 = *(uint *)(param_4 + 0x58) >> 8 & 1;
  h = (HGDIOBJ)_SfGetUIBrush_4(0x2711);
  local_154 = (HGDIOBJ)0x0;
  if (h != (HGDIOBJ)0x0) {
    local_154 = h;
    UnrealizeObject(h);
    SetBrushOrgEx(param_2,param_1[0x2c5],param_1[0x2c6],(LPPOINT)0x0);
    local_154 = SelectObject(param_2,h);
  }
  local_144 = 0;
  local_174 = *param_3;
  if (0 < *(int *)(param_4 + 0x5c)) {
    do {
      CVar7 = DAT_00647820;
      piVar1 = (int *)(param_4 + 0x78 + local_144 * 0x58);
      uVar11 = piVar1[0x13];
      if ((uVar11 & 1) == 0) {
        if ((uVar11 & 2) == 0) {
          iVar8 = piVar1[8];
          iVar10 = piVar1[9];
          local_130 = piVar1[10];
          iVar2 = piVar1[0xb];
          if (local_174 <= iVar8) {
            local_174 = iVar8;
          }
          local_17c = local_16c;
          CVar4 = local_16c;
          if ((((uVar11 & 4) == 0) && (local_17c = DAT_00647820, CVar4 = CVar7, local_108 == 0)) &&
             (((uVar11 & 0x80) != 0 || ((uVar11 & 0x400) != 0)))) {
            if (DAT_0064aee8 == 0) {
              local_17c = FUN_004645e0(DAT_00647820,DVar5,DAT_0064aed0);
            }
            else {
              local_17c = FUN_00464570(*(undefined4 *)(&DAT_0063e298 + piVar1[0xe] * 8),0x33333333,
                                       0x3fe33333);
            }
          }
          if (DAT_0064aee8 != 0) {
            if ((*(byte *)(piVar1 + 0x13) & 4) == 0) {
              uVar11 = (uint)DAT_0064aed0;
              DVar6 = DVar5;
              uVar9 = FUN_00464570(*(undefined4 *)(&DAT_0063e298 + piVar1[0xe] * 8),0x33333333,
                                   0x3fe33333);
              local_170 = FUN_004645e0(uVar9,DVar6,uVar11);
            }
            else {
              local_170 = local_17c;
            }
            if ((*(byte *)(piVar1 + 0x13) & 8) != 0) {
              local_170 = FUN_00460550(local_170,1);
            }
          }
          if ((*(byte *)(piVar1 + 0x13) & 8) != 0) {
            local_17c = FUN_00460550(local_17c,1);
            FUN_00460550(CVar4,1);
          }
          if (DAT_0064aee8 == 0) {
            local_170 = FUN_004645e0(local_17c,DVar5,DAT_0064aedc);
          }
          uVar11 = piVar1[0x13];
          if (((uVar11 & 0x20) == 0) || ((uVar11 & 0x20000) != 0)) {
            if ((uVar11 & 0x80) == 0) {
              if ((uVar11 & 0x200) == 0) {
                CVar7 = local_170;
                if ((uVar11 & 0x900) == 0) {
                  CVar7 = local_17c;
                }
                SetBkColor(param_2,CVar7);
                local_94.right = local_130;
                lprect = &local_94;
                local_94.left = iVar8;
                local_94.top = iVar10;
                local_94.bottom = iVar2;
                goto LAB_0046528f;
              }
              SetBkColor(param_2,local_17c);
              if (0 < piVar1[0xf] - iVar8) {
                local_64._8_4_ = iVar8 + (piVar1[0xf] - iVar8);
                local_64._0_4_ = iVar8;
                local_64._4_4_ = iVar10;
                local_58 = iVar2;
                ExtTextOutA(param_2,0,0,2,(RECT *)local_64,(LPCSTR)0x0,0,(INT *)0x0);
              }
              iVar8 = local_130 - piVar1[0x10];
              if (0 < iVar8) {
                local_44._0_4_ = local_130 - iVar8;
                local_44._8_4_ = local_44._0_4_ + iVar8;
                local_44._4_4_ = iVar10;
                local_38 = iVar2;
                ExtTextOutA(param_2,0,0,2,(RECT *)local_44,(LPCSTR)0x0,0,(INT *)0x0);
              }
              iVar8 = piVar1[0x10];
              iVar3 = piVar1[0xf];
              if (0 < iVar8 - iVar3) {
                SetBkColor(param_2,local_170);
                local_24.left = piVar1[0xf];
                local_24.right = local_24.left + (iVar8 - iVar3);
                local_24.top = iVar10;
                local_24.bottom = iVar2;
                ExtTextOutA(param_2,0,0,2,&local_24,(LPCSTR)0x0,0,(INT *)0x0);
              }
            }
            else if ((uVar11 & 0x200) == 0) {
              CVar7 = local_170;
              if ((uVar11 & 0x900) == 0) {
                CVar7 = local_17c;
              }
              SetBkColor(param_2,CVar7);
              local_84._8_4_ = local_130;
              lprect = (RECT *)local_84;
              local_84._0_4_ = iVar8;
              local_84._4_4_ = iVar10;
              local_78 = iVar2;
LAB_0046528f:
              ExtTextOutA(param_2,0,0,2,lprect,(LPCSTR)0x0,0,(INT *)0x0);
            }
            else {
              SetBkColor(param_2,local_17c);
              if (0 < piVar1[0xf] - iVar8) {
                local_c4.right = iVar8 + (piVar1[0xf] - iVar8);
                local_c4.left = iVar8;
                local_c4.top = iVar10;
                local_c4.bottom = iVar2;
                ExtTextOutA(param_2,0,0,2,&local_c4,(LPCSTR)0x0,0,(INT *)0x0);
              }
              iVar8 = local_130 - piVar1[0x10];
              if (0 < iVar8) {
                local_b4.left = local_130 - iVar8;
                local_b4.right = local_b4.left + iVar8;
                local_b4.top = iVar10;
                local_b4.bottom = iVar2;
                ExtTextOutA(param_2,0,0,2,&local_b4,(LPCSTR)0x0,0,(INT *)0x0);
              }
              iVar8 = piVar1[0x10];
              iVar3 = piVar1[0xf];
              if (0 < iVar8 - iVar3) {
                SetBkColor(param_2,local_170);
                local_a4.left = piVar1[0xf];
                local_a4.right = local_a4.left + (iVar8 - iVar3);
                local_a4.top = iVar10;
                local_a4.bottom = iVar2;
                ExtTextOutA(param_2,0,0,2,&local_a4,(LPCSTR)0x0,0,(INT *)0x0);
              }
            }
          }
          else if ((uVar11 & 0x200) == 0) {
            if ((uVar11 & 0x900) == 0) {
              SetTextColor(param_2,local_17c);
              CVar7 = local_16c;
            }
            else {
              SetTextColor(param_2,local_170);
              CVar7 = local_148;
            }
            SetBkColor(param_2,CVar7);
            PatBlt(param_2,iVar8,iVar10,local_130 - iVar8,iVar2 - iVar10,0xf00021);
          }
          else {
            SetTextColor(param_2,local_17c);
            SetBkColor(param_2,local_16c);
            if (0 < piVar1[0xf] - iVar8) {
              PatBlt(param_2,iVar8,iVar10,piVar1[0xf] - iVar8,iVar2 - iVar10,0xf00021);
            }
            iVar8 = local_130 - piVar1[0x10];
            if (0 < iVar8) {
              PatBlt(param_2,local_130 - iVar8,iVar10,iVar8,iVar2 - iVar10,0xf00021);
            }
            iVar8 = piVar1[0x10];
            iVar3 = piVar1[0xf];
            if (0 < iVar8 - iVar3) {
              SetTextColor(param_2,local_170);
              SetBkColor(param_2,local_148);
              PatBlt(param_2,piVar1[0xf],iVar10,iVar8 - iVar3,iVar2 - iVar10,0xf00021);
            }
          }
          if (local_174 <= local_130) {
            local_174 = local_130;
          }
        }
      }
      else {
        if ((uVar11 & 8) == 0) {
          local_16c = local_158;
        }
        else {
          local_16c = FUN_00460550(local_158,0);
        }
        DVar6 = GetSysColor(0x10);
        SetBkColor(param_2,DVar6);
        local_44._8_4_ = piVar1[8];
        local_38 = piVar1[0xb];
        local_34 = piVar1[10];
        local_30 = local_38 + 1;
        ExtTextOutA(param_2,0,0,2,(RECT *)(local_44 + 8),(LPCSTR)0x0,0,(INT *)0x0);
        iVar8 = *param_3;
        iVar10 = param_1[0x2e0];
        local_174 = iVar8;
        if (iVar8 <= iVar10) {
          local_174 = iVar10;
        }
        iVar10 = iVar10 + param_1[0x2e1];
        local_17c = iVar8;
        if ((iVar8 <= iVar10) && (local_17c = param_3[2], iVar10 <= param_3[2])) {
          local_17c = iVar10;
        }
        if (iVar8 < local_174) {
          SetBkColor(param_2,local_16c);
          local_58 = piVar1[9];
          local_64._8_4_ = *param_1;
          local_54 = local_17c;
          local_50 = piVar1[0xb];
          ExtTextOutA(param_2,0,0,2,(RECT *)(local_64 + 8),(LPCSTR)0x0,0,(INT *)0x0);
        }
        if (local_174 < (int)local_17c) {
          CVar7 = FUN_004645e0(local_16c,DVar5,CONCAT31((int3)(local_17c >> 8),DAT_0064aed4));
          SetBkColor(param_2,CVar7);
          local_dc.top = piVar1[9];
          local_dc.left = local_17c;
          local_dc.bottom = piVar1[0xb];
          ExtTextOutA(param_2,0,0,2,&local_dc,(LPCSTR)0x0,0,(INT *)0x0);
        }
        if ((int)local_17c < param_3[2]) {
          SetBkColor(param_2,local_16c);
          local_78 = piVar1[9];
          local_74 = param_1[2];
          local_70 = piVar1[0xb];
          local_84._8_4_ = unaff_EBP;
          ExtTextOutA(param_2,0,0,2,(RECT *)(local_84 + 8),(LPCSTR)0x0,0,(INT *)0x0);
        }
        if ((*(int *)(*piVar1 + 4) == 3) && ((piVar1[0x13] & 0x60000U) != 0)) {
          local_128.left = piVar1[8];
          local_128.top = piVar1[9];
          local_128.right = piVar1[10];
          local_128.bottom = piVar1[0xb];
          uStack_f8 = *(uint *)(param_4 + 0x3c);
          local_fc = *(uint *)(param_4 + 0x38);
          lVar14 = *(longlong *)(param_4 + 0x38);
          if ((uStack_f8 < 0x80000000) && ((0 < (int)uStack_f8 || (2 < local_fc)))) {
            do {
              lVar13 = __allshl();
            } while (lVar13 < lVar14);
          }
          lVar14 = __allshr();
          uVar9 = *(undefined4 *)(param_4 + 0x30);
          local_10 = *(undefined4 *)(param_4 + 0x34);
          local_110 = lVar14;
          uVar15 = __alldiv(uVar9,local_10,lVar14);
          lVar14 = __allmul(uVar15,lVar14);
          local_e4 = *(int *)(param_4 + 0x40);
          iStack_e0 = local_e4 >> 0x1f;
          local_140 = lVar14;
          uVar15 = __alldiv(local_e4,iStack_e0,2,0);
          local_dc._0_8_ = uVar15;
          lVar14 = ftol();
          local_150 = lVar14 + CONCAT44(local_10,uVar9);
          local_174 = 0;
          do {
            sVar12 = 0;
            if (local_174 == 0) {
              local_17c = (uint)piVar1[0x13] >> 0x11 & 1;
              if (local_17c != 0) {
                sVar12 = 0x345;
                goto LAB_00464b6b;
              }
            }
            else {
              if (local_174 == 1) {
                local_17c = (uint)piVar1[0x13] >> 0x12 & 1;
                if ((piVar1[0x13] & 0x20000U) == 0) {
                  if (local_17c == 0) goto LAB_00464d41;
                }
                else {
                  sVar12 = 0x343;
                }
              }
              else {
                if ((local_174 != 2) || (local_17c = (uint)piVar1[0x13] >> 0x11 & 1, local_17c == 0)
                   ) goto LAB_00464d41;
                sVar12 = 0x342;
              }
LAB_00464b6b:
              iVar8 = *(int *)(*piVar1 + 0x69c);
              FUN_004606f0(*piVar1,*(int *)(iVar8 + 0x24) - *(int *)(iVar8 + 0x1c),local_174,
                           &local_104,&local_15c);
              local_128.top = piVar1[9] + local_104;
              local_128.bottom = local_128.top + 1 + local_15c;
              if (local_174 == 1) {
                iVar8 = *(int *)(*piVar1 + 0x69c);
                FUN_004606f0(*piVar1,*(int *)(iVar8 + 0x24) - *(int *)(iVar8 + 0x1c),3,&local_100,
                             local_c);
                local_128.bottom = piVar1[9] + 1 + local_100;
              }
              if ((sVar12 != 0) && (0xe < local_15c)) {
                hIcon = (HICON)_SfLoadIcon_8(DAT_00647204,sVar12);
                lVar14 = local_140;
                if (local_140 < local_150) {
                  do {
                    uStack_114 = *(undefined4 *)(param_4 + 0x3c);
                    uVar11 = *(uint *)(param_4 + 0x30);
                    local_f4 = (uint)lVar14 - uVar11;
                    iStack_f0 = ((int)((ulonglong)lVar14 >> 0x20) - *(int *)(param_4 + 0x34)) -
                                (uint)((uint)lVar14 < uVar11);
                    local_118 = *(undefined4 *)(param_4 + 0x38);
                    local_8 = (double)(lVar14 - *(longlong *)(param_4 + 0x30)) *
                              (double)*(int *)(param_4 + 0x40);
                    uVar15 = __alldiv(local_118,uStack_114,2,0);
                    local_ec = uVar15;
                    iVar8 = ftol();
                    iVar8 = iVar8 + *(int *)(param_4 + 0x44);
                    if (iVar8 < -0x4000) {
                      iVar10 = -0x4000;
                    }
                    else {
                      iVar10 = 0x3fff;
                      if (iVar8 < 0x4000) {
                        iVar10 = iVar8;
                      }
                    }
                    DrawIcon(param_2,iVar10,local_15c / 2 + -0xf + local_128.top,hIcon);
                    lVar13 = local_110 + lVar14;
                    lVar14 = local_110 + lVar14;
                  } while (lVar13 < local_150);
                }
              }
              if (local_17c != 0) {
                DrawEdge(param_2,&local_128,6,8);
              }
            }
LAB_00464d41:
            local_174 = local_174 + 1;
          } while (local_174 < 3);
        }
        local_174 = *param_3;
      }
      local_144 = local_144 + 1;
    } while (local_144 < *(int *)(param_4 + 0x5c));
  }
  if (local_154 != (HGDIOBJ)0x0) {
    SelectObject(param_2,local_154);
  }
  return;
}


