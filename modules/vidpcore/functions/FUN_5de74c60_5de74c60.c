/* Module: vidpcore.dll
   Function: FUN_5de74c60
   Address: 5de74c60
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_5de74c60(HWND param_1,int param_2)

{
  WPARAM wParam;
  LRESULT LVar1;
  
  wParam = SendMessageA(param_1,0x146,0,0);
  do {
    wParam = wParam - 1;
    if ((int)wParam < 0) break;
    LVar1 = SendMessageA(param_1,0x150,wParam,0);
  } while (LVar1 != param_2);
  SendMessageA(param_1,0x14e,wParam,0);
  return wParam;
}


