/* Module: sfnetmedia.dll
   Function: FUN_00415ae0
   Address: 00415ae0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00415ae0(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_00441d6c != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_00441d6c);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_00441d70 == (code *)0x0) ||
     (iVar2 = (*DAT_00441d70)(DAT_00441d74,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_00441d78;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_00441df8 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_00441df8 = SetWindowsHookExA(4,(HOOKPROC)&LAB_004159d0,DAT_00441d68,dwThreadId);
      bVar1 = true;
      DAT_00441dfc = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_00441df8 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_00441df8);
      DAT_00441df8 = (HHOOK)0x0;
      DAT_00441dfc = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


