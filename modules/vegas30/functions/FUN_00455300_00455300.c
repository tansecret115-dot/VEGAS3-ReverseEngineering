/* Module: vegas30.exe
   Function: FUN_00455300
   Address: 00455300
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00455300(int param_1)

{
  HWND hWnd;
  HGDIOBJ wParam;
  LPARAM lParam;
  
  *(uint *)(param_1 + 0x18) = *(uint *)(param_1 + 0x18) & 0xfffff7ff;
  hWnd = CreateWindowExA(4,"tooltips_class32",(LPCSTR)0x0,0x80000001,-0x80000000,-0x80000000,
                         -0x80000000,-0x80000000,*(HWND *)(param_1 + 4),(HMENU)0x0,DAT_006471fc,
                         (LPVOID)0x0);
  *(HWND *)(param_1 + 0x210) = hWnd;
  if (hWnd != (HWND)0x0) {
    *(undefined4 *)(param_1 + 0x214) = 0x2c;
    *(undefined4 *)(param_1 + 0x218) = 0;
    *(undefined4 *)(param_1 + 0x21c) = *(undefined4 *)(param_1 + 4);
    *(undefined4 *)(param_1 + 0x220) = 1;
    *(HINSTANCE *)(param_1 + 0x234) = DAT_006471fc;
    *(int *)(param_1 + 0x238) = param_1 + 0x240;
    SendMessageA(hWnd,0x403,2,60000);
    SendMessageA(*(HWND *)(param_1 + 0x210),0x401,*(uint *)(param_1 + 0x18) >> 0xb & 1,0);
    SendMessageA(*(HWND *)(param_1 + 0x210),0x404,0,(LPARAM)(param_1 + 0x214));
    lParam = 0;
    wParam = GetStockObject(0x11);
    SendMessageA(*(HWND *)(param_1 + 0x210),0x30,(WPARAM)wParam,lParam);
  }
  return;
}


