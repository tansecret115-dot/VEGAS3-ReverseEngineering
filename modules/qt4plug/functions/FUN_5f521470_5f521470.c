/* Module: qt4plug.dll
   Function: FUN_5f521470
   Address: 5f521470
   Source: Ghidra pseudocode (Stage 10 batch) */


WPARAM FUN_5f521470(HWND param_1,int param_2)

{
  LRESULT LVar1;
  LRESULT LVar2;
  WPARAM wParam;
  
  if (param_1 != (HWND)0x0) {
    LVar1 = SendMessageA(param_1,0x146,0,0);
    wParam = 0;
    if (0 < LVar1) {
      do {
        LVar2 = SendMessageA(param_1,0x150,wParam,0);
        if ((LVar2 != -1) && (param_2 == *(int *)(DAT_5f5a3ed4 + 6 + LVar2 * 0x2c))) {
          return wParam;
        }
        wParam = wParam + 1;
      } while ((int)wParam < LVar1);
    }
  }
  return 0;
}


