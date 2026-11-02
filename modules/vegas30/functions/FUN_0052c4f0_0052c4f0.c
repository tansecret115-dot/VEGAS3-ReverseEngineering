/* Module: vegas30.exe
   Function: FUN_0052c4f0
   Address: 0052c4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0052c4f0(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  HMENU hMenu;
  HWND pHVar4;
  LONG LVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined4 uVar12;
  UINT UVar13;
  undefined4 local_68 [22];
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = 0;
  iVar3 = *(int *)(param_1 + 0xcec);
  if ((iVar3 == 0) || (*(int *)(iVar3 + 0xb0) == 0)) {
    iVar3 = *(int *)(param_1 + 0xce4);
    if ((iVar3 != 0) && (*(int *)(iVar3 + 0x650) != 0)) {
      local_8 = iVar3 + 0x638;
    }
  }
  else {
    local_8 = iVar3 + 0x98;
  }
  if ((*(int *)(param_1 + 0xce4) != 0) && ((char)*(uint *)(param_1 + 0x174) != '\0')) {
    uVar2 = *(uint *)(param_1 + 0x174) & 0xf00;
    if (uVar2 == 0x400) {
      iVar3 = FUN_0047af10(local_8,param_3,param_4,param_5);
      return iVar3;
    }
    if ((uVar2 == 0x500) && (iVar3 = FUN_0049e530(param_1,param_3,param_4,param_5), iVar3 != 0)) {
      return iVar3;
    }
  }
  iVar3 = *(int *)(param_1 + 0xcec);
  if (((iVar3 != 0) && ((char)*(uint *)(param_1 + 0x174) != '\0')) &&
     ((*(uint *)(param_1 + 0x174) & 0xf00) == 0x100)) {
    iVar3 = FUN_0047af10(local_8,param_3,param_4,param_5);
    return iVar3;
  }
  local_10 = (int)(short)param_5;
  local_c = (int)(short)((uint)param_5 >> 0x10);
  if (0x203 < param_3) {
    if (0x206 < param_3) {
      if (param_3 != 0x404) {
        return 0;
      }
      pHVar4 = GetCapture();
      if (pHVar4 != *(HWND *)(param_1 + 4)) {
        FUN_00454f40(param_1);
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0xa4);
      if (iVar3 == 0x11) {
        iVar3 = *(int *)(param_1 + 0xac0);
        if ((local_10 < iVar3) || (iVar3 = *(int *)(param_1 + 0xac8), iVar3 < local_10)) {
          local_10 = iVar3;
        }
        FUN_00453cb0(param_1,local_10,local_c,0);
        return 0;
      }
      if (iVar3 != 0x14) {
        if (iVar3 == 0x17) {
          return 0;
        }
        FUN_00454f40(param_1);
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0xac0);
      if ((local_10 < iVar3) || (iVar3 = *(int *)(param_1 + 0xac8), iVar3 < local_10)) {
        local_10 = iVar3;
      }
      FUN_0049cbc0(param_1,local_10,local_c,0);
      return 0;
    }
    if ((param_3 != 0x206) && (param_3 != 0x204)) {
      if (param_3 != 0x205) {
        return 0;
      }
      if ((param_4 & 1) != 0) {
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0xa4) = 0;
      pHVar4 = GetCapture();
      if (pHVar4 != *(HWND *)(param_1 + 4)) {
        return 0;
      }
      ReleaseCapture();
      if (iVar3 != 1) {
        if (iVar3 == 4) {
          if ((*(uint *)(param_1 + 0x18) & 0x1000000) == 0) {
            return 0;
          }
          FUN_00499ea0(param_1,param_4,local_10,local_c);
          FUN_0049bda0(param_1,&local_10,1,0);
          return 0;
        }
        if (iVar3 != 0x10) {
          FUN_00455270(param_1,local_10,local_c,0,1);
          return 0;
        }
      }
      FUN_00455270(param_1,local_10,local_c,0,1);
      return 0;
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      return 0;
    }
    if ((param_4 & 1) != 0) {
      return 0;
    }
    FUN_00453000(param_1);
    *(uint *)(param_1 + 0x18) =
         (uint)(param_3 == 0x206) << 0x11 | *(uint *)(param_1 + 0x18) & 0xfffdffff;
    lVar10 = ftol();
    *(longlong *)(param_1 + 0x98) = lVar10 + *(longlong *)(param_1 + 0xb88);
    uVar2 = *(uint *)(param_1 + 0xbb0);
    uVar6 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f) >> 1;
    lVar10 = (longlong)(local_c - *(int *)(param_1 + 0xac4)) * (longlong)*(int *)(param_1 + 0xbac);
    if (lVar10 < 0) {
      lVar10 = CONCAT44((int)((ulonglong)lVar10 >> 0x20) - (uint)((uint)lVar10 < uVar6),
                        (uint)lVar10 - uVar6);
      uVar6 = 0;
    }
    *(int *)(param_1 + 0xa0) =
         *(int *)(param_1 + 0xba8) +
         (int)((longlong)(lVar10 + (ulonglong)uVar6) / (longlong)(int)uVar2);
    *(int *)(param_1 + 0x90) = local_10;
    *(int *)(param_1 + 0xa8) = local_10;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(int *)(param_1 + 0x94) = local_c;
    *(int *)(param_1 + 0xac) = local_c;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    SetCapture(*(HWND *)(param_1 + 4));
    iVar3 = FUN_0049cd80(param_1,*(undefined4 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0xce8));
    if (iVar3 == 0) {
      FUN_0049d060(param_1,param_1 + 0xce0,*(undefined4 *)(param_1 + 0x98),
                   *(undefined4 *)(param_1 + 0x9c));
    }
    uVar2 = *(uint *)(param_1 + 0x174);
    if (uVar2 == 4) {
      *(undefined4 *)(param_1 + 0xa4) = 1;
      return 0;
    }
    if (uVar2 == 8) {
LAB_0052cfa9:
      *(undefined4 *)(param_1 + 0xa4) = 0x10;
      return 0;
    }
    if (((uVar2 != 1) && (uVar2 != 2)) &&
       ((uVar2 != 0xfd && (((uVar2 & 0xf00) != 0x500 && (uVar2 != 0xfe)))))) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x18) & 0x40000) == 0) {
      if ((*(uint *)(param_1 + 0x18) & 0x20000) == 0) goto LAB_0052cfa9;
      if ((param_4 & 8) == 0) {
        FUN_004b8e60(param_1,param_4,local_10,local_c,uVar2);
        return 0;
      }
      if (*(int *)(param_1 + 0xbc8) != 0) {
        uVar11 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
        goto LAB_0052d026;
      }
    }
    else if (*(int *)(param_1 + 0xbc8) != 0) {
      uVar11 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
      FUN_00453a50(param_1,0,0,uVar11);
      return 0;
    }
    uVar11 = *(undefined8 *)(param_1 + 0x600);
LAB_0052d026:
    FUN_00453a50(param_1,0,0,uVar11);
    return 0;
  }
  if (param_3 == 0x203) {
LAB_0052cacf:
    if (*(int *)(param_1 + 0xa4) != 0) {
      return 0;
    }
    FUN_00453000(param_1);
    *(uint *)(param_1 + 0x18) =
         (uint)(param_3 == 0x203) << 0x11 | *(uint *)(param_1 + 0x18) & 0xfff9ffff;
    if ((param_3 == 0x203) == 0) {
      LVar5 = GetMessageTime();
      UVar13 = GetDoubleClickTime();
      if ((uint)(LVar5 - *(int *)(param_1 + 0xd0)) <= UVar13) {
        iVar3 = GetSystemMetrics(0x24);
        iVar7 = local_10 - *(int *)(param_1 + 0xd4);
        if ((((-iVar3 <= iVar7) && (iVar7 <= iVar3)) &&
            (iVar7 = local_c - *(int *)(param_1 + 0xd8), -iVar3 <= iVar7)) && (iVar7 <= iVar3)) {
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x40000;
        }
      }
      *(undefined4 *)(param_1 + 0xd0) = 0;
    }
    else {
      LVar5 = GetMessageTime();
      *(int *)(param_1 + 0xd4) = local_10;
      *(LONG *)(param_1 + 0xd0) = LVar5;
      *(int *)(param_1 + 0xd8) = local_c;
    }
    iVar3 = local_c;
    lVar10 = ftol();
    uVar2 = *(uint *)(param_1 + 0xbb0);
    *(longlong *)(param_1 + 0x98) = lVar10 + *(longlong *)(param_1 + 0xb88);
    uVar6 = (uVar2 ^ (int)uVar2 >> 0x1f) - ((int)uVar2 >> 0x1f) >> 1;
    lVar10 = (longlong)(iVar3 - *(int *)(param_1 + 0xac4)) * (longlong)*(int *)(param_1 + 0xbac);
    if (lVar10 < 0) {
      lVar10 = CONCAT44((int)((ulonglong)lVar10 >> 0x20) - (uint)((uint)lVar10 < uVar6),
                        (uint)lVar10 - uVar6);
      uVar6 = 0;
    }
    *(int *)(param_1 + 0xa0) =
         *(int *)(param_1 + 0xba8) +
         (int)((longlong)(lVar10 + (ulonglong)uVar6) / (longlong)(int)uVar2);
    *(int *)(param_1 + 0x90) = local_10;
    *(int *)(param_1 + 0xa8) = local_10;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(int *)(param_1 + 0x94) = local_c;
    *(int *)(param_1 + 0xac) = local_c;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    if ((*(uint *)(param_1 + 0x18) & 0x40000) == 0) {
      if ((*(uint *)(param_1 + 0x18) & 0x20000) == 0) {
        *(undefined4 *)(param_1 + 0xa4) = 0x10;
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
      if ((param_4 & 8) == 0) {
        if (*(int *)(param_1 + 0xce4) == 0) {
          FUN_004b8e60(param_1,param_4,local_10,local_c,*(undefined4 *)(param_1 + 0x174));
          SetCapture(*(HWND *)(param_1 + 4));
          return 0;
        }
        FUN_0049c910(param_1,param_4,local_10,local_c,*(undefined4 *)(param_1 + 0x174));
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
      if (*(int *)(param_1 + 0xbc8) != 0) {
        uVar11 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
        FUN_00453a50(param_1,0,0,uVar11);
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
    }
    else if (*(int *)(param_1 + 0xbc8) != 0) {
      uVar11 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
      FUN_00453a50(param_1,0,0,uVar11);
      SetCapture(*(HWND *)(param_1 + 4));
      return 0;
    }
    FUN_00453a50(param_1,0,0,*(undefined4 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x604));
    SetCapture(*(HWND *)(param_1 + 4));
    return 0;
  }
  if (0x200 < param_3) {
    if (param_3 != 0x201) {
      if (param_3 != 0x202) {
        return 0;
      }
      iVar3 = *(int *)(param_1 + 0xa4);
      if (iVar3 == 0x10) {
        uVar2 = (param_4 & 4) << 2;
        lVar10 = ftol();
        if (*(int *)(param_1 + 0x174) == 5) {
          uVar11 = *(undefined8 *)(*(int *)(param_1 + 0xcec) + 0x18);
        }
        else if (*(int *)(param_1 + 0x174) == 6) {
          iVar3 = *(int *)(param_1 + 0xcec);
          uVar11 = CONCAT44(*(int *)(iVar3 + 0x24) + *(int *)(iVar3 + 0x1c) +
                            (uint)CARRY4(*(uint *)(iVar3 + 0x20),*(uint *)(iVar3 + 0x18)),
                            *(uint *)(iVar3 + 0x20) + *(uint *)(iVar3 + 0x18));
        }
        else {
          uVar11 = FUN_00495290(param_1,&local_10,lVar10 + *(longlong *)(param_1 + 0xb88));
        }
        if (((param_4 & 8) == 0) || ((param_4 & 4) != 0)) {
          FUN_0049d060(param_1,param_1 + 0xce0,uVar11);
        }
        else if (*(int *)(param_1 + 0xcec) != 0) {
          FUN_0049d210(param_1,*(undefined4 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0xce8));
          goto LAB_0052caa9;
        }
        if ((*(uint *)(param_1 + 0x18) & 0x20000) == 0) {
          if (*(int *)(param_1 + 0x174) == 1) {
            uVar2 = uVar2 | 1;
          }
          FUN_00453340(param_1,uVar11,0,0,uVar2);
        }
      }
      else if (iVar3 == 0x11) {
        FUN_004b8f80(param_1,param_2,local_10,local_c,0);
      }
      else if (iVar3 == 0x14) {
        FUN_0049cd20(param_1,param_2,local_10,local_c,0);
      }
LAB_0052caa9:
      pHVar4 = GetCapture();
      if (pHVar4 == *(HWND *)(param_1 + 4)) {
        ReleaseCapture();
      }
      *(undefined4 *)(param_1 + 0xa4) = 0;
      return 0;
    }
    goto LAB_0052cacf;
  }
  if (param_3 == 0x200) {
    pHVar4 = GetCapture();
    if (pHVar4 != *(HWND *)(param_1 + 4)) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0xa4);
    if (iVar3 == 0x10) {
      iVar3 = local_10 - *(int *)(param_1 + 0x90);
      if ((*(int *)(param_1 + 200) * -2 <= iVar3) && (iVar3 <= *(int *)(param_1 + 200) * 2)) {
        return 0;
      }
      FUN_004b8e60(param_1,param_4,*(undefined4 *)(param_1 + 0x90),*(undefined4 *)(param_1 + 0x94),
                   *(undefined4 *)(param_1 + 0x174));
    }
    else if (iVar3 != 0x11) {
      if (iVar3 != 0x14) {
        return 0;
      }
      FUN_0049ccd0(param_1,param_2,param_4,local_10,local_c);
      return 0;
    }
    FUN_004b8f00(param_1,param_2,param_4,local_10,local_c);
    return 0;
  }
  if (param_3 == 0x1f) {
    if (local_8 != 0) {
      FUN_0047af10(local_8,0x1f,param_4,param_5);
    }
    *(undefined4 *)(param_1 + 0xa4) = 0;
    pHVar4 = GetCapture();
    if (pHVar4 == *(HWND *)(param_1 + 4)) {
      ReleaseCapture();
    }
    UpdateWindow(*(HWND *)(param_1 + 4));
    return 0;
  }
  if (param_3 != 0x7b) {
    return 0;
  }
  iVar7 = *(int *)(param_1 + 0xc9c);
  bVar1 = true;
  if (iVar7 != 0) {
    if (((*(int **)(iVar7 + 0x50) == (int *)0x0) || (**(int **)(iVar7 + 0x50) != 0x25)) &&
       (*(int *)(iVar7 + 0x4c) != 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  if (((iVar3 == 0) || (*(int *)(iVar3 + 4) != 3)) || (!bVar1)) {
    if (*(int *)(param_1 + 0xce4) != 0) {
      iVar3 = *(int *)(*(int *)(param_1 + 0xce4) + 4);
      if (iVar3 == 2) {
        hMenu = (HMENU)FUN_004047d0(0x7e,2);
        if (hMenu != (HMENU)0x0) {
          FUN_004c6bc0(param_1,*(undefined4 *)(param_1 + 0xce4),hMenu,1);
          uVar2 = DAT_00648690;
          CheckMenuItem(hMenu,0xa1ea,(DAT_00648690 & 1) << 3);
          uVar2 = (uVar2 & 2) << 2;
          UVar13 = 0xa1eb;
          goto LAB_0052c71d;
        }
      }
      else if ((iVar3 == 3) && (hMenu = (HMENU)FUN_004047d0(0x7e,3), hMenu != (HMENU)0x0)) {
        FUN_004c6b60(param_1,*(undefined4 *)(param_1 + 0xce4),hMenu,1);
        uVar2 = DAT_00648690;
        CheckMenuItem(hMenu,0xa280,DAT_00648690 >> 0x1a & 8);
        uVar2 = uVar2 >> 0x1b & 8;
        UVar13 = 0xa281;
LAB_0052c71d:
        CheckMenuItem(hMenu,UVar13,uVar2);
        goto LAB_0052c724;
      }
    }
LAB_0052c817:
    hMenu = (HMENU)FUN_004047d0(0x7d,2);
    uVar12 = *(undefined4 *)(param_1 + 4);
  }
  else {
    hMenu = (HMENU)FUN_004047d0(0x7e,4);
    if (hMenu == (HMENU)0x0) goto LAB_0052c817;
    puVar8 = (undefined4 *)(*(int *)(param_1 + 0xcec) + 0x98);
    puVar9 = local_68;
    for (iVar3 = 0x16; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar9 = *puVar8;
      puVar8 = puVar8 + 1;
      puVar9 = puVar9 + 1;
    }
    iVar3 = FUN_0047c7d0(local_68,0xca);
    CheckMenuItem(hMenu,0xa7bf,-(uint)(iVar3 != 0) & 8);
    CheckMenuItem(hMenu,0xa282,DAT_00648694 & 8);
LAB_0052c724:
    iVar3 = FUN_0052d940(param_1);
    uVar2 = (uint)(iVar3 == 0);
    EnableMenuItem(hMenu,0x9d0b,uVar2);
    EnableMenuItem(hMenu,0x9d0c,uVar2);
    EnableMenuItem(hMenu,0x9d0f,uVar2);
    iVar3 = FUN_004690d0(param_1);
    EnableMenuItem(hMenu,0x9d0d,(uint)(iVar3 == 0));
    uVar12 = *(undefined4 *)(param_1 + 4);
  }
  uVar2 = FUN_00404830(uVar12,hMenu,param_1 + 0x35c,2);
  if (uVar2 < 0xa2b4) {
    if (0xa2b1 < uVar2) {
LAB_0052c841:
      FUN_004c87d0(param_1,param_2,uVar2,0,0);
      return 0;
    }
    if ((0x9d11 < uVar2) && (uVar2 < 0x9d14)) {
      SendMessageA(DAT_00647624,0x111,uVar2,0);
      return 0;
    }
  }
  else if ((0xa347 < uVar2) && (uVar2 < 0xa34a)) goto LAB_0052c841;
  SendMessageA(*(HWND *)(param_1 + 4),0x111,uVar2,0);
  return 0;
}


