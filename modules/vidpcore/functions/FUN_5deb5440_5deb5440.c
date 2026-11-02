/* Module: vidpcore.dll
   Function: FUN_5deb5440
   Address: 5deb5440
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5deb5440(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_5df42ee4 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5df42ee4);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_5df42ee8 == (code *)0x0) ||
     (iVar2 = (*DAT_5df42ee8)(DAT_5df42eec,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_5df42ef0;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_5df42f70 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_5df42f70 = SetWindowsHookExA(4,FUN_5deb5330,DAT_5df42ee0,dwThreadId);
      bVar1 = true;
      DAT_5df42f74 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_5df42f70 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_5df42f70);
      DAT_5df42f70 = (HHOOK)0x0;
      DAT_5df42f74 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


