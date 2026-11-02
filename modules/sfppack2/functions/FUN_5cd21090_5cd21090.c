/* Module: sfppack2.dll
   Function: FUN_5cd21090
   Address: 5cd21090
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cd21090(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_5cd67a44 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5cd67a44);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_5cd67a48 == (code *)0x0) ||
     (iVar2 = (*DAT_5cd67a48)(DAT_5cd67a4c,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_5cd67a50;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_5cd67ad0 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_5cd67ad0 = SetWindowsHookExA(4,(HOOKPROC)&LAB_5cd20f80,DAT_5cd67a40,dwThreadId);
      bVar1 = true;
      DAT_5cd67ad4 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_5cd67ad0 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_5cd67ad0);
      DAT_5cd67ad0 = (HHOOK)0x0;
      DAT_5cd67ad4 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


