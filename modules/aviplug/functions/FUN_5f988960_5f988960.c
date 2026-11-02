/* Module: aviplug.dll
   Function: FUN_5f988960
   Address: 5f988960
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5f988960(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_5f9f5984 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5f9f5984);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_5f9f5988 == (code *)0x0) ||
     (iVar2 = (*DAT_5f9f5988)(DAT_5f9f598c,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_5f9f5990;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_5f9f5a10 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_5f9f5a10 = SetWindowsHookExA(4,(HOOKPROC)&LAB_5f988850,DAT_5f9f5980,dwThreadId);
      bVar1 = true;
      DAT_5f9f5a14 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_5f9f5a10 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_5f9f5a10);
      DAT_5f9f5a10 = (HHOOK)0x0;
      DAT_5f9f5a14 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


