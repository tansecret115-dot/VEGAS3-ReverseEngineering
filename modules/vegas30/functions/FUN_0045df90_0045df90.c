/* Module: vegas30.exe
   Function: FUN_0045df90
   Address: 0045df90
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0045df90(int param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  code *pcVar1;
  longlong lVar2;
  HWND pHVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar6 = param_1;
  if ((*(int *)(param_1 + 0x66c) < 10) ||
     ((*(int *)(param_1 + 0x674) < 1 && ((*(byte *)(param_2 + 4) & 0x40) == 0)))) {
    return 0;
  }
  iVar12 = (int)(short)param_5;
  iVar13 = (int)(short)(param_5 >> 0x10);
  if (param_3 < 0x202) {
    if (param_3 == 0x201) goto LAB_0045e328;
    if (param_3 == 0x1f) {
      pHVar3 = GetCapture();
      if (pHVar3 == *(HWND *)(param_1 + 4)) {
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
    pHVar3 = GetCapture();
    if (pHVar3 != *(HWND *)(param_1 + 4)) {
      return 0;
    }
    uVar10 = *(uint *)(param_1 + 0x684);
    uVar4 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f) >> 1;
    lVar2 = (longlong)(iVar13 - *(int *)(param_1 + 0x94)) * (longlong)*(int *)(param_1 + 0x674);
    if (lVar2 < 0) {
      lVar2 = CONCAT44((int)((ulonglong)lVar2 >> 0x20) - (uint)((uint)lVar2 < uVar4),
                       (uint)lVar2 - uVar4);
      uVar4 = 0;
    }
    iVar5 = (int)((longlong)(lVar2 + (ulonglong)uVar4) / (longlong)(int)uVar10);
    param_5 = *(uint *)(param_1 + 0xba8);
    iVar9 = *(int *)(param_1 + 0xbac);
    switch(*(undefined4 *)(param_1 + 0x174)) {
    case 0x30006:
      if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
        iVar12 = *(int *)(param_1 + 0x67c);
        if (0 < iVar12) {
          iVar13 = MulDiv(iVar13 - *(int *)(param_1 + 0x94),iVar12,-200);
          if (iVar13 < 0) {
            iVar13 = 0;
          }
          else if (iVar12 < iVar13) {
            iVar13 = iVar12;
          }
          if (iVar13 != *(int *)(param_1 + 0x678)) {
            pcVar1 = *(code **)(*(int *)(param_1 + 0xab4) + 0x3c);
            if (pcVar1 == (code *)0x0) {
              *(int *)(param_1 + 0x678) = iVar13;
              iVar9 = FUN_00454300(param_1,iVar13);
              param_5 = *(uint *)(param_1 + 0xa0);
            }
            else {
              (*pcVar1)(param_1,*(undefined4 *)(param_1 + 0xa0),iVar13);
              *(int *)(param_1 + 0x678) = iVar13;
            }
          }
        }
      }
      else {
        iVar12 = *(int *)(param_1 + 0x67c);
        if (iVar12 != 0) {
          iVar13 = MulDiv(iVar13 - *(int *)(param_1 + 0x94),iVar12,-200);
          if (iVar13 < 0) {
            iVar13 = 0;
          }
          else if (iVar12 < iVar13) {
            iVar13 = iVar12;
          }
          if (iVar13 != *(int *)(param_1 + 0x678)) {
            *(int *)(param_1 + 0x678) = iVar13;
            FUN_004530a0(param_1,0);
            UpdateWindow(*(HWND *)(param_1 + 4));
          }
        }
      }
      break;
    default:
      iVar5 = 0;
      if ((*(int *)(param_1 + 0x65c) <= iVar13) &&
         (iVar13 <= *(int *)(param_1 + 0x65c) + *(int *)(param_1 + 0x66c))) {
        iVar5 = FUN_0045cd60(param_1,iVar12,iVar13);
      }
      if (*(int *)(param_1 + 0x6b0) != iVar5) {
        if (iVar5 == *(int *)(param_1 + 0x174)) {
          *(int *)(param_1 + 0x6b0) = iVar5;
          if (param_2 == 0) break;
          pHVar3 = *(HWND *)(param_1 + 4);
        }
        else {
          if ((*(int *)(param_1 + 0x6b0) == 0) ||
             (*(undefined4 *)(param_1 + 0x6b0) = 0, param_2 == 0)) break;
          pHVar3 = *(HWND *)(param_1 + 4);
        }
        if (pHVar3 != (HWND)0x0) {
          InvalidateRect(pHVar3,(RECT *)(param_2 + 8),0);
        }
      }
      break;
    case 0x30009:
      iVar12 = iVar9 + param_5;
      iVar9 = *(int *)(param_1 + 0xad4);
      param_5 = *(int *)(param_1 + 0xa0) + iVar5;
      uVar10 = iVar12 - iVar9;
      if ((int)uVar10 < (int)param_5) {
        param_5 = uVar10;
      }
      param_5 = param_5 & ((int)param_5 < 1) - 1;
      iVar12 = iVar12 - param_5;
      if (iVar12 < iVar9) break;
      goto LAB_0045e118;
    case 0x3000a:
      param_5 = *(int *)(param_1 + 0x674) - iVar9;
      uVar10 = iVar5 + *(int *)(param_1 + 0xa0);
      if ((int)uVar10 <= (int)param_5) {
        param_5 = uVar10;
      }
      param_5 = ((int)param_5 < 0) - 1 & param_5;
      break;
    case 0x3000b:
      iVar12 = *(int *)(param_1 + 0xad4) + param_5;
      iVar5 = *(int *)(param_1 + 0xa0) + iVar5;
      if (iVar5 < iVar12) {
        iVar5 = iVar12;
      }
      iVar12 = *(int *)(param_1 + 0x674) - param_5;
      iVar9 = iVar5 - param_5;
      if ((int)(iVar5 - param_5) <= iVar12) break;
LAB_0045e118:
      iVar9 = iVar12;
    }
    param_1 = iVar9;
    if ((*(uint *)(iVar6 + 0xba8) == param_5) && (*(int *)(iVar6 + 0xbac) == param_1)) {
      return 0;
    }
    if ((int)param_5 < 0) {
      param_5 = 0;
    }
    else if ((int)*(uint *)(iVar6 + 0x674) < (int)param_5) {
      param_5 = *(uint *)(iVar6 + 0x674);
    }
    *(uint *)(iVar6 + 0xba8) = param_5;
    if (param_1 < 0) {
      iVar12 = 0;
    }
    else {
      iVar12 = *(int *)(iVar6 + 0x674) - param_5;
      if (param_1 <= iVar12) {
        iVar12 = param_1;
      }
    }
    *(int *)(iVar6 + 0xbac) = iVar12;
    FUN_004530a0(iVar6,0x7800);
    return 0;
  }
  if (param_3 != 0x202) {
    if (param_3 != 0x203) {
      return 0;
    }
LAB_0045e328:
    uVar10 = *(uint *)(param_1 + 0x174);
    *(uint *)(param_1 + 0x6b0) = uVar10;
    if ((uVar10 == 0x30001) || (uVar10 == 0x30004)) {
      iVar6 = *(int *)(param_1 + 0xbcc);
      if (uVar10 == 0x30001) {
        iVar6 = -iVar6;
      }
      SetCapture(*(HWND *)(param_1 + 4));
      *(undefined4 *)(param_1 + 0xa4) = 3;
LAB_0045e626:
      if (iVar6 != 0) {
        uVar10 = *(uint *)(param_1 + 0xba8);
        if ((iVar6 < 0) && ((int)uVar10 <= -iVar6)) {
          uVar4 = 0;
        }
        else {
          uVar4 = uVar10 + iVar6;
        }
        uVar11 = *(int *)(param_1 + 0x674) - *(int *)(param_1 + 0xbac);
        if ((int)uVar11 <= (int)uVar4) {
          uVar4 = uVar11;
        }
        uVar4 = uVar4 & ((int)uVar4 < 1) - 1;
        if (uVar10 != uVar4) {
          *(uint *)(param_1 + 0xba8) = uVar4;
          FUN_004530a0(param_1,0x7800);
          if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
            InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
          }
          UpdateWindow(*(HWND *)(param_1 + 4));
          return 0;
        }
      }
      return 0;
    }
    if ((uVar10 != 0x30007) && (uVar10 != 0x30005)) {
      if (uVar10 == 0x30006) {
        iVar6 = *(int *)(param_1 + 0x67c);
        if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
          if (iVar6 < 1) {
            return 0;
          }
          *(int *)(param_1 + 0x90) = iVar12;
          *(int *)(param_1 + 0x94) = iVar13;
          *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xba8);
          *(undefined4 *)(param_1 + 0xa4) = 3;
          if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
            InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
          }
          UpdateWindow(*(HWND *)(param_1 + 4));
          iVar6 = MulDiv(*(int *)(param_1 + 0x678),-200,iVar6);
          *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) - iVar6;
          SetCapture(*(HWND *)(param_1 + 4));
          return 0;
        }
        if (iVar6 < 1) {
          return 0;
        }
        *(int *)(param_1 + 0x90) = iVar12;
        *(int *)(param_1 + 0x94) = iVar13;
        *(undefined4 *)(param_1 + 0xa0) = *(undefined4 *)(param_1 + 0xba8);
        *(undefined4 *)(param_1 + 0xa4) = 3;
        if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
          InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
        }
        UpdateWindow(*(HWND *)(param_1 + 4));
        iVar6 = MulDiv(*(int *)(param_1 + 0x678),-200,iVar6);
        *(int *)(param_1 + 0x94) = *(int *)(param_1 + 0x94) - iVar6;
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
      if (uVar10 == 0x30008) {
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
      if ((uVar10 != 0x30002) && (uVar10 != 0x30003)) {
        if (uVar10 < 0x30009) {
          return 0;
        }
        if (0x3000b < uVar10) {
          return 0;
        }
        *(int *)(param_1 + 0x90) = iVar12;
        *(int *)(param_1 + 0x94) = iVar13;
        *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xba8);
        if (uVar10 == 0x3000b) {
          *(int *)(param_1 + 0xa0) = *(int *)(param_1 + 0xbac) + *(int *)(param_1 + 0xba8);
        }
        SetCapture(*(HWND *)(param_1 + 4));
        return 0;
      }
      iVar6 = *(int *)(param_1 + 0xbac);
      if (uVar10 == 0x30002) {
        iVar6 = -iVar6;
      }
      SetCapture(*(HWND *)(param_1 + 4));
      goto LAB_0045e626;
    }
    if ((*(byte *)(param_2 + 4) & 0x40) == 0) {
      iVar6 = *(int *)(param_1 + 0x678) / 0xf;
      if (iVar6 < 2) {
        iVar6 = 1;
      }
      if (uVar10 == 0x30005) {
        iVar6 = -iVar6;
      }
      iVar6 = FUN_0045af10(param_1,0,iVar6);
      if (iVar6 == 0) goto LAB_0045e595;
      *(undefined4 *)(param_1 + 0xa4) = 3;
      if (param_2 == 0) goto LAB_0045e576;
      pHVar3 = *(HWND *)(param_1 + 4);
    }
    else {
      uVar7 = 1;
      if (uVar10 == 0x30005) {
        uVar7 = 0xffffffff;
      }
      iVar6 = FUN_0045af10(param_1,0,uVar7);
      if (iVar6 == 0) {
LAB_0045e595:
        *(undefined4 *)(param_1 + 0x6b0) = 0;
        return 0;
      }
      *(undefined4 *)(param_1 + 0xa4) = 3;
      if (param_2 == 0) goto LAB_0045e576;
      pHVar3 = *(HWND *)(param_1 + 4);
    }
    if (pHVar3 != (HWND)0x0) {
      InvalidateRect(pHVar3,(RECT *)(param_2 + 8),0);
    }
LAB_0045e576:
    UpdateWindow(*(HWND *)(param_1 + 4));
    SetCapture(*(HWND *)(param_1 + 4));
    return 0;
  }
  pHVar3 = GetCapture();
  if (pHVar3 != *(HWND *)(param_1 + 4)) {
    return 0;
  }
  uVar10 = *(uint *)(param_1 + 0x684);
  uVar4 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f) >> 1;
  lVar2 = (longlong)(iVar13 - *(int *)(param_1 + 0x94)) * (longlong)*(int *)(param_1 + 0x674);
  if (lVar2 < 0) {
    lVar2 = CONCAT44((int)((ulonglong)lVar2 >> 0x20) - (uint)((uint)lVar2 < uVar4),
                     (uint)lVar2 - uVar4);
    uVar4 = 0;
  }
  iVar5 = (int)((longlong)(lVar2 + (ulonglong)uVar4) / (longlong)(int)uVar10);
  iVar9 = *(int *)(param_1 + 0xbac);
  uVar10 = *(uint *)(param_1 + 0xba8);
  switch(*(undefined4 *)(param_1 + 0x174)) {
  case 0x30006:
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    if (param_2 == 0) break;
    pHVar3 = *(HWND *)(param_1 + 4);
    goto joined_r0x0045e871;
  default:
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    if (param_2 == 0) break;
    pHVar3 = *(HWND *)(param_1 + 4);
joined_r0x0045e871:
    if (pHVar3 != (HWND)0x0) {
      InvalidateRect(pHVar3,(RECT *)(param_2 + 8),0);
    }
    break;
  case 0x30008:
    *(undefined4 *)(param_1 + 0x6b0) = 0;
    if ((param_2 != 0) && (*(HWND *)(param_1 + 4) != (HWND)0x0)) {
      InvalidateRect(*(HWND *)(param_1 + 4),(RECT *)(param_2 + 8),0);
    }
    if (((byte)*(undefined4 *)(param_2 + 4) & 7) == 3) {
      uVar7 = FUN_004590e0(param_1);
      FUN_00458e80(param_1,3);
      *(undefined4 *)(param_1 + 0xaf0) = uVar7;
      DAT_0064767c = DAT_0064767c | 4;
    }
    break;
  case 0x30009:
    iVar8 = *(int *)(param_1 + 0xad4);
    iVar9 = iVar9 + uVar10;
    uVar10 = *(int *)(param_1 + 0xa0) + iVar5;
    uVar4 = iVar9 - iVar8;
    if ((int)uVar4 < (int)uVar10) {
      uVar10 = uVar4;
    }
    uVar10 = ((int)uVar10 < 1) - 1 & uVar10;
    iVar9 = iVar9 - uVar10;
    if (iVar9 < iVar8) {
      iVar9 = iVar8;
    }
    break;
  case 0x3000a:
    uVar10 = *(int *)(param_1 + 0x674) - iVar9;
    uVar4 = *(int *)(param_1 + 0xa0) + iVar5;
    if ((int)uVar4 <= (int)uVar10) {
      uVar10 = uVar4;
    }
    uVar10 = ((int)uVar10 < 0) - 1 & uVar10;
    break;
  case 0x3000b:
    iVar9 = *(int *)(param_1 + 0xad4) + uVar10;
    iVar5 = iVar5 + *(int *)(param_1 + 0xa0);
    if (iVar5 < iVar9) {
      iVar5 = iVar9;
    }
    iVar8 = *(int *)(param_1 + 0x674) - uVar10;
    iVar9 = iVar5 - uVar10;
    if (iVar8 < (int)(iVar5 - uVar10)) {
      iVar9 = iVar8;
    }
  }
  param_1 = iVar9;
  *(undefined4 *)(iVar6 + 0xa4) = 0;
  ReleaseCapture();
  if ((*(uint *)(iVar6 + 0xba8) != uVar10) || (*(int *)(iVar6 + 0xbac) != param_1)) {
    if ((int)uVar10 < 0) {
      uVar10 = 0;
    }
    else if ((int)*(uint *)(iVar6 + 0x674) < (int)uVar10) {
      uVar10 = *(uint *)(iVar6 + 0x674);
    }
    *(uint *)(iVar6 + 0xba8) = uVar10;
    if (param_1 < 0) {
      iVar9 = 0;
    }
    else {
      iVar9 = *(int *)(iVar6 + 0x674) - uVar10;
      if (param_1 <= iVar9) {
        iVar9 = param_1;
      }
    }
    *(int *)(iVar6 + 0xb90) = iVar9;
    *(int *)(iVar6 + 0xb94) = iVar9 >> 0x1f;
    FUN_004530a0(iVar6,0x7800);
  }
  *(undefined4 *)(iVar6 + 0x174) = 0x30000;
  if (iVar13 < *(int *)(iVar6 + 0x65c)) {
    return 0;
  }
  if (*(int *)(iVar6 + 0x65c) + *(int *)(iVar6 + 0x66c) < iVar13) {
    return 0;
  }
  uVar7 = FUN_0045cd60(iVar6,iVar12,iVar13);
  *(undefined4 *)(iVar6 + 0x174) = uVar7;
  return 0;
}


