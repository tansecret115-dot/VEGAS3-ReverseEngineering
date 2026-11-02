/* Module: vegas30.exe
   Function: FUN_0043b840
   Address: 0043b840
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0043b840(void)

{
  HWND hWnd;
  LRESULT LVar1;
  
  if ((DAT_0064b184 != 0) && (hWnd = *(HWND *)(DAT_0064b184 + 0x80), hWnd != (HWND)0x0)) {
    LVar1 = SendMessageA(hWnd,0x431,0,0);
    LVar1 = SendMessageA(hWnd,0x436,0,LVar1);
    SendMessageA(hWnd,0x41b,0,0);
    SendMessageA(hWnd,0x436,0,LVar1);
    InvalidateRect(hWnd,(RECT *)0x0,1);
  }
  return;
}


