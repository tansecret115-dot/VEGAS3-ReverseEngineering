/* Module: vegas30.exe
   Function: FUN_004213c0
   Address: 004213c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_004213c0(int param_1,uint param_2,WPARAM param_3,int param_4)

{
  HDWP hWinPosInfo;
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  
  if (0x1a < param_2) {
    if (param_2 < 0x54) {
      if (param_2 == 0x53) {
        if (*(int *)(param_4 + 4) != 1) {
          LVar2 = DefWindowProcA(*(HWND *)(param_1 + 8),0x53,param_3,param_4);
          return LVar2;
        }
        if ((*(int *)(param_4 + 8) == 0xcb) || (*(int *)(param_4 + 8) == 0xd0)) {
          _SfHelp_HitTestToolbar_8(*(undefined4 *)(param_4 + 0xc),param_4);
        }
        LVar2 = _SfHelp_ContextPopupHelp_24
                          (0,*(undefined4 *)(param_1 + 8),0,*(undefined4 *)(param_4 + 8),
                           &DAT_0063d348,0);
        return LVar2;
      }
      if (param_2 == 0x21) {
        if ((((byte)*(undefined4 *)(param_1 + 0xc) & 3) == 3) && ((short)param_4 == 1)) {
          SetActiveWindow(*(HWND *)(param_1 + 0x1c8));
          FUN_00404790(*(undefined4 *)(param_1 + 0x1c8));
          return 1;
        }
        LVar2 = DefWindowProcA(*(HWND *)(param_1 + 8),0x21,param_3,param_4);
        return LVar2;
      }
      if (param_2 == 0x24) {
        if ((*(byte *)(param_1 + 0xc) & 0x80) == 0) {
          *(undefined4 *)(param_4 + 0x18) = 300;
          *(undefined4 *)(param_4 + 0x1c) = 100;
        }
        return 0;
      }
      if (param_2 == 0x4e) {
        return 0;
      }
    }
    else {
      if (param_2 == 0x111) {
        if (param_3 == 1) {
          iVar3 = FUN_00418e90(*(undefined4 *)(param_1 + 0x90));
          if (0 < iVar3) {
            if ((*(int *)(param_1 + 0x2a8) != 0) && (*(int *)(param_1 + 0x8c) == 5)) {
              FUN_004043e0(*(undefined4 *)(param_1 + 8),3);
              return 0;
            }
            FUN_004043e0(*(undefined4 *)(param_1 + 8),1);
            return 0;
          }
          pHVar1 = *(HWND *)(param_1 + 8);
          param_3 = 2;
        }
        else {
          if (param_3 == 2) {
            LVar2 = SendMessageA(*(HWND *)(param_1 + 0x1b4),0x610,0,0);
            if (LVar2 == 0) {
              iVar3 = Transport_IsPreviewPlaying();
              if (iVar3 != 0) {
                FUN_00561900(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),0,
                             *(undefined4 *)(param_1 + 0x90));
              }
              FUN_004043e0(*(undefined4 *)(param_1 + 8),2);
              return 0;
            }
            SendMessageA(*(HWND *)(param_1 + 0x1b4),0x1f,0,0);
            return 0;
          }
          pHVar1 = *(HWND *)(param_1 + 0x1c8);
        }
        LVar2 = SendMessageA(pHVar1,0x111,param_3,param_4);
        return LVar2;
      }
      if (param_2 == 0x618) {
        FUN_00418c70(param_1);
        InvalidateRect(*(HWND *)(param_1 + 0x204),(RECT *)0x0,1);
        return 0;
      }
    }
switchD_004213f1_caseD_3:
    return 0;
  }
  if (param_2 == 0x1a) {
switchD_004213f1_caseD_15:
    FUN_0041c240(param_1,param_2,param_3,param_4);
    return 0;
  }
  switch(param_2) {
  case 1:
    FUN_00418ec0(param_1);
    return 0;
  case 2:
  case 0x14:
    return 0;
  default:
    goto switchD_004213f1_caseD_3;
  case 5:
    hWinPosInfo = BeginDeferWindowPos(3);
    if (*(int *)(param_1 + 0x1c8) != 0) {
      iVar3 = GetSystemMetrics(0x2e);
      hWinPosInfo = DeferWindowPos(hWinPosInfo,*(HWND *)(param_1 + 0x1c8),(HWND)0x0,0,0,
                                   (int)(short)param_4,iVar3 + (short)((uint)param_4 >> 0x10),0x14);
    }
    EndDeferWindowPos(hWinPosInfo);
    return 0;
  case 6:
    if ((short)param_3 == 0) {
      pHVar1 = GetFocus();
      *(HWND *)(param_1 + 0x2ac) = pHVar1;
      FUN_005b8630(*(undefined4 *)(param_1 + 700));
      FUN_00404790(0);
      return 0;
    }
    FUN_00404790(*(undefined4 *)(param_1 + 0x1c8));
    if (*(HWND *)(param_1 + 0x2ac) == (HWND)0x0) {
      SetFocus(*(HWND *)(param_1 + 0x254));
      return 0;
    }
    SetFocus(*(HWND *)(param_1 + 0x2ac));
    return 0;
  case 0x10:
    iVar3 = Transport_IsPreviewPlaying();
    if (iVar3 != 0) {
      FUN_00561900(*(undefined4 *)(param_1 + 0x94),*(undefined4 *)(param_1 + 0x98),0,
                   *(undefined4 *)(param_1 + 0x90));
    }
    EndDialog(*(HWND *)(param_1 + 8),2);
    return 0;
  case 0x15:
    goto switchD_004213f1_caseD_15;
  }
}


