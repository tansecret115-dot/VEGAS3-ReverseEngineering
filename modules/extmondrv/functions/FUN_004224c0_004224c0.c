/* Module: extmondrv.dll
   Function: FUN_004224c0
   Address: 004224c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004224c0(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_0045b19c != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_0045b19c);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_0045b1a0 == (code *)0x0) ||
     (iVar2 = (*DAT_0045b1a0)(DAT_0045b1a4,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_0045b1a8;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_0045b228 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_0045b228 = SetWindowsHookExA(4,(HOOKPROC)&LAB_004223b0,DAT_0045b198,dwThreadId);
      bVar1 = true;
      DAT_0045b22c = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_0045b228 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_0045b228);
      DAT_0045b228 = (HHOOK)0x0;
      DAT_0045b22c = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


