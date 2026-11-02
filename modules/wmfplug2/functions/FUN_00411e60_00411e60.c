/* Module: wmfplug2.dll
   Function: FUN_00411e60
   Address: 00411e60
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00411e60(HWND param_1,int param_2)

{
  LRESULT LVar1;
  WPARAM wParam;
  
  SendMessageA(param_1,0x14e,0,0);
  wParam = 0;
  LVar1 = SendMessageA(param_1,0x146,0,0);
  if (0 < LVar1) {
    while (LVar1 = SendMessageA(param_1,0x150,wParam,0), param_2 != LVar1) {
      wParam = wParam + 1;
      LVar1 = SendMessageA(param_1,0x146,0,0);
      if (LVar1 <= (int)wParam) {
        return;
      }
    }
    SendMessageA(param_1,0x14e,wParam,0);
  }
  return;
}


