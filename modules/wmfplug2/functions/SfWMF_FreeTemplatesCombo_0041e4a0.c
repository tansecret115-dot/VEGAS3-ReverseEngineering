/* Module: wmfplug2.dll
   Function: SfWMF_FreeTemplatesCombo
   Address: 0041e4a0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* long __stdcall SfWMF_FreeTemplatesCombo(struct HWND__ *) */

long SfWMF_FreeTemplatesCombo(HWND__ *param_1)

{
  LRESULT LVar1;
  void *_Memory;
  WPARAM wParam;
  
                    /* 0x1e4a0  18  ?SfWMF_FreeTemplatesCombo@@YGJPAUHWND__@@@Z */
  LVar1 = SendMessageA(param_1,0x146,0,0);
  wParam = 0;
  if (0 < LVar1) {
    do {
      _Memory = (void *)SendMessageA(param_1,0x150,wParam,0);
      if (_Memory != (void *)0x0) {
        free(_Memory);
      }
      wParam = wParam + 1;
    } while ((int)wParam < LVar1);
  }
  SendMessageA(param_1,0x14b,0,0);
  return 0;
}


