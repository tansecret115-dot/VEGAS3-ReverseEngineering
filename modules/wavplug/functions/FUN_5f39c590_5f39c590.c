/* Module: wavplug.dll
   Function: FUN_5f39c590
   Address: 5f39c590
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f39c590(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_5f3db38c != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5f3db38c);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_5f3db390 == (code *)0x0) ||
     (iVar2 = (*DAT_5f3db390)(DAT_5f3db394,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_5f3db398;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_5f3db418 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_5f3db418 = SetWindowsHookExA(4,(HOOKPROC)&LAB_5f39c480,DAT_5f3db388,dwThreadId);
      bVar1 = true;
      DAT_5f3db41c = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_5f3db418 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_5f3db418);
      DAT_5f3db418 = (HHOOK)0x0;
      DAT_5f3db41c = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


