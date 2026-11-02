/* Module: vegas30.exe
   Function: FUN_004ccbf0
   Address: 004ccbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004ccbf0(int param_1,HWND param_2,uint param_3,uint param_4,uint *param_5)

{
  RECT *lpRect;
  longlong lVar1;
  POINT pt;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  HWND pHVar8;
  HWND pHVar9;
  BOOL BVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined1 local_34 [32];
  undefined1 local_14 [12];
  uint local_8;
  
  uVar13 = (uint)param_5;
  uVar4 = param_3;
  iVar2 = param_1;
  puVar3 = (uint *)((uint)param_5 >> 0x10);
  local_8 = (uint)(short)((uint)param_5 >> 0x10);
  local_14._8_4_ = SEXT24((short)param_5);
  if (((*(uint *)(param_1 + 0x1c) & 1) != 0) && (param_3 == 0x201)) {
    *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c) & 0xfffffffe;
  }
  iVar6 = *(int *)(param_1 + 0x174);
  param_5 = puVar3;
  if ((iVar6 == 0x10041) && (*(int *)(param_1 + 0xce4) != 0)) {
    param_2 = *(HWND *)(*(int *)(*(int *)(param_1 + 0xce4) + 0x69c) + 0x54);
    if (*(int *)(param_1 + 0x1d8) != 0) {
      FUN_004592f0(param_1,0,0,0,0);
    }
    uVar4 = _FaderInst_Message_16(*(undefined4 *)((int)param_2 + 0x118),uVar4,param_4,uVar13);
    FUN_004ccb80(iVar2);
    return uVar4;
  }
  if ((iVar6 == 0x10043) && (*(int *)(param_1 + 0xce4) != 0)) {
    param_2 = *(HWND *)(*(int *)(*(int *)(param_1 + 0xce4) + 0x69c) + 0x54);
    if (*(int *)(param_1 + 0x1d8) != 0) {
      FUN_004592f0(param_1,0,0,0,0);
    }
    if (uVar4 != 0x204) {
      uVar4 = _TrackbarInst_Message_16(*(undefined4 *)((int)param_2 + 0x24c),uVar4,param_4,uVar13);
      FUN_004ccb80(iVar2);
      return uVar4;
    }
    local_8 = (uint)param_5 & 0xffff;
    local_14._8_4_ = uVar13 & 0xffff;
    ClientToScreen(*(HWND *)(iVar2 + 4),(LPPOINT)(local_14 + 8));
    FUN_004cbbe0(iVar2,local_14._8_4_,local_8);
    return 0;
  }
  if ((iVar6 == 0x1004a) && (*(int *)(param_1 + 0xce4) != 0)) {
    param_2 = *(HWND *)(*(int *)(*(int *)(param_1 + 0xce4) + 0x69c) + 0x54);
    if (*(int *)(param_1 + 0x1d8) != 0) {
      FUN_004592f0(param_1,0,0,0,0);
    }
    if (uVar4 != 0x204) {
      uVar4 = _TrackbarInst_Message_16(*(undefined4 *)((int)param_2 + 0x134),uVar4,param_4,uVar13);
      FUN_004ccb80(iVar2);
      return uVar4;
    }
    local_8 = (uint)param_5 & 0xffff;
    local_14._8_4_ = uVar13 & 0xffff;
    ClientToScreen(*(HWND *)(iVar2 + 4),(LPPOINT)(local_14 + 8));
    return 0;
  }
  if ((iVar6 == 0x10045) && (*(int *)(param_1 + 0xce4) != 0)) {
    param_2 = *(HWND *)(*(int *)(*(int *)(param_1 + 0xce4) + 0x69c) + 0x54);
    if (*(int *)(param_1 + 0x1d8) != 0) {
      FUN_004592f0(param_1,0,0,0,0);
    }
    iVar6 = (int)param_2;
    if (uVar4 == 0x205) {
      param_4 = *(uint *)(iVar2 + 4);
    }
    else if (uVar4 != 0x7b) {
      uVar4 = _MeterInst_Message_16(*(undefined4 *)((int)param_2 + 0x324),uVar4,param_4,uVar13);
      return uVar4;
    }
    param_1 = *(undefined4 *)(iVar2 + 0xce4);
    param_5 = (uint *)_MeterInst_Message_16(*(undefined4 *)((int)param_2 + 0x324),0x60e,0,0);
    param_2 = (HWND)_MeterInst_Message_16(*(undefined4 *)(iVar6 + 0x324),0x610,0,0);
    uVar4 = _MeterInst_Message_16(*(undefined4 *)(iVar6 + 0x324),0x7b,param_4,uVar13);
    FUN_004c8390(iVar2,param_1,param_5,param_2);
    return uVar4;
  }
  if (iVar6 == 0x10022) {
    param_2 = *(HWND *)(param_1 + 0x5d0);
    if ((*(int *)(param_1 + 0x1d8) != 0) && ((*(byte *)(param_1 + 0x1c) & 1) == 0)) {
      FUN_004592f0(param_1,0,0,0,0);
    }
    if ((*(uint *)param_2 & 0x800) != 0) {
      return 0;
    }
    uVar5 = param_4;
    if (uVar4 == 0x20a) {
      if ((*(byte *)(iVar2 + 0x1c) & 1) == 0) {
        FUN_004592f0(iVar2,iVar2 + 0x3a8,
                     (uint)*(byte *)(iVar2 + 0xce0) << 8 | *(uint *)(iVar2 + 0x174),&LAB_004ccad0,0)
        ;
        *(uint *)(iVar2 + 0x1c) = *(uint *)(iVar2 + 0x1c) | 1;
      }
      uVar5 = (param_4 >> 0x10) * -0x300000 | param_4 & 0xffff;
    }
    uVar4 = _TrackbarInst_Message_16(*(uint *)(param_2 + 0x20),uVar4,uVar5,uVar13);
    return uVar4;
  }
  uVar5 = param_4;
  if (iVar6 == 0x10023) {
    param_5 = *(uint **)(param_1 + 0x5d0);
    if (param_3 == 0x20a) {
      return 0;
    }
    if (*(int *)(param_1 + 0x1d8) != 0) {
      FUN_004592f0(param_1,0,0,0,0);
    }
    uVar5 = param_4;
    if ((*param_5 & 0x800) != 0) {
      return 0;
    }
    param_4 = _TrackbarInst_Message_16(param_5[0x60],uVar4,param_4,uVar13);
    if (uVar4 < 0x204) {
      if (uVar4 == 0x203) {
        *param_5 = *param_5 & 0xfffffbff;
        if (param_5[0x5a] == param_5[0x58] || (int)(param_5[0x5a] - param_5[0x58]) < 0) {
          return param_4;
        }
        InvalidateRect(*(HWND *)(iVar2 + 4),(RECT *)(param_5 + 0x58),0);
        return param_4;
      }
      if (uVar4 != 0x7b) {
        return param_4;
      }
    }
    else {
      if (uVar4 < 0x204) {
        return param_4;
      }
      if (0x205 < uVar4) {
        return param_4;
      }
    }
  }
  if (0x202 < uVar4) {
    switch(uVar4) {
    case 0x203:
      goto switchD_004cd972_caseD_203;
    case 0x204:
    case 0x206:
      if (*(int *)(iVar2 + 0xa4) != 0) {
        return 0;
      }
      if ((uVar5 & 1) != 0) {
        return 0;
      }
      *(uint *)(iVar2 + 0x18) =
           (uint)(uVar4 == 0x203) << 0x11 | *(uint *)(iVar2 + 0x18) & 0xfffdffff;
      *(undefined4 *)(iVar2 + 0x90) = local_14._8_4_;
      *(undefined4 *)(iVar2 + 0xa8) = local_14._8_4_;
      *(uint *)(iVar2 + 0x94) = local_8;
      *(uint *)(iVar2 + 0xac) = local_8;
      *(undefined4 *)(iVar2 + 0xa4) = 1;
      SetCapture(*(HWND *)(iVar2 + 4));
      if (*(int *)(iVar2 + 0xce4) == 0) {
        return 0;
      }
      if ((*(byte *)(*(int *)(iVar2 + 0xce4) + 0x10) & 0x10) != 0) {
        return 0;
      }
      FUN_004cb540(iVar2,*(undefined4 *)(iVar2 + 0xce0),4,0);
      return 0;
    case 0x205:
      if ((uVar5 & 1) != 0) {
        return 0;
      }
      pHVar8 = GetCapture();
      if (pHVar8 != *(HWND *)(iVar2 + 4)) {
        return 0;
      }
      ReleaseCapture();
      if (*(int *)(iVar2 + 0xa4) == 1) {
        FUN_00455270(iVar2,local_14._8_4_,local_8,0x10000,1);
      }
      *(undefined4 *)(iVar2 + 0xa4) = 0;
      return 0;
    default:
      return 0;
    }
  }
  if (uVar4 == 0x202) {
    uVar14 = *(undefined4 *)(iVar2 + 0xa4);
    *(undefined4 *)(iVar2 + 0xa4) = 0;
    pHVar8 = GetCapture();
    if (pHVar8 == *(HWND *)(iVar2 + 4)) {
      ReleaseCapture();
    }
    switch(uVar14) {
    case 1:
      iVar6 = *(int *)(iVar2 + 0xce4);
      if ((*(uint *)(iVar2 + 0x18) & 0x20000) == 0) {
        if (iVar6 == 0) {
          return 0;
        }
        if ((uVar5 & 0xc) != 0) {
          return 0;
        }
        FUN_004ca740(iVar2,iVar6);
        *(undefined4 *)(iVar2 + 0xcc0) = *(undefined4 *)(iVar2 + 0xce0);
        return 0;
      }
      if (iVar6 == 0) {
        if (*(int *)(iVar2 + 0x174) != 0x10024) {
          return 0;
        }
        FUN_004c87d0(iVar2,param_2,0x24,0,0);
        return 0;
      }
      iVar7 = *(int *)(iVar2 + 0x174);
      if (iVar7 != 0x10042) {
        if (iVar7 == 0x10046) {
          FUN_004c87d0(iVar2,param_2,0x46,0,iVar6);
          return 0;
        }
        if (iVar7 != 0x10049) {
          return 0;
        }
        FUN_004c87d0(iVar2,param_2,0x49,0,iVar6);
        return 0;
      }
      FUN_004c87d0(iVar2,param_2,0x42,0,iVar6);
      return 0;
    default:
      return 0;
    case 3:
      if (*(uint *)(iVar2 + 0x3b8) == 0) {
        *(undefined4 *)(iVar2 + 0x174) = 0;
        *(undefined4 *)(iVar2 + 0x3b8) = 0;
        InvalidateRect(*(HWND *)(iVar2 + 4),(RECT *)(iVar2 + 0x3a8),0);
        return 0;
      }
      uVar13 = *(uint *)(iVar2 + 0x3b8) & 0xffff;
      lpRect = (RECT *)(iVar2 + 0x3a8);
      InvalidateRect(*(HWND *)(iVar2 + 4),lpRect,0);
      uVar4 = *(uint *)(iVar2 + 0x174);
      if ((0x100bf < uVar4) && (uVar4 < 0x10100)) {
        FUN_004592f0(iVar2,lpRect,(uint)*(byte *)(iVar2 + 0xce0) << 8 | uVar4,&LAB_004cb980,
                     iVar2 + 0x38c);
      }
      *(undefined4 *)(iVar2 + 0x174) = 0;
      *(undefined4 *)(iVar2 + 0x3b8) = 0;
      InvalidateRect(*(HWND *)(iVar2 + 4),lpRect,0);
      if (uVar13 == 0) {
        return 0;
      }
      FUN_004c87d0(iVar2,param_2,uVar13,0,*(undefined4 *)(iVar2 + 0xce4));
      return 0;
    case 4:
      FUN_004cca00(iVar2,local_14._8_4_,local_8,1);
      return 0;
    case 0xe:
      FUN_004ca4b0(iVar2,(*(int *)(iVar2 + 0xb0) - *(int *)(iVar2 + 0x90)) + local_14._8_4_,0);
      return 0;
    case 0xf:
      uVar4 = *(int *)(iVar2 + 0xacc) + -2;
      if ((int)local_8 <= (int)uVar4) {
        uVar4 = local_8;
      }
      param_5 = *(uint **)(iVar2 + 0xbb0);
      param_2 = *(HWND *)(iVar2 + 0xbac);
      uVar13 = ((uint)param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f) >> 1;
      lVar1 = (longlong)(int)((*(int *)(iVar2 + 0xb4) - *(int *)(iVar2 + 0x94)) + uVar4) *
              (longlong)(int)param_2;
      if (lVar1 < 0) {
        lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar13),
                         (uint)lVar1 - uVar13);
        uVar13 = 0;
      }
      param_4 = (uint)((longlong)(lVar1 + (ulonglong)uVar13) / (longlong)(int)param_5);
      iVar7 = *(int *)(iVar2 + 0xce4);
      *(uint *)(iVar7 + 0x10) =
           (uint)((int)param_4 < 0x24) << 0x10 | *(uint *)(iVar7 + 0x10) & 0xfffeffff;
      iVar6 = param_4;
      if ((int)param_4 < 0x24 != 0) {
        iVar6 = *(int *)(iVar2 + 0xe0);
      }
      uVar14 = 0;
    }
  }
  else {
    if (0x200 < uVar4) {
      if (uVar4 != 0x201) {
        return 0;
      }
switchD_004cd972_caseD_203:
      if (*(int *)(iVar2 + 0xa4) == 3) {
        return 0;
      }
      if (*(int *)(iVar2 + 0xa4) != 0) {
        return 0;
      }
      *(undefined4 *)(iVar2 + 0x90) = local_14._8_4_;
      *(undefined4 *)(iVar2 + 0xa8) = local_14._8_4_;
      *(uint *)(iVar2 + 0x94) = local_8;
      *(uint *)(iVar2 + 0xac) = local_8;
      uVar13 = *(uint *)(iVar2 + 0x174);
      *(uint *)(iVar2 + 0x18) =
           (uint)(uVar4 == 0x203) << 0x11 | *(uint *)(iVar2 + 0x18) & 0xfffdffff;
      if (uVar13 == 0x10001) {
        if ((uVar4 == 0x203) != 0) {
          FUN_004ca5a0(iVar2);
          return 0;
        }
        *(undefined4 *)(iVar2 + 0xa4) = 1;
        *(int *)(iVar2 + 0xb0) = *(int *)(iVar2 + 0x374) + -5;
        *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(iVar2 + 0x3a4);
      }
      else if (uVar13 == 0x10002) {
        *(undefined4 *)(iVar2 + 0xa4) = 1;
        iVar6 = *(int *)(*(int *)(iVar2 + 0xce4) + 0x69c);
        *(int *)(iVar2 + 0xb4) = *(int *)(iVar6 + 0x24) - *(int *)(iVar6 + 0x1c);
        *(undefined4 *)(iVar2 + 0xe0) = *(undefined4 *)(*(int *)(iVar2 + 0xce4) + 0x694);
      }
      else {
        if (uVar13 == 0x10012) {
          *(undefined4 *)(iVar2 + 0xa4) = 0x13;
          if (0x14 < (int)local_14._8_4_) goto LAB_004cda70;
        }
        else {
          if ((0x100c4 < uVar13) && (uVar13 < 0x100ca)) {
            *(uint *)(iVar2 + 0x3b8) = uVar13;
            *(undefined4 *)(iVar2 + 0xa4) = 3;
            InvalidateRect(*(HWND *)(iVar2 + 4),(RECT *)(iVar2 + 0x3a8),0);
            goto LAB_004cda70;
          }
          param_4 = *(uint *)(iVar2 + 0xce4);
          if (((uVar5 & 8) == 0) || (param_4 == 0)) {
            iVar6 = *(int *)(iVar2 + 0xce0);
            if (*(int *)(iVar2 + 0xce0) == -2) {
              if ((*(int *)(iVar2 + 0xbc8) == 0) ||
                 (iVar6 = FUN_005b87b0(*(int *)(iVar2 + 0xbc8)), iVar6 == 0)) {
                iVar6 = 0;
              }
              else {
                iVar6 = _DAT_00000000;
                if (*(int *)(iVar2 + 0xbc8) != 0) {
                  piVar11 = (int *)FUN_005b87b0(*(int *)(iVar2 + 0xbc8));
                  iVar6 = *piVar11;
                }
              }
            }
            FUN_004cb540(iVar2,iVar6,(-(uint)((uVar5 & 4) != 0) & 0xfffffffd) + 4,0);
          }
          else {
            FUN_004cb540(iVar2,*(undefined4 *)(iVar2 + 0xce0),(uVar5 & 4 | 8) >> 2,0);
          }
          uVar13 = param_4;
          uVar4 = *(uint *)(iVar2 + 0x174);
          if (uVar4 == 0x100d4) {
            if ((*(uint *)(param_4 + 0x10) & 0x80000) == 0) {
              return 0;
            }
            if ((*(uint *)(param_4 + 0x10) & 0x10000) != 0) {
              return 0;
            }
            iVar6 = *(int *)(*(int *)(param_4 + 0x69c) + 0x54);
            iVar12 = FUN_005382e0(1);
            iVar7 = FUN_005be610(1,local_34);
            iVar12 = (int)(local_8 - *(int *)(iVar6 + 0x118)) / iVar12;
            if (iVar12 < 0) {
              return 0;
            }
            if (iVar7 <= iVar12) {
              return 0;
            }
            if ((*(uint *)(iVar2 + 0x18) & 0x20000) == 0) {
              FUN_005c01d0(iVar12,local_34);
              return 0;
            }
            local_14._0_4_ = *(LONG *)(iVar6 + 0x114);
            local_14._4_4_ = *(LONG *)(iVar6 + 0x120);
            local_14._8_4_ = local_14._0_4_;
            local_8 = local_14._4_4_;
            MapWindowPoints(*(HWND *)(iVar2 + 4),(HWND)0x0,(LPPOINT)local_14,2);
            FUN_005c00a0(iVar12,local_34,local_14._0_4_,local_14._4_4_,local_14._8_4_,local_8);
            return 0;
          }
          if (uVar4 == 0x100d0) {
            if (((param_4 != 0) && ((*(uint *)(iVar2 + 0x18) & 0x20000) == 0)) &&
               (1 < *(int *)(*(int *)(iVar2 + 0x5d0) + 0xc))) {
              FUN_004c51e0(iVar2,param_4);
            }
            *(undefined4 *)(iVar2 + 0xa4) = 0;
            return 0;
          }
          if (uVar4 == 0x100d1) {
            if ((param_4 != 0) && ((*(uint *)(iVar2 + 0x18) & 0x20000) == 0)) {
              FUN_004c52e0(iVar2,param_4);
            }
            *(undefined4 *)(iVar2 + 0xa4) = 0;
            return 0;
          }
          if (uVar4 == 0x100d2) {
            if ((param_4 != 0) && ((*(uint *)(iVar2 + 0x18) & 0x20000) == 0)) {
              if (DAT_0064b4e4 == 0) {
                iVar6 = FUN_00601ab0(&param_2,&param_4,1);
                if (iVar6 < 0) {
                  DAT_0064b4f0 = 1;
                }
                else {
                  uVar4 = (param_4 & 0xffff) >> 8;
                  if ((int)DAT_0064b4e4 <= (int)uVar4) {
                    DAT_0064b4f0 = 0;
                    _DAT_0064b4f4 = (int)param_2;
                    DAT_0064b4e4 = uVar4;
                  }
                }
              }
              if (0x20 < (int)DAT_0064b4e4) {
                if (DAT_0064b4e0 == 0) {
                  iVar6 = FUN_00601ab0(&param_1,&param_5,1);
                  if (iVar6 < 0) {
                    DAT_0064b4f0 = 1;
                  }
                  else if ((int)DAT_0064b4e0 <= (int)((uint)param_5 & 0xff)) {
                    DAT_0064b4f0 = 0;
                    _DAT_0064b4f4 = param_1;
                    DAT_0064b4e0 = (uint)param_5 & 0xff;
                  }
                }
                if (0x20 < (int)DAT_0064b4e0) {
                  FUN_004c50f0(iVar2,uVar13);
                  goto LAB_004cddb6;
                }
              }
              if (DAT_0064b578 != 0) {
                FUN_0057a990(DAT_00647624,0x12);
                *(undefined4 *)(iVar2 + 0xa4) = 0;
                return 0;
              }
            }
LAB_004cddb6:
            *(undefined4 *)(iVar2 + 0xa4) = 0;
            return 0;
          }
          if (((0x100bf < uVar4) && (uVar4 < 0x10100)) || ((0x10002 < uVar4 && (uVar4 < 6)))) {
            *(uint *)(iVar2 + 0x3b8) = uVar4;
            *(undefined4 *)(iVar2 + 0xa4) = 3;
            InvalidateRect(*(HWND *)(iVar2 + 4),(RECT *)(iVar2 + 0x3a8),0);
            goto LAB_004cda70;
          }
        }
        *(undefined4 *)(iVar2 + 0xa4) = 1;
      }
LAB_004cda70:
      FUN_004592f0(iVar2,0,0,0,0);
      SetCapture(*(HWND *)(iVar2 + 4));
      return 0;
    }
    if (uVar4 != 0x200) {
      if (uVar4 == 0x1f) {
        iVar6 = *(int *)(iVar2 + 0xa4);
        if (iVar6 == 4) {
          FUN_004cca00(iVar2,local_14._8_4_,local_8,0);
        }
        else if (iVar6 == 0xe) {
          FUN_004ca4b0(iVar2,*(undefined4 *)(iVar2 + 0xe0),0);
        }
        else if (iVar6 == 0xf) {
          FUN_004ca5c0(iVar2,*(undefined4 *)(iVar2 + 0xce4),0xffffffff,*(undefined4 *)(iVar2 + 0xe0)
                       ,0);
        }
        *(undefined4 *)(iVar2 + 0x3b8) = 0;
        *(undefined4 *)(iVar2 + 0xa4) = 0;
        pHVar8 = GetCapture();
        if (pHVar8 == *(HWND *)(iVar2 + 4)) {
          ReleaseCapture();
        }
        UpdateWindow(*(HWND *)(iVar2 + 4));
        return 0;
      }
      if (uVar4 != 0x7b) {
        return 0;
      }
      iVar6 = *(int *)(iVar2 + 0xce4);
      param_4 = 2;
      if ((*(byte *)(iVar2 + 0x358) & 1) == 0) {
        if (*(int *)(iVar2 + 0xbc8) == 0) {
          iVar6 = 0;
        }
        else {
          iVar6 = FUN_005b87b0(*(int *)(iVar2 + 0xbc8));
        }
        iVar6 = *(int *)(*(int *)(iVar6 + 8) + *(int *)(iVar2 + 0xcbc) * 4);
      }
      if ((iVar6 != 0) && (param_4 = 0, *(int *)(iVar6 + 4) == 3)) {
        param_4 = 1;
      }
      iVar7 = *(int *)(iVar2 + 0x174);
      if ((iVar7 == 0x10023) && ((*(byte *)(iVar2 + 0x358) & 1) != 0)) {
        param_4 = 0xe;
      }
      if ((iVar7 == 0x10012) && ((*(byte *)(iVar2 + 0x358) & 1) != 0)) {
        FUN_00439c40(DAT_00647630,*(undefined4 *)(DAT_0064762c + 0xac),
                     *(undefined4 *)(iVar2 + 0x35c),*(undefined4 *)(iVar2 + 0x360));
        return 0;
      }
      if ((iVar7 == 0x100d0) && ((*(byte *)(iVar2 + 0x358) & 1) != 0)) {
        iVar6 = *(int *)(*(int *)(*(int *)(iVar2 + 0xce4) + 0x69c) + 0x54);
        FUN_004cbbe0(iVar2,*(undefined4 *)(iVar2 + 0x35c),*(undefined4 *)(iVar2 + 0x360));
        InvalidateRect(*(HWND *)(iVar2 + 4),(RECT *)(iVar6 + 0xe4),0);
        return 0;
      }
      if ((iVar7 == 0x100ca) && ((*(byte *)(iVar2 + 0x358) & 1) != 0)) {
        FUN_004cbeb0(iVar2,*(undefined4 *)(iVar2 + 0x35c),*(undefined4 *)(iVar2 + 0x360));
        return 0;
      }
      if (iVar7 == 0x100d4) {
        FUN_004cc160(iVar2,*(undefined4 *)(iVar2 + 0x35c),*(undefined4 *)(iVar2 + 0x360));
        return 0;
      }
      iVar7 = FUN_004047d0(0x7d,param_4);
      if ((param_4 == 1) && (uVar4 = FUN_005b87c0(3), uVar4 < 2)) {
        _SfCullMenu_16(iVar7,&DAT_0063ebcc,2,1);
      }
      if (iVar7 == 0) {
        return 0;
      }
      FUN_004c72b0(iVar2,param_2,iVar7,&param_4,iVar6);
      iVar7 = FUN_00404830(*(undefined4 *)(iVar2 + 4),iVar7,iVar2 + 0x35c,2);
      if (iVar7 == 0) {
        return 0;
      }
      FUN_004c87d0(iVar2,param_2,iVar7,param_4,iVar6);
      return 0;
    }
    pHVar8 = *(HWND *)(iVar2 + 4);
    param_2 = pHVar8;
    pHVar9 = GetCapture();
    if (pHVar9 != pHVar8) {
      uVar4 = *(uint *)(iVar2 + 0x174);
      uVar13 = 0;
      iVar6 = 0;
      if ((0x100bf < uVar4) && (uVar4 < 0x10100)) {
        iVar6 = iVar2 + 0x3a8;
        uVar13 = (uint)*(byte *)(iVar2 + 0xce0) << 8 | uVar4;
      }
      FUN_004592f0(iVar2,iVar6,uVar13,&LAB_004cb980,iVar2 + 0x38c);
      return 0;
    }
    switch(*(undefined4 *)(iVar2 + 0xa4)) {
    case 1:
      iVar6 = *(int *)(iVar2 + 200);
      param_4 = uVar5 & 2;
      if (param_4 != 0) {
        iVar6 = iVar6 << 1;
      }
      iVar7 = local_14._8_4_ - *(int *)(iVar2 + 0x90);
      if ((((-iVar6 <= iVar7) && (iVar7 <= iVar6)) &&
          (iVar7 = local_8 - *(int *)(iVar2 + 0x94), -iVar6 <= iVar7)) && (iVar7 <= iVar6)) {
        return 0;
      }
      if ((param_4 != 0) && ((uVar5 & 1) == 0)) {
        *(undefined4 *)(iVar2 + 0xa4) = 0x13;
        return 0;
      }
      iVar6 = *(int *)(iVar2 + 0x174);
      if (iVar6 == 0x10001) {
        *(undefined4 *)(iVar2 + 0xa4) = 0xe;
        FUN_004ca4b0(iVar2,(*(int *)(iVar2 + 0xb0) - *(int *)(iVar2 + 0x90)) + local_14._8_4_,1);
        return 0;
      }
      if (iVar6 != 0x10002) {
        if (iVar6 != 0x10012) {
          iVar6 = FUN_004cc790(iVar2,local_14._8_4_,local_8);
          *(uint *)(iVar2 + 0xa4) = -(uint)(iVar6 != 0) & 4;
          return 0;
        }
        iVar6 = *(int *)(iVar2 + 0x5d0);
        local_14._4_4_ = *(LONG *)(iVar6 + 0x18);
        local_14._8_4_ = *(LONG *)(iVar6 + 0x1c);
        local_8 = *(LONG *)(iVar6 + 0x20);
        local_14._0_4_ = 0;
        InvalidateRect(param_2,(RECT *)local_14,1);
        *(undefined4 *)(iVar2 + 0xa4) = 0;
        ReleaseCapture();
        local_14._0_4_ = *(LONG *)(iVar6 + 0x14);
        local_14._4_4_ = *(LONG *)(iVar6 + 0x18);
        local_14._8_4_ = *(LONG *)(iVar6 + 0x1c);
        local_8 = *(LONG *)(iVar6 + 0x20);
        MapWindowPoints(*(HWND *)(iVar2 + 4),(HWND)0x0,(LPPOINT)local_14,2);
        DAT_00649424 = 1;
        FUN_0043a120(*(undefined4 *)(DAT_0064762c + 0xac),local_14,1);
        return 0;
      }
      uVar4 = *(int *)(iVar2 + 0xacc) + -2;
      *(undefined4 *)(iVar2 + 0xa4) = 0xf;
      if ((int)local_8 <= (int)uVar4) {
        uVar4 = local_8;
      }
      param_5 = *(uint **)(iVar2 + 0xbb0);
      param_2 = *(HWND *)(iVar2 + 0xbac);
      uVar13 = ((uint)param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f) >> 1;
      lVar1 = (longlong)(int)((*(int *)(iVar2 + 0xb4) - *(int *)(iVar2 + 0x94)) + uVar4) *
              (longlong)(int)param_2;
      if (lVar1 < 0) {
        lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar13),
                         (uint)lVar1 - uVar13);
        uVar13 = 0;
      }
      param_4 = (uint)((longlong)(lVar1 + (ulonglong)uVar13) / (longlong)(int)param_5);
      iVar7 = *(int *)(iVar2 + 0xce4);
      uVar4 = (uint)((int)param_4 < 0x24);
      *(uint *)(iVar7 + 0x10) = uVar4 << 0x10 | *(uint *)(iVar7 + 0x10) & 0xfffeffff;
      break;
    default:
      return 0;
    case 3:
      iVar6 = 0;
      pt.y = local_8;
      pt.x = local_14._8_4_;
      BVar10 = PtInRect((RECT *)(iVar2 + 0x3a8),pt);
      if (BVar10 != 0) {
        iVar6 = *(int *)(iVar2 + 0x174);
      }
      if (iVar6 == *(int *)(iVar2 + 0x3b8)) {
        return 0;
      }
      *(int *)(iVar2 + 0x3b8) = iVar6;
      InvalidateRect(*(HWND *)(iVar2 + 4),(RECT *)(iVar2 + 0x3a8),0);
      return 0;
    case 4:
      FUN_004cc8c0(iVar2,local_14._8_4_,local_8);
      return 0;
    case 0xe:
      FUN_004ca4b0(iVar2,(*(int *)(iVar2 + 0xb0) - *(int *)(iVar2 + 0x90)) + local_14._8_4_,1);
      return 0;
    case 0xf:
      uVar4 = *(int *)(iVar2 + 0xacc) + -2;
      if ((int)local_8 <= (int)uVar4) {
        uVar4 = local_8;
      }
      param_5 = *(uint **)(iVar2 + 0xbb0);
      param_2 = *(HWND *)(iVar2 + 0xbac);
      uVar13 = ((uint)param_5 ^ (int)param_5 >> 0x1f) - ((int)param_5 >> 0x1f) >> 1;
      lVar1 = (longlong)(int)((*(int *)(iVar2 + 0xb4) - *(int *)(iVar2 + 0x94)) + uVar4) *
              (longlong)(int)param_2;
      if (lVar1 < 0) {
        lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar13),
                         (uint)lVar1 - uVar13);
        uVar13 = 0;
      }
      param_4 = (uint)((longlong)(lVar1 + (ulonglong)uVar13) / (longlong)(int)param_5);
      iVar7 = *(int *)(iVar2 + 0xce4);
      uVar4 = (uint)((int)param_4 < 0x24);
      *(uint *)(iVar7 + 0x10) = uVar4 << 0x10 | *(uint *)(iVar7 + 0x10) & 0xfffeffff;
    }
    iVar6 = param_4;
    if (uVar4 != 0) {
      iVar6 = *(int *)(iVar2 + 0xe0);
    }
    uVar14 = 1;
  }
  FUN_004ca5c0(iVar2,iVar7,0xffffffff,iVar6,uVar14);
  return 0;
}


