/* Module: vegas30.exe
   Function: FUN_004e3c20
   Address: 004e3c20
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e3c20(int param_1)

{
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar1;
  
  if ((param_1 != 0) && (hWnd = *(HWND *)(param_1 + 0xf1c), hWnd != (HWND)0x0)) {
    wParam = SendMessageA(hWnd,0x147,0,0);
    if (0 < (int)wParam) {
      LVar1 = SendMessageA(hWnd,0x150,wParam,0);
      if (LVar1 != 0) {
        FUN_004e33d0(param_1 + 0x80,LVar1);
        FUN_004dc360(param_1 + 0x80,LVar1,0);
      }
    }
  }
  return;
}


