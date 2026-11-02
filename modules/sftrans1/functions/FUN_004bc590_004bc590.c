/* Module: sftrans1.dll
   Function: FUN_004bc590
   Address: 004bc590
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND FUN_004bc590(int param_1,HINSTANCE param_2)

{
  HWND hWnd;
  WPARAM wParam;
  int iVar1;
  undefined4 *puVar2;
  LPARAM lParam;
  undefined4 local_2c [9];
  int local_8;
  
  hWnd = CreateWindowExA(0,"tooltips_class32",(LPCSTR)0x0,0x80000001,-0x80000000,-0x80000000,
                         -0x80000000,-0x80000000,*(HWND *)(param_1 + 8),(HMENU)0x0,param_2,
                         (LPVOID)0x0);
  if (hWnd != (HWND)0x0) {
    local_2c[2] = *(undefined4 *)(param_1 + 8);
    puVar2 = local_2c;
    for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    local_8 = param_1 + 0x14;
    local_2c[0] = 0x2c;
    local_2c[3] = 1;
    SendMessageA(hWnd,0x403,3,500);
    SendMessageA(hWnd,0x403,2,5000);
    SendMessageA(hWnd,0x403,1,0);
    SendMessageA(hWnd,0x401,0,0);
    SendMessageA(hWnd,0x404,0,(LPARAM)local_2c);
    lParam = 0;
    wParam = FUN_004e4320(100);
    SendMessageA(hWnd,0x30,wParam,lParam);
    return hWnd;
  }
  return (HWND)0x0;
}


