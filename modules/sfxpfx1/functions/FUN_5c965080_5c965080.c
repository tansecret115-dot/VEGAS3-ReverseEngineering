/* Module: sfxpfx1.dll
   Function: FUN_5c965080
   Address: 5c965080
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c965080(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_5c9987ac != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5c9987ac);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_5c9987b0 == (code *)0x0) ||
     (iVar2 = (*DAT_5c9987b0)(DAT_5c9987b4,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_5c9987b8;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_5c998838 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_5c998838 = SetWindowsHookExA(4,(HOOKPROC)&LAB_5c964f70,DAT_5c9987a8,dwThreadId);
      bVar1 = true;
      DAT_5c99883c = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_5c998838 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_5c998838);
      DAT_5c998838 = (HHOOK)0x0;
      DAT_5c99883c = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


