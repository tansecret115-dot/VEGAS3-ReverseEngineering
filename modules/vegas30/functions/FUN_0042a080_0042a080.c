/* Module: vegas30.exe
   Function: FUN_0042a080
   Address: 0042a080
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0042a080(HWND param_1,uint param_2,uint param_3,HWND param_4)

{
  LONG dwNewLong;
  int *piVar1;
  int iVar2;
  HWND hWnd;
  int iVar3;
  undefined4 uVar4;
  UINT Msg;
  LPARAM lParam;
  
  uVar4 = 0;
  piVar1 = (int *)GetWindowLongA(param_1,8);
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      dwNewLong = param_4[7].unused;
      SetWindowLongA(param_1,8,dwNewLong);
      _SfSetEditCtrlFont_8(param_1,0);
      FUN_0042a000(param_1,dwNewLong);
      return 1;
    }
    if (param_2 == 2) {
      if (piVar1 != (int *)0x0) {
        SetWindowLongA(param_1,8,0);
      }
      return 1;
    }
    if (param_2 == 0x4e) {
      if (piVar1 != (int *)0x0) {
        uVar4 = FUN_00429b80(param_1,piVar1,param_4);
        return uVar4;
      }
    }
    else if ((param_2 == 0x53) && (piVar1 != (int *)0x0)) {
      _SfHelp_ContextPopupHelp_24(0,param_1,0,param_4[2].unused,&DAT_0063d630,0);
      return 1;
    }
  }
  else if (param_2 == 0x111) {
    if (piVar1 != (int *)0x0) {
      uVar4 = FUN_00429cf0(param_1,param_3 & 0xffff,param_4,param_3 >> 0x10,piVar1);
    }
  }
  else if (param_2 == 0x114) {
    iVar2 = GetDlgCtrlID(param_4);
    if (iVar2 == 0xe1a) {
      iVar2 = _Trackbar_DefScrollProc_20(0x114,param_3,param_4,1,5);
      if (iVar2 < 0) {
        iVar3 = 0;
      }
      else {
        iVar3 = 3;
        if (iVar2 < 4) {
          iVar3 = iVar2;
        }
      }
      *(int *)(*piVar1 + 0x3228) = iVar3;
      FUN_00429600(param_1,iVar2);
      lParam = 0;
      Msg = 0x468;
      hWnd = GetParent(param_1);
      SendMessageA(hWnd,Msg,(WPARAM)param_1,lParam);
      piVar1[2] = 1;
      return 1;
    }
  }
  return uVar4;
}


