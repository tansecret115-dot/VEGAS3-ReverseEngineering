/* Module: mp3plug.dll
   Function: FUN_5f695f80
   Address: 5f695f80
   Source: Ghidra pseudocode (Stage 10 batch) */


void FUN_5f695f80(HWND param_1)

{
  LRESULT LVar1;
  void *_Memory;
  WPARAM wParam;
  
  wParam = 0;
  LVar1 = SendMessageA(param_1,0x146,0,0);
  if (0 < LVar1) {
    do {
      _Memory = (void *)SendMessageA(param_1,0x150,wParam,0);
      if (_Memory != (void *)0x0) {
        free(_Memory);
      }
      wParam = wParam + 1;
      LVar1 = SendMessageA(param_1,0x146,0,0);
    } while ((int)wParam < LVar1);
  }
  SendMessageA(param_1,0x14b,0,0);
  return;
}


