/* Module: vegas30.exe
   Function: FUN_00567dd0
   Address: 00567dd0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_00567dd0(HWND param_1,uint param_2,uint param_3,int param_4)

{
  LONG dwNewLong;
  uint *puVar1;
  HWND hWnd;
  undefined4 uVar2;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  puVar1 = (uint *)GetWindowLongA(param_1,8);
  if (param_2 < 0x111) {
    if (param_2 == 0x110) {
      dwNewLong = *(LONG *)(param_4 + 0x1c);
      SetWindowLongA(param_1,8,dwNewLong);
      uVar2 = FUN_00567d80(param_1,dwNewLong);
      return uVar2;
    }
    if (param_2 == 2) {
      KillTimer(param_1,100);
      if ((puVar1[0x32] & 0x10) != 0) {
        KillTimer(param_1,0x65);
        return 0;
      }
    }
    else if ((param_2 == 0x4e) && (*(int *)(param_4 + 8) == -200)) {
      lParam = 5;
      wParam = 0;
      Msg = 0x470;
      hWnd = GetParent(param_1);
      PostMessageA(hWnd,Msg,wParam,lParam);
      return 0;
    }
  }
  else if (param_2 == 0x111) {
    param_3 = param_3 & 0xffff;
    if (((param_3 != 0x438) && (0x622 < param_3)) && (param_3 < 0x625)) {
      CheckRadioButton(param_1,0x624,0x623,param_3);
      *puVar1 = (uint)(param_3 == 0x624) << 1 | *puVar1 & 0xfffffffd;
      FUN_00567b80(param_1,puVar1,1);
    }
  }
  else if (param_2 == 0x113) {
    if (param_3 == 100) {
      FUN_00567b80(param_1,puVar1,0);
      return 0;
    }
    if (param_3 == 0x65) {
      FUN_00567ab0(param_1,puVar1);
      return 0;
    }
  }
  return 0;
}


