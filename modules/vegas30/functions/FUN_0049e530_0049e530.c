/* Module: vegas30.exe
   Function: FUN_0049e530
   Address: 0049e530
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0049e71d) */

undefined4 FUN_0049e530(int param_1,HMENU param_2,uint param_3,int param_4)

{
  longlong lVar1;
  tagPOINT tVar2;
  HWND pHVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  longlong lVar12;
  undefined4 local_64;
  undefined8 local_60;
  int local_58;
  uint local_54;
  uint local_50 [2];
  longlong local_48;
  uint local_40;
  int local_3c;
  tagPOINT local_38;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  undefined1 local_20 [32];
  
  iVar10 = param_1;
  iVar9 = (int)(short)param_4;
  iVar8 = *(int *)(param_1 + 0xce4);
  iVar7 = *(int *)(param_1 + 0xcf0);
  local_64 = 0;
  local_24 = (int)(short)((uint)param_4 >> 0x10);
  if (iVar8 == 0) {
    return 0;
  }
  if (*(int *)(iVar8 + 4) != 3) {
    return 0;
  }
  param_4 = *(int *)(param_1 + 0xce8);
  local_58 = iVar7;
  param_1 = FUN_005be610(1,local_20);
  uVar5 = *(uint *)(iVar8 + 0x10);
  if (((uVar5 & 0x80000) == 0) || (local_60._0_4_ = 1, (uVar5 & 0x10000) != 0)) {
    local_60._0_4_ = 0;
  }
  local_54 = (uint)(*(int *)(iVar10 + 0xadc) == 1);
  if (param_2 < 0x203) {
    if (param_2 == (HMENU)0x202) {
      pHVar3 = GetCapture();
      if ((pHVar3 == *(HWND *)(iVar10 + 4)) && (*(int *)(iVar10 + 0xa4) == 1)) {
        local_64 = 1;
        FUN_005c01d0(iVar7,local_20);
        param_2 = (HMENU)(iVar9 - *(int *)(iVar10 + 0xac0));
        lVar12 = ftol();
        iVar7 = DAT_0064a508;
        if ((DAT_0064a508 != 0) || (DAT_0064ca80 != 0)) {
          DAT_0064a508 = 1;
        }
        FUN_00453340(iVar10,(lVar12 - *(longlong *)(iVar10 + 0x1a0)) + *(longlong *)(iVar10 + 0xb88)
                     ,0,0,(param_3 & 4) << 2 | 1);
        DAT_0064a508 = iVar7;
        *(undefined4 *)(iVar10 + 0xa4) = 0;
        ReleaseCapture();
      }
      if (*(int *)(iVar10 + 0xa4) == 0xd) {
        local_64 = 1;
        FUN_005c0420(1);
        *(undefined4 *)(iVar10 + 0xa4) = 0;
        ReleaseCapture();
      }
      if (local_54 == 0) {
        return local_64;
      }
      FUN_0052c1c0(iVar10,iVar8);
      return local_64;
    }
    if ((param_2 == (HMENU)0x1f) || (param_2 == (HMENU)0x200)) {
      pHVar3 = GetCapture();
      if (pHVar3 != *(HWND *)(iVar10 + 4)) {
        return 0;
      }
      param_2 = (HMENU)(uint)(param_2 == (HMENU)0x1f);
      if (*(int *)(iVar10 + 0xa4) == 1) {
        iVar4 = iVar9 - *(int *)(iVar10 + 0x90);
        if ((-*(int *)(iVar10 + 200) <= iVar4) && (iVar4 <= *(int *)(iVar10 + 200))) {
          return 0;
        }
        *(undefined4 *)(iVar10 + 0xa4) = 0xd;
        FUN_005c03a0(iVar7,local_20,0x236);
      }
      else if (*(int *)(iVar10 + 0xa4) != 0xd) {
        return 0;
      }
      if (*(char *)(iVar10 + 0x174) != '\x01') {
        return 1;
      }
      local_40 = *(uint *)(iVar10 + 0xb88);
      local_38.x = *(uint *)(iVar10 + 0xb90);
      local_38.y = *(int *)(iVar10 + 0xb94);
      local_50[0] = iVar9 - *(int *)(iVar10 + 0xac0);
      local_3c = *(int *)(iVar10 + 0xb8c);
      lVar12 = ftol();
      lVar12 = (lVar12 - *(longlong *)(iVar10 + 0x1a0)) + CONCAT44(local_3c,local_40);
      local_50[0] = local_40 + local_38.x;
      lVar1 = CONCAT44(local_3c + local_38.y + (uint)CARRY4(local_40,local_38.x),local_50[0]);
      if (lVar1 <= lVar12) {
        lVar12 = lVar1;
      }
      if ((param_3 & 4) == 0) {
        local_48 = lVar12;
        lVar12 = FUN_00494da0(iVar10,lVar12);
      }
      local_48 = lVar12;
      FUN_005bec40(iVar7,param_4,local_20,0,&local_28,local_50,0,&local_40);
      if (param_2 != (HMENU)0x0) {
        local_48 = CONCAT44(local_3c,local_40);
      }
      if (local_48 != CONCAT44(local_24,local_28)) {
        FUN_005c0400();
        FUN_005bee80(iVar7,param_4,local_20,0,&local_48,0,0,0);
        tVar2.y = local_38.y;
        tVar2.x = local_38.x;
        if ((local_54 == 0) || (local_50[0] == 0)) {
          if (((int)local_60 == 0) && (iVar9 = 0, local_38 = tVar2, 0 < param_1)) {
            do {
              param_3 = FUN_005be910(iVar9,local_20);
              if ((param_3 != 0) && (iVar7 = 0, 0 < (int)param_3)) {
                do {
                  FUN_005bec40(iVar9,iVar7,local_20,0,0,&local_54,0,0);
                  if (local_54 != 0) {
                    FUN_005bee80(iVar9,iVar7,local_20,0,&local_48,0,0,0);
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)param_3);
              }
              if (iVar9 != local_58) {
                FUN_005bf6b0(iVar9,local_20,0);
              }
              iVar9 = iVar9 + 1;
              iVar7 = local_58;
            } while (iVar9 < param_1);
          }
        }
        else {
          local_38 = (tagPOINT)(local_48 - CONCAT44(local_3c,local_40));
          iVar9 = 0;
          if (0 < param_1) {
            do {
              param_3 = FUN_005be910(iVar9,local_20);
              if ((param_3 != 0) && (iVar7 = 0, 0 < (int)param_3)) {
                do {
                  FUN_005bec40(iVar9,iVar7,local_20,0,0,&local_54,0,&local_40);
                  if (local_54 != 0) {
                    local_60 = (longlong)local_38 + CONCAT44(local_3c,local_40);
                    FUN_005bee80(iVar9,iVar7,local_20,0,&local_60,0,0,0);
                  }
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)param_3);
              }
              if (iVar9 != local_58) {
                FUN_005bf6b0(iVar9,local_20,0);
              }
              iVar9 = iVar9 + 1;
              iVar7 = local_58;
            } while (iVar9 < param_1);
          }
        }
        FUN_005bf6b0(iVar7,local_20,&param_4);
        *(int *)(iVar10 + 0xce8) = param_4;
        InvalidateRect(*(HWND *)(iVar10 + 4),(RECT *)(*(int *)(iVar8 + 0x69c) + 0x18),0);
        if (param_2 != (HMENU)0x0) {
          *(undefined4 *)(iVar10 + 0xa4) = 0;
          ReleaseCapture();
          FUN_005c0420(0);
        }
      }
      DAT_0064767c = DAT_0064767c | 0x40800;
      return 1;
    }
    if (param_2 != (HMENU)0x201) {
      return 0;
    }
LAB_0049ee0c:
    uVar6 = *(uint *)(iVar10 + 0x174) & 0xff;
    if (uVar6 == 1) {
      *(undefined4 *)(iVar10 + 0xa4) = 1;
      SetCapture(*(HWND *)(iVar10 + 4));
      DAT_0064ca80 = 0;
      bVar11 = param_2 == (HMENU)0x203;
      if (bVar11) {
        local_38.y = local_24;
        local_2c = local_24;
        local_38.x = iVar9;
        local_30 = iVar9;
        MapWindowPoints(*(HWND *)(iVar10 + 4),(HWND)0x0,&local_38,2);
        FUN_005c00a0(iVar7,local_20,local_38.x,local_38.y,local_30,local_2c);
      }
      DAT_0064ca80 = (uint)bVar11;
      FUN_005bec40(iVar7,param_4,local_20,0,&local_40,local_50,0,0);
      FUN_005bee80(iVar7,param_4,local_20,0,0,0,0,&local_40);
      param_3 = iVar9 - *(int *)(iVar10 + 0xac0);
      lVar12 = ftol();
      *(int *)(iVar10 + 0x90) = iVar9;
      *(longlong *)(iVar10 + 0x1a0) =
           (lVar12 + *(longlong *)(iVar10 + 0xb88)) - CONCAT44(local_3c,local_40);
      *(int *)(iVar10 + 0x94) = local_24;
      if ((local_54 == 0) || (local_50[0] == 0)) {
        if (((int)local_60 == 0) && (iVar8 = 0, 0 < param_1)) {
          do {
            iVar7 = FUN_005be910(iVar8,local_20);
            if ((iVar7 != 0) && (iVar10 = 0, 0 < iVar7)) {
              do {
                FUN_005bec40(iVar8,iVar10,local_20,0,&local_28,0,0,0);
                if ((local_40 != local_28) || (param_3 = 1, local_3c != local_24)) {
                  param_3 = 0;
                }
                FUN_005bee80(iVar8,iVar10,local_20,0,0,&param_3,0,0);
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar7);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < param_1);
        }
      }
      else {
        iVar8 = 0;
        if (0 < param_1) {
          do {
            iVar7 = FUN_005be910(iVar8,local_20);
            if ((iVar7 != 0) && (iVar10 = 0, 0 < iVar7)) {
              do {
                FUN_005bec40(iVar8,iVar10,local_20,0,&local_28,&param_3,0,0);
                if (param_3 != 0) {
                  FUN_005bee80(iVar8,iVar10,local_20,0,0,0,0,&local_28);
                }
                iVar10 = iVar10 + 1;
              } while (iVar10 < iVar7);
            }
            iVar8 = iVar8 + 1;
          } while (iVar8 < param_1);
          return 1;
        }
      }
      return 1;
    }
    if (uVar6 != 2) {
      return 0;
    }
    uVar6 = param_3 & 4;
    if ((uVar6 == 0) && (param_2 != (HMENU)0x203)) {
      return 0;
    }
    param_2 = (HMENU)uVar6;
    if ((int)local_60 == 0) {
      FUN_004c8590(iVar10,iVar8,uVar5 >> 0x12 & 1,1);
      return 1;
    }
    FUN_005c03a0(iVar7,local_20,0x237);
    FUN_005c0400();
    param_3 = iVar9 - *(int *)(iVar10 + 0xac0);
    lVar12 = ftol();
    lVar12 = lVar12 + *(longlong *)(iVar10 + 0xb88);
    if (param_2 == (HMENU)0x0) {
      lVar12 = FUN_00494da0(iVar10,lVar12);
    }
    FUN_005bf2c0(iVar7,local_20,lVar12);
  }
  else {
    if (param_2 == (HMENU)0x203) goto LAB_0049ee0c;
    if ((param_2 != (HMENU)0x204) && (param_2 != (HMENU)0x206)) {
      return 0;
    }
    if (*(int *)(iVar10 + 0xa4) != 0) {
      return 0;
    }
    uVar5 = *(uint *)(iVar10 + 0x174) & 0xff;
    if (uVar5 == 1) {
      param_2 = (HMENU)FUN_004047d0(0x7e,5);
    }
    else {
      if (uVar5 != 2) {
        return 1;
      }
      param_2 = (HMENU)FUN_004047d0(0x7e,7 - (uint)((int)local_60 != 0));
      SetMenuDefaultItem(param_2,0xc877,0);
    }
    if (param_2 == (HMENU)0x0) {
      return 1;
    }
    if (param_4 < 0) {
      EnableMenuItem(param_2,0x2265,1);
      EnableMenuItem(param_2,0x2264,1);
      EnableMenuItem(param_2,0x2266,1);
      EnableMenuItem(param_2,0x2267,1);
      EnableMenuItem(param_2,0x2268,1);
    }
    else {
      FUN_005bec40(iVar7,param_4,local_20,&param_1,0,0,0,0);
      CheckMenuRadioItem(param_2,0x2264,0x2268,param_1 + 0x2264,0);
    }
    param_1 = FUN_005be910(iVar7,local_20);
    if (param_1 < 2) {
      EnableMenuItem(param_2,0xc876,1);
    }
    GetCursorPos(&local_38);
    local_38.y = local_38.y + 4;
    param_2 = (HMENU)FUN_00404830(*(undefined4 *)(iVar10 + 4),param_2,&local_38,2);
    if (param_2 == (HMENU)0x0) {
      return 1;
    }
    if (param_2 == (HMENU)0xc876) {
      if (param_1 < 2) {
        return 1;
      }
      FUN_005c03a0(iVar7,local_20,0x237);
      FUN_005c0400();
      FUN_005bf120(iVar7,param_4,local_20);
      goto LAB_0049eed7;
    }
    if (param_2 != (HMENU)0xc877) {
      FUN_005c03a0(iVar7,local_20,0x236);
      FUN_005c0400();
      param_3 = (int)param_2 - 0x2264;
      FUN_005bee80(iVar7,param_4,local_20,&param_3,0,0,0,0);
      FUN_004530a0(iVar10,0);
      DAT_0064767c = DAT_0064767c | 0x40800;
      FUN_005c0420(1);
      return 1;
    }
    if ((int)local_60 == 0) {
      FUN_004c8590(iVar10,iVar8,*(uint *)(iVar8 + 0x10) >> 0x12 & 1,1);
      return 1;
    }
    FUN_005c03a0(iVar7,local_20,0x237);
    FUN_005c0400();
    param_2 = (HMENU)(iVar9 - *(int *)(iVar10 + 0xac0));
    lVar12 = ftol();
    lVar12 = lVar12 + *(longlong *)(iVar10 + 0xb88);
    if ((param_3 & 4) == 0) {
      lVar12 = FUN_00494da0(iVar10,lVar12);
    }
    FUN_005bf2c0(iVar7,local_20,lVar12);
  }
  FUN_005c01d0(iVar7,local_20);
LAB_0049eed7:
  FUN_004530a0(iVar10,0);
  DAT_0064767c = DAT_0064767c | 0x40800;
  FUN_005c0420(1);
  return 1;
}


