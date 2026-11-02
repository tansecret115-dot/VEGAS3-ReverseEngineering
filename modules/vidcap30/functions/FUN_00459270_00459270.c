/* Module: vidcap30.exe
   Function: FUN_00459270
   Address: 00459270
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00459270(HWND param_1,int param_2)

{
  HWND hWnd;
  WPARAM wParam;
  LRESULT LVar1;
  
  GetDlgItemTextA(param_1,0x9c77,(LPSTR)(param_2 + 0x30),0x80);
  GetDlgItemTextA(param_1,0x46d,(LPSTR)(param_2 + 0x194),500);
  GetDlgItemTextA(param_1,0x9c73,(LPSTR)(param_2 + 0x130),100);
  GetDlgItemTextA(param_1,0x9c7f,(LPSTR)(param_2 + 0xb0),0x80);
  GetDlgItemTextA(param_1,0x48a,(LPSTR)(param_2 + 0x388),0x104);
  hWnd = GetDlgItem(param_1,0x9c74);
  wParam = SendMessageA(hWnd,0x147,0,0);
  if (wParam != 0xffffffff) {
    LVar1 = SendMessageA(hWnd,0x150,wParam,0);
    *(LRESULT *)(param_2 + 0x490) = LVar1;
    *(LRESULT *)(param_2 + 0x494) = LVar1 >> 0x1f;
  }
  return;
}


