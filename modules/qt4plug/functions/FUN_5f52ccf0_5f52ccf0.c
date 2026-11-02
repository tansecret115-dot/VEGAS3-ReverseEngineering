/* Module: qt4plug.dll
   Function: FUN_5f52ccf0
   Address: 5f52ccf0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f52ccf0(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_5f5a4164 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5f5a4164);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_5f5a4168 == (code *)0x0) ||
     (iVar2 = (*DAT_5f5a4168)(DAT_5f5a416c,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_5f5a4170;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_5f5a41f0 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_5f5a41f0 = SetWindowsHookExA(4,(HOOKPROC)&LAB_5f52cbe0,DAT_5f5a4160,dwThreadId);
      bVar1 = true;
      DAT_5f5a41f4 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_5f5a41f0 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_5f5a41f0);
      DAT_5f5a41f0 = (HHOOK)0x0;
      DAT_5f5a41f4 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


