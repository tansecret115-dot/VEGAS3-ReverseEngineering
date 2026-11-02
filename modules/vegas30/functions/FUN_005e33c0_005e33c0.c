/* Module: vegas30.exe
   Function: FUN_005e33c0
   Address: 005e33c0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_005e33c0(HWND param_1,int param_2,int param_3)

{
  HWND hWnd;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  switch(*(undefined4 *)(param_3 + 8)) {
  case 0xffffff35:
    *(undefined4 *)(param_2 + 0xd4c) = 0;
    break;
  case 0xffffff36:
    *(undefined4 *)(param_2 + 0xd38) = 1;
    FUN_005e34a0(param_1,param_2);
    (**(code **)(param_2 + 0x22c))(param_2);
    SetWindowLongA(param_1,0,0);
    return 1;
  case 0xffffff37:
    SetWindowLongA(param_1,0,0);
    return 1;
  case 0xffffff38:
    SetWindowLongA(param_1,0,0);
    lParam = 0;
    wParam = *(WPARAM *)(param_2 + 0xd5c);
    Msg = 0xf1;
    hWnd = GetDlgItem(param_1,1000);
    SendMessageA(hWnd,Msg,wParam,lParam);
    return 0;
  }
  return 0;
}


