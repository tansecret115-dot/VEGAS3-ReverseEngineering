/* Module: sfpublish.dll
   Function: FUN_00419150
   Address: 00419150
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00419150(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_00441c84 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_00441c84);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_00441c88 == (code *)0x0) ||
     (iVar2 = (*DAT_00441c88)(DAT_00441c8c,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_00441c90;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_00441d10 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_00441d10 = SetWindowsHookExA(4,(HOOKPROC)&LAB_00419040,DAT_00441c80,dwThreadId);
      bVar1 = true;
      DAT_00441d14 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_00441d10 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_00441d10);
      DAT_00441d10 = (HHOOK)0x0;
      DAT_00441d14 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


