/* Module: vegas30k.dll
   Function: FUN_01153820
   Address: 01153820
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01153820(HDC param_1,int param_2,int param_3,int param_4)

{
  ushort uVar1;
  int iVar2;
  int *piVar3;
  COLORREF color;
  int iVar4;
  BOOL BVar5;
  DWORD DVar6;
  HBRUSH hbr;
  int iVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  tagRECT *ptVar15;
  tagRECT local_150;
  uint local_140;
  int local_13c;
  uint uStack_138;
  uint local_134;
  UINT local_130;
  uint local_12c;
  char local_125;
  tagRECT tStack_124;
  COLORREF CStack_114;
  int local_110;
  int *piStack_10c;
  tagRECT tStack_108;
  tagRECT tStack_f8;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  tagRECT tStack_d4;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b4;
  COLORREF local_b0;
  COLORREF local_ac;
  uint local_a8;
  COLORREF local_a4;
  COLORREF local_a0;
  tagPOINT tStack_9c;
  undefined4 local_94;
  int local_90;
  int local_8c;
  int local_88;
  tagRECT tStack_84;
  RECT local_74;
  uint uStack_64;
  HIMAGELIST p_Stack_60;
  int iStack_5c;
  int iStack_54;
  tagRECT tStack_50;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  tagRECT tStack_30;
  tagRECT tStack_20;
  RECT RStack_10;
  
  local_a8 = *(uint *)(param_4 + 0x160) & 2;
  if (local_a8 == 0) {
    local_a4 = DAT_012af800;
    local_b0 = DAT_012af818;
  }
  else {
    local_a4 = DAT_012af814;
    local_b0 = DAT_012af810;
  }
  if (param_4 != -0xdc) {
    local_ac = GetTextColor(param_1);
    local_a0 = GetBkColor(param_1);
    tStack_9c.y = *(int *)(param_4 + 0x74);
    local_150.left = *(int *)(param_4 + 0x70) + 1;
    local_150.top = *(int *)(param_2 + 4);
    local_150.right = *(int *)(param_2 + 8);
    iVar9 = 1;
    local_150.bottom = *(int *)(param_2 + 0xc);
    local_13c = (*(int *)(param_4 + 0xd8) + 1) / 2;
    SetTextAlign(param_1,10);
    local_125 = (*(byte *)(param_4 + 0x168) & 4) != 0;
    if (((*(uint *)(param_4 + 0x164) & 0x2000) == 0) ||
       (local_e8 = 1, (*(uint *)(param_4 + 0x164) & 0x1000) == 0)) {
      local_e8 = 0;
    }
    local_134 = 0;
    iVar4 = local_150.left;
    if (*(int *)(param_4 + 0x60) != 0) {
      do {
        if ((local_134 < *(uint *)(param_4 + 100)) || (*(uint *)(param_4 + 0xb8) <= local_134)) {
          local_b4 = local_134 * 0x10;
          iVar2 = local_b4 + *(int *)(param_4 + 0x1c0);
          if (*(short *)(iVar2 + 2) != 0) {
            local_110 = 0;
            local_130 = CONCAT22(local_130._2_2_,*(undefined2 *)(iVar2 + 4));
            if (*(int *)(iVar2 + 0xc) != 0) {
              local_110 = *(int *)(*(int *)(iVar2 + 0xc) + 4);
            }
            local_74.right = local_150.right;
            local_74.top = local_150.top;
            local_74.bottom = local_150.bottom;
            local_150.right = *(short *)(iVar2 + 2) + iVar4;
            local_74.left = iVar4;
            if (iVar4 == 1) {
              local_90 = local_150.top;
              local_88 = local_150.bottom;
              local_94 = 0;
              if ((*(uint *)(param_4 + 0x164) & 0x2000) != 0) {
                local_88 = local_150.bottom + 1;
              }
              local_8c = iVar4;
              FUN_01151e40(param_1,&local_94,DAT_012af80c);
            }
            if (local_e8 != 0) {
              local_150.right = local_150.right + -1;
            }
            if ((*(int *)(param_2 + 8) < local_150.right) &&
               (local_134 == *(int *)(param_4 + 0x60) - 1U)) {
              local_150.right = local_150.right + -1;
            }
            local_12c = 0;
            if (local_a8 != 0) {
              if ((*(int *)(param_4 + 0x3c) == param_3) && (*(uint *)(param_4 + 0x40) == local_134))
              {
                local_12c = 1;
              }
              else {
                local_12c = 0;
              }
            }
            uVar13 = local_12c;
            local_140 = 0;
            if ((((local_12c == 0) || (local_125 != '\0')) &&
                (local_140 = FUN_01153510(param_3,local_134,param_4), local_140 != 0)) &&
               (local_a8 == 0)) {
              local_140 = 2;
            }
            uVar12 = uVar13;
            if (((*(byte *)(param_4 + 0x160) & 4) == 0) && (uVar12 = local_140, uVar13 != 0)) {
              if (local_e8 != 0) {
                InflateRect(&local_150,1,1);
                FUN_01151f60(param_1,&local_150,DAT_012af80c,DAT_012af80c);
              }
              FUN_01151f60(param_1,&local_150,DAT_012af80c,DAT_012af80c);
              iVar9 = 0;
              uVar12 = local_140;
            }
            local_140 = uVar12;
            piVar3 = (int *)(**(code **)(param_4 + 0x204))(param_4 + 0x1c8,param_3,local_134,0);
            if ((*(ushort *)((int)piVar3 + 0xe) & 1) != 0) {
              local_130 = local_130 ^ (byte)(*(byte *)(piVar3 + 3) ^ (byte)local_130) & 3;
            }
            if ((*(ushort *)((int)piVar3 + 0xe) & 2) == 0) {
              color = local_b0;
              if (local_140 == 0) {
                color = local_ac;
              }
            }
            else {
              color = piVar3[4];
            }
            piStack_10c = piVar3;
            SetTextColor(param_1,color);
            if (local_140 == 0) {
              uStack_138 = local_a0;
            }
            else {
              uStack_138 = local_a4;
            }
            SetBkColor(param_1,uStack_138);
            if ((*(byte *)((int)piVar3 + 0xe) & 4) != 0) {
              SelectObject(param_1,(HGDIOBJ)piVar3[5]);
            }
            if (local_110 == 1) {
              SetTextAlign(param_1,10);
              local_140 = local_130 & 3;
              if ((short)local_140 == 1) {
                iVar4 = *(int *)(*(int *)(param_4 + 0x1c4) + 4 + local_134 * 0x30) + iVar9 +
                        local_150.left;
              }
              else {
                iVar4 = (local_150.right - iVar9) + -2;
              }
              FUN_01154bd0(param_1,iVar4,local_13c + iVar9,&local_150,piVar3);
              if (local_12c != 0) {
                InflateRect(&local_150,1,1);
                iVar9 = 1;
              }
              iVar4 = *(int *)(param_4 + 0x1c4);
              if ((iVar4 != 0) &&
                 (iVar2 = local_134 * 0x30 + iVar4, *(int *)(local_134 * 0x30 + 0x10 + iVar4) != 0))
              {
                iVar4 = *(int *)(iVar2 + 0x10) + param_3 * 300;
                if ((short)local_140 == 1) {
                  iStack_bc = -1;
                  iStack_c4 = *(int *)(iVar2 + 4) + iVar9 + 2 + local_150.left;
                }
                else {
                  iStack_c4 = local_150.left + 1;
                  iStack_bc = -*(int *)(iVar2 + 4);
                }
                iStack_bc = local_150.right + iStack_bc;
                iStack_c0 = local_150.top + 1;
                iStack_b8 = local_150.bottom + -1;
                _FaderInst_Move_8(iVar4,&iStack_c4);
                _FaderInst_Message_16(iVar4,0x610,0,piVar3[9]);
                _FaderInst_Draw_8(iVar4,param_1);
              }
LAB_01153d21:
              if (local_12c != 0) {
                InflateRect(&local_150,-1,-1);
                iVar9 = 0;
              }
            }
            else if (local_110 == 2) {
              if (local_12c == 0) {
LAB_01154289:
                if ((local_130 & 0x100) == 0) {
                  if ((local_130 & 0x2000) == 0) {
                    uVar1 = (ushort)local_130 & 3;
                    if (uVar1 == 3) {
                      SetTextAlign(param_1,0xe);
                      ptVar15 = &local_150;
                      iVar2 = local_13c + iVar9;
                      iVar4 = (local_150.right + local_150.left) / 2;
                    }
                    else {
                      if (uVar1 == 1) {
                        iVar4 = 0;
                        if (((local_130 & 0x1000) != 0) && ((*(byte *)((int)piVar3 + 0xe) & 8) != 0)
                           ) {
                          iVar4 = (local_150.bottom - local_150.top) * 2;
                          local_74.left = local_74.left + iVar4;
                        }
                        SetTextAlign(param_1,8);
                        FUN_01154bd0(param_1,iVar4 + iVar9 + 2 + local_150.left,local_13c + iVar9,
                                     &local_150,piVar3);
                        if (iVar4 != 0) {
                          uVar1 = *(ushort *)((int)piVar3 + 0xe);
                          CStack_114 = (COLORREF)((uVar1 & 0xf000) == 0x2000);
                          uStack_138 = (uint)((uVar1 & 0xf000) == 0);
                          tStack_30.left =
                               ((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + iVar9 + 2 +
                               local_150.left;
                          tStack_30.top = *(int *)(param_2 + 4) + uStack_138;
                          tStack_30.right =
                               ((int)(iVar4 * 3 + (iVar4 * 3 >> 0x1f & 3U)) >> 2) + iVar9 + 2 +
                               local_150.left;
                          tStack_30.bottom = *(int *)(param_2 + 0xc) - uStack_138;
                          uVar12 = uVar1 & 0x700 | (uint)(uVar1 >> 0xb);
                          uVar13 = uVar12;
                          if ((((*(uint *)(param_4 + 0x1b8) & 0x40) != 0) &&
                              ((*(uint *)(param_4 + 0x1b8) & 0x80) != 0)) &&
                             ((*(uint *)(param_4 + 0x178) == local_134 &&
                              ((iVar4 = FUN_0114e7d0(param_4,*(undefined4 *)(param_4 + 400),
                                                     *(undefined4 *)(param_4 + 0x194)),
                               iVar4 == param_3 && ((uVar1 & 0x100) == 0)))))) {
                            uVar13 = uVar12 | 0x200;
                            if (uStack_138 == 0) {
                              if (CStack_114 != 0) {
                                uVar13 = uVar12 | 0x600;
                              }
                            }
                            else {
                              uVar13 = uVar13 ^ 0x400;
                            }
                          }
                          SetTextAlign(param_1,0);
                          DVar6 = GetSysColor(5);
                          CStack_114 = SetBkColor(param_1,DVar6);
                          DrawFrameControl(param_1,&tStack_30,4,uVar13);
                          SetBkColor(param_1,CStack_114);
                        }
                        goto LAB_01154ae8;
                      }
                      SetTextAlign(param_1,10);
                      ptVar15 = &local_150;
                      iVar2 = local_13c + iVar9;
                      iVar4 = (local_150.right - iVar9) + -2;
                    }
LAB_01154ae2:
                    FUN_01154bd0(param_1,iVar4,iVar2,ptVar15,piVar3);
                  }
                  else {
                    tStack_d4.top = local_150.top;
                    tStack_d4.right = local_150.right;
                    tStack_d4.left = local_150.left;
                    tStack_d4.bottom = local_150.bottom;
                    FUN_01151e40(param_1,&tStack_d4,uStack_138);
                    uVar13 = local_12c;
                    if (((local_130 & 0x1000) == 0) || ((*(byte *)((int)piVar3 + 0xe) & 8) == 0)) {
                      if (local_12c != 0) {
                        InflateRect(&tStack_d4,1,1);
                        iVar9 = 1;
                      }
                      FUN_011535c0(param_1,&tStack_d4,iVar9,local_130 & 0xffff,local_140,piVar3);
                      if (uVar13 != 0) {
                        InflateRect(&tStack_d4,-1,-1);
                        iVar9 = 0;
                      }
                      if (((piVar3[1] != 0) && (*piVar3 != 0)) && (((byte)local_130 & 3) == 1)) {
                        SetTextAlign(param_1,8);
                        iVar2 = iVar9;
                        if (local_12c == 0) {
                          ptVar15 = &tStack_d4;
                          iVar4 = tStack_d4.left + 3 + piVar3[7];
                          tStack_d4.left = iVar4;
                        }
                        else {
                          iVar4 = tStack_d4.left + 2 + piVar3[7];
                          ptVar15 = &tStack_d4;
                          tStack_d4.left = iVar4;
                        }
                        goto LAB_01154ae2;
                      }
                    }
                    else {
                      uVar1 = *(ushort *)((int)piVar3 + 0xe) & 0xf000;
                      CStack_114 = (COLORREF)(uVar1 == 0x2000);
                      uStack_138 = (uint)(uVar1 == 0);
                      iVar4 = (local_150.right + local_150.left) / 2;
                      tStack_20.right = ((local_150.bottom - local_150.top) * 2) / 2;
                      tStack_20.left = iVar4 - tStack_20.right;
                      tStack_20.right = tStack_20.right + iVar4;
                      tStack_20.top = *(int *)(param_2 + 4) + uStack_138;
                      tStack_20.bottom = *(int *)(param_2 + 0xc) - uStack_138;
                      uVar1 = *(ushort *)((int)piVar3 + 0xe);
                      uVar12 = uVar1 & 0x700 | (uint)(uVar1 >> 0xb);
                      uVar13 = uVar12;
                      if ((((*(uint *)(param_4 + 0x1b8) & 0x40) != 0) &&
                          ((*(uint *)(param_4 + 0x1b8) & 0x80) != 0)) &&
                         ((*(uint *)(param_4 + 0x178) == local_134 &&
                          ((iVar4 = FUN_0114e7d0(param_4,*(undefined4 *)(param_4 + 400),
                                                 *(undefined4 *)(param_4 + 0x194)), iVar4 == param_3
                           && ((uVar1 & 0x100) == 0)))))) {
                        uVar13 = uVar12 | 0x200;
                        if (uStack_138 == 0) {
                          if (CStack_114 != 0) {
                            uVar13 = uVar12 | 0x600;
                          }
                        }
                        else {
                          uVar13 = uVar13 ^ 0x400;
                        }
                      }
                      SetTextAlign(param_1,0);
                      DVar6 = GetSysColor(5);
                      CStack_114 = SetBkColor(param_1,DVar6);
                      DrawFrameControl(param_1,&tStack_20,4,uVar13);
                      SetBkColor(param_1,CStack_114);
                    }
                  }
                }
                else {
                  SetTextAlign(param_1,8);
                  local_140 = local_130 & 3;
                  iVar4 = iVar9;
                  if ((short)local_140 != 0) {
                    iVar4 = piVar3[7] + iVar9 + 4;
                  }
                  tStack_124.left = local_150.left;
                  tStack_124.right = local_150.right;
                  tStack_124.top = local_150.top;
                  tStack_124.bottom = local_150.bottom;
                  FUN_01154bd0(param_1,iVar4 + local_150.left,local_13c + iVar9,&tStack_124,piVar3);
                  tStack_124.right = local_150.right;
                  tStack_124.top = local_150.top;
                  tStack_124.left = local_150.left;
                  tStack_124.bottom = local_150.bottom;
                  local_110 = 0;
                  local_130 = 0;
                  if (local_12c != 0) {
                    InflateRect(&tStack_124,1,1);
                    iVar9 = 1;
                  }
                  iVar4 = 1;
                  if (2 < local_13c) {
                    iVar4 = 2;
                  }
                  iVar2 = tStack_124.left;
                  tStack_f8.left = tStack_124.left;
                  if ((short)local_140 == 3) {
                    iVar7 = tStack_124.right - tStack_124.left >> 1;
                    if ((0 < iVar7) && (0 < piVar3[7] >> 1)) {
                      iVar7 = ((iVar7 - (piVar3[7] >> 1)) - iVar9) + -3;
                      iVar2 = tStack_124.left + iVar7;
                      tStack_f8.left = tStack_124.left + iVar7;
                    }
                  }
                  else if ((short)local_140 == 0) {
                    iVar2 = (tStack_124.right - piVar3[7]) + -4;
                  }
                  tStack_124.left = iVar2 + 2 + iVar9;
                  iVar2 = tStack_124.top + 1 + (local_13c - iVar4);
                  iVar7 = tStack_124.right + -1;
                  iVar8 = tStack_124.bottom + -1;
                  tStack_f8.left = tStack_f8.left + 2 + iVar9;
                  local_140 = piVar3[9];
                  tStack_f8.top = tStack_124.top + 1 + (local_13c - iVar4);
                  tStack_f8.right = tStack_124.right + -1;
                  tStack_f8.bottom = tStack_124.bottom + -1;
                  uVar1 = *(ushort *)((int)piVar3 + 0xe);
                  tStack_124.top = iVar2;
                  tStack_124.right = iVar7;
                  tStack_124.bottom = iVar8;
                  if ((uVar1 & 8) != 0) {
                    if (((((*(uint *)(param_4 + 0x1b8) & 0x40) == 0) ||
                         ((*(uint *)(param_4 + 0x1b8) & 0x80) == 0)) ||
                        (*(uint *)(param_4 + 0x178) != local_134)) ||
                       (iVar2 = FUN_0114e7d0(param_4,*(undefined4 *)(param_4 + 400),
                                             *(undefined4 *)(param_4 + 0x194)), iVar2 != param_3)) {
                      bVar14 = false;
                    }
                    else {
                      bVar14 = true;
                    }
                    uVar1 = *(ushort *)((int)piVar3 + 0xe);
                    if ((uVar1 & 0xf000) == 0) {
                      local_140 = (uint)piVar3[9] >> 0x10;
                      if ((((uVar1 & 0x400) != 0) || (bVar14)) ||
                         (uVar13 = (uint)*(ushort *)(piVar3 + 9), bVar14 = uVar13 == local_140,
                         local_140 = uVar13, bVar14)) {
                        local_130 = 2;
                        local_110 = 1;
                      }
                      iVar2 = piVar3[7];
                      tStack_124.right = tStack_124.left + iVar2 + iVar4;
                      tStack_124.bottom = tStack_124.top + iVar2 + iVar4;
                      tStack_f8.right = tStack_f8.left + iVar2 + iVar4;
                      tStack_f8.bottom = iVar2 + tStack_f8.top + iVar4;
                    }
                    else if (bVar14) {
                      local_130 = 2;
                    }
                  }
                  if ((((uVar1 & 8) != 0) && ((uVar1 & 0xf000) == 0)) &&
                     (((uVar1 & 0x400) != 0 &&
                      (piStack_10c = (int *)_SfGetUIBrush_4(0x2711), piStack_10c != (int *)0x0)))) {
                    SetBrushOrgEx(param_1,tStack_124.left,tStack_124.top,&tStack_9c);
                    piStack_10c = SelectObject(param_1,piStack_10c);
                    DVar6 = GetSysColor(0x14);
                    uStack_138 = SetTextColor(param_1,DVar6);
                    DVar6 = GetSysColor(0xf);
                    CStack_114 = SetBkColor(param_1,DVar6);
                    PatBlt(param_1,tStack_124.left,tStack_124.top,tStack_124.right - tStack_124.left
                           ,tStack_124.bottom - tStack_124.top,0xf00021);
                    SelectObject(param_1,piStack_10c);
                    SetTextColor(param_1,uStack_138);
                    SetBkColor(param_1,CStack_114);
                    SetBrushOrgEx(param_1,tStack_9c.x,tStack_9c.y,&tStack_9c);
                    tStack_50.top = tStack_124.top;
                    tStack_50.left = tStack_124.left;
                    tStack_50.right = tStack_124.right;
                    tStack_50.bottom = tStack_124.bottom;
                    InflateRect(&tStack_50,-1,-1);
                    hbr = (HBRUSH)_SfGetUIBrush_4(0xf);
                    FrameRect(param_1,&tStack_50,hbr);
                  }
                  ImageList_Draw((HIMAGELIST)piVar3[6],local_140,param_1,
                                 tStack_124.left + iVar4 + -1 + local_110,
                                 tStack_124.top + iVar4 + -1 + local_110,0);
                  DrawEdge(param_1,&tStack_f8,local_130,0xf);
                }
              }
              else {
                if ((local_130 & 3) == 0) {
                  SetTextAlign(param_1,10);
                  iVar4 = ((local_150.right -
                           *(int *)(*(int *)(param_4 + 0x1c4) + 4 + local_134 * 0x30)) - iVar9) + -2
                  ;
                }
                else {
                  SetTextAlign(param_1,8);
                  iVar4 = iVar9 + 2 + local_150.left;
                }
                FUN_01154bd0(param_1,iVar4,local_13c + iVar9,&local_150,piVar3);
                if ((*(int *)(param_4 + 0x1c4) != 0) &&
                   (iVar4 = local_134 * 0x30,
                   *(int *)(*(int *)(param_4 + 0x1c4) + 0x14 + iVar4) != 0)) {
                  InflateRect(&local_150,1,1);
                  iStack_40 = (local_150.right - *(int *)(iVar4 + 4 + *(int *)(param_4 + 0x1c4))) +
                              -1;
                  iStack_3c = local_150.top + 1;
                  iStack_38 = local_150.right + -1;
                  iStack_34 = local_150.bottom + -1;
                  iVar9 = *(int *)(iVar4 + *(int *)(param_4 + 0x1c4) + 0x14) + param_3 * 0xc0;
                  _SpinnerInst_Move_8(iVar9,&iStack_40);
                  _SpinnerInst_Message_16(iVar9,0x610,1,piVar3[9]);
                  _SpinnerInst_Draw_8(iVar9,param_1);
                  InflateRect(&local_150,-1,-1);
                  iVar9 = 0;
                }
              }
            }
            else {
              if (local_110 != 3) {
                if (local_110 == 4) {
                  SetTextAlign(param_1,10);
                  local_140 = local_130 & 3;
                  if ((short)local_140 == 1) {
                    iVar4 = *(int *)(*(int *)(param_4 + 0x1c4) + 4 + local_134 * 0x30) + iVar9 +
                            local_150.left;
                  }
                  else {
                    iVar4 = (local_150.right - iVar9) + -2;
                  }
                  FUN_01154bd0(param_1,iVar4,local_13c + iVar9,&local_150,piVar3);
                  if (local_12c != 0) {
                    InflateRect(&local_150,1,1);
                    iVar9 = 1;
                  }
                  iVar4 = *(int *)(param_4 + 0x1c4);
                  if ((iVar4 != 0) &&
                     (iVar2 = local_134 * 0x30 + iVar4,
                     *(int *)(local_134 * 0x30 + 0x18 + iVar4) != 0)) {
                    iVar4 = *(int *)(iVar2 + 0x18) + param_3 * 0xd4;
                    if ((short)local_140 == 1) {
                      iStack_dc = -1;
                      iStack_e4 = *(int *)(iVar2 + 4) + iVar9 + 2 + local_150.left;
                    }
                    else {
                      iStack_e4 = local_150.left + 1;
                      iStack_dc = -*(int *)(iVar2 + 4);
                    }
                    iStack_dc = local_150.right + iStack_dc;
                    iStack_e0 = local_150.top + 1;
                    iStack_d8 = local_150.bottom + -1;
                    _TrackbarInst_Move_8(iVar4,&iStack_e4);
                    _TrackbarInst_Message_16(iVar4,0x610,0,piVar3[9]);
                    _TrackbarInst_Draw_8(iVar4,param_1);
                  }
                  goto LAB_01153d21;
                }
                goto LAB_01154289;
              }
              puVar10 = (uint *)(*(int *)(local_b4 + 0xc + *(int *)(param_4 + 0x1c0)) + 0x10);
              puVar11 = &uStack_64;
              for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
                *puVar11 = *puVar10;
                puVar10 = puVar10 + 1;
                puVar11 = puVar11 + 1;
              }
              SetTextAlign(param_1,8);
              tStack_108.left = local_150.left;
              tStack_108.top = local_150.top;
              tStack_108.bottom = local_150.bottom;
              tStack_108.right = local_150.right;
              if (((uStack_64 & 4) != 0) ||
                 (((uStack_64 & 2) != 0 && ((local_12c == 0 || ((uStack_64 & 1) == 0)))))) {
                FUN_01154bd0(param_1,iVar9 + 4 + local_150.left,local_13c + iVar9,&tStack_108,
                             piStack_10c);
              }
              local_140 = 0;
              if (local_12c != 0) {
                InflateRect(&tStack_108,1,1);
                iVar9 = 1;
              }
              iVar4 = 1;
              if (2 < local_13c) {
                iVar4 = 2;
              }
              tStack_84.left = tStack_108.left + 2 + iVar9;
              tStack_108.left = (tStack_108.right - iStack_5c) + -2 + iVar9;
              tStack_84.top = tStack_108.top + 1 + (local_13c - iVar4);
              tStack_84.right = tStack_108.right + -1;
              tStack_84.bottom = tStack_108.bottom + -1;
              tStack_108.top = tStack_108.top + 1 + (local_13c - iVar4);
              tStack_108.right = tStack_108.right + -1;
              tStack_108.bottom = tStack_108.bottom + -1;
              local_110 = FUN_0114e7d0(param_4,*(undefined4 *)(param_4 + 400),
                                       *(undefined4 *)(param_4 + 0x194));
              if (((((*(uint *)(param_4 + 0x1b8) & 0x40) == 0) ||
                   ((*(uint *)(param_4 + 0x1b8) & 0x80) == 0)) ||
                  (*(uint *)(param_4 + 0x178) != local_134)) ||
                 (uStack_138 = 1, local_110 != param_3)) {
                uStack_138 = 0;
              }
              if ((uStack_64 & 2) == 0) {
LAB_011540c8:
                if (uStack_138 != 0) {
                  local_140 = 2;
                }
              }
              else {
                FUN_0114e800(param_4,*(undefined4 *)(param_4 + 0x178),&RStack_10);
                FUN_0114e8b0(param_4,local_110,&RStack_10);
                RStack_10.left = (RStack_10.right - iStack_5c) + -4;
                BVar5 = PtInRect(&RStack_10,*(POINT *)(param_4 + 400));
                if (BVar5 != 0) goto LAB_011540c8;
              }
              ImageList_Draw(p_Stack_60,iStack_54,param_1,tStack_108.left + iVar4 + -1,
                             tStack_108.top + iVar4 + -1,0);
              DrawEdge(param_1,&tStack_84,local_140,0xf);
              piVar3 = piStack_10c;
            }
LAB_01154ae8:
            if ((*(byte *)((int)piVar3 + 0xe) & 4) != 0) {
              SelectObject(param_1,*(HGDIOBJ *)(param_4 + 0x10c));
            }
            if (local_12c != 0) {
              if ((*(byte *)(param_4 + 0x160) & 4) == 0) {
                InflateRect(&local_150,1,1);
                iVar9 = 1;
              }
              else {
                DrawFocusRect(param_1,&local_74);
              }
            }
            iVar4 = local_150.left + *(short *)(local_b4 + 2 + *(int *)(param_4 + 0x1c0));
            local_150.left = iVar4;
          }
          if (*(int *)(param_2 + 8) <= iVar4) break;
        }
        local_134 = local_134 + 1;
      } while (local_134 < *(uint *)(param_4 + 0x60));
    }
    SetBkColor(param_1,local_a0);
    SetTextColor(param_1,local_ac);
    if (local_150.right < *(int *)(param_2 + 8)) {
      local_150.right = *(int *)(param_2 + 8);
      FUN_01151ed0(param_1,&local_150);
    }
  }
  return;
}


