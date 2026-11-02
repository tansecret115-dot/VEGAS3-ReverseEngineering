/* Module: vegas30.exe
   Function: FUN_004fad00
   Address: 004fad00
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_004fad00(undefined4 *param_1)

{
  HWND hWnd;
  HGDIOBJ wParam;
  LPARAM lParam;
  
  if ((HWND)param_1[0x32] != (HWND)0x0) {
    DestroyWindow((HWND)param_1[0x32]);
  }
  param_1[0x32] = 0;
  param_1[3] = param_1[3] & 0xfffffffb;
  hWnd = CreateWindowExA(4,"tooltips_class32",(LPCSTR)0x0,0x80000001,-0x80000000,-0x80000000,
                         -0x80000000,-0x80000000,(HWND)*param_1,(HMENU)0x0,DAT_006471fc,(LPVOID)0x0)
  ;
  param_1[0x32] = hWnd;
  if (hWnd != (HWND)0x0) {
    param_1[0x33] = 0x2c;
    param_1[0x34] = 0;
    param_1[0x35] = *param_1;
    param_1[0x36] = 1;
    param_1[0x3b] = DAT_006471fc;
    param_1[0x3c] = param_1 + 0x3e;
    SendMessageA(hWnd,0x403,2,60000);
    SendMessageA((HWND)param_1[0x32],0x401,(uint)param_1[3] >> 2 & 1,0);
    SendMessageA((HWND)param_1[0x32],0x404,0,(LPARAM)(param_1 + 0x33));
    lParam = 0;
    wParam = GetStockObject(0x11);
    SendMessageA((HWND)param_1[0x32],0x30,(WPARAM)wParam,lParam);
  }
  return;
}


