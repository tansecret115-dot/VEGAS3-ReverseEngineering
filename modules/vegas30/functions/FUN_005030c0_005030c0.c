/* Module: vegas30.exe
   Function: FUN_005030c0
   Address: 005030c0
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_005030c0(HWND param_1)

{
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar1;
  
  hWnd = GetDlgItem(param_1,0x4b1);
  wParam = SendMessageA(hWnd,0x147,0,0);
  if (wParam != 0xffffffff) {
    LVar1 = SendMessageA(hWnd,0x150,wParam,0);
    return LVar1;
  }
  return 0;
}


