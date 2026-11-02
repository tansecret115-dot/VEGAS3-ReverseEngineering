/* Module: vegas30.exe
   Function: FUN_0052ffe0
   Address: 0052ffe0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0052ffe0(HWND param_1,int param_2)

{
  HWND hWnd;
  LRESULT LVar1;
  UINT Msg;
  WPARAM wParam;
  LPARAM lParam;
  
  lParam = 0;
  wParam = 0;
  Msg = 0xf0;
  *(undefined4 *)(param_2 + 0xb44) = 0;
  hWnd = GetDlgItem(param_1,0x47b);
  LVar1 = SendMessageA(hWnd,Msg,wParam,lParam);
  if (LVar1 == 1) {
    *(undefined4 *)(param_2 + 0xb44) = 1;
  }
  return 1;
}


