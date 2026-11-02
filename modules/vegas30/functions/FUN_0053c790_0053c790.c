/* Module: vegas30.exe
   Function: FUN_0053c790
   Address: 0053c790
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0053cdfe) */
/* WARNING: Removing unreachable block (ram,0x0053d56c) */
/* WARNING: Removing unreachable block (ram,0x0053cc07) */
/* WARNING: Removing unreachable block (ram,0x0053ccdc) */
/* WARNING: Removing unreachable block (ram,0x0053cf08) */
/* WARNING: Removing unreachable block (ram,0x0053d480) */
/* WARNING: Removing unreachable block (ram,0x0053cb31) */
/* WARNING: Removing unreachable block (ram,0x0053d5e0) */
/* WARNING: Removing unreachable block (ram,0x0053cf91) */
/* WARNING: Removing unreachable block (ram,0x0053cbcd) */
/* WARNING: Removing unreachable block (ram,0x0053cab5) */
/* WARNING: Removing unreachable block (ram,0x0053cd3c) */
/* WARNING: Removing unreachable block (ram,0x0053d40e) */
/* WARNING: Removing unreachable block (ram,0x0053d859) */
/* WARNING: Removing unreachable block (ram,0x0053ce41) */
/* WARNING: Removing unreachable block (ram,0x0053d8bf) */
/* WARNING: Removing unreachable block (ram,0x0053d652) */
/* WARNING: Removing unreachable block (ram,0x0053d72a) */
/* WARNING: Removing unreachable block (ram,0x0053d981) */
/* WARNING: Removing unreachable block (ram,0x0053cc82) */
/* WARNING: Removing unreachable block (ram,0x0053dadb) */
/* WARNING: Removing unreachable block (ram,0x0053d6c7) */
/* WARNING: Removing unreachable block (ram,0x0053d00c) */
/* WARNING: Removing unreachable block (ram,0x0053d070) */
/* WARNING: Removing unreachable block (ram,0x0053d2b7) */
/* WARNING: Removing unreachable block (ram,0x0053d935) */

void FUN_0053c790(int param_1,undefined4 param_2,HDC param_3,int param_4)

{
  uint *puVar1;
  longlong lVar2;
  ulonglong uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  HGDIOBJ pvVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  DWORD DVar10;
  COLORREF CVar11;
  COLORREF color;
  HBRUSH hbr;
  int iVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  longlong lVar17;
  longlong lVar18;
  int local_108;
  int local_104;
  int local_f4;
  uint local_e8;
  uint local_e4;
  int iStack_e0;
  uint local_dc;
  int local_d8;
  RECT local_d4;
  int local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  uint local_ac;
  int local_a8;
  uint local_a4;
  int local_a0;
  int local_9c;
  undefined8 local_98;
  uint local_90;
  int iStack_8c;
  int local_88;
  undefined8 local_84;
  uint local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined8 local_68;
  RECT local_60;
  uint local_50;
  int local_4c;
  undefined8 local_48;
  int local_40;
  int iStack_3c;
  undefined8 local_38;
  int local_30;
  int iStack_2c;
  RECT local_28;
  uint local_18;
  uint local_10;
  
  local_d4.left = *(uint *)(param_1 + 0xac0);
  iVar8 = *(int *)(param_1 + 0xac4);
  local_d4.right = *(uint *)(param_1 + 0xac8);
  iVar7 = *(int *)(param_1 + 0xacc);
  local_c0 = *(uint *)(param_1 + 0xb88);
  local_bc = *(int *)(param_1 + 0xb8c);
  uVar16 = ftol();
  local_b8 = (uint)uVar16 + *(uint *)(param_1 + 0xb88);
  local_b4 = (int)((ulonglong)uVar16 >> 0x20) + *(int *)(param_1 + 0xb8c) +
             (uint)CARRY4((uint)uVar16,*(uint *)(param_1 + 0xb88));
  FUN_004581e0(param_1);
  lVar17 = FUN_00538780(param_1 + 0xe80);
  if (iVar8 <= *(int *)(param_4 + 4)) {
    iVar8 = *(int *)(param_4 + 4);
  }
  if (*(int *)(param_4 + 0xc) <= iVar7) {
    iVar7 = *(int *)(param_4 + 0xc);
  }
  if (((iVar8 < iVar7) && (local_d4.left < local_d4.right)) &&
     (pvVar6 = (HGDIOBJ)_SfGetUIBrush_4(0x271e), pvVar6 != (HGDIOBJ)0x0)) {
    pvVar6 = SelectObject(param_3,pvVar6);
    SetTextColor(param_3,0x808080);
    SetBkColor(param_3,0xc0c0c0);
    PatBlt(param_3,local_d4.left,iVar8,local_d4.right - local_d4.left,iVar7 - iVar8,0xf00021);
    SelectObject(param_3,pvVar6);
  }
  lVar18 = CONCAT44(local_70._4_4_,(uint)local_70);
  local_104 = *(int *)(param_1 + 0xba8);
  local_88 = *(int *)(param_1 + 0xbac) + 1 + local_104;
  if (*(int *)(param_1 + 0x674) <= local_88) {
    local_88 = *(int *)(param_1 + 0x674);
  }
  if (local_104 < local_88) {
    do {
      local_7c = (uint)(local_104 == *(int *)(param_1 + 0xe88));
      local_e8 = 0;
      local_70 = lVar18;
      iVar7 = FUN_0053add0(param_1 + 0xe80);
      puVar1 = (uint *)(param_1 + 0xac0);
      local_ac = *puVar1;
      local_a8 = *(undefined4 *)(param_1 + 0xac4);
      local_a4 = *(uint *)(param_1 + 0xac8);
      local_a0 = *(undefined4 *)(param_1 + 0xacc);
      iVar8 = FUN_005382e0(1);
      local_a8 = (local_104 - *(int *)(param_1 + 0xba8)) * iVar8 + *(int *)(param_1 + 0xac4);
      iVar12 = local_a8 + iVar8;
      local_a0 = iVar12;
      local_78 = FUN_00538320(iVar8,1);
      iVar9 = (local_a8 + iVar12) / 2;
      lVar18 = FUN_00538340(param_1,1);
      local_d4.right = local_a4;
      iVar8 = *(int *)(param_1 + 0xe8c);
      local_d4.left = local_ac;
      local_d4.top = local_a8;
      local_d4.bottom = iVar12;
      if (((((iVar8 != 0) && (-1 < *(int *)(param_1 + 0xb94))) &&
           ((0 < *(int *)(param_1 + 0xb94) || (*(int *)(param_1 + 0xb90) != 0)))) &&
          ((-1 < local_104 && (local_104 < iVar7)))) && ((iVar8 == 400 || (iVar8 == 0x191)))) {
        local_70 = lVar18;
        local_c4 = FUN_0053ae40(param_1 + 0xe80,local_104);
        iVar8 = *(int *)(param_1 + 0xb94);
        local_b0 = 1;
        local_f4 = 0;
        local_90 = 0;
        iStack_8c = 0;
        iVar7 = *(int *)(param_1 + 0xb90);
        if (iVar7 == 0 && iVar8 == 0) {
          uVar13 = 0xffffffff;
        }
        else {
          lVar18 = ftol();
          uVar3 = lVar18 + (int)*puVar1;
          uVar13 = (uint)uVar3;
          if ((uVar3 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar13)))) {
            if (0x3fff < (longlong)uVar3) {
              uVar13 = 0x3fff;
            }
          }
          else {
            uVar13 = 0xffffc000;
          }
        }
        if ((int)local_a4 < (int)uVar13) {
          local_dc = local_a4;
        }
        else if (iVar7 == 0 && iVar8 == 0) {
          local_dc = 0xffffffff;
        }
        else {
          lVar18 = ftol();
          uVar3 = lVar18 + (int)*puVar1;
          local_dc = (uint)uVar3;
          if ((uVar3 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < local_dc)))) {
            if (0x3fff < (longlong)uVar3) {
              local_dc = 0x3fff;
            }
          }
          else {
            local_dc = 0xffffc000;
          }
        }
        if (DAT_00647878 == 0) {
          GetSysColor(0xf);
          uVar4 = ftol();
          uVar5 = ftol();
          uVar13 = ftol();
          SetBkColor(param_3,(uint)CONCAT11(uVar4,uVar5) << 8 | uVar13 & 0xff);
          local_28.top = local_a8;
          local_28.left = local_ac;
          local_28.right = local_dc;
          local_28.bottom = local_a0;
          ExtTextOutA(param_3,0,0,2,&local_28,(LPCSTR)0x0,0,(INT *)0x0);
        }
        else {
          local_108 = 0;
          if (0 < local_c4) {
            iVar8 = local_c4 + -1;
            do {
              iVar7 = iStack_8c;
              uVar13 = local_90;
              lVar18 = CONCAT44(iStack_8c,local_90);
              FUN_005387c0(param_1 + 0xe80,local_104,local_108,&local_9c,&local_e4,&local_d8,0);
              if ((iStack_e0 < 1) && (iStack_e0 < 0)) {
                lVar2 = 0;
              }
              else {
                lVar2 = lVar17;
                if (CONCAT44(iStack_e0,local_e4) <= lVar17) {
                  lVar2 = CONCAT44(iStack_e0,local_e4);
                }
              }
              if (local_108 == 0) {
                if (CONCAT44(local_bc,local_c0) < lVar2) {
                  if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
                    local_d4.right = 0xffffffff;
                  }
                  else {
                    lVar18 = ftol();
                    uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
                    local_d4.right = (LONG)uVar3;
                    if ((uVar3 < 0x8000000000000000) ||
                       ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < (uint)local_d4.right)))) {
                      if (0x3fff < (longlong)uVar3) {
                        local_d4.right = 0x3fff;
                      }
                    }
                    else {
                      local_d4.right = 0xffffc000;
                    }
                  }
                  local_d4.left = local_ac;
                  FUN_00449040(param_3,&local_d4,0,0,0,0x3ff00000,1,local_b0);
                }
              }
              else if (0 < local_108) {
                if (((CONCAT44(local_bc,local_c0) < lVar2) && (iVar7 <= local_b4)) &&
                   ((iVar7 < local_b4 || (uVar13 < local_b8)))) {
                  local_98 = 0.0;
                  local_68 = 1.0;
                  if ((local_bc < iVar7) || ((local_bc <= iVar7 && (local_c0 <= uVar13)))) {
                    if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
                      local_d4.left = 0xffffffff;
                      uVar13 = local_90;
                      iVar7 = iStack_8c;
                    }
                    else {
                      lVar18 = ftol();
                      uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
                      local_d4.left = (LONG)uVar3;
                      uVar13 = local_90;
                      iVar7 = iStack_8c;
                      if ((uVar3 < 0x8000000000000000) ||
                         ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < (uint)local_d4.left)))) {
                        if (0x3fff < (longlong)uVar3) {
                          local_d4.left = 0x3fff;
                        }
                      }
                      else {
                        local_d4.left = 0xffffc000;
                      }
                    }
                  }
                  else {
                    if (lVar18 < lVar2) {
                      local_30 = local_c0 - uVar13;
                      iStack_2c = (local_bc - iVar7) - (uint)(local_c0 < uVar13);
                      local_48 = lVar2 - lVar18;
                      local_98 = (double)CONCAT44(iStack_2c,local_30) / (double)(lVar2 - lVar18);
                    }
                    local_d4.left = local_ac;
                  }
                  lVar18 = CONCAT44(iVar7,uVar13);
                  if ((iStack_e0 < local_b4) || ((iStack_e0 <= local_b4 && (local_e4 <= local_b8))))
                  {
                    if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
                      local_d4.right = 0xffffffff;
                    }
                    else {
                      lVar18 = ftol();
                      uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
                      if ((uVar3 < 0x8000000000000000) ||
                         ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < (uint)uVar3)))) {
                        local_d4.right = (uint)uVar3;
                        if (0x3fff < (longlong)uVar3) {
                          local_d4.right = 0x3fff;
                        }
                      }
                      else {
                        local_d4.right = 0xffffc000;
                      }
                    }
                  }
                  else {
                    local_d4.right = local_a4;
                    if (lVar18 < lVar2) {
                      local_40 = local_b8 - uVar13;
                      iStack_3c = (local_b4 - iVar7) - (uint)(local_b8 < uVar13);
                      local_38 = lVar2 - lVar18;
                      local_68 = (double)CONCAT44(iStack_3c,local_40) / (double)(lVar2 - lVar18);
                    }
                  }
                  if (local_d4.left < local_d4.right) {
                    FUN_00449040(param_3,&local_d4,(undefined4)local_98,local_98._4_4_,
                                 (undefined4)local_68,local_68._4_4_,local_f4,local_b0);
                  }
                }
                if (local_f4 != 1) {
                  local_b0 = (uint)(local_b0 == 0);
                }
              }
              if ((local_108 == iVar8) && (lVar2 < lVar17)) {
                if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
                  local_d4.left = 0xffffffff;
                }
                else {
                  lVar18 = ftol();
                  uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
                  local_d4.left = (LONG)uVar3;
                  if ((uVar3 < 0x8000000000000000) ||
                     ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < (uint)local_d4.left)))) {
                    if (0x3fff < (longlong)uVar3) {
                      local_d4.left = 0x3fff;
                    }
                  }
                  else {
                    local_d4.left = 0xffffc000;
                  }
                }
                local_d4.right = local_dc;
                FUN_00449040(param_3,&local_d4,0,0,0,0x3ff00000,1,local_b0);
              }
              local_f4 = local_9c;
              iStack_8c = iStack_e0;
              local_90 = local_e4;
            } while ((CONCAT44(iStack_e0,local_e4) <= lVar17) &&
                    (local_108 = local_108 + 1, local_108 < local_c4));
          }
        }
        SetBkColor(param_3,0x808080);
        local_60.left = local_ac;
        local_60.top = local_a8;
        local_60.bottom = local_a8 + 1;
        local_60.right = local_dc;
        ExtTextOutA(param_3,0,0,2,&local_60,(LPCSTR)0x0,0,(INT *)0x0);
        lVar18 = local_70;
        if (local_c4 != 0) {
          if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
            local_e8 = 0xffffffff;
          }
          else {
            lVar18 = ftol();
            uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
            local_e8 = (uint)uVar3;
            if ((uVar3 < 0x8000000000000000) ||
               ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < local_e8)))) {
              if (0x3fff < (longlong)uVar3) {
                local_e8 = 0x3fff;
              }
            }
            else {
              local_e8 = 0xffffc000;
            }
          }
          local_10 = local_a4;
          local_18 = local_ac;
          iVar8 = local_a8;
          if (local_a8 <= *(int *)(param_4 + 4)) {
            iVar8 = *(int *)(param_4 + 4);
          }
          iVar7 = local_a0;
          if (*(int *)(param_4 + 0xc) <= local_a0) {
            iVar7 = *(int *)(param_4 + 0xc);
          }
          if ((iVar8 < iVar7) && ((int)(local_e8 + 1) < (int)local_a4)) {
            pvVar6 = (HGDIOBJ)_SfGetUIBrush_4(0x271e);
            if (pvVar6 != (HGDIOBJ)0x0) {
              pvVar6 = SelectObject(param_3,pvVar6);
              SetTextColor(param_3,0x808080);
              SetBkColor(param_3,0xc0c0c0);
              PatBlt(param_3,local_e8 + 1,iVar8,local_10 - (local_e8 + 1),iVar7 - iVar8,0xf00021);
              SelectObject(param_3,pvVar6);
            }
          }
          lVar18 = local_70;
          if ((local_7c != 0) && (*(int *)(param_1 + 0xa4) == 0x11)) {
            iVar8 = *(int *)(param_1 + 0xb90);
            iVar7 = *(int *)(param_1 + 0xb94);
            if (iVar8 == 0 && iVar7 == 0) {
              uVar13 = 0xffffffff;
            }
            else {
              lVar18 = ftol();
              uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
              uVar13 = (uint)uVar3;
              if ((uVar3 < 0x8000000000000000) ||
                 ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar13)))) {
                if (0x3fff < (longlong)uVar3) {
                  uVar13 = 0x3fff;
                }
              }
              else {
                uVar13 = 0xffffc000;
              }
            }
            if (iVar8 == 0 && iVar7 == 0) {
              uVar14 = 0xffffffff;
            }
            else {
              lVar18 = ftol();
              uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
              uVar14 = (uint)uVar3;
              if ((uVar3 < 0x8000000000000000) ||
                 ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar14)))) {
                if (0x3fff < (longlong)uVar3) {
                  uVar14 = 0x3fff;
                }
              }
              else {
                uVar14 = 0xffffc000;
              }
            }
            if ((int)uVar13 < (int)uVar14) {
              if (iVar8 == 0 && iVar7 == 0) {
                local_d4.left = 0xffffffff;
              }
              else {
                lVar18 = ftol();
                uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
                local_d4.left = (LONG)uVar3;
                if ((uVar3 < 0x8000000000000000) ||
                   ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < (uint)local_d4.left)))) {
                  if (-1 < (longlong)uVar3) {
                    if (0xffffffff < (longlong)uVar3) goto LAB_0053d574;
                    if (0x3fff < (uint)local_d4.left) {
                      local_d4.left = 0x3fff;
                    }
                  }
                }
                else {
                  local_d4.left = 0xffffc000;
                }
              }
            }
            else if (iVar8 == 0 && iVar7 == 0) {
              local_d4.left = 0xffffffff;
            }
            else {
              lVar18 = ftol();
              uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
              local_d4.left = (LONG)uVar3;
              if ((uVar3 < 0x8000000000000000) ||
                 ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < (uint)local_d4.left)))) {
                if (0x3fff < (longlong)uVar3) {
LAB_0053d574:
                  local_d4.left = 0x3fff;
                }
              }
              else {
                local_d4.left = 0xffffc000;
              }
            }
            if (iVar8 == 0 && iVar7 == 0) {
              uVar13 = 0xffffffff;
            }
            else {
              lVar18 = ftol();
              uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
              uVar13 = (uint)uVar3;
              if ((uVar3 < 0x8000000000000000) ||
                 ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar13)))) {
                if (0x3fff < (longlong)uVar3) {
                  uVar13 = 0x3fff;
                }
              }
              else {
                uVar13 = 0xffffc000;
              }
            }
            if (iVar8 == 0 && iVar7 == 0) {
              uVar14 = 0xffffffff;
            }
            else {
              lVar18 = ftol();
              uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
              uVar14 = (uint)uVar3;
              if ((uVar3 < 0x8000000000000000) ||
                 ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar14)))) {
                if (0x3fff < (longlong)uVar3) {
                  uVar14 = 0x3fff;
                }
              }
              else {
                uVar14 = 0xffffc000;
              }
            }
            if ((int)uVar14 < (int)uVar13) {
              if (iVar8 == 0 && iVar7 == 0) {
                local_d4.right = 0xffffffff;
              }
              else {
                lVar18 = ftol();
                uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
                local_d4.right = (LONG)uVar3;
                if ((uVar3 < 0x8000000000000000) ||
                   ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < (uint)local_d4.right)))) {
joined_r0x0053d726:
                  if (0x3fff < (longlong)uVar3) {
                    local_d4.right = 0x3fff;
                  }
                }
                else {
                  local_d4.right = 0xffffc000;
                }
              }
            }
            else if (iVar8 == 0 && iVar7 == 0) {
              local_d4.right = 0xffffffff;
            }
            else {
              lVar18 = ftol();
              uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
              local_d4.right = (LONG)uVar3;
              if ((uVar3 < 0x8000000000000000) ||
                 ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < (uint)local_d4.right))))
              goto joined_r0x0053d726;
              local_d4.right = 0xffffc000;
            }
            lVar18 = local_70;
            if (local_d4.left < local_d4.right) {
              DVar10 = GetSysColor(8);
              CVar11 = SetBkColor(param_3,DVar10);
              DVar10 = GetSysColor(0xe);
              color = SetTextColor(param_3,DVar10);
              hbr = (HBRUSH)_SfGetUIBrush_4(0x271f);
              FrameRect(param_3,&local_d4,hbr);
              SetBkColor(param_3,CVar11);
              SetTextColor(param_3,color);
              lVar18 = local_70;
            }
          }
        }
        local_70._4_4_ = (int)((ulonglong)lVar18 >> 0x20);
        local_70._0_4_ = (uint)lVar18;
        uVar13 = 0xffffff9d;
        local_108 = 0;
        if (0 < local_c4) {
          local_50 = local_c0 - (uint)local_70;
          local_4c = (local_bc - local_70._4_4_) - (uint)(local_c0 < (uint)local_70);
          do {
            local_70 = lVar18;
            FUN_005387c0(param_1 + 0xe80,local_104,local_108,&local_9c,&local_e4,&local_d8,&local_74
                        );
            lVar2 = CONCAT44(iStack_e0,local_e4);
            if ((local_d8 == 0) || (local_d8 = 1, local_7c == 0)) {
              local_d8 = 0;
            }
            if ((iStack_e0 < 1) && (iStack_e0 < 0)) {
              local_84 = 0;
            }
            else {
              local_84 = lVar17;
              if (lVar2 <= lVar17) {
                local_84 = CONCAT44(iStack_e0,local_e4);
              }
            }
            if ((iStack_e0 < local_4c) ||
               (((iStack_e0 <= local_4c && (local_e4 < local_50)) ||
                (local_70 + CONCAT44(local_b4,local_b8) < lVar2)))) {
              lVar18 = local_70;
              if (lVar17 < lVar2) {
                FUN_00448df0(param_3,local_e8,iVar9,local_78,local_78,local_9c,local_d8,
                             uVar13 == local_e8,local_74);
                bVar15 = uVar13 == local_e8;
                uVar13 = local_e8;
                lVar18 = local_70;
                if (bVar15) break;
              }
            }
            else {
              if (*(int *)(param_1 + 0xb90) == 0 && *(int *)(param_1 + 0xb94) == 0) {
                uVar14 = 0xffffffff;
              }
              else {
                lVar18 = ftol();
                uVar3 = lVar18 + *(int *)(param_1 + 0xac0);
                uVar14 = (uint)uVar3;
                if ((uVar3 < 0x8000000000000000) ||
                   ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar14)))) {
                  if (0x3fff < (longlong)uVar3) {
                    uVar14 = 0x3fff;
                  }
                }
                else {
                  uVar14 = 0xffffc000;
                }
              }
              FUN_00448df0(param_3,uVar14,iVar9,local_78,local_78,local_9c,local_d8,uVar13 == uVar14
                           ,local_74);
              uVar13 = uVar14;
              lVar18 = local_70;
            }
            local_108 = local_108 + 1;
          } while (local_108 < local_c4);
        }
      }
      local_104 = local_104 + 1;
    } while (local_104 < local_88);
  }
  iVar8 = *(int *)(param_1 + 0xb94);
  if ((-1 < iVar8) && ((0 < iVar8 || (*(int *)(param_1 + 0xb90) != 0)))) {
    if (((*(uint *)(param_1 + 0x18) & 2) == 0) || ((*(uint *)(param_1 + 0x18) & 0x10) != 0)) {
      uVar13 = *(uint *)(param_1 + 0xb70);
      iVar7 = *(int *)(param_1 + 0xb74);
    }
    else {
      uVar13 = *(uint *)(param_1 + 0xb30);
      iVar7 = *(int *)(param_1 + 0xb34);
    }
    local_98 = (double)CONCAT44(iVar7,uVar13);
    if ((local_bc <= iVar7) &&
       ((((local_bc < iVar7 || (local_c0 <= uVar13)) && (iVar7 <= local_b4)) &&
        ((iVar7 < local_b4 || (uVar13 <= local_b8)))))) {
      local_70 = lVar18;
      if (*(int *)(param_1 + 0xb90) == 0 && iVar8 == 0) {
        uVar13 = 0xffffffff;
      }
      else {
        lVar17 = ftol();
        uVar3 = lVar17 + *(int *)(param_1 + 0xac0);
        uVar13 = (uint)uVar3;
        if ((uVar3 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar3 && (0xffffbfff < uVar13)))) {
          if (0x3fff < (longlong)uVar3) {
            uVar13 = 0x3fff;
          }
        }
        else {
          uVar13 = 0xffffc000;
        }
      }
      pvVar6 = (HGDIOBJ)_SfGetUIPenWithStyle_8(0x82,0);
      pvVar6 = SelectObject(param_3,pvVar6);
      CVar11 = _SfGetUIColor_4(0x82);
      CVar11 = SetBkColor(param_3,CVar11);
      local_60.top = *(LONG *)(param_1 + 0xac4);
      local_60.bottom = *(LONG *)(param_1 + 0xacc);
      local_60.right = uVar13 + 1;
      local_60.left = uVar13;
      ExtTextOutA(param_3,0,0,2,&local_60,(LPCSTR)0x0,0,(INT *)0x0);
      SetBkColor(param_3,CVar11);
      SelectObject(param_3,pvVar6);
    }
  }
  return;
}


