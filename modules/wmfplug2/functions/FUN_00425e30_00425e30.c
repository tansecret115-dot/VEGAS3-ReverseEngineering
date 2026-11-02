/* Module: wmfplug2.dll
   Function: FUN_00425e30
   Address: 00425e30
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00425e30(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_00489e3c != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_00489e3c);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_00489e40 == (code *)0x0) ||
     (iVar2 = (*DAT_00489e40)(DAT_00489e44,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_00489e48;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_00489ec8 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_00489ec8 = SetWindowsHookExA(4,(HOOKPROC)&LAB_00425d20,DAT_00489e38,dwThreadId);
      bVar1 = true;
      DAT_00489ecc = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_00489ec8 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_00489ec8);
      DAT_00489ec8 = (HHOOK)0x0;
      DAT_00489ecc = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


