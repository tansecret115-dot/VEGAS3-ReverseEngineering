/* Module: aviplug.dll
   Function: FUN_5f95fe50
   Address: 5f95fe50
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_5f95fe50(HWND param_1,int param_2)

{
  LRESULT LVar1;
  LRESULT LVar2;
  WPARAM wParam;
  
  LVar1 = SendMessageA(param_1,0x146,0,0);
  wParam = 0;
  if (LVar1 < 1) {
    return 0xffffffff;
  }
  do {
    LVar2 = SendMessageA(param_1,0x150,wParam,0);
    if (LVar2 == param_2) {
      return wParam;
    }
    wParam = wParam + 1;
  } while ((int)wParam < LVar1);
  return 0xffffffff;
}


