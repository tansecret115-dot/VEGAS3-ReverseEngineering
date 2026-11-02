/* Module: vegas30.exe
   Function: FUN_0049f1c0
   Address: 0049f1c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x0049fdd0) */
/* WARNING: Removing unreachable block (ram,0x0049fdf8) */
/* WARNING: Type propagation algorithm not settling */

int FUN_0049f1c0(int param_1,uint param_2,uint param_3,int *param_4,int param_5)

{
  undefined4 *puVar1;
  SHORT SVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  HMENU pHVar7;
  int *piVar8;
  HWND pHVar9;
  LONG LVar10;
  UINT UVar11;
  uint uVar12;
  int *piVar13;
  bool bVar14;
  longlong lVar15;
  undefined8 uVar16;
  int local_38 [4];
  int local_28;
  tagPOINT local_24;
  int local_1c;
  int local_18;
  tagPOINT local_14;
  int local_c;
  int local_8;
  
  iVar4 = param_5;
  uVar12 = param_3;
  if ((param_3 != 0x7b) || (param_5 != -1)) {
    if ((*(int *)(param_1 + 0xce4) != 0) && ((char)*(uint *)(param_1 + 0x174) != '\0')) {
      uVar3 = *(uint *)(param_1 + 0x174) & 0xf00;
      if (uVar3 == 0x400) {
        iVar4 = FUN_0047af10(*(int *)(param_1 + 0xce4) + 0x638,param_3,param_4,param_5);
        return iVar4;
      }
      if ((uVar3 == 0x500) && (iVar5 = FUN_0049e530(param_1,param_3,param_4,param_5), iVar5 != 0)) {
        return iVar5;
      }
    }
    iVar5 = *(int *)(param_1 + 0xcec);
    if ((iVar5 != 0) && (uVar3 = *(uint *)(param_1 + 0x174), (char)uVar3 != '\0')) {
      if ((uVar3 & 0xf00) == 0x100) {
        iVar4 = FUN_0047af10(iVar5 + 0x98,uVar12,param_4,iVar4);
        return iVar4;
      }
      if ((uVar3 & 0xf00) == 0x300) {
        if (DAT_00647788 == 0) {
          if (uVar12 == 0x201) goto LAB_0049f2da;
        }
        else if (uVar12 == 0x201) {
          if ((uVar3 == 0x302) && (iVar5 = FUN_0049d9a0(param_1,iVar5), iVar5 != 0)) {
            *(undefined4 *)(param_1 + 0x174) = 6;
            *(int *)(param_1 + 0xcec) = iVar5;
            uVar6 = FUN_005c9450(*(undefined4 *)(param_1 + 0xbc8),iVar5);
            *(undefined4 *)(param_1 + 0xce8) = uVar6;
          }
LAB_0049f2da:
          if ((*(int *)(param_1 + 0x174) == 0x309) &&
             (iVar5 = FUN_0049da60(param_1,*(undefined4 *)(param_1 + 0xcec)), iVar5 != 0)) {
            *(undefined4 *)(param_1 + 0x174) = 5;
            *(int *)(param_1 + 0xcec) = iVar5;
            uVar6 = FUN_005c9450(*(undefined4 *)(param_1 + 0xbc8),iVar5);
            *(undefined4 *)(param_1 + 0xce8) = uVar6;
          }
        }
        if ((*(int *)(param_1 + 0x174) != 6) && (*(int *)(param_1 + 0x174) != 5)) {
          iVar4 = FUN_00476d40(param_1,uVar12,param_4,iVar4);
          return iVar4;
        }
      }
      else {
        if (uVar3 == 7) {
          iVar4 = FUN_004800c0(*(undefined4 *)(param_1 + 4),1,iVar5,uVar12,param_4,iVar4,param_1);
          return iVar4;
        }
        if (((((uVar3 == 9) || (uVar3 == 0xe)) || (uVar3 == 0xf)) ||
            ((uVar3 == 10 || (uVar3 == 0xb)))) &&
           ((*(int *)(param_1 + 0xa4) == 3 || ((uVar12 == 0x201 || (uVar12 == 0x203)))))) {
          iVar4 = FUN_0049e0f0(param_1,param_2,uVar12,param_4,iVar4);
          return iVar4;
        }
      }
    }
  }
  uVar3 = (uint)param_4;
  local_c = (int)(short)iVar4;
  local_8 = (int)(short)((uint)iVar4 >> 0x10);
  if (0x203 < uVar12) {
    if (0x206 < uVar12) {
      if (uVar12 != 0x404) {
        return 0;
      }
      pHVar9 = GetCapture();
      if (pHVar9 == *(HWND *)(param_1 + 4)) {
        switch(*(undefined4 *)(param_1 + 0xa4)) {
        case 2:
          param_4 = (int *)(local_c - *(int *)(param_1 + 0xac0));
          lVar15 = ftol();
          lVar15 = lVar15 + *(longlong *)(param_1 + 0xb88);
LAB_0049fc18:
          uVar6 = FUN_00497960(param_1,local_8);
          FUN_0049d300(param_1,uVar6,0xffffffff,lVar15);
          return 0;
        case 4:
        case 6:
        case 7:
        case 0x15:
        case 0x16:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
          FUN_00499dc0(param_1,local_c,local_8,1);
          return 0;
        case 0x11:
          iVar4 = *(int *)(param_1 + 0xac0);
          if ((local_c < iVar4) || (iVar4 = *(int *)(param_1 + 0xac8), iVar4 < local_c)) {
            local_c = iVar4;
          }
          FUN_00453cb0(param_1,local_c,local_8,0);
          return 0;
        case 0x14:
          iVar4 = *(int *)(param_1 + 0xac0);
          if ((local_c < iVar4) || (iVar4 = *(int *)(param_1 + 0xac8), iVar4 < local_c)) {
            local_c = iVar4;
          }
          FUN_0049cbc0(param_1,local_c,local_8,0);
          return 0;
        case 0x17:
          return 0;
        }
      }
      FUN_00454f40(param_1);
      return 0;
    }
    if ((uVar12 != 0x206) && (uVar12 != 0x204)) {
      if (uVar12 != 0x205) {
        return 0;
      }
      if (((uint)param_4 & 1) != 0) {
        return 0;
      }
      iVar4 = *(int *)(param_1 + 0xa4);
      *(undefined4 *)(param_1 + 0xa4) = 0;
      pHVar9 = GetCapture();
      if (pHVar9 != *(HWND *)(param_1 + 4)) {
        return 0;
      }
      ReleaseCapture();
      if (iVar4 != 1) {
        if (iVar4 == 4) {
          if ((*(uint *)(param_1 + 0x18) & 0x1000000) == 0) {
            return 0;
          }
          FUN_00499ea0(param_1,uVar3,local_c,local_8);
          FUN_0049bda0(param_1,&local_c,1,0);
          return 0;
        }
        if (iVar4 != 0x10) {
          FUN_00455270(param_1,local_c,local_8,0,1);
          return 0;
        }
      }
      FUN_00455270(param_1,local_c,local_8,0,1);
      return 0;
    }
    if (*(int *)(param_1 + 0xa4) != 0) {
      return 0;
    }
    if (((uint)param_4 & 1) != 0) {
      return 0;
    }
    FUN_00453000(param_1);
    param_2 = local_c - *(int *)(param_1 + 0xac0);
    *(uint *)(param_1 + 0x18) =
         (uint)(uVar12 == 0x206) << 0x11 | *(uint *)(param_1 + 0x18) & 0xfffdffff;
    lVar15 = ftol();
    *(longlong *)(param_1 + 0x98) = lVar15 + *(longlong *)(param_1 + 0xb88);
    param_3 = *(uint *)(param_1 + 0xbb0);
    uVar12 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f) >> 1;
    lVar15 = (longlong)(local_8 - *(int *)(param_1 + 0xac4)) * (longlong)*(int *)(param_1 + 0xbac);
    if (lVar15 < 0) {
      lVar15 = CONCAT44((int)((ulonglong)lVar15 >> 0x20) - (uint)((uint)lVar15 < uVar12),
                        (uint)lVar15 - uVar12);
      uVar12 = 0;
    }
    param_2 = (uint)((longlong)(lVar15 + (ulonglong)uVar12) / (longlong)(int)param_3);
    *(uint *)(param_1 + 0xa0) = *(int *)(param_1 + 0xba8) + param_2;
    *(int *)(param_1 + 0x90) = local_c;
    *(int *)(param_1 + 0xa8) = local_c;
    *(int *)(param_1 + 0x94) = local_8;
    *(int *)(param_1 + 0xac) = local_8;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    SetCapture(*(HWND *)(param_1 + 4));
    iVar4 = FUN_0049cd80(param_1,*(undefined4 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0xce8));
    if (iVar4 == 0) {
      FUN_0049d060(param_1,param_1 + 0xce0,*(undefined4 *)(param_1 + 0x98),
                   *(undefined4 *)(param_1 + 0x9c));
    }
    iVar4 = *(int *)(param_1 + 0x174);
    if (iVar4 == 4) {
      *(undefined4 *)(param_1 + 0xa4) = 1;
      return 0;
    }
    if (iVar4 == 8) {
LAB_004a05e0:
      *(undefined4 *)(param_1 + 0xa4) = 0x10;
      return 0;
    }
    if ((((iVar4 != 1) && (iVar4 != 2)) && (iVar4 != 0xfd)) && (iVar4 != 0xfe)) {
      return 0;
    }
    if ((*(uint *)(param_1 + 0x18) & 0x40000) == 0) {
      if ((*(uint *)(param_1 + 0x18) & 0x20000) == 0) goto LAB_004a05e0;
      if (((uint)param_4 & 8) == 0) {
        FUN_004b8e60(param_1,param_4,local_c,local_8,iVar4);
        return 0;
      }
      if (*(int *)(param_1 + 0xbc8) != 0) {
        uVar16 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
        goto LAB_004a064d;
      }
    }
    else if (*(int *)(param_1 + 0xbc8) != 0) {
      uVar16 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
      FUN_00453a50(param_1,0,0,uVar16);
      return 0;
    }
    uVar16 = *(undefined8 *)(param_1 + 0x600);
LAB_004a064d:
    FUN_00453a50(param_1,0,0,uVar16);
    return 0;
  }
  if (uVar12 != 0x203) {
    if (uVar12 < 0x201) {
      if (uVar12 == 0x200) {
        pHVar9 = GetCapture();
        uVar12 = (uint)param_4;
        if (pHVar9 != *(HWND *)(param_1 + 4)) {
          return 0;
        }
        bVar14 = DAT_00649e0c == 0;
        switch(*(undefined4 *)(param_1 + 0xa4)) {
        case 1:
          goto switchD_0049f842_caseD_1;
        case 2:
          param_4 = (int *)(local_c - *(int *)(param_1 + 0xac0));
          lVar15 = ftol();
          lVar15 = lVar15 + *(longlong *)(param_1 + 0xb88);
          goto LAB_0049fc18;
        default:
          return 0;
        case 4:
        case 5:
        case 6:
        case 7:
        case 0x15:
        case 0x16:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
          FUN_00499ea0(param_1,param_4,local_c,local_8);
          return 0;
        case 0x10:
          iVar4 = local_c - *(int *)(param_1 + 0x90);
          if ((*(int *)(param_1 + 200) * -2 <= iVar4) && (iVar4 <= *(int *)(param_1 + 200) * 2)) {
            return 0;
          }
          FUN_004b8e60(param_1,param_4,*(undefined4 *)(param_1 + 0x90),
                       *(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x174));
        case 0x11:
          FUN_004b8f00(param_1,param_2,param_4,local_c,local_8);
          return 0;
        case 0x14:
          FUN_0049ccd0(param_1,param_2,param_4,local_c,local_8);
          return 0;
        case 0x18:
          FUN_0049db20(param_1);
          return 0;
        }
      }
      if (uVar12 == 0x1f) {
        FUN_00454f40(param_1);
        switch(*(undefined4 *)(param_1 + 0xa4)) {
        case 4:
          if ((*(uint *)(param_1 + 0x18) & 0x1000000) == 0) {
            FUN_0049c820(param_1,1);
            FUN_004530a0(param_1,0);
          }
          else {
            FUN_0049bda0(param_1,&local_c,0,1);
            FUN_004530a0(param_1,0);
          }
          break;
        case 5:
        case 6:
        case 7:
        case 0x15:
        case 0x16:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
          FUN_0049b150(param_1,1);
          FUN_004530a0(param_1,0);
          break;
        case 0x18:
          FUN_0049dd70(param_1);
        }
        FUN_00455e00(param_1);
        *(undefined4 *)(param_1 + 0xa4) = 0;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xf8ffffff;
        pHVar9 = GetCapture();
        if (pHVar9 == *(HWND *)(param_1 + 4)) {
          ReleaseCapture();
        }
        UpdateWindow(*(HWND *)(param_1 + 4));
        return 0;
      }
      if (uVar12 != 0x7b) {
        return 0;
      }
      param_4 = (int *)0x2;
      param_3 = 0;
      param_5 = 0;
      if ((*(uint *)(param_1 + 0x358) & 1) == 0) {
        if ((*(int *)(param_1 + 0xbc8) != 0) &&
           (iVar4 = FUN_005b87b0(*(int *)(param_1 + 0xbc8)), iVar4 != 0)) {
          if (*(int *)(param_1 + 0xbc8) == 0) {
            piVar8 = (int *)0x0;
          }
          else {
            piVar8 = (int *)FUN_005b87b0(*(int *)(param_1 + 0xbc8));
          }
          if (0 < *piVar8) {
            param_4 = (int *)0x6;
            if ((*(int **)(param_1 + 0xcd0) != (int *)0x0) && (0 < **(int **)(param_1 + 0xcd0))) {
              param_4 = (int *)0x3;
            }
          }
        }
LAB_0049f666:
        pHVar7 = (HMENU)FUN_004047d0(0x7d,param_4);
        if (pHVar7 == (HMENU)0x0) goto LAB_0049f6d4;
      }
      else {
        if ((*(uint *)(param_1 + 0x358) & 2) != 0) {
          param_4 = (int *)0x8;
          goto LAB_0049f666;
        }
        iVar4 = *(int *)(param_1 + 0xcec);
        if (iVar4 != 0) {
          if (*(int *)(param_1 + 0x174) == 9) {
            local_28 = 0;
            local_38[1] = 1;
            local_38[3] = *(undefined4 *)(iVar4 + 0x1fc);
            local_24.y = *(int *)(*(int *)(iVar4 + 0x218) + 0x44);
            local_24.x = *(int *)(*(int *)(iVar4 + 0x218) + 0x40);
            local_18 = local_24.y + 10;
            local_1c = local_24.x + 10;
            local_24.y = local_24.y + -10;
            local_24.x = local_24.x + -10;
            *(uint *)(*(int *)(iVar4 + 0x218) + 0x68) =
                 *(uint *)(*(int *)(iVar4 + 0x218) + 0x68) | 0x80;
            local_38[2] = iVar4;
            iVar5 = FUN_0044b620(local_38 + 1,*(undefined4 *)(param_1 + 4),local_c,local_8);
            if (iVar5 != 0) {
              MapWindowPoints(*(HWND *)(param_1 + 4),(HWND)0x0,&local_24,2);
              FUN_0044e590(local_38 + 1,1,&local_24);
            }
            *(uint *)(*(int *)(iVar4 + 0x218) + 0x68) =
                 *(uint *)(*(int *)(iVar4 + 0x218) + 0x68) & 0xffffff7f;
            FUN_00456c20(param_1);
            FUN_004530a0(param_1,0);
            *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xf8ffffff;
            *(uint *)(param_1 + 0x358) = *(uint *)(param_1 + 0x358) & 0xfffffffd;
            return 0;
          }
          param_4 = (int *)0x3;
          if (*(int *)(iVar4 + 4) == 3) {
            iVar4 = *(int *)(iVar4 + 8);
            if (((*(uint *)(iVar4 + 0x10) & 0x40000) != 0) &&
               ((*(uint *)(iVar4 + 0x10) & 0x10000) == 0)) {
              local_14.x = 0;
              local_14.y = 0;
              ClientToScreen(*(HWND *)(param_1 + 4),&local_14);
              iVar4 = FUN_004608c0(iVar4,(*(int *)(param_1 + 0x360) -
                                         *(int *)(*(int *)(iVar4 + 0x69c) + 0x1c)) - local_14.y,0);
              if (iVar4 == 2) {
                param_4 = (int *)0x5;
                param_5 = 1;
                pHVar7 = CreatePopupMenu();
                param_3 = *(int *)(*(int *)(param_1 + 0xcec) + 8);
                goto LAB_0049f662;
              }
            }
            puVar1 = *(undefined4 **)(*(int *)(param_1 + 0xcec) + 0xf4);
            if (puVar1 != (undefined4 *)0x0) {
              param_4 = (int *)0x0;
              iVar4 = (**(code **)*puVar1)(puVar1,&DAT_00610db0,&param_4);
              if ((-1 < iVar4) && (param_4 != (int *)0x0)) {
                (**(code **)(*param_4 + 8))(param_4);
                param_4 = (int *)0xd;
                goto LAB_0049f666;
              }
            }
            param_4 = (int *)0x4;
          }
          goto LAB_0049f666;
        }
        iVar4 = *(int *)(param_1 + 0xce4);
        if ((((iVar4 == 0) ||
             (param_4 = (int *)((*(int *)(iVar4 + 4) == 3) + 6), param_4 != (int *)0x7)) ||
            ((*(uint *)(iVar4 + 0x10) & 0x40000) == 0)) ||
           ((*(uint *)(iVar4 + 0x10) & 0x10000) != 0)) goto LAB_0049f666;
        local_14.x = 0;
        local_14.y = 0;
        ClientToScreen(*(HWND *)(param_1 + 4),&local_14);
        iVar5 = FUN_004608c0(iVar4,(*(int *)(param_1 + 0x360) -
                                   *(int *)(*(int *)(iVar4 + 0x69c) + 0x1c)) - local_14.y,0);
        if (iVar5 != 2) goto LAB_0049f666;
        pHVar7 = CreatePopupMenu();
        param_3 = iVar4;
LAB_0049f662:
        if (pHVar7 == (HMENU)0x0) goto LAB_0049f666;
      }
      FUN_004a6050(param_1,param_2,pHVar7,&param_4,param_4,param_3,param_5);
      piVar8 = (int *)(param_1 + 0xce0);
      piVar13 = local_38;
      for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar13 = *piVar8;
        piVar8 = piVar8 + 1;
        piVar13 = piVar13 + 1;
      }
      iVar4 = FUN_00404830(*(undefined4 *)(param_1 + 4),pHVar7,param_1 + 0x35c,2);
      if (iVar4 != 0) {
        FUN_004a7c00(param_1,param_2,iVar4,local_38);
      }
      FUN_00476580(param_1);
LAB_0049f6d4:
      *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xf8ffffff;
      *(uint *)(param_1 + 0x358) = *(uint *)(param_1 + 0x358) & 0xfffffffd;
      return 0;
    }
    if (uVar12 != 0x201) {
      if (uVar12 != 0x202) {
        return 0;
      }
      switch(*(undefined4 *)(param_1 + 0xa4)) {
      case 1:
      case 0x10:
        param_3 = (uint)param_4 & 4;
        param_2 = param_3 << 2;
        lVar15 = ftol();
        lVar15 = lVar15 + *(longlong *)(param_1 + 0xb88);
        local_1c = (int)lVar15;
        iVar4 = *(int *)(param_1 + 0x174);
        if (iVar4 == 5) {
          lVar15 = *(longlong *)(*(int *)(param_1 + 0xcec) + 0x18);
        }
        else if (iVar4 == 6) {
          iVar4 = *(int *)(param_1 + 0xcec);
          lVar15 = CONCAT44(*(int *)(iVar4 + 0x24) + *(int *)(iVar4 + 0x1c) +
                            (uint)CARRY4(*(uint *)(iVar4 + 0x20),*(uint *)(iVar4 + 0x18)),
                            *(uint *)(iVar4 + 0x20) + *(uint *)(iVar4 + 0x18));
        }
        else if (iVar4 == 4) {
          iVar4 = *(int *)(param_1 + 0xcec);
          local_14.y = *(int *)(iVar4 + 0x44);
          local_14.x = *(uint *)(iVar4 + 0x40);
          uVar12 = *(uint *)(iVar4 + 0x18);
          local_28 = *(int *)(iVar4 + 0x1c);
          uVar3 = uVar12 - *(uint *)(param_1 + 400);
          if (CONCAT44(((local_28 - *(int *)(param_1 + 0x194)) -
                       (uint)(uVar12 < *(uint *)(param_1 + 400))) + local_14.y +
                       (uint)CARRY4(uVar3,local_14.x),uVar3 + local_14.x) <= lVar15) {
            uVar3 = uVar12 + local_14.x;
            local_28 = local_28 + local_14.y + (uint)CARRY4(uVar12,local_14.x);
            if (lVar15 <= CONCAT44(local_28 + *(int *)(param_1 + 0x194) +
                                   (uint)CARRY4(uVar3,*(uint *)(param_1 + 400)),
                                   uVar3 + *(uint *)(param_1 + 400))) {
              lVar15 = CONCAT44(local_28,uVar3);
            }
          }
        }
        else if (((iVar4 != 0x301) && (iVar4 != 0x302)) && ((iVar4 != 0x303 && (iVar4 != 0x309)))) {
          lVar15 = FUN_00495290(param_1,0,lVar15);
        }
        if ((((uint)param_4 & 8) == 0) || (param_3 != 0)) {
          FUN_0049d060(param_1,param_1 + 0xce0,lVar15);
        }
        else if (*(int *)(param_1 + 0xcec) != 0) {
          FUN_0049d210(param_1,*(undefined4 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0xce8));
          break;
        }
        uVar16 = FUN_00494160(param_1,lVar15);
        if ((*(uint *)(param_1 + 0x18) & 0x20000) == 0) {
          uVar12 = param_2;
          if (*(int *)(param_1 + 0x174) == 1) {
            uVar12 = param_2 | 1;
          }
          FUN_00453340(param_1,uVar16,0,0,uVar12);
        }
        FUN_00456c20(param_1);
        break;
      case 2:
        param_4 = (int *)(local_c - *(int *)(param_1 + 0xac0));
        uVar16 = ftol();
        uVar12 = *(uint *)(param_1 + 0xb88);
        iVar4 = *(int *)(param_1 + 0xb8c);
        uVar6 = FUN_00497960(param_1,local_8);
        FUN_0049d300(param_1,uVar6,0xffffffff,(uint)uVar16 + uVar12,
                     (int)((ulonglong)uVar16 >> 0x20) + iVar4 + (uint)CARRY4((uint)uVar16,uVar12));
        break;
      case 4:
        if ((*(uint *)(param_1 + 0x18) & 0x2000000) != 0) {
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfdffffff;
        }
        if ((*(uint *)(param_1 + 0x18) & 0x1000000) == 0) {
          FUN_00499ea0(param_1,param_4,local_c,local_8);
          FUN_0049c820(param_1,0);
          FUN_004530a0(param_1,0);
        }
        else {
          FUN_00499ea0(param_1,param_4,local_c,local_8);
          FUN_0049bda0(param_1,&local_c,0,0);
        }
        break;
      case 5:
      case 6:
      case 7:
      case 0x15:
      case 0x16:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
        FUN_00499ea0(param_1,param_4,local_c,local_8);
        FUN_0049b150(param_1,0);
        FUN_004530a0(param_1,0);
        break;
      case 0x11:
        FUN_004b8f80(param_1,param_2,local_c,local_8,0);
        break;
      case 0x14:
        FUN_0049cd20(param_1,param_2,local_c,local_8,0);
        break;
      case 0x18:
        FUN_0049dd70(param_1);
      }
      pHVar9 = GetCapture();
      if (pHVar9 == *(HWND *)(param_1 + 4)) {
        ReleaseCapture();
      }
      *(undefined4 *)(param_1 + 0xa4) = 0;
      return 0;
    }
  }
  if (*(int *)(param_1 + 0xa4) != 0) {
    return 0;
  }
  FUN_00453000(param_1);
  *(uint *)(param_1 + 0x18) =
       (uint)(uVar12 == 0x203) << 0x11 | *(uint *)(param_1 + 0x18) & 0xfff9ffff;
  if ((uVar12 == 0x203) == 0) {
    LVar10 = GetMessageTime();
    UVar11 = GetDoubleClickTime();
    if ((uint)(LVar10 - *(int *)(param_1 + 0xd0)) <= UVar11) {
      iVar4 = GetSystemMetrics(0x24);
      iVar5 = local_c - *(int *)(param_1 + 0xd4);
      if ((((-iVar4 <= iVar5) && (iVar5 <= iVar4)) &&
          (iVar5 = local_8 - *(int *)(param_1 + 0xd8), -iVar4 <= iVar5)) && (iVar5 <= iVar4)) {
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x40000;
      }
    }
    *(undefined4 *)(param_1 + 0xd0) = 0;
  }
  else {
    LVar10 = GetMessageTime();
    *(int *)(param_1 + 0xd4) = local_c;
    *(LONG *)(param_1 + 0xd0) = LVar10;
    *(int *)(param_1 + 0xd8) = local_8;
  }
  iVar4 = local_8;
  param_2 = local_c - *(int *)(param_1 + 0xac0);
  lVar15 = ftol();
  param_3 = *(uint *)(param_1 + 0xbb0);
  *(longlong *)(param_1 + 0x98) = lVar15 + *(longlong *)(param_1 + 0xb88);
  uVar12 = (param_3 ^ (int)param_3 >> 0x1f) - ((int)param_3 >> 0x1f) >> 1;
  lVar15 = (longlong)(iVar4 - *(int *)(param_1 + 0xac4)) * (longlong)*(int *)(param_1 + 0xbac);
  if (lVar15 < 0) {
    lVar15 = CONCAT44((int)((ulonglong)lVar15 >> 0x20) - (uint)((uint)lVar15 < uVar12),
                      (uint)lVar15 - uVar12);
    uVar12 = 0;
  }
  param_2 = (uint)((longlong)(lVar15 + (ulonglong)uVar12) / (longlong)(int)param_3);
  *(undefined4 *)(param_1 + 0x198) = 0;
  *(undefined4 *)(param_1 + 0x19c) = 0;
  *(uint *)(param_1 + 0xa0) = *(int *)(param_1 + 0xba8) + param_2;
  *(int *)(param_1 + 0x90) = local_c;
  *(int *)(param_1 + 0xa8) = local_c;
  *(int *)(param_1 + 0x94) = local_8;
  *(int *)(param_1 + 0xac) = local_8;
  if ((((*(byte *)(param_1 + 0x1c) & 4) != 0) && (((uint)param_4 & 8) != 0)) &&
     (((uint)param_4 & 4) == 0)) {
    *(undefined4 *)(param_1 + 0xa4) = 0x18;
    FUN_0049ddf0(param_1);
    SetCapture(*(HWND *)(param_1 + 4));
    return 0;
  }
  uVar12 = *(uint *)(param_1 + 0x174);
  if ((((uVar12 != 1) && (uVar12 != 2)) &&
      ((uVar12 != 0xfd && ((uVar12 != 0xfe && ((uVar12 & 0xf00) != 0x500)))))) &&
     ((((uint)param_4 & 8) == 0 || (((uint)param_4 & 4) == 0)))) {
    if (((uint)param_4 & 4) != 0) {
      *(undefined4 *)(param_1 + 0xa4) = 2;
      FUN_0049d300(param_1,*(undefined4 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0xce8),
                   *(undefined4 *)(param_1 + 0x98),*(undefined4 *)(param_1 + 0x9c));
      SetCapture(*(HWND *)(param_1 + 4));
      return 0;
    }
    *(undefined4 *)(param_1 + 0xa4) = 0x13;
    if (*(int *)(param_1 + 0xce4) != 0) {
      if ((*(byte *)(param_1 + 0x1a) & 2) != 0) {
        FUN_0049c910(param_1,param_4,local_c,local_8,uVar12);
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
      if (*(int *)(param_1 + 0xcec) != 0) {
        if (((uint)param_4 & 8) == 0) {
          if ((-1 < *(int *)(param_1 + 0xce0)) &&
             (iVar4 = FUN_0049cd80(param_1,*(int *)(param_1 + 0xce0),
                                   *(undefined4 *)(param_1 + 0xce8)), iVar4 == 0)) {
            FUN_0049d060(param_1,param_1 + 0xce0,*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0x9c));
          }
        }
        *(undefined4 *)(param_1 + 0xa4) = 1;
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
    }
LAB_004a038b:
    SetCapture(*(HWND *)(param_1 + 4));
    return 0;
  }
  if ((*(uint *)(param_1 + 0x18) & 0x40000) == 0) {
    if ((*(uint *)(param_1 + 0x18) & 0x20000) == 0) {
      *(undefined4 *)(param_1 + 0xa4) = 0x10;
      goto LAB_004a038b;
    }
    if (((uint)param_4 & 8) == 0) {
      if (*(int *)(param_1 + 0xce4) != 0) {
        FUN_0049c910(param_1,param_4,local_c,local_8,uVar12);
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
      FUN_004b8e60(param_1,param_4,local_c,local_8,uVar12);
      SetCapture(*(HWND *)(param_1 + 4));
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0xa4) = 0x13;
  if (*(int *)(param_1 + 0xbc8) != 0) {
    uVar16 = FUN_005b8d80(*(int *)(param_1 + 0xbc8));
    FUN_00453a50(param_1,0,0,uVar16);
    SetCapture(*(HWND *)(param_1 + 4));
    return 0;
  }
  FUN_00453a50(param_1,0,0,*(undefined4 *)(param_1 + 0x600),*(undefined4 *)(param_1 + 0x604));
  SetCapture(*(HWND *)(param_1 + 4));
  return 0;
switchD_0049f842_caseD_1:
  iVar4 = *(int *)(param_1 + 200);
  if (((uint)param_4 & 2) != 0) {
    iVar4 = iVar4 << 1;
  }
  iVar5 = local_c - *(int *)(param_1 + 0x90);
  if (((-iVar4 <= iVar5) && (iVar5 <= iVar4)) &&
     ((iVar5 = local_8 - *(int *)(param_1 + 0x94), -iVar4 <= iVar5 && (iVar5 <= iVar4)))) {
    return 0;
  }
  if ((((uint)param_4 & 2) != 0) && (((uint)param_4 & 1) == 0)) {
    *(undefined4 *)(param_1 + 0xa4) = 4;
    *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfbffffff | 0x3000000;
    FUN_0049b360(param_1,*(undefined4 *)(param_1 + 0xcd0),DAT_00649e0c == 0);
    goto LAB_0049fb97;
  }
  iVar4 = *(int *)(param_1 + 0x174);
  if (iVar4 == 5) {
    if (((uint)param_4 & 8) == 0) {
      SVar2 = GetKeyState(0x12);
      iVar4 = ((-1 < SVar2) - 1 & 0x13) + 6;
    }
    else {
      SVar2 = GetKeyState(0x12);
      iVar4 = ((-1 < SVar2) - 1 & 7) + 0x15;
    }
    iVar5 = FUN_0049d060(param_1,param_1 + 0xce0,0xffffffff,0xffffffff);
    if (iVar5 == 0) goto LAB_0049fb97;
  }
  else if (iVar4 == 6) {
    if (((uint)param_4 & 8) == 0) {
      SVar2 = GetKeyState(0x12);
      iVar4 = ((-1 < SVar2) - 1 & 0x13) + 7;
    }
    else {
      SVar2 = GetKeyState(0x12);
      iVar4 = ((-1 < SVar2) - 1 & 6) + 0x16;
    }
    iVar5 = FUN_0049d060(param_1,param_1 + 0xce0,0xfffffffe,0xffffffff);
    if (iVar5 == 0) goto LAB_0049fb97;
    if (iVar4 == 0x1c) {
      iVar5 = FUN_004a08a0(*(undefined4 *)(param_1 + 0xcec));
      if ((iVar5 == 0) || ((*(byte *)(iVar5 + 0x10) & 8) != 0)) {
        iVar4 = 7;
      }
      else {
        *(int *)(param_1 + 0xcec) = iVar5;
        uVar6 = FUN_005c9450(*(undefined4 *)(param_1 + 0xbc8),iVar5);
        *(undefined4 *)(param_1 + 0xce8) = uVar6;
      }
    }
  }
  else {
    if ((iVar4 != 4) && ((iVar4 != 8 || (((uint)param_4 & 8) == 0)))) {
      if ((((iVar4 == 0xc) || (iVar4 == 0xd)) &&
          (iVar4 = FUN_0049d060(param_1,param_1 + 0xce0,*(undefined4 *)(param_1 + 0x98),
                                *(undefined4 *)(param_1 + 0x9c)), iVar4 != 0)) &&
         (iVar4 = FUN_0049a4f0(param_1,0x1c,bVar14), iVar4 != 0)) {
        *(undefined4 *)(param_1 + 0xa4) = 0x1c;
      }
      goto LAB_0049fb97;
    }
    SVar2 = GetKeyState(0x12);
    if (-1 < SVar2) {
      if ((uVar12 & 8) == 0) {
        iVar4 = FUN_0049cd80(param_1,*(undefined4 *)(param_1 + 0xce0),
                             *(undefined4 *)(param_1 + 0xce8));
        if (iVar4 == 0) {
          FUN_0049d060(param_1,param_1 + 0xce0,0xffffffff,0xffffffff);
        }
        iVar4 = FUN_0049c520(param_1,*(undefined4 *)(param_1 + 0xcd0));
        if (iVar4 == 0) goto LAB_0049fb97;
      }
      else {
        iVar4 = FUN_0049cd80(param_1,*(undefined4 *)(param_1 + 0xce0),
                             *(undefined4 *)(param_1 + 0xce8));
        if (iVar4 == 0) {
          FUN_0049d210(param_1,*(undefined4 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0xce8));
        }
        iVar4 = FUN_0049b360(param_1,*(undefined4 *)(param_1 + 0xcd0),0);
        if (iVar4 == 0) goto LAB_0049fb97;
        *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) | 0x5000000;
      }
      *(undefined4 *)(param_1 + 0xa4) = 4;
      goto LAB_0049fb97;
    }
    iVar4 = FUN_0049d060(param_1,param_1 + 0xce0,*(undefined4 *)(param_1 + 0x98),
                         *(undefined4 *)(param_1 + 0x9c));
    if (iVar4 == 0) goto LAB_0049fb97;
    SVar2 = GetKeyState(0x11);
    if (-1 < SVar2) {
      iVar4 = FUN_0049a4f0(param_1,5,bVar14);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0xa4) = 5;
      }
      goto LAB_0049fb97;
    }
    iVar4 = FUN_0049df50(param_1,&param_4,&param_2);
    if (iVar4 == 0) {
      iVar4 = FUN_0049a4f0(param_1,0x1b,bVar14);
      if (iVar4 != 0) {
        *(undefined4 *)(param_1 + 0xa4) = 0x1b;
      }
      goto LAB_0049fb97;
    }
    iVar4 = 0x1c;
    if (param_4 != (int *)0x0) {
      iVar4 = 6;
    }
    if (param_2 != 0) {
      iVar4 = 7;
    }
  }
  iVar5 = FUN_0049a4f0(param_1,iVar4,bVar14);
  if (iVar5 != 0) {
    *(int *)(param_1 + 0xa4) = iVar4;
  }
LAB_0049fb97:
  if (*(int *)(param_1 + 0xa4) != 1) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0x13;
  return 0;
}


