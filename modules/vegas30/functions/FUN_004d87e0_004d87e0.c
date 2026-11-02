/* Module: vegas30.exe
   Function: FUN_004d87e0
   Address: 004d87e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 __thiscall
FUN_004d87e0(int *param_1,int *param_2,uint param_3,undefined4 param_4,int param_5)

{
  longlong lVar1;
  HWND pHVar2;
  uint uVar3;
  int iVar4;
  UINT_PTR UVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  if ((param_1[9] < 1) || (param_1[7] < 10)) {
    return 0;
  }
  iVar6 = (int)(short)param_5;
  iVar8 = (int)(short)((uint)param_5 >> 0x10);
  uVar9 = param_2[0x20] & 0xffff;
  if (param_3 < 0x202) {
    if (param_3 == 0x201) goto LAB_004d8b02;
    if (param_3 == 0x1f) {
      pHVar2 = GetCapture();
      if (pHVar2 == (HWND)param_2[9]) {
        param_1[0x16] = 0;
        param_2[0x15] = 0;
        ReleaseCapture();
      }
      UpdateWindow((HWND)param_2[9]);
      return 0;
    }
    if (param_3 != 0x200) {
      return 0;
    }
    pHVar2 = GetCapture();
    if (pHVar2 != (HWND)param_2[9]) {
      return 0;
    }
    uVar10 = param_1[0xb];
    uVar3 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f) >> 1;
    lVar1 = (longlong)(iVar8 - param_2[0x12]) * (longlong)param_1[9];
    if (lVar1 < 0) {
      lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar3),
                       (uint)lVar1 - uVar3);
      uVar3 = 0;
    }
    iVar4 = (int)((longlong)(lVar1 + (ulonglong)uVar3) / (longlong)(int)uVar10);
    param_5 = param_2[0x8f];
    uVar10 = param_2[0x8e];
    switch(uVar9) {
    case 6:
      iVar6 = (**(code **)(*param_2 + 0x48))(param_1[9]);
      if (iVar6 != 0) {
        iVar8 = MulDiv(iVar8 - param_2[0x12],iVar6,-200);
        if (iVar8 < 0) {
          iVar8 = 0;
        }
        else if (iVar6 < iVar8) {
          iVar8 = iVar6;
        }
        if (iVar8 != param_1[10]) {
          param_1[10] = iVar8;
          param_5 = (**(code **)(*param_2 + 0x4c))(iVar8);
          if (param_5 <= param_2[0x88]) {
            param_5 = param_2[0x88];
          }
          uVar10 = param_2[0x90] - param_5 / 2;
          if ((int)uVar10 < 0) {
            uVar10 = 0;
          }
          else if (param_1[9] < (int)uVar10) {
            uVar10 = param_1[9];
          }
        }
      }
      break;
    default:
      uVar3 = 0;
      if ((param_1[3] <= iVar8) && (iVar8 <= param_1[3] + param_1[7])) {
        uVar3 = (**(code **)(*param_1 + 8))(param_2,iVar6,iVar8);
      }
      if (param_1[0x16] != uVar3) {
        if (uVar3 == uVar9) {
          param_1[0x16] = uVar3;
          pHVar2 = (HWND)param_2[9];
        }
        else {
          if (param_1[0x16] == 0) break;
          pHVar2 = (HWND)param_2[9];
        }
        InvalidateRect(pHVar2,(RECT *)(param_1 + 2),0);
      }
      break;
    case 9:
      iVar6 = param_5 + uVar10;
      param_5 = param_2[0x88];
      uVar9 = iVar6 - param_5;
      uVar10 = param_2[0x14] + iVar4;
      if ((int)uVar9 < param_2[0x14] + iVar4) {
        uVar10 = uVar9;
      }
      uVar10 = ((int)uVar10 < 1) - 1 & uVar10;
      iVar6 = iVar6 - uVar10;
      if (iVar6 < param_5) break;
      goto LAB_004d8947;
    case 10:
      uVar9 = iVar4 + param_2[0x14];
      if (param_1[9] - param_5 < iVar4 + param_2[0x14]) {
        uVar9 = param_1[9] - param_5;
      }
      uVar10 = ((int)uVar9 < 0) - 1 & uVar9;
      break;
    case 0xb:
      iVar6 = param_2[0x88] + uVar10;
      if ((int)(param_2[0x88] + uVar10) <= param_2[0x14] + iVar4) {
        iVar6 = param_2[0x14] + iVar4;
      }
      iVar6 = iVar6 - uVar10;
      param_5 = param_1[9] - uVar10;
      if (param_5 < iVar6) break;
LAB_004d8947:
      param_5 = iVar6;
    }
    if ((param_2[0x8e] == uVar10) && (param_2[0x8f] == param_5)) {
      return 0;
    }
    FUN_004d5850(uVar10,param_5,0);
    return 0;
  }
  if (param_3 != 0x202) {
    if (param_3 != 0x203) {
      return 0;
    }
    if ((uVar9 == 8) && (((byte)param_1[1] & 7) == 3)) {
      FUN_004d5890(0x80000001,0x80000001);
      return 0;
    }
    if ((param_1[0x16] == uVar9) && (uVar9 == 10)) {
      iVar4 = FUN_004d5890(0,0x80000001);
      if (iVar4 == 0) {
        FUN_004d5890(0,0x80000000);
      }
      InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
      UpdateWindow((HWND)param_2[9]);
    }
LAB_004d8b02:
    param_1[0x16] = uVar9;
    if ((uVar9 == 1) || (uVar9 == 4)) {
      param_5 = param_2[0x8f] / 0x14;
      if (uVar9 == 1) {
        param_5 = -param_5;
      }
      SetCapture((HWND)param_2[9]);
      iVar6 = param_2[0x23];
      param_2[0x15] = 3;
    }
    else {
      if ((uVar9 == 7) || (uVar9 == 5)) {
        iVar6 = param_1[10] / 0xf;
        if (iVar6 < 2) {
          iVar6 = 1;
        }
        if (uVar9 == 5) {
          iVar6 = -iVar6;
        }
        iVar6 = FUN_004d5890(0,iVar6);
        if (iVar6 != 0) {
          param_2[0x15] = 3;
          InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
          UpdateWindow((HWND)param_2[9]);
          SetCapture((HWND)param_2[9]);
          if (param_2[0x23] != 0) {
            return 0;
          }
          UVar5 = SetTimer((HWND)param_2[9],2,0x4b,(TIMERPROC)0x0);
          param_2[0x23] = UVar5;
          return 0;
        }
        param_1[0x16] = 0;
        return 0;
      }
      if (uVar9 == 6) {
        iVar4 = (**(code **)(*param_2 + 0x48))(param_1[9]);
        if (iVar4 < 1) {
          return 0;
        }
        param_2[0x11] = iVar6;
        param_2[0x12] = iVar8;
        param_2[0x15] = 3;
        InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
        UpdateWindow((HWND)param_2[9]);
        iVar6 = MulDiv(param_1[10],-200,iVar4);
        param_2[0x12] = param_2[0x12] - iVar6;
        SetCapture((HWND)param_2[9]);
        return 0;
      }
      if (uVar9 == 8) {
        SetCapture((HWND)param_2[9]);
        return 0;
      }
      if ((uVar9 != 2) && (uVar9 != 3)) {
        if (uVar9 < 9) {
          return 0;
        }
        if (0xb < uVar9) {
          return 0;
        }
        param_2[0x11] = iVar6;
        param_2[0x12] = iVar8;
        param_2[0x14] = param_2[0x8e];
        if (uVar9 == 0xb) {
          param_2[0x14] = param_2[0x8f] + param_2[0x8e];
        }
        SetCapture((HWND)param_2[9]);
        return 0;
      }
      param_5 = param_2[0x8f];
      if (uVar9 == 2) {
        param_5 = -param_5;
      }
      SetCapture((HWND)param_2[9]);
      iVar6 = param_2[0x23];
    }
    if (iVar6 == 0) {
      UVar5 = SetTimer((HWND)param_2[9],2,0x4b,(TIMERPROC)0x0);
      param_2[0x23] = UVar5;
    }
    if (param_5 == 0) {
      return 0;
    }
    FUN_004d5960(0,param_5);
    InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
    UpdateWindow((HWND)param_2[9]);
    return 0;
  }
  pHVar2 = GetCapture();
  if (pHVar2 != (HWND)param_2[9]) {
    return 0;
  }
  uVar10 = param_1[0xb];
  uVar3 = (uVar10 ^ (int)uVar10 >> 0x1f) - ((int)uVar10 >> 0x1f) >> 1;
  lVar1 = (longlong)(iVar8 - param_2[0x12]) * (longlong)param_1[9];
  if (lVar1 < 0) {
    lVar1 = CONCAT44((int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar3),
                     (uint)lVar1 - uVar3);
    uVar3 = 0;
  }
  iVar4 = (int)((longlong)(lVar1 + (ulonglong)uVar3) / (longlong)(int)uVar10);
  param_5 = param_2[0x8f];
  uVar10 = param_2[0x8e];
  switch(uVar9) {
  case 6:
    param_1[0x16] = 0;
    InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
    goto LAB_004d8ed9;
  default:
    param_1[0x16] = 0;
    InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
    UVar5 = param_2[0x23];
    if (UVar5 == 0) goto LAB_004d8ed9;
    pHVar2 = (HWND)param_2[9];
    break;
  case 8:
    param_1[0x16] = 0;
    InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
    UVar5 = param_2[0x23];
    if (UVar5 == 0) goto LAB_004d8ed9;
    pHVar2 = (HWND)param_2[9];
    break;
  case 9:
    iVar7 = param_2[0x88];
    param_5 = param_5 + uVar10;
    uVar10 = param_5 - iVar7;
    if (param_2[0x14] + iVar4 <= (int)uVar10) {
      uVar10 = param_2[0x14] + iVar4;
    }
    uVar10 = ((int)uVar10 < 1) - 1 & uVar10;
    param_5 = param_5 - uVar10;
    if (iVar7 <= param_5) goto LAB_004d8ed9;
    goto LAB_004d8e34;
  case 10:
    uVar10 = param_1[9] - param_5;
    if (param_2[0x14] + iVar4 <= param_1[9] - param_5) {
      uVar10 = param_2[0x14] + iVar4;
    }
    uVar10 = ((int)uVar10 < 0) - 1 & uVar10;
    goto LAB_004d8ed9;
  case 0xb:
    iVar7 = param_2[0x14] + iVar4;
    if (param_2[0x14] + iVar4 < (int)(param_2[0x88] + uVar10)) {
      iVar7 = param_2[0x88] + uVar10;
    }
    iVar7 = iVar7 - uVar10;
    param_5 = param_1[9] - uVar10;
    if (param_5 < iVar7) goto LAB_004d8ed9;
LAB_004d8e34:
    param_5 = iVar7;
    goto LAB_004d8ed9;
  }
  KillTimer(pHVar2,UVar5);
  param_2[0x23] = 0;
LAB_004d8ed9:
  param_2[0x15] = 0;
  ReleaseCapture();
  if ((param_2[0x8e] != uVar10) || (param_2[0x8f] != param_5)) {
    FUN_004d5850(uVar10,param_5,0);
    InvalidateRect((HWND)param_2[9],(RECT *)(param_1 + 2),0);
    UpdateWindow((HWND)param_2[9]);
  }
  param_2[0x20] = param_2[0x20] & 0xffff0000;
  if (iVar8 < param_1[3]) {
    return 0;
  }
  if (param_1[3] + param_1[7] < iVar8) {
    return 0;
  }
  uVar9 = (**(code **)(*param_1 + 8))(param_2,iVar6,iVar8);
  param_2[0x20] = param_2[0x20] | uVar9;
  return 0;
}


