/* Module: vegas30.exe
   Function: FUN_0052fe80
   Address: 0052fe80
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052fe80(HWND param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0xf0;
  *(undefined4 *)(param_2 + 0xb48) = 0;
  hWnd = GetDlgItem(param_1,0x471);
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == 1) {
    *(undefined4 *)(param_2 + 0xb48) = 1;
  }
  return 1;
}


