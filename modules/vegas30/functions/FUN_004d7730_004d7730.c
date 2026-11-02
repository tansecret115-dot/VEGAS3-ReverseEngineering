/* Module: vegas30.exe
   Function: FUN_004d7730
   Address: 004d7730
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_004d7730(int *param_1,int *param_2,uint param_3,undefined4 param_4,int param_5)

{
  longlong lVar1;
  bool bVar2;
  SHORT SVar3;
  HWND pHVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  UINT_PTR UVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  
  if ((param_1[9] < 0) || (param_1[6] < 10)) {
    return 0;
  }
  iVar11 = (int)(short)param_5;
  iVar12 = (int)(short)((uint)param_5 >> 0x10);
  uVar13 = param_2[0x20] & 0xffff;
  if (param_3 < 0x202) {
    if (param_3 == 0x201) goto LAB_004d7a68;
    if (param_3 == 0x1f) {
      param_1[0x16] = 0;
      pHVar4 = GetCapture();
      if (pHVar4 == (HWND)param_2[9]) {
        ReleaseCapture();
      }
      UpdateWindow((HWND)param_2[9]);
      return 0;
    }
    if (param_3 != 0x200) {
      return 0;
    }
    pHVar4 = GetCapture();
    if (pHVar4 != (HWND)param_2[9]) {
      return 0;
    }
    uVar7 = param_1[0xb];
    uVar5 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) >> 1;
    lVar1 = (longlong)(iVar11 - param_2[0x11]) * (longlong)param_1[9];
    if (lVar1 < 0) {
      lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar5),
                       (uint)lVar1 - uVar5);
      uVar5 = 0;
    }
    iVar6 = (int)((longlong)(lVar1 + (ulonglong)uVar5) / (longlong)(int)uVar7);
    iVar8 = param_2[0x8a];
    uVar7 = param_2[0x89];
    bVar2 = false;
    SVar3 = GetKeyState(0x11);
    param_5 = iVar8;
    switch(uVar13) {
    case 6:
      iVar12 = (**(code **)(*param_2 + 0x3c))(param_1[9]);
      if (iVar12 != 0) {
        iVar11 = MulDiv(iVar11 - param_2[0x11],iVar12,100);
        if (iVar11 < 0) {
          iVar11 = 0;
        }
        else if (iVar12 < iVar11) {
          iVar11 = iVar12;
        }
        if (iVar11 != param_1[10]) {
          param_1[10] = iVar11;
          param_5 = (**(code **)(*param_2 + 0x40))(iVar11);
          if (param_5 <= param_2[0x87]) {
            param_5 = param_2[0x87];
          }
          uVar7 = param_2[0x8b] - param_5 / 2;
          if ((int)uVar7 < 0) {
            uVar7 = 0;
          }
          else if (param_1[9] < (int)uVar7) {
            uVar7 = param_1[9];
          }
        }
      }
      break;
    default:
      uVar5 = 0;
      if ((param_1[3] <= iVar12) && (iVar12 <= param_1[7] + param_1[3])) {
        uVar5 = (**(code **)(*param_1 + 8))(param_2,iVar11,iVar12);
        uVar5 = uVar5 | param_1[8];
      }
      if (param_1[0x16] != uVar5) {
        if (uVar5 == uVar13) {
          param_1[0x16] = uVar5;
        }
        else {
          if (param_1[0x16] == 0) break;
          param_1[0x16] = 0;
        }
        bVar2 = true;
      }
      break;
    case 9:
      param_5 = param_2[0x87];
      iVar8 = iVar8 + uVar7;
      uVar7 = iVar8 - param_5;
      if (param_2[0x13] + iVar6 <= (int)uVar7) {
        uVar7 = param_2[0x13] + iVar6;
      }
      uVar7 = ((int)uVar7 < 1) - 1 & uVar7;
      iVar8 = iVar8 - uVar7;
      if (iVar8 < param_5) break;
      goto LAB_004d78ac;
    case 10:
      uVar13 = param_1[9] - param_2[0x8a];
      if (param_2[0x13] + iVar6 <= param_1[9] - param_2[0x8a]) {
        uVar13 = param_2[0x13] + iVar6;
      }
      uVar7 = ((int)uVar13 < 0) - 1 & uVar13;
      break;
    case 0xb:
      param_5 = param_2[0x13] + iVar6;
      if (param_2[0x13] + iVar6 < (int)(param_2[0x87] + uVar7)) {
        param_5 = param_2[0x87] + uVar7;
      }
      param_5 = param_5 - uVar7;
      iVar8 = param_1[9] - uVar7;
      if (param_5 <= iVar8) break;
LAB_004d78ac:
      param_5 = iVar8;
    }
    if ((param_2[0x89] == uVar7) && (param_2[0x8a] == param_5)) {
      if (!bVar2) {
        return 0;
      }
    }
    else {
      FUN_004d56c0(uVar7,param_5,0);
    }
    InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
    if (SVar3 < 0) {
      return 0;
    }
    UpdateWindow((HWND)param_2[9]);
    return 0;
  }
  if (param_3 != 0x202) {
    if (param_3 != 0x203) {
      return 0;
    }
    if ((uVar13 == 8) && (((byte)param_1[1] & 7) == 3)) {
      FUN_004d5890(0x80000001,0x80000001);
      return 0;
    }
    if (((param_1[0x16] == uVar13) && (uVar13 == 10)) && ((*(byte *)(param_1 + 1) & 0xa0) == 0)) {
      FUN_004d5890(0x80000001,0);
    }
LAB_004d7a68:
    param_1[0x16] = uVar13;
    if ((uVar13 == 1) || (uVar13 == 4)) {
      param_5 = param_2[0x8a] / 0x14;
      if (uVar13 == 1) {
        param_5 = -param_5;
      }
      SetCapture((HWND)param_2[9]);
      param_2[0x15] = 3;
      if (param_2[0x23] != 0) goto LAB_004d7caf;
      pHVar4 = (HWND)param_2[9];
    }
    else {
      if ((uVar13 == 7) || (uVar13 == 5)) {
        uVar9 = 1;
        if (uVar13 == 5) {
          uVar9 = 0xffffffff;
        }
        iVar11 = FUN_004d5890(uVar9,0);
        if (iVar11 != 0) {
          param_2[0x15] = 3;
          InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
          UpdateWindow((HWND)param_2[9]);
          SetCapture((HWND)param_2[9]);
          if (param_2[0x23] != 0) {
            return 0;
          }
          UVar10 = SetTimer((HWND)param_2[9],2,0x4b,(TIMERPROC)0x0);
          param_2[0x23] = UVar10;
          return 0;
        }
        param_1[0x16] = 0;
        return 0;
      }
      if (uVar13 == 6) {
        iVar8 = (**(code **)(*param_2 + 0x3c))(param_1[9]);
        if (iVar8 < 1) {
          return 0;
        }
        param_2[0x11] = iVar11;
        param_2[0x12] = iVar12;
        param_2[0x15] = 3;
        InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
        UpdateWindow((HWND)param_2[9]);
        iVar11 = MulDiv(param_1[10],100,iVar8);
        param_2[0x11] = param_2[0x11] - iVar11;
        SetCapture((HWND)param_2[9]);
        return 0;
      }
      if (uVar13 == 8) {
        param_2[0x15] = 3;
        InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
        UpdateWindow((HWND)param_2[9]);
        SetCapture((HWND)param_2[9]);
        return 0;
      }
      if ((uVar13 != 2) && (uVar13 != 3)) {
        if (uVar13 < 9) {
          return 0;
        }
        if (0xb < uVar13) {
          return 0;
        }
        SetCapture((HWND)param_2[9]);
        param_2[0x11] = iVar11;
        param_2[0x12] = iVar12;
        param_2[0x13] = param_2[0x89];
        if (uVar13 != 0xb) {
          return 0;
        }
        param_2[0x13] = param_2[0x8a] + param_2[0x89];
        return 0;
      }
      param_5 = param_2[0x8a] / 2;
      if (uVar13 == 2) {
        param_5 = -param_5;
      }
      SetCapture((HWND)param_2[9]);
      if (param_2[0x23] != 0) goto LAB_004d7caf;
      pHVar4 = (HWND)param_2[9];
    }
    UVar10 = SetTimer(pHVar4,2,0x4b,(TIMERPROC)0x0);
    param_2[0x23] = UVar10;
LAB_004d7caf:
    if (param_5 == 0) {
      return 0;
    }
    FUN_004d5960(param_5,0);
    InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
    UpdateWindow((HWND)param_2[9]);
    return 0;
  }
  pHVar4 = GetCapture();
  if (pHVar4 != (HWND)param_2[9]) {
    return 0;
  }
  uVar7 = param_1[0xb];
  uVar5 = (uVar7 ^ (int)uVar7 >> 0x1f) - ((int)uVar7 >> 0x1f) >> 1;
  lVar1 = (longlong)(iVar11 - param_2[0x11]) * (longlong)param_1[9];
  if (lVar1 < 0) {
    lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar5),
                     (uint)lVar1 - uVar5);
    uVar5 = 0;
  }
  iVar8 = (int)((longlong)(lVar1 + (ulonglong)uVar5) / (longlong)(int)uVar7);
  param_5 = param_2[0x8a];
  uVar7 = param_2[0x89];
  switch(uVar13) {
  case 6:
    param_1[0x16] = 0;
    InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
    goto LAB_004d7e59;
  default:
    param_1[0x16] = 0;
    InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
    UVar10 = param_2[0x23];
    if (UVar10 == 0) goto LAB_004d7e59;
    pHVar4 = (HWND)param_2[9];
    break;
  case 8:
    param_1[0x16] = 0;
    InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
    UVar10 = param_2[0x23];
    if (UVar10 == 0) goto LAB_004d7e59;
    pHVar4 = (HWND)param_2[9];
    break;
  case 9:
    param_5 = param_5 + uVar7;
    iVar6 = param_2[0x87];
    uVar7 = param_5 - iVar6;
    if (param_2[0x13] + iVar8 <= (int)uVar7) {
      uVar7 = param_2[0x13] + iVar8;
    }
    uVar7 = ((int)uVar7 < 1) - 1 & uVar7;
    param_5 = param_5 - uVar7;
    if (iVar6 <= param_5) goto LAB_004d7e59;
    goto LAB_004d7d8f;
  case 10:
    uVar7 = param_1[9] - param_5;
    if (param_2[0x13] + iVar8 <= param_1[9] - param_5) {
      uVar7 = param_2[0x13] + iVar8;
    }
    uVar7 = ((int)uVar7 < 0) - 1 & uVar7;
    goto LAB_004d7e59;
  case 0xb:
    iVar6 = param_2[0x13] + iVar8;
    if (param_2[0x13] + iVar8 < (int)(param_2[0x87] + uVar7)) {
      iVar6 = param_2[0x87] + uVar7;
    }
    iVar6 = iVar6 - uVar7;
    param_5 = param_1[9] - uVar7;
    if (param_5 < iVar6) goto LAB_004d7e59;
LAB_004d7d8f:
    param_5 = iVar6;
    goto LAB_004d7e59;
  }
  KillTimer(pHVar4,UVar10);
  param_2[0x23] = 0;
LAB_004d7e59:
  param_2[0x15] = 0;
  ReleaseCapture();
  if ((param_2[0x89] != uVar7) || (param_2[0x8a] != param_5)) {
    FUN_004d56c0(uVar7,param_5,0);
    InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
    UpdateWindow((HWND)param_2[9]);
  }
  param_2[0x20] = param_2[0x20] & 0xffff0000;
  if (iVar12 < param_1[3]) {
    return 0;
  }
  if (param_1[7] + param_1[3] < iVar12) {
    return 0;
  }
  uVar13 = (**(code **)(*param_1 + 8))(param_2,iVar11,iVar12);
  param_2[0x20] = param_2[0x20] | uVar13;
  return 0;
}


