/* Module: vidcap30.exe
   Function: _SfSetDlgFont@8
   Address: 004773e0
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 _SfSetDlgFont_8(HWND param_1,HFONT param_2)

{
  int iVar1;
  HDC hdc;
  HWND hWnd;
  LOGFONTA *pLVar2;
  int iVar3;
  LOGFONTA local_3c;
  
                    /* 0x773e0  608  _SfSetDlgFont@8 */
  if (param_2 == (HFONT)0x0) {
    iVar1 = GetSystemMetrics(0x2a);
    if (iVar1 == 0) {
      param_2 = GetStockObject(0x11);
    }
    else {
      pLVar2 = &local_3c;
      for (iVar1 = 0xf; iVar1 != 0; iVar1 = iVar1 + -1) {
        pLVar2->lfHeight = 0;
        pLVar2 = (LOGFONTA *)&pLVar2->lfWidth;
      }
      SystemParametersInfoA(0x1f,0x3c,&local_3c,0);
      hdc = GetDC(param_1);
      if (hdc != (HDC)0x0) {
        iVar3 = 0x48;
        iVar1 = GetDeviceCaps(hdc,0x5a);
        iVar1 = MulDiv(10,iVar1,iVar3);
        if (local_3c.lfHeight <= -iVar1) {
          iVar3 = 0x48;
          iVar1 = GetDeviceCaps(hdc,0x5a);
          local_3c.lfHeight = MulDiv(10,iVar1,iVar3);
          local_3c.lfHeight = -local_3c.lfHeight;
        }
        ReleaseDC(param_1,hdc);
      }
      param_2 = CreateFontIndirectA(&local_3c);
    }
  }
  for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    SendMessageA(hWnd,0x30,(WPARAM)param_2,1);
  }
  return 1;
}


