/* Module: Setup.exe
   Function: _SfMessageBox@16
   Address: 004079e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfMessageBox_16(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
                    /* 0x79e0  269  _SfMessageBox@16 */
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_00448e0c != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_00448e0c);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_00448e10 == (code *)0x0) ||
     (iVar2 = (*DAT_00448e10)(DAT_00448e14,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_00448e18;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_00448e98 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_00448e98 = SetWindowsHookExA(4,(HOOKPROC)&LAB_004078d0,DAT_00448e08,dwThreadId);
      bVar1 = true;
      DAT_00448e9c = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_00448e98 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_00448e98);
      DAT_00448e98 = (HHOOK)0x0;
      DAT_00448e9c = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


