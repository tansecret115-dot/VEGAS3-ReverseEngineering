/* Module: mcplugrw.dll
   Function: FUN_004213d0
   Address: 004213d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004213d0(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_004a9904 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_004a9904);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_004a9908 == (code *)0x0) ||
     (iVar2 = (*DAT_004a9908)(DAT_004a990c,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_004a9910;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_004a9990 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_004a9990 = SetWindowsHookExA(4,(HOOKPROC)&LAB_004212c0,DAT_004a9900,dwThreadId);
      bVar1 = true;
      DAT_004a9994 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_004a9990 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_004a9990);
      DAT_004a9990 = (HHOOK)0x0;
      DAT_004a9994 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


