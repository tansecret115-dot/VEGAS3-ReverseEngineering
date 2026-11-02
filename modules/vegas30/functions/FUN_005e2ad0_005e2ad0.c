/* Module: vegas30.exe
   Function: FUN_005e2ad0
   Address: 005e2ad0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_005e2ad0(HWND param_1,int param_2)

{
  HWND hWnd;
  LPARAM LVar1;
  WPARAM wParam;
  
  hWnd = GetDlgItem(param_1,0x457);
  SendMessageA(hWnd,0x14b,0,0);
  LVar1 = _SfGetString_8(DAT_00647204,0x563b);
  SendMessageA(hWnd,0x143,0,LVar1);
  LVar1 = _SfGetString_8(DAT_00647204,0x563c);
  SendMessageA(hWnd,0x143,0,LVar1);
  LVar1 = _SfGetString_8(DAT_00647204,0x563d);
  SendMessageA(hWnd,0x143,0,LVar1);
  wParam = 0;
  do {
    SendMessageA(hWnd,0x151,wParam,wParam);
    wParam = wParam + 1;
  } while ((int)wParam < 3);
  SendMessageA(hWnd,0x14e,*(WPARAM *)(param_2 + 0xd04),0);
  return;
}


