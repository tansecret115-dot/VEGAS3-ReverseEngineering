/* Module: sfppack1.dll
   Function: FUN_5cdeb730
   Address: 5cdeb730
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cdeb730(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_5ce23834 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5ce23834);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_5ce23838 == (code *)0x0) ||
     (iVar2 = (*DAT_5ce23838)(DAT_5ce2383c,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_5ce23840;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_5ce238c0 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_5ce238c0 = SetWindowsHookExA(4,FUN_5cdeb620,DAT_5ce23830,dwThreadId);
      bVar1 = true;
      DAT_5ce238c4 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_5ce238c0 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_5ce238c0);
      DAT_5ce238c0 = (HHOOK)0x0;
      DAT_5ce238c4 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


