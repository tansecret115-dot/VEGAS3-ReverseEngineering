/* Module: vidcap30.exe
   Function: FUN_00463b10
   Address: 00463b10
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00463b10(HWND param_1,int param_2)

{
  WPARAM wParam;
  LRESULT lParam;
  WPARAM wParam_00;
  undefined1 local_104 [260];
  
  wParam = SendMessageA(param_1,0x188,0,0);
  if (wParam != 0xffffffff) {
    lParam = SendMessageA(param_1,0x199,wParam,0);
    SendMessageA(param_1,0x189,wParam,(LPARAM)local_104);
    SendMessageA(param_1,0x182,wParam,0);
    wParam_00 = SendMessageA(param_1,0x181,wParam + param_2,(LPARAM)local_104);
    SendMessageA(param_1,0x19a,wParam_00,lParam);
    SendMessageA(param_1,0x186,wParam + param_2,0);
  }
  return;
}


