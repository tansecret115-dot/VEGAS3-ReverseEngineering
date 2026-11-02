/* Module: sfconfigmgr.dll
   Function: FUN_00406480
   Address: 00406480
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00406480(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_004230dc != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_004230dc);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_004230e0 == (code *)0x0) ||
     (iVar2 = (*DAT_004230e0)(DAT_004230e4,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_004230e8;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_00423168 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_00423168 = SetWindowsHookExA(4,(HOOKPROC)&LAB_00406370,DAT_004230d8,dwThreadId);
      bVar1 = true;
      DAT_0042316c = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_00423168 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_00423168);
      DAT_00423168 = (HHOOK)0x0;
      DAT_0042316c = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


