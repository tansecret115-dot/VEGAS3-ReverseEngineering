/* Module: vegas30k.dll
   Function: FUN_01119b60
   Address: 01119b60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_01119b60(HWND param_1,int param_2)

{
  HWND hWnd;
  WPARAM wParam;
  LPARAM lParam;
  
  if (*(int *)(param_2 + 0xc) != 0) {
    *(undefined4 *)(param_2 + 0xb8) = 0;
    hWnd = CreateWindowExA(4,"tooltips_class32",(LPCSTR)0x0,0x80000001,-0x80000000,-0x80000000,
                           -0x80000000,-0x80000000,param_1,(HMENU)0x0,DAT_0120e5c0,(LPVOID)0x0);
    *(HWND *)(param_2 + 200) = hWnd;
    if (hWnd != (HWND)0x0) {
      *(undefined4 *)(param_2 + 0xcc) = 0x2c;
      *(undefined4 *)(param_2 + 0xd0) = 0;
      *(HWND *)(param_2 + 0xd4) = param_1;
      *(undefined4 *)(param_2 + 0xd8) = 1;
      *(HINSTANCE *)(param_2 + 0xec) = DAT_0120e5c0;
      *(int *)(param_2 + 0xf0) = param_2 + 0xf8;
      SendMessageA(hWnd,0x403,2,0x5dc);
      SendMessageA(*(HWND *)(param_2 + 200),0x401,*(WPARAM *)(param_2 + 0xb8),0);
      lParam = 0;
      wParam = _SfGetUIFont_4(0x68);
      SendMessageA(*(HWND *)(param_2 + 200),0x30,wParam,lParam);
    }
  }
  return;
}


