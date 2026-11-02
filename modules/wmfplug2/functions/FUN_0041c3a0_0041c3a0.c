/* Module: wmfplug2.dll
   Function: FUN_0041c3a0
   Address: 0041c3a0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0041c3a0(HWND param_1,int param_2,undefined4 param_3,int param_4)

{
  int dwNewLong;
  HWND hWnd;
  UINT Msg;
  WPARAM WVar1;
  LPARAM lParam;
  
  GetWindowLongA(param_1,8);
  if (param_2 == 0x4e) {
    if (*(int *)(param_4 + 8) == -200) {
      lParam = 3;
      WVar1 = 0;
      Msg = 0x470;
      hWnd = GetParent(param_1);
      PostMessageA(hWnd,Msg,WVar1,lParam);
    }
  }
  else if (param_2 == 0x110) {
    dwNewLong = *(int *)(param_4 + 0x1c);
    SetWindowLongA(param_1,8,dwNewLong);
    WVar1 = *(WPARAM *)(dwNewLong + 0x910);
    if (WVar1 != 0) {
      FUN_0041c270(param_1,WVar1);
    }
    return 1;
  }
  return 0;
}


