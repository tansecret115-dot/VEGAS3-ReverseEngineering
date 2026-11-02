/* Module: vegas30.exe
   Function: FUN_0045d620
   Address: 0045d620
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045d620(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  code *pcVar1;
  longlong lVar2;
  int iVar3;
  HWND pHVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  
  iVar8 = param_1;
  if ((*(int *)(param_1 + 0x66c) < 10) ||
     ((*(int *)(param_1 + 0x674) < 1 && ((*(byte *)(param_2 + 4) & 0x40) == 0)))) {
    return 0;
  }
  iVar11 = (int)(short)param_5;
  iVar3 = (int)(short)((uint)param_5 >> 0x10);
  if (param_3 < 0x202) {
    if (param_3 == 0x201) goto LAB_0045da47;
    if (param_3 == 0x1f) {
      pHVar4 = GetCapture();
      if (pHVar4 == *(HWND *)(param_1 + 4)) {
        *(undefined4 *)(param_1 + 0x6b0) = 0;
        *(undefined4 *)(param_1 + 0xa4) = 0;
        ReleaseCapture();
      }
      UpdateWindow(*(HWND *)(param_1 + 4));
      return 0;
    }
    if (param_3 != 0x200) {
      return 0;
    }
    pHVar4 = GetCapture();
    if (pHVar4 != *(HWND *)(param_1 + 4)) {
      return 0;
    }
    uVar7 = *(uint *)(param_1 + 0x684);
    uVar5 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) >> 1;
    lVar2 = (longlong)(iVar3 - *(int *)(param_1 + 0x94)) * (longlong)*(int *)(param_1 + 0x674);
    if (lVar2 < 0) {
      lVar2 = CONCAT44((int)((ulonglong)lVar2 >> 0x20) - (uint)((uint)lVar2 < uVar5),
                       (uint)lVar2 - uVar5);
      uVar5 = 0;
    }
    iVar6 = (int)((longlong)(lVar2 + (ulonglong)uVar5) / (longlong)(int)uVar7);
    iVar9 = *(int *)(param_1 + 0xbac);
    uVar7 = *(uint *)(param_1 + 0xba8);
    param_3 = 0;
    switch(*(undefined4 *)(param_1 + 0x174)) {
    case 0x30006:
      iVar11 = *(int *)(param_1 + 0x67c);
      if (0 < iVar11) {
        iVar3 = MulDiv(iVar3 - *(int *)(param_1 + 0x94),iVar11,-200);
        if (iVar3 < 0) {
          iVar3 = 0;
        }
        else if (iVar11 < iVar3) {
          iVar3 = iVar11;
        }
        pcVar1 = *(code **)(*(int *)(param_1 + 0xab4) + 0x3c);
        if (pcVar1 == (code *)0x0) {
          if (iVar3 != *(int *)(param_1 + 0x678)) {
            *(int *)(param_1 + 0x678) = iVar3;
            if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
              iVar9 = FUN_00454300(param_1,iVar3);
              uVar7 = *(uint *)(param_1 + 0xa0);
              param_3 = 4;
            }
            else {
              FUN_004530a0(param_1,0);
              UpdateWindow(*(HWND *)(param_1 + 4));
            }
          }
        }
        else {
          (*pcVar1)(param_1,*(undefined4 *)(param_1 + 0xa0),iVar3);
          *(int *)(param_1 + 0x678) = iVar3;
        }
      }
      break;
    default:
      iVar6 = 0;
      if ((*(int *)(param_1 + 0x65c) <= iVar3) &&
         (iVar3 <= *(int *)(param_1 + 0x65c) + *(int *)(param_1 + 0x66c))) {
        iVar6 = FUN_0045cd60(param_1,iVar11,iVar3);
      }
      if (*(int *)(param_1 + 0x6b0) != iVar6) {
        if (iVar6 == *(int *)(param_1 + 0x174)) {
          *(int *)(param_1 + 0x6b0) = iVar6;
          if (param_2 == 0) break;
          pHVar4 = *(HWND *)(param_1 + 4);
        }
        else {
          if ((*(int *)(param_1 + 0x6b0) == 0) ||
             (*(undefined4 *)(param_1 + 0x6b0) = 0, param_2 == 0)) break;
          pHVar4 = *(HWND *)(param_1 + 4);
        }
        if (pHVar4 != (HWND)0x0) {
          InvalidateRect(pHVar4,(RECT *)(param_2 + 8),0);
        }
      }
      break;
    case 0x30009:
      iVar11 = *(int *)(param_1 + 0xad4);
      iVar9 = iVar9 + uVar7;
      uVar7 = *(int *)(param_1 + 0xa0) + iVar6;
      uVar5 = iVar9 - iVar11;
      if ((int)uVar5 < (int)uVar7) {
        uVar7 = uVar5;
      }
      uVar7 = uVar7 & ((int)uVar7 < 1) - 1;
      iVar3 = iVar9 - uVar7;
      iVar9 = iVar11;
      if (iVar3 < iVar11) break;
      goto LAB_0045d7ae;
    case 0x3000a:
      uVar7 = *(int *)(param_1 + 0x674) - iVar9;
      uVar5 = iVar6 + *(int *)(param_1 + 0xa0);
      if ((int)uVar5 <= (int)uVar7) {
        uVar7 = uVar5;
      }
      uVar7 = ((int)uVar7 < 0) - 1 & uVar7;
      break;
    case 0x3000b:
      iVar3 = *(int *)(param_1 + 0xad4) + uVar7;
      iVar6 = iVar6 + *(int *)(param_1 + 0xa0);
      if (iVar6 < iVar3) {
        iVar6 = iVar3;
      }
      iVar3 = *(int *)(param_1 + 0x674) - uVar7;
      iVar9 = iVar6 - uVar7;
      if ((int)(iVar6 - uVar7) <= iVar3) break;
LAB_0045d7ae:
      iVar9 = iVar3;
    }
    param_1 = iVar9;
    if ((*(uint *)(iVar8 + 0xba8) == uVar7) && (*(int *)(iVar8 + 0xbac) == param_1)) {
      return 0;
    }
    FUN_004549b0(iVar8,uVar7,param_1,param_3);
    return 0;
  }
  if (param_3 != 0x202) {
    if (param_3 != 0x203) {
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x174);
    if ((iVar8 == 0x30008) && (((byte)*(undefined4 *)(param_2 + 4) & 7) == 3)) {
      iVar8 = *(int *)(param_1 + 0xaf0);
      if ((-1 < iVar8) && (iVar8 < 4)) {
        FUN_00458e80(param_1,iVar8);
        DAT_0064767c = DAT_0064767c | 4;
      }
      if ((*(byte *)(param_2 + 4) & 0x40) != 0) {
        FUN_0045af10(param_1,0x80000001,0x80000001);
        return 0;
      }
      FUN_0045af10(param_1,0x80000001,0x80000001);
      if (DAT_00647630 != param_1) {
        return 0;
      }
      iVar8 = FUN_004c77d0(param_1);
      if (iVar8 != 0) {
        return 0;
      }
      FUN_004c76b0(param_1,1);
      return 0;
    }
    if ((*(int *)(param_1 + 0x6b0) == iVar8) && (iVar8 == 0x3000a)) {
      if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
        iVar8 = FUN_0045af10(param_1,0,0x80000001);
        if (iVar8 == 0) {
          FUN_0045af10(param_1,0,0x80000000);
        }
        pHVar4 = *(HWND *)(param_1 + 4);
      }
      else {
        iVar8 = FUN_0045af10(param_1,0,0x80000001);
        if (iVar8 == 0) {
          FUN_0045af10(param_1,0,0x80000000);
        }
        if (DAT_00647630 == param_1) {
          FUN_004c76b0(param_1,1);
        }
        pHVar4 = *(HWND *)(param_1 + 4);
      }
      UpdateWindow(pHVar4);
    }
LAB_0045da47:
    uVar7 = *(uint *)(param_1 + 0x174);
    *(uint *)(param_1 + 0x6b0) = uVar7;
    if ((uVar7 == 0x30001) || (uVar7 == 0x30004)) {
      iVar8 = *(int *)(param_1 + 0xbcc);
      if (uVar7 == 0x30001) {
        iVar8 = -iVar8;
      }
      SetCapture(*(HWND *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xa4) = 3;
    }
    else {
      if ((uVar7 == 0x30007) || (uVar7 == 0x30005)) {
        iVar8 = *(int *)(param_1 + 0x678) / 0xf;
        if (iVar8 < 2) {
          iVar8 = 1;
        }
        if ((*(byte *)(param_2 + 4) & 0x40) != 0) {
          iVar8 = 1;
        }
        if (uVar7 == 0x30005) {
          iVar8 = -iVar8;
        }
        iVar8 = FUN_0045af10(param_1,0,iVar8);
        if (iVar8 == 0) {
          *(undefined4 *)(param_1 + 0x6b0) = 0;
          return 0;
        }
        *(undefined4 *)(param_1 + 0xa4) = 3;
        if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
        }
        UpdateWindow(*(HWND *)(param_1 + 4));
        SetCapture(*(HWND *)(param_1 + 4));
        FUN_0045adc0(param_1,&LAB_0045e970,0,0);
        return 0;
      }
      if (uVar7 == 0x30006) {
        iVar8 = *(int *)(param_1 + 0x67c);
        if (iVar8 < 1) {
          return 0;
        }
        *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xba8);
        *(int *)(param_1 + 0x90) = iVar11;
        *(int *)(param_1 + 0x94) = iVar3;
        *(undefined4 *)(param_1 + 0xa4) = 3;
        if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
        }
        UpdateWindow(*(HWND *)(param_1 + 4));
        iVar8 = MulDiv(*(int *)(param_1 + 0x678),-200,iVar8);
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) - iVar8;
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
      if (uVar7 == 0x30008) {
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
      if ((uVar7 != 0x30002) && (uVar7 != 0x30003)) {
        if (uVar7 < 0x30009) {
          return 0;
        }
        if (0x3000b < uVar7) {
          return 0;
        }
        *(int *)(param_1 + 0x90) = iVar11;
        *(int *)(param_1 + 0x94) = iVar3;
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xba8);
        if (uVar7 == 0x3000b) {
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xbac) + *(int *)(param_1 + 0xba8);
        }
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
      iVar8 = *(int *)(param_1 + 0xbac);
      if (uVar7 == 0x30002) {
        iVar8 = -iVar8;
      }
      SetCapture(*(HWND *)(param_1 + 4));
    }
    FUN_0045adc0(param_1,&LAB_0045e970,0,0);
    if (iVar8 == 0) {
      return 0;
    }
    FUN_00458ac0(param_1,0,0,iVar8);
    if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
    }
    UpdateWindow(*(HWND *)(param_1 + 4));
    return 0;
  }
  pHVar4 = GetCapture();
  if (pHVar4 != *(HWND *)(param_1 + 4)) {
    return 0;
  }
  uVar7 = *(uint *)(param_1 + 0x684);
  uVar5 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) >> 1;
  lVar2 = (longlong)(iVar3 - *(int *)(param_1 + 0x94)) * (longlong)*(int *)(param_1 + 0x674);
  if (lVar2 < 0) {
    lVar2 = CONCAT44((int)((ulonglong)lVar2 >> 0x20) - (uint)((uint)lVar2 < uVar5),
                     (uint)lVar2 - uVar5);
    uVar5 = 0;
  }
  iVar9 = (int)((longlong)(lVar2 + (ulonglong)uVar5) / (longlong)(int)uVar7);
  uVar7 = *(uint *)(param_1 + 0xba8);
  iVar8 = *(int *)(param_1 + 0xbac);
  switch(*(undefined4 *)(param_1 + 0x174)) {
  case 0x30006:
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
    }
    break;
  default:
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
    }
    FUN_0045ae20(param_1,&LAB_0045e970);
    break;
  case 0x30008:
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
    }
    FUN_0045ae20(param_1,&LAB_0045e970);
    if (((byte)*(undefined4 *)(param_2 + 4) & 7) == 3) {
      uVar10 = FUN_004590e0(param_1);
      FUN_00458e80(param_1,3);
      *(undefined4 *)(param_1 + 0xaf0) = uVar10;
      DAT_0064767c = DAT_0064767c | 4;
    }
    break;
  case 0x30009:
    iVar6 = *(int *)(param_1 + 0xad4);
    iVar8 = iVar8 + uVar7;
    uVar7 = *(int *)(param_1 + 0xa0) + iVar9;
    uVar5 = iVar8 - iVar6;
    if ((int)uVar5 < (int)uVar7) {
      uVar7 = uVar5;
    }
    uVar7 = ((int)uVar7 < 1) - 1 & uVar7;
    iVar8 = iVar8 - uVar7;
    if (iVar6 <= iVar8) break;
    goto LAB_0045ddbe;
  case 0x3000a:
    uVar7 = *(int *)(param_1 + 0x674) - iVar8;
    uVar5 = iVar9 + *(int *)(param_1 + 0xa0);
    if ((int)uVar5 <= (int)uVar7) {
      uVar7 = uVar5;
    }
    uVar7 = ((int)uVar7 < 0) - 1 & uVar7;
    break;
  case 0x3000b:
    iVar8 = *(int *)(param_1 + 0xad4) + uVar7;
    iVar9 = *(int *)(param_1 + 0xa0) + iVar9;
    if (iVar9 < iVar8) {
      iVar9 = iVar8;
    }
    iVar6 = iVar9 - uVar7;
    iVar8 = *(int *)(param_1 + 0x674) - uVar7;
    if (iVar8 < iVar6) break;
LAB_0045ddbe:
    iVar8 = iVar6;
  }
  *(undefined4 *)(param_1 + 0xa4) = 0;
  ReleaseCapture();
  if ((*(uint *)(param_1 + 0xba8) != uVar7) || (*(int *)(param_1 + 0xbac) != iVar8)) {
    FUN_004549b0(param_1,uVar7,iVar8,0);
    if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
    }
    UpdateWindow(*(HWND *)(param_1 + 4));
  }
  *(undefined4 *)(param_1 + 0x174) = 0x30000;
  if (iVar3 < *(int *)(param_1 + 0x65c)) {
    return 0;
  }
  if (*(int *)(param_1 + 0x65c) + *(int *)(param_1 + 0x66c) < iVar3) {
    return 0;
  }
  uVar10 = FUN_0045cd60(param_1,iVar11,iVar3);
  *(undefined4 *)(param_1 + 0x174) = uVar10;
  return 0;
}


