/* Module: vidcap30.exe
   Function: _SfMessageBox@16
   Address: 004787e0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfMessageBox_16(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
                    /* 0x787e0  540  _SfMessageBox@16 */
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_005c16e4 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_005c16e4);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_005c16e8 == (code *)0x0) ||
     (iVar2 = (*DAT_005c16e8)(DAT_005c16ec,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_005c16f0;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_005c1770 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_005c1770 = SetWindowsHookExA(4,(HOOKPROC)&LAB_004786d0,DAT_005c16e0,dwThreadId);
      bVar1 = true;
      DAT_005c1774 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_005c1770 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_005c1770);
      DAT_005c1770 = (HHOOK)0x0;
      DAT_005c1774 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


