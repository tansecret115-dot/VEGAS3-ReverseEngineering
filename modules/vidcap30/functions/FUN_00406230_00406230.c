/* Module: vidcap30.exe
   Function: FUN_00406230
   Address: 00406230
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00406230(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  HWND hWnd;
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  HWND pHVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  hWnd = (HWND)*param_1;
  iVar7 = (int)(short)param_4;
  iVar6 = (int)(short)((uint)param_4 >> 0x10);
  switch(param_2) {
  case 0x200:
    pHVar5 = GetCapture();
    if (pHVar5 == hWnd) {
      if (param_1[0x35] == 1) {
        iVar3 = GetSystemMetrics(0x44);
        iVar8 = (iVar3 + 1) / 2;
        iVar4 = GetSystemMetrics(0x45);
        iVar3 = param_1[0x32];
        iVar2 = param_1[0x31];
        iVar4 = (iVar4 + 1) / 2;
        if ((((iVar7 < iVar2 - iVar8) || (iVar8 + iVar2 <= iVar7)) || (iVar6 < iVar3 - iVar4)) ||
           (iVar4 + iVar3 <= iVar6)) {
          param_1[0x37] = param_1[0xf];
          param_1[0x39] = param_1[0x11];
          param_1[0x3b] = param_1[0x13];
          param_1[0x38] = param_1[0x10];
          param_1[0x35] = 2;
          param_1[0x3a] = param_1[0x12];
          switch(param_1[0x30]) {
          case 1:
            iVar6 = param_1[0x14];
            break;
          case 2:
            param_1[0x33] = 0;
            param_1[0x34] = iVar3 - param_1[0x15];
            return 0;
          case 3:
            iVar6 = param_1[0x16];
            break;
          case 4:
            param_1[0x33] = 0;
            param_1[0x34] = iVar3 - param_1[0x17];
            return 0;
          default:
            goto switchD_00406265_default;
          }
          param_1[0x34] = 0;
          param_1[0x33] = iVar2 - iVar6;
          return 0;
        }
      }
      else if (param_1[0x35] == 2) {
        if (param_1[0x30] == 1) {
          DAT_005ba550 = (param_1[0x37] - param_1[0x31]) + iVar7;
          iVar6 = (param_1[2] - param_1[4]) + -2;
          if (DAT_005ba550 < 2) {
            DAT_005ba550 = 2;
          }
          else if (iVar6 < DAT_005ba550) {
            DAT_005ba550 = iVar6;
          }
          param_1[0xf] = DAT_005ba550;
        }
        else if (param_1[0x30] == 4) {
          iVar7 = param_1[0x3a];
          if ((int)param_1[0x3a] <= (int)param_1[0x3b]) {
            iVar7 = param_1[0x3b];
          }
          iVar7 = (param_1[0x32] - iVar6) + iVar7;
          iVar6 = FUN_00434740(param_1[0x1b]);
          iVar6 = (((param_1[0x1a] - param_1[0x15]) - param_1[5]) - iVar6) + -2;
          if (iVar7 < 0xc) {
            param_1[0x12] = 3;
            InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
          }
          else {
            iVar3 = param_1[0x13];
            if ((iVar3 <= iVar7) && (iVar3 = iVar6, iVar7 <= iVar6)) {
              iVar3 = iVar7;
            }
            param_1[0x12] = iVar3;
            InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
          }
        }
        FUN_00404c90(param_1,0);
        UpdateWindow((HWND)*param_1);
        return 0;
      }
    }
    break;
  case 0x201:
  case 0x203:
    if (param_1[0x35] == 0) {
      uVar1 = param_1[0x30];
      param_1[0x36] = (uint)(param_2 == 0x203);
      if ((uVar1 == 0) || (4 < uVar1)) {
        SetFocus(hWnd);
        return 0;
      }
      if (((param_2 == 0x203) != 0) && (uVar1 == 4)) {
        FUN_00408d40();
        return 0;
      }
      param_1[0x35] = 1;
      SetCapture(hWnd);
      param_1[0x31] = iVar7;
      param_1[0x32] = iVar6;
      return 0;
    }
    break;
  case 0x202:
    pHVar5 = GetCapture();
    if (((pHVar5 == hWnd) && (param_1[0x35] == 2)) && (param_1[0x30] == 4)) {
      if (param_1[0x12] == 3) {
        DAT_005bb7d0 = 1;
      }
      else {
        DAT_005bb7d0 = 0;
        DAT_005ba55c = param_1[0x12];
      }
    }
    param_1[0x35] = 0;
    if (pHVar5 == hWnd) {
      ReleaseCapture();
    }
    if ((param_1[0x36] != 0) && (param_1[0x30] == 6)) {
      SendMessageA(hWnd,0x111,0x43d,0);
    }
  }
switchD_00406265_default:
  return 0;
}


