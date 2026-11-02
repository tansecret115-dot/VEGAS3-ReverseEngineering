/* Module: vidcap30.exe
   Function: FUN_00463a50
   Address: 00463a50
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00463a50(HWND param_1,HWND param_2)

{
  WPARAM wParam;
  LRESULT lParam;
  WPARAM WVar1;
  undefined1 local_104 [260];
  
  wParam = SendMessageA(param_2,0x188,0,0);
  if (wParam != 0xffffffff) {
    lParam = SendMessageA(param_2,0x199,wParam,0);
    SendMessageA(param_2,0x189,wParam,(LPARAM)local_104);
    SendMessageA(param_2,0x182,wParam,0);
    WVar1 = SendMessageA(param_1,0x180,0,(LPARAM)local_104);
    SendMessageA(param_1,0x19a,WVar1,lParam);
    SendMessageA(param_1,0x186,WVar1,0);
    WVar1 = SendMessageA(param_2,0x18b,0,0);
    if (wParam == WVar1) {
      wParam = wParam - 1;
    }
    SendMessageA(param_2,0x186,wParam,0);
  }
  return;
}


