/* Module: sfmarket2.dll
   Function: FUN_00424e50
   Address: 00424e50
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00424e50(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_004aaecc != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_004aaecc);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_004aaed0 == (code *)0x0) ||
     (iVar2 = (*DAT_004aaed0)(DAT_004aaed4,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_004aaed8;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_004aaf58 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_004aaf58 = SetWindowsHookExA(4,(HOOKPROC)&LAB_00424d40,DAT_004aaec8,dwThreadId);
      bVar1 = true;
      DAT_004aaf5c = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_004aaf58 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_004aaf58);
      DAT_004aaf58 = (HHOOK)0x0;
      DAT_004aaf5c = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


