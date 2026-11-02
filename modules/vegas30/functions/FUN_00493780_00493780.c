/* Module: vegas30.exe
   Function: FUN_00493780
   Address: 00493780
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Removing unreachable block (ram,0x00493a8f) */
/* WARNING: Removing unreachable block (ram,0x00493ab2) */

undefined4 FUN_00493780(int param_1,undefined4 param_2,uint param_3,uint param_4,undefined4 param_5)

{
  SHORT SVar1;
  int iVar2;
  HWND pHVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  longlong lVar10;
  undefined4 local_30 [5];
  uint local_1c;
  int local_18;
  uint local_14;
  int local_10;
  int local_c;
  int local_8;
  
  iVar2 = (int)(short)param_5;
  iVar6 = (int)(short)((uint)param_5 >> 0x10);
  local_c = iVar2;
  local_8 = iVar6;
  if (param_3 < 0x203) {
    if (param_3 == 0x202) {
      switch(*(undefined4 *)(param_1 + 0xa4)) {
      case 1:
      case 0x10:
        lVar10 = ftol();
        lVar10 = lVar10 + *(longlong *)(param_1 + 0xb88);
        uVar9 = (param_4 & 4) * 4;
        iVar2 = *(int *)(param_1 + 0x174);
        if (iVar2 == 5) {
          lVar10 = *(longlong *)(*(int *)(param_1 + 0xcec) + 0x18);
        }
        else if (iVar2 == 6) {
          iVar2 = *(int *)(param_1 + 0xcec);
          lVar10 = CONCAT44(*(int *)(iVar2 + 0x24) + *(int *)(iVar2 + 0x1c) +
                            (uint)CARRY4(*(uint *)(iVar2 + 0x20),*(uint *)(iVar2 + 0x18)),
                            *(uint *)(iVar2 + 0x20) + *(uint *)(iVar2 + 0x18));
        }
        else if (iVar2 == 4) {
          iVar2 = *(int *)(param_1 + 0xcec);
          local_1c = *(uint *)(iVar2 + 0x40);
          local_18 = *(int *)(iVar2 + 0x44);
          local_14 = *(uint *)(iVar2 + 0x18);
          local_10 = *(int *)(iVar2 + 0x1c);
          uVar4 = local_14 - *(uint *)(param_1 + 400);
          if ((CONCAT44(((local_10 - *(int *)(param_1 + 0x194)) -
                        (uint)(local_14 < *(uint *)(param_1 + 400))) + local_18 +
                        (uint)CARRY4(uVar4,local_1c),uVar4 + local_1c) <= lVar10) &&
             (lVar10 <= CONCAT44(local_10 + local_18 + (uint)CARRY4(local_14,local_1c) +
                                 *(int *)(param_1 + 0x194) +
                                 (uint)CARRY4(local_14 + local_1c,*(uint *)(param_1 + 400)),
                                 local_14 + local_1c + *(uint *)(param_1 + 400)))) {
            lVar10 = CONCAT44(local_10 + local_18 + (uint)CARRY4(local_14,local_1c),
                              local_14 + local_1c);
          }
        }
        else {
          lVar10 = FUN_00495290(param_1,0,lVar10);
        }
        if (((param_4 & 8) == 0) || ((param_4 & 4) != 0)) {
          FUN_0049d060(param_1,param_1 + 0xce0,lVar10);
        }
        else if (*(int *)(param_1 + 0xcec) != 0) {
          FUN_0049d210(param_1,*(undefined4 *)(param_1 + 0xce0),*(undefined4 *)(param_1 + 0xce8));
          break;
        }
        if ((*(uint *)(param_1 + 0x18) & 0x20000) == 0) {
          if (*(int *)(param_1 + 0x174) == 1) {
            FUN_00453340(param_1,lVar10,0,0,uVar9 | 1);
          }
          else {
            FUN_00453340(param_1,lVar10,0,0,uVar9);
          }
        }
        break;
      case 2:
        FUN_004934e0(param_1,iVar2,iVar6,0);
        break;
      case 4:
        if ((*(uint *)(param_1 + 0x18) & 0x2000000) != 0) {
          *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfdffffff;
        }
        uVar9 = *(uint *)(param_1 + 0x18);
        if ((uVar9 & 0x1000000) == 0) {
          FUN_00499ea0(param_1,param_4,iVar2,iVar6);
          FUN_0049c820(param_1,0);
          FUN_004530a0(param_1,0);
        }
        else {
          puVar7 = (undefined4 *)(param_1 + 0xce0);
          puVar8 = local_30;
          for (iVar5 = 5; iVar5 != 0; iVar5 = iVar5 + -1) {
            *puVar8 = *puVar7;
            puVar7 = puVar7 + 1;
            puVar8 = puVar8 + 1;
          }
          FUN_00499ea0(param_1,param_4,iVar2,iVar6);
          FUN_0049bda0(param_1,&local_c,0,0);
          FUN_004a7c00(param_1,param_2,uVar9 >> 0x1a & 1 | 0xa096,local_30);
        }
      }
      *(undefined4 *)(param_1 + 0xa4) = 0;
      pHVar3 = GetCapture();
      if (pHVar3 != *(HWND *)(param_1 + 4)) {
        return 0;
      }
      FUN_00454f40(param_1);
      ReleaseCapture();
      return 0;
    }
    if (param_3 == 0x1f) {
      iVar2 = *(int *)(param_1 + 0xa4);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0xab0) != 0) {
          (**(code **)(*(int *)(param_1 + 0xab0) + 4))(param_1,0);
        }
      }
      else if (iVar2 == 2) {
        FUN_004934e0(param_1,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),1);
      }
      else if (iVar2 == 4) {
        FUN_0049f1c0(param_1,param_2,0x1f,param_4,param_5);
        FUN_004530a0(param_1,0);
      }
      *(undefined4 *)(param_1 + 0xa4) = 0;
      pHVar3 = GetCapture();
      if (pHVar3 != *(HWND *)(param_1 + 4)) {
        return 0;
      }
      FUN_00454f40(param_1);
      ReleaseCapture();
      return 0;
    }
    if (param_3 == 0x200) {
      pHVar3 = GetCapture();
      if (pHVar3 != *(HWND *)(param_1 + 4)) {
        return 0;
      }
      switch(*(undefined4 *)(param_1 + 0xa4)) {
      default:
        return 0;
      case 1:
        goto switchD_004937f9_caseD_1;
      case 2:
        FUN_00493710(param_1,param_2,param_4,local_c,local_8);
        return 0;
      case 4:
      case 5:
      case 6:
      case 7:
      case 0x19:
      case 0x1a:
      case 0x1b:
      case 0x1c:
        FUN_00499ea0(param_1,param_4,local_c,local_8);
        if ((param_4 & 0xc) != 0) {
          return 0;
        }
        FUN_004530a0(param_1,0);
        UpdateWindow(*(HWND *)(param_1 + 4));
        return 0;
      case 0x10:
        FUN_004932a0(param_1,local_c,local_8,param_4,2);
        return 0;
      }
    }
    if (param_3 != 0x201) goto LAB_00493c33;
  }
  else if (param_3 != 0x203) {
    if (param_3 == 0x204) {
      if ((param_4 & 1) == 0) {
        FUN_0049f1c0(param_1,param_2,0x204,param_4,param_5);
        return 0;
      }
      FUN_00492ba0(param_1);
      pHVar3 = GetCapture();
      if (pHVar3 != *(HWND *)(param_1 + 4)) {
        return 0;
      }
      FUN_00493050(param_1,param_4,local_c,local_8);
      return 0;
    }
    if (param_3 == 0x404) {
      pHVar3 = GetCapture();
      if (pHVar3 == *(HWND *)(param_1 + 4)) {
        switch(*(undefined4 *)(param_1 + 0xa4)) {
        case 2:
          uVar9 = 0;
          SVar1 = GetKeyState(0x11);
          if (SVar1 < 0) {
            uVar9 = 8;
          }
          SVar1 = GetKeyState(0x10);
          if (SVar1 < 0) {
            uVar9 = uVar9 | 4;
          }
          FUN_00493050(param_1,uVar9,local_c,local_8);
          return 0;
        case 4:
        case 6:
        case 7:
        case 0x15:
        case 0x16:
        case 0x19:
        case 0x1a:
        case 0x1c:
          FUN_00499dc0(param_1,local_c,local_8,1);
          return 0;
        }
      }
      FUN_00454f40(param_1);
      return 0;
    }
LAB_00493c33:
    FUN_0049f1c0(param_1,param_2,param_3,param_4,param_5);
    return 0;
  }
  if (*(int *)(param_1 + 0xa4) == 0) {
    FUN_00453000(param_1);
    *(uint *)(param_1 + 0x18) =
         (uint)(param_3 == 0x203) << 0x11 | *(uint *)(param_1 + 0x18) & 0xfffdffff;
    lVar10 = ftol();
    uVar9 = *(uint *)(param_1 + 0xbb0);
    *(longlong *)(param_1 + 0x98) = lVar10 + *(longlong *)(param_1 + 0xb88);
    uVar4 = (uVar9 ^ (int)uVar9 >> 0x1f) - ((int)uVar9 >> 0x1f) >> 1;
    lVar10 = (longlong)(local_8 - *(int *)(param_1 + 0xac4)) * (longlong)*(int *)(param_1 + 0xbac);
    if (lVar10 < 0) {
      lVar10 = CONCAT44((int)((ulonglong)lVar10 >> 0x20) - (uint)((uint)lVar10 < uVar4),
                        (uint)lVar10 - uVar4);
      uVar4 = 0;
    }
    *(int *)(param_1 + 0x90) = local_c;
    *(int *)(param_1 + 0xa8) = local_c;
    *(undefined4 *)(param_1 + 0x198) = 0;
    *(int *)(param_1 + 0xa0) =
         *(int *)(param_1 + 0xba8) +
         (int)((longlong)(lVar10 + (ulonglong)uVar4) / (longlong)(int)uVar9);
    *(int *)(param_1 + 0x94) = local_8;
    *(int *)(param_1 + 0xac) = local_8;
    *(undefined4 *)(param_1 + 0x19c) = 0;
    if (((param_4 & 0xc) == 0) &&
       (iVar2 = FUN_0049cd80(param_1,*(undefined4 *)(param_1 + 0xce0),
                             *(undefined4 *)(param_1 + 0xce8)), iVar2 != 0)) {
      *(undefined4 *)(param_1 + 0xa4) = 1;
    }
    else {
      *(undefined4 *)(param_1 + 0xa4) = 0x10;
    }
    SetCapture(*(HWND *)(param_1 + 4));
  }
  return 0;
switchD_004937f9_caseD_1:
  iVar2 = *(int *)(param_1 + 200);
  if ((param_4 & 2) != 0) {
    iVar2 = iVar2 << 1;
  }
  iVar6 = local_c - *(int *)(param_1 + 0x90);
  if ((((-iVar2 <= iVar6) && (iVar6 <= iVar2)) &&
      (iVar6 = local_8 - *(int *)(param_1 + 0x94), -iVar2 <= iVar6)) && (iVar6 <= iVar2)) {
    return 0;
  }
  if ((param_4 & 2) != 0) {
    FUN_0049f1c0(param_1,param_2,0x200,param_4,param_5);
    return 0;
  }
  if (*(int *)(param_1 + 0x174) != 4) {
    return 0;
  }
  iVar2 = FUN_0049c520(param_1,*(undefined4 *)(param_1 + 0xcd0));
  if (iVar2 == 0) {
    return 0;
  }
  *(undefined4 *)(param_1 + 0xa4) = 4;
  return 0;
}


