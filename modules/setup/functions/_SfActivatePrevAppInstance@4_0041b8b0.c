/* Module: Setup.exe
   Function: _SfActivatePrevAppInstance@4
   Address: 0041b8b0
   Source: Ghidra pseudocode (Stage 10 batch) */


HWND _SfActivatePrevAppInstance_4(LPCSTR param_1)

{
  HWND hWnd;
  HWND hWnd_00;
  BOOL BVar1;
  
                    /* 0x1b8b0  77  _SfActivatePrevAppInstance@4 */
  hWnd = FindWindowA(param_1,(LPCSTR)0x0);
  if (hWnd != (HWND)0x0) {
    hWnd_00 = GetLastActivePopup(hWnd);
    BVar1 = IsIconic(hWnd_00);
    if (BVar1 != 0) {
      ShowWindow(hWnd_00,9);
      return hWnd;
    }
    BringWindowToTop(hWnd);
    SetForegroundWindow(hWnd_00);
  }
  return hWnd;
}


