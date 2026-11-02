/* Module: vegas30.exe
   Function: FUN_004d5aa0
   Address: 004d5aa0
   Source: Ghidra pseudocode (Stage 10 batch) */


void __fastcall FUN_004d5aa0(int param_1)

{
  HWND hWnd;
  HGDIOBJ wParam;
  LPARAM lParam;
  
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0xfffffffd;
  hWnd = CreateWindowExA(4,"tooltips_class32",(LPCSTR)0x0,0x80000001,-0x80000000,-0x80000000,
                         -0x80000000,-0x80000000,*(HWND *)(param_1 + 0x24),(HMENU)0x0,DAT_006471fc,
                         (LPVOID)0x0);
  *(HWND *)(param_1 + 0xa4) = hWnd;
  if (hWnd != (HWND)0x0) {
    *(undefined4 *)(param_1 + 0xa8) = 0x2c;
    *(undefined4 *)(param_1 + 0xac) = 0;
    *(undefined4 *)(param_1 + 0xb0) = *(undefined4 *)(param_1 + 0x24);
    *(undefined4 *)(param_1 + 0xb4) = 1;
    *(HINSTANCE *)(param_1 + 200) = DAT_006471fc;
    *(int *)(param_1 + 0xcc) = param_1 + 0xd4;
    SendMessageA(hWnd,0x403,2,60000);
    SendMessageA(*(HWND *)(param_1 + 0xa4),0x401,(*(int *)(param_1 + 0x30) << 0x1e) >> 0x1f,0);
    SendMessageA(*(HWND *)(param_1 + 0xa4),0x404,0,(LPARAM)(param_1 + 0xa8));
    lParam = 0;
    wParam = GetStockObject(0x11);
    SendMessageA(*(HWND *)(param_1 + 0xa4),0x30,(WPARAM)wParam,lParam);
  }
  return;
}


