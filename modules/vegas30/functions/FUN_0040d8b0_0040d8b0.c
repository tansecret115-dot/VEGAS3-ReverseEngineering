/* Module: vegas30.exe
   Function: FUN_0040d8b0
   Address: 0040d8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040d8b0(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  HWND hWnd;
  uint uVar1;
  POINT pt;
  int iVar2;
  BOOL BVar3;
  HWND pHVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  RECT local_10;
  
  iVar6 = (int)(short)param_4;
  iVar5 = (int)(short)((uint)param_4 >> 0x10);
  hWnd = (HWND)*param_1;
  switch(param_2) {
  case 0x200:
    pHVar4 = GetCapture();
    if (pHVar4 == hWnd) {
      if (param_1[0x3d] == 1) {
        iVar2 = GetSystemMetrics(0x44);
        iVar7 = (iVar2 + 1) / 2;
        iVar2 = GetSystemMetrics(0x45);
        local_10.left = param_1[0x39] - iVar7;
        local_10.right = param_1[0x39] + iVar7;
        local_10.top = (iVar2 + 1) / 2;
        local_10.bottom = param_1[0x3a] + local_10.top;
        local_10.top = param_1[0x3a] - local_10.top;
        pt.y = iVar5;
        pt.x = iVar6;
        BVar3 = PtInRect(&local_10,pt);
        if (BVar3 == 0) {
          param_1[0x40] = param_1[0xf];
          param_1[0x3f] = param_1[0xe];
          param_1[0x43] = param_1[0x12];
          iVar5 = param_1[0x38];
          param_1[0x3d] = 2;
          param_1[0x41] = param_1[0x10];
          param_1[0x42] = param_1[0x11];
          if (iVar5 == 2) {
            param_1[0x3b] = 0;
            param_1[0x3c] = param_1[0x3a] - param_1[0x14];
            return 0;
          }
          if (iVar5 == 4) {
            param_1[0x3b] = 0;
            param_1[0x3c] = param_1[0x3a] - param_1[0x16];
            return 0;
          }
          if (iVar5 == 1) {
            param_1[0x3c] = 0;
            param_1[0x3b] = param_1[0x39] - param_1[0x13];
            return 0;
          }
          if (iVar5 == 3) {
            param_1[0x3c] = 0;
            param_1[0x3b] = param_1[0x39] - param_1[0x15];
            return 0;
          }
        }
      }
      else if (param_1[0x3d] == 2) {
        if (param_1[0x38] == 1) {
          DAT_006477d0 = (param_1[0x3f] - param_1[0x39]) + iVar6;
          iVar5 = (param_1[2] - param_1[4]) + -2;
          if (DAT_006477d0 < 2) {
            DAT_006477d0 = 2;
          }
          else if (iVar5 < DAT_006477d0) {
            DAT_006477d0 = iVar5;
          }
          param_1[0xe] = DAT_006477d0;
        }
        else if (param_1[0x38] == 4) {
          iVar6 = param_1[0x42];
          if ((int)param_1[0x42] <= (int)param_1[0x43]) {
            iVar6 = param_1[0x43];
          }
          iVar6 = (param_1[0x3a] - iVar5) + iVar6;
          iVar5 = ((param_1[0x19] - param_1[0x14]) - param_1[5]) + -2;
          if (iVar6 < 0xc) {
            param_1[0x11] = 3;
            InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
          }
          else {
            iVar2 = param_1[0x12];
            if ((iVar2 <= iVar6) && (iVar2 = iVar5, iVar6 <= iVar5)) {
              iVar2 = iVar6;
            }
            param_1[0x11] = iVar2;
            InvalidateRect((HWND)*param_1,(RECT *)0x0,0);
          }
        }
        FUN_0040c190(param_1,0);
        UpdateWindow((HWND)*param_1);
        return 0;
      }
    }
    break;
  case 0x201:
  case 0x203:
    if (param_1[0x3d] == 0) {
      uVar1 = param_1[0x38];
      param_1[0x3e] = (uint)(param_2 == 0x203);
      if ((uVar1 == 0) || (4 < uVar1)) {
        SetFocus(hWnd);
        return 0;
      }
      if (((param_2 == 0x203) != 0) && (uVar1 == 4)) {
        FUN_004114a0();
        return 0;
      }
      param_1[0x3d] = 1;
      SetCapture(hWnd);
      param_1[0x39] = iVar6;
      param_1[0x3a] = iVar5;
      return 0;
    }
    break;
  case 0x202:
    pHVar4 = GetCapture();
    if (((pHVar4 == hWnd) && (param_1[0x3d] == 2)) && (param_1[0x38] == 4)) {
      if (param_1[0x11] == 3) {
        DAT_0064aa4c = 1;
      }
      else {
        DAT_0064aa4c = 0;
        DAT_006477dc = param_1[0x11];
      }
    }
    param_1[0x3d] = 0;
    if (pHVar4 == hWnd) {
      ReleaseCapture();
    }
    if ((param_1[0x3e] != 0) && (param_1[0x38] == 6)) {
      SendMessageA(hWnd,0x111,0x9e8e,0);
    }
  }
  return 0;
}


