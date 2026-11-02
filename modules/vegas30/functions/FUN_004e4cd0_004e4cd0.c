/* Module: vegas30.exe
   Function: FUN_004e4cd0
   Address: 004e4cd0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004e4cd0(uint param_1)

{
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar1;
  
  if (((DAT_0064762c != 0) && (*(int *)(DAT_0064762c + 0x70) != 0)) &&
     (hWnd = *(HWND *)(*(int *)(DAT_0064762c + 0x70) + 0xf1c), hWnd != (HWND)0x0)) {
    wParam = SendMessageA(hWnd,0x147,0,0);
    if (-1 < (int)wParam) {
      LVar1 = SendMessageA(hWnd,0x150,wParam,0);
      if (LVar1 != 0) {
        *(uint *)(LVar1 + 0xa0) = (param_1 & 1) << 1 | *(uint *)(LVar1 + 0xa0) & 0xfffffffd;
      }
    }
  }
  return;
}


