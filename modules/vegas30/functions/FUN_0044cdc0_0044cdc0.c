/* Module: vegas30.exe
   Function: FUN_0044cdc0
   Address: 0044cdc0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_0044cdc0(int param_1)

{
  HWND hWnd;
  int iVar1;
  HWND *ppHVar2;
  HWND local_2c [4];
  tagRECT local_1c;
  undefined4 local_8;
  
  hWnd = (HWND)SendMessageA(*(HWND *)(param_1 + 0x15c),0x423,0,0);
  if (hWnd != (HWND)0x0) {
    ppHVar2 = local_2c;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *ppHVar2 = (HWND)0x0;
      ppHVar2 = ppHVar2 + 1;
    }
    local_2c[2] = *(HWND *)(param_1 + 8);
    local_2c[0] = (HWND)0x2c;
    local_2c[3] = (HWND)0x41a;
    local_8 = 0xffffffff;
    GetClientRect(local_2c[2],&local_1c);
    local_2c[1] = (HWND)0x10;
    SendMessageA(hWnd,0x403,2,60000);
    SendMessageA(hWnd,0x404,0,(LPARAM)local_2c);
    SendMessageA(hWnd,0x401,1,0);
    return hWnd;
  }
  return (HWND)0x0;
}


