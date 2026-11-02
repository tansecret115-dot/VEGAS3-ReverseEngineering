/* Module: aifplug.dll
   Function: FUN_5fbe3040
   Address: 5fbe3040
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5fbe3040(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_5fc0991c != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5fc0991c);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_5fc09920 == (code *)0x0) ||
     (iVar2 = (*DAT_5fc09920)(DAT_5fc09924,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_5fc09928;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_5fc099a8 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_5fc099a8 = SetWindowsHookExA(4,(HOOKPROC)&LAB_5fbe2f30,DAT_5fc09918,dwThreadId);
      bVar1 = true;
      DAT_5fc099ac = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_5fc099a8 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_5fc099a8);
      DAT_5fc099a8 = (HHOOK)0x0;
      DAT_5fc099ac = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


