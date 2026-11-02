/* Module: mcplug.dll
   Function: FUN_00420130
   Address: 00420130
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00420130(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_00487ee4 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_00487ee4);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_00487ee8 == (code *)0x0) ||
     (iVar2 = (*DAT_00487ee8)(DAT_00487eec,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_00487ef0;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_00487f70 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_00487f70 = SetWindowsHookExA(4,(HOOKPROC)&LAB_00420020,DAT_00487ee0,dwThreadId);
      bVar1 = true;
      DAT_00487f74 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_00487f70 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_00487f70);
      DAT_00487f70 = (HHOOK)0x0;
      DAT_00487f74 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


