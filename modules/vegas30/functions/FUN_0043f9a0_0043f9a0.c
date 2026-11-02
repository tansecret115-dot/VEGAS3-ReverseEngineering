/* Module: vegas30.exe
   Function: FUN_0043f9a0
   Address: 0043f9a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0043f9a0(HWND param_1,int param_2,uint param_3,HWND param_4)

{
  HWND pHVar1;
  int iVar2;
  HWND wParam;
  uint uVar3;
  LPARAM lParam;
  undefined4 uVar4;
  
  pHVar1 = (HWND)GetWindowLongA(param_1,8);
  if (param_2 == 0x110) {
    _SfWndCenter_16(param_1,0,0,0x8001);
    SetWindowLongA(param_1,8,(LONG)param_4);
    pHVar1 = GetDlgItem(param_1,0x408);
    FUN_0043f310(pHVar1,param_4->unused,1);
    FUN_0043f4f0(param_1,param_4,0x408);
    FUN_0043f7e0(param_1,param_4,0x408);
    FUN_0043f4f0(param_1,param_4,0x400);
    param_4[0x24].unused = 0;
    param_4[0x23].unused = 1;
    param_4[0x25].unused = 0;
    FUN_0043f4f0(param_1,param_4,0x403);
    pHVar1 = GetDlgItem(param_1,0x3ff);
    SendMessageA(pHVar1,0x60e,0,1);
    SendMessageA(pHVar1,0x60f,0,10000);
    lParam = 0xc;
    wParam = GetDlgItem(param_1,0x3fe);
    SendMessageA(pHVar1,0x624,(WPARAM)wParam,lParam);
    uVar3 = param_4[0x1e].unused;
    if (uVar3 == 0) {
      uVar3 = 1;
    }
    else if (10000 < uVar3) {
      uVar3 = 10000;
    }
    param_4[0x1e].unused = uVar3;
    FUN_0043f4f0(param_1,param_4,0x3fe);
    uVar4 = 0x405;
LAB_0043fbd3:
    FUN_0043f4f0(param_1,param_4,uVar4);
    FUN_0043f4f0(param_1,param_4,0x406);
    return 1;
  }
  if (param_2 == 0x111) {
    uVar3 = param_3 & 0xffff;
    if (uVar3 < 0x404) {
      if (uVar3 == 0x403) {
        FUN_0043f7e0(param_1,pHVar1,0x403);
        FUN_0043f4f0(param_1,pHVar1,0x403);
        return 1;
      }
      if (uVar3 < 0x403) {
        if (0x3ff < uVar3) {
          FUN_0043f7e0(param_1,pHVar1,uVar3);
          FUN_0043f4f0(param_1,pHVar1,uVar3);
          return 1;
        }
        if ((uVar3 != 0) && (uVar3 < 3)) {
          FUN_0043f7e0(param_1,pHVar1,0x408);
          EndDialog(param_1,uVar3);
          return 1;
        }
      }
    }
    else if ((uVar3 == 0x408) && ((short)(param_3 >> 0x10) == 1)) {
      FUN_0043f7e0(param_1,pHVar1,0x408);
      uVar4 = 0x408;
      param_4 = pHVar1;
      goto LAB_0043fbd3;
    }
  }
  else if (param_2 == 0x115) {
    iVar2 = GetDlgCtrlID(param_4);
    if (iVar2 == 0x3ff) {
      if (((param_3 & 0xffff) == 9) || ((param_3 & 0xffff) == 8)) {
        FUN_0043f7e0(param_1,pHVar1,0x3fe);
      }
      iVar2 = _Spinner_DefScrollProc_24(0x115,param_3,param_4,1,10,pHVar1[0x1e].unused);
      if (iVar2 != pHVar1[0x1e].unused) {
        pHVar1[0x1e].unused = iVar2;
        FUN_0043f4f0(param_1,pHVar1,0x3fe);
      }
    }
  }
  return 0;
}


