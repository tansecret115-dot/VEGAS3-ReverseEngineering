/* Module: vegas30.exe
   Function: FUN_00463190
   Address: 00463190
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00463e41) */
/* WARNING: Removing unreachable block (ram,0x00463d6b) */
/* WARNING: Removing unreachable block (ram,0x004634cc) */
/* WARNING: Removing unreachable block (ram,0x0046359a) */
/* WARNING: Removing unreachable block (ram,0x0046385e) */
/* WARNING: Removing unreachable block (ram,0x004638ce) */
/* WARNING: Removing unreachable block (ram,0x004637e3) */
/* WARNING: Removing unreachable block (ram,0x00463429) */
/* WARNING: Removing unreachable block (ram,0x00463310) */
/* WARNING: Removing unreachable block (ram,0x00463390) */
/* WARNING: Removing unreachable block (ram,0x00463538) */
/* WARNING: Removing unreachable block (ram,0x00463556) */
/* WARNING: Removing unreachable block (ram,0x0046365e) */
/* WARNING: Removing unreachable block (ram,0x00463684) */
/* WARNING: Removing unreachable block (ram,0x00463457) */
/* WARNING: Removing unreachable block (ram,0x00463d1d) */
/* WARNING: Removing unreachable block (ram,0x00463dde) */
/* WARNING: Removing unreachable block (ram,0x00463eb6) */
/* WARNING: Removing unreachable block (ram,0x0046374d) */
/* WARNING: Removing unreachable block (ram,0x00463696) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00463190(HDC param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 RECT *param_6,RECT *param_7,int param_8,COLORREF *param_9,double param_10,
                 undefined4 param_11,int param_12,int param_13,uint param_14,undefined4 param_15)

{
  ulonglong uVar1;
  bool bVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  BOOL BVar5;
  int iVar6;
  COLORREF color;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  longlong lVar12;
  longlong lVar13;
  longlong lVar14;
  longlong lVar15;
  uint local_b4;
  int local_a0;
  uint local_9c;
  uint local_90;
  uint local_8c;
  int iStack_88;
  uint local_84;
  int iStack_80;
  int local_7c;
  int local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  longlong local_68;
  RECT local_60;
  undefined8 local_50;
  uint local_48;
  LONG local_44;
  uint local_40;
  LONG local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined8 local_30;
  int local_28;
  int iStack_24;
  undefined8 local_20;
  undefined8 local_18;
  tagRECT local_10;
  
  BVar5 = IntersectRect(&local_10,param_6,param_7);
  if (BVar5 == 0) {
    return;
  }
  lVar12 = FUN_004a0e90(param_2);
  local_70 = *(uint *)(param_2 + 0xb88);
  local_6c = *(int *)(param_2 + 0xb8c);
  lVar14 = *(longlong *)(param_2 + 0xb88);
  local_78 = param_6->right - *(int *)(param_2 + 0xac0);
  local_68 = ftol();
  local_68 = local_68 + lVar14;
  local_48 = param_6->left;
  local_44 = param_6->top;
  local_40 = param_6->right;
  local_3c = param_6->bottom;
  local_7c = FUN_005be910(param_4,param_5);
  bVar2 = true;
  bVar11 = true;
  local_90 = 0;
  local_8c = 0;
  iStack_88 = 0;
  if (param_8 != 0) {
    if (param_12 == 0) goto LAB_00463c21;
    iVar6 = *(int *)(param_2 + 0xb90);
    iVar10 = *(int *)(param_2 + 0xb94);
    local_78 = param_6->left;
    if (iVar6 == 0 && iVar10 == 0) {
      uVar9 = 0xffffffff;
    }
    else {
      lVar14 = ftol();
      uVar1 = lVar14 + *(int *)(param_2 + 0xac0);
      uVar9 = (uint)uVar1;
      if ((uVar1 < 0x8000000000000000) || ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < uVar9)))
         ) {
        if (0x3fff < (longlong)uVar1) {
          uVar9 = 0x3fff;
        }
      }
      else {
        uVar9 = 0xffffc000;
      }
    }
    local_9c = param_6->right;
    if ((int)uVar9 <= (int)local_9c) {
      if (iVar6 == 0 && iVar10 == 0) {
        local_9c = 0xffffffff;
      }
      else {
        lVar14 = ftol();
        uVar1 = lVar14 + *(int *)(param_2 + 0xac0);
        local_9c = (uint)uVar1;
        if ((uVar1 < 0x8000000000000000) ||
           ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < local_9c)))) {
          if (0x3fff < (longlong)uVar1) {
            local_9c = 0x3fff;
          }
        }
        else {
          local_9c = 0xffffc000;
        }
      }
    }
    if (DAT_00647878 == 0) {
      GetSysColor(0xf);
      if (_DAT_00610fd8 < param_10) {
        ftol();
        ftol();
        ftol();
      }
      uVar3 = ftol();
      uVar4 = ftol();
      uVar9 = ftol();
      uVar9 = (uint)CONCAT11(uVar3,uVar4) << 8 | uVar9 & 0xff;
      SetBkColor(param_1,uVar9);
      iVar6 = local_78;
      local_60.right = local_9c;
      local_60.top = param_6->top;
      local_60.bottom = param_6->bottom;
      local_60.left = local_78;
      ExtTextOutA(param_1,0,0,2,&local_60,(LPCSTR)0x0,0,(INT *)0x0);
      if (param_13 <= iVar6) {
        param_13 = iVar6;
      }
      if ((int)local_9c <= (int)param_14) {
        param_14 = local_9c;
      }
      if (param_13 < (int)param_14) {
        color = FUN_004645e0(uVar9,param_15,CONCAT31((int3)(local_9c >> 8),DAT_0064aed4));
        SetBkColor(param_1,color);
        local_60.top = param_6->top;
        local_60.bottom = param_6->bottom;
        local_60.left = param_13;
        local_60.right = param_14;
        ExtTextOutA(param_1,0,0,2,&local_60,(LPCSTR)0x0,0,(INT *)0x0);
      }
    }
    else {
      local_a0 = 0;
      if (0 < local_7c) {
        iVar6 = local_7c + -1;
        do {
          lVar14 = CONCAT44(iStack_88,local_8c);
          FUN_005bec40(param_4,local_a0,param_5,&local_74,&local_84,&local_38,0,0);
          if ((iStack_80 < 1) && (iStack_80 < 0)) {
            lVar15 = 0;
          }
          else {
            lVar15 = lVar12;
            if (CONCAT44(iStack_80,local_84) <= lVar12) {
              lVar15 = CONCAT44(iStack_80,local_84);
            }
          }
          if (local_a0 == 0) {
            if (CONCAT44(local_6c,local_70) < lVar15) {
              if (*(int *)(param_2 + 0xb90) == 0 && *(int *)(param_2 + 0xb94) == 0) {
                local_40 = 0xffffffff;
              }
              else {
                lVar14 = ftol();
                uVar1 = lVar14 + *(int *)(param_2 + 0xac0);
                local_40 = (uint)uVar1;
                if ((uVar1 < 0x8000000000000000) ||
                   ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < local_40)))) {
                  if (0x3fff < (longlong)uVar1) {
                    local_40 = 0x3fff;
                  }
                }
                else {
                  local_40 = 0xffffc000;
                }
              }
              local_48 = param_6->left;
              FUN_00449040(param_1,&local_48,0,0,0,0x3ff00000,1,bVar11);
            }
          }
          else if (0 < local_a0) {
            if ((CONCAT44(local_6c,local_70) < lVar15) && (lVar14 < local_68)) {
              local_50 = 0.0;
              local_30 = 1.0;
              if ((local_6c < iStack_88) || ((local_6c <= iStack_88 && (local_70 <= local_8c)))) {
                if (*(int *)(param_2 + 0xb90) == 0 && *(int *)(param_2 + 0xb94) == 0) {
                  local_48 = 0xffffffff;
                }
                else {
                  lVar13 = ftol();
                  uVar1 = lVar13 + *(int *)(param_2 + 0xac0);
                  local_48 = (uint)uVar1;
                  if ((uVar1 < 0x8000000000000000) ||
                     ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < local_48)))) {
                    if (0x3fff < (longlong)uVar1) {
                      local_48 = 0x3fff;
                    }
                  }
                  else {
                    local_48 = 0xffffc000;
                  }
                }
              }
              else {
                if (lVar14 < lVar15) {
                  local_28 = local_70 - local_8c;
                  iStack_24 = (local_6c - iStack_88) - (uint)(local_70 < local_8c);
                  local_18 = lVar15 - lVar14;
                  local_50 = (double)CONCAT44(iStack_24,local_28) / (double)(lVar15 - lVar14);
                }
                local_48 = param_6->left;
              }
              if (local_68 < CONCAT44(iStack_80,local_84)) {
                if (lVar14 < lVar15) {
                  local_20 = local_68 - lVar14;
                  local_60._0_8_ = lVar15 - lVar14;
                  local_30 = (double)(local_68 - lVar14) / (double)(lVar15 - lVar14);
                }
                local_40 = param_6->right;
              }
              else if (*(int *)(param_2 + 0xb90) == 0 && *(int *)(param_2 + 0xb94) == 0) {
                local_40 = 0xffffffff;
              }
              else {
                lVar14 = ftol();
                uVar1 = lVar14 + *(int *)(param_2 + 0xac0);
                local_40 = (uint)uVar1;
                if ((uVar1 < 0x8000000000000000) ||
                   ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < local_40)))) {
                  if (0x3fff < (longlong)uVar1) {
                    local_40 = 0x3fff;
                  }
                }
                else {
                  local_40 = 0xffffc000;
                }
              }
              if ((int)local_48 < (int)local_40) {
                FUN_00449040(param_1,&local_48,(uint)local_50,local_50._4_4_,(undefined4)local_30,
                             local_30._4_4_,local_90,bVar11);
              }
            }
            if (local_90 != 1) {
              bVar11 = !bVar2;
              bVar2 = bVar11;
            }
          }
          if ((local_a0 == iVar6) && (lVar15 < lVar12)) {
            if (*(int *)(param_2 + 0xb90) == 0 && *(int *)(param_2 + 0xb94) == 0) {
              local_48 = 0xffffffff;
            }
            else {
              lVar14 = ftol();
              uVar1 = lVar14 + *(int *)(param_2 + 0xac0);
              local_48 = (uint)uVar1;
              if ((uVar1 < 0x8000000000000000) ||
                 ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < local_48)))) {
                if (0x3fff < (longlong)uVar1) {
                  local_48 = 0x3fff;
                }
              }
              else {
                local_48 = 0xffffc000;
              }
            }
            local_40 = local_9c;
            FUN_00449040(param_1,&local_48,0,0,0,0x3ff00000,1,bVar11);
          }
          local_90 = local_74;
          iStack_88 = iStack_80;
          local_8c = local_84;
        } while ((CONCAT44(iStack_80,local_84) <= lVar12) &&
                (local_a0 = local_a0 + 1, local_a0 < local_7c));
      }
    }
    SetBkColor(param_1,*param_9);
    local_60.top = param_6->top;
    local_60.left = local_78;
    local_60.bottom = local_60.top + 1;
    local_60.right = local_9c;
    ExtTextOutA(param_1,0,0,2,&local_60,(LPCSTR)0x0,0,(INT *)0x0);
  }
  if (param_12 != 0) {
    return;
  }
LAB_00463c21:
  local_b4 = 0xffffff9d;
  if (((*(uint *)(param_3 + 0x10) & 0x80000) == 0) || ((*(uint *)(param_3 + 0x10) & 0x10000) != 0))
  {
    iVar6 = 0;
  }
  else {
    iVar6 = 1;
  }
  uVar7 = FUN_00538320(param_6->bottom - param_6->top,iVar6);
  iVar10 = (param_6->bottom + param_6->top) / 2;
  lVar14 = FUN_00538340(param_2,iVar6);
  local_a0 = 0;
  if (0 < local_7c) {
    local_50._0_4_ = local_70 - (uint)lVar14;
    local_50._4_4_ = (local_6c - (int)((ulonglong)lVar14 >> 0x20)) - (uint)(local_70 < (uint)lVar14)
    ;
    do {
      FUN_005bec40(param_4,local_a0,param_5,&local_74,&local_84,&local_38,&local_34,0);
      local_38 = 0;
      if ((iStack_80 < local_50._4_4_) ||
         (((iStack_80 <= local_50._4_4_ && (local_84 < (uint)local_50)) ||
          (lVar14 + local_68 < CONCAT44(iStack_80,local_84))))) {
        if (lVar12 < CONCAT44(iStack_80,local_84)) {
          if (*(int *)(param_2 + 0xb90) == 0 && *(int *)(param_2 + 0xb94) == 0) {
            uVar9 = 0xffffffff;
          }
          else {
            lVar15 = ftol();
            uVar1 = lVar15 + *(int *)(param_2 + 0xac0);
            uVar9 = (uint)uVar1;
            if ((uVar1 < 0x8000000000000000) ||
               ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < uVar9)))) {
              if (0x3fff < (longlong)uVar1) {
                uVar9 = 0x3fff;
              }
            }
            else {
              uVar9 = 0xffffc000;
            }
          }
          if ((local_b4 == uVar9) && (param_8 != 0)) {
            uVar8 = 1;
          }
          else {
            uVar8 = 0;
          }
          FUN_00448df0(param_1,uVar9,iVar10,uVar7,uVar7,-(uint)(iVar6 != 0) & local_74,0,uVar8,
                       local_34);
          bVar11 = local_b4 == uVar9;
          local_b4 = uVar9;
          if (bVar11) {
            return;
          }
        }
      }
      else {
        if (*(int *)(param_2 + 0xb90) == 0 && *(int *)(param_2 + 0xb94) == 0) {
          uVar9 = 0xffffffff;
        }
        else {
          lVar15 = ftol();
          uVar1 = lVar15 + *(int *)(param_2 + 0xac0);
          uVar9 = (uint)uVar1;
          if ((uVar1 < 0x8000000000000000) ||
             ((-0x100000001 < (longlong)uVar1 && (0xffffbfff < uVar9)))) {
            if (0x3fff < (longlong)uVar1) {
              uVar9 = 0x3fff;
            }
          }
          else {
            uVar9 = 0xffffc000;
          }
        }
        if ((local_b4 == uVar9) && (param_8 != 0)) {
          uVar8 = 1;
        }
        else {
          uVar8 = 0;
        }
        FUN_00448df0(param_1,uVar9,iVar10,uVar7,uVar7,-(uint)(iVar6 != 0) & local_74,0,uVar8,
                     local_34);
        local_b4 = uVar9;
      }
      local_a0 = local_a0 + 1;
    } while (local_a0 < local_7c);
  }
  return;
}


