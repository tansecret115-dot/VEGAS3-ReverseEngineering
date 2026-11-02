/* Module: vegas30k.dll
   Function: _SfMessageBox@16
   Address: 01058ec0
   Source: Ghidra pseudocode (Stage 10 batch) */


int _SfMessageBox_16(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
                    /* 0x58ec0  1113  _SfMessageBox@16 */
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_0120e5d4 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_0120e5d4);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_0120e5d8 == (code *)0x0) ||
     (iVar2 = (*DAT_0120e5d8)(DAT_0120e5dc,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_0120e5e0;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_0120e660 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_0120e660 = SetWindowsHookExA(4,FUN_01058db0,DAT_0120e5d0,dwThreadId);
      bVar1 = true;
      DAT_0120e664 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_0120e660 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_0120e660);
      DAT_0120e660 = (HHOOK)0x0;
      DAT_0120e664 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


