/* Module: vegas30.exe
   Function: FUN_0050d520
   Address: 0050d520
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_0050d520(int param_1,HINSTANCE param_2)

{
  HWND hWnd;
  int iVar1;
  HWND *ppHVar2;
  HWND local_2c [4];
  tagRECT local_1c;
  int local_8;
  
  hWnd = CreateWindowExA(0,"tooltips_class32",(LPCSTR)0x0,0x80000001,-0x80000000,-0x80000000,
                         -0x80000000,-0x80000000,*(HWND *)(param_1 + 4),(HMENU)0x0,param_2,
                         (LPVOID)0x0);
  if (hWnd != (HWND)0x0) {
    ppHVar2 = local_2c;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppHVar2 = (HWND)0x0;
      ppHVar2 = ppHVar2 + 1;
    }
    local_2c[2] = *(HWND *)(param_1 + 4);
    local_8 = param_1 + 0x158;
    local_2c[0] = (HWND)0x2c;
    local_2c[3] = (HWND)0x1;
    GetClientRect(local_2c[2],&local_1c);
    local_2c[1] = (HWND)0x0;
    SendMessageA(hWnd,0x403,2,2000);
    SendMessageA(hWnd,0x403,3,2000);
    SendMessageA(hWnd,0x403,1,2000);
    SendMessageA(hWnd,0x401,0,0);
    SendMessageA(hWnd,0x404,0,(LPARAM)local_2c);
    SendMessageA(hWnd,0x411,1,(LPARAM)local_2c);
    return hWnd;
  }
  return (HWND)0x0;
}


