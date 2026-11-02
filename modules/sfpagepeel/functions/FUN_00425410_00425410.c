/* Module: sfpagepeel.dll
   Function: FUN_00425410
   Address: 00425410
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00425410(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_0047d9fc != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_0047d9fc);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_0047da00 == (code *)0x0) ||
     (iVar2 = (*DAT_0047da00)(DAT_0047da04,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_0047da08;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_0047da88 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_0047da88 = SetWindowsHookExA(4,(HOOKPROC)&LAB_00425300,DAT_0047d9f8,dwThreadId);
      bVar1 = true;
      DAT_0047da8c = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_0047da88 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_0047da88);
      DAT_0047da88 = (HHOOK)0x0;
      DAT_0047da8c = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


