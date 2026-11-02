/* Module: sfcdi.dll
   Function: FUN_5bf25b40
   Address: 5bf25b40
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5bf25b40(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_5bf76084 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5bf76084);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_5bf76088 == (code *)0x0) ||
     (iVar2 = (*DAT_5bf76088)(DAT_5bf7608c,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_5bf76090;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_5bf76110 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_5bf76110 = SetWindowsHookExA(4,(HOOKPROC)&LAB_5bf25a30,DAT_5bf76080,dwThreadId);
      bVar1 = true;
      DAT_5bf76114 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_5bf76110 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_5bf76110);
      DAT_5bf76110 = (HHOOK)0x0;
      DAT_5bf76114 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


