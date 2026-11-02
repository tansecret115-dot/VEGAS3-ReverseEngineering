/* Module: vegas30.exe
   Function: FUN_0040dde0
   Address: 0040dde0
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_0040dde0(undefined4 *param_1)

{
  HWND hWnd;
  tagRECT local_10;
  
  if (param_1 != (undefined4 *)0x0) {
    UpdateWindow((HWND)*param_1);
    GetClientRect((HWND)*param_1,&local_10);
    local_10.bottom = param_1[0x19];
    SendMessageA((HWND)*param_1,0xb,0,0);
    FUN_0040dca0(param_1);
    hWnd = CreateWindowExA(0x20,"Vegas.Class.Plexi","",0x40000000,local_10.left,local_10.top,
                           local_10.right - local_10.left,local_10.bottom - local_10.top,
                           (HWND)*param_1,(HMENU)0x0,DAT_006471fc,(LPVOID)0x0);
    param_1[0x2d] = hWnd;
    ShowWindow(hWnd,8);
    BringWindowToTop((HWND)param_1[0x2d]);
    SetFocus((HWND)param_1[0x2d]);
    SendMessageA((HWND)*param_1,0xb,1,0);
  }
  return;
}


