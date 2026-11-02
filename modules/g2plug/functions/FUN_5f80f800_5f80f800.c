/* Module: g2plug.dll
   Function: FUN_5f80f800
   Address: 5f80f800
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_5f80f800(HWND param_1,LPARAM param_2,undefined4 *param_3)

{
  WPARAM wParam;
  HGLOBAL hMem;
  undefined4 *lParam;
  
  wParam = SendMessageA(param_1,0x143,0,param_2);
  hMem = GlobalAlloc(0x42,0x10);
  lParam = GlobalLock(hMem);
  if (lParam != (undefined4 *)0x0) {
    *lParam = *param_3;
    lParam[1] = param_3[1];
    lParam[2] = param_3[2];
    lParam[3] = param_3[3];
    SendMessageA(param_1,0x151,wParam,(LPARAM)lParam);
    SendMessageA(param_1,0x14e,wParam,0);
    return 0;
  }
  return 0x8007000e;
}


