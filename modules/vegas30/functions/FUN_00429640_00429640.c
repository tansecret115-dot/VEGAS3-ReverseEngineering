/* Module: vegas30.exe
   Function: FUN_00429640
   Address: 00429640
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_00429640(HWND param_1,int param_2)

{
  LRESULT LVar1;
  LRESULT LVar2;
  WPARAM wParam;
  
  LVar1 = SendMessageA(param_1,0x146,0,0);
  wParam = 0;
  if (0 < LVar1) {
    do {
      LVar2 = SendMessageA(param_1,0x150,wParam,0);
      if (LVar2 == param_2) {
        SendMessageA(param_1,0x14e,wParam,0);
        return;
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  SendMessageA(param_1,0x14e,LVar1 - 1,0);
  return;
}


