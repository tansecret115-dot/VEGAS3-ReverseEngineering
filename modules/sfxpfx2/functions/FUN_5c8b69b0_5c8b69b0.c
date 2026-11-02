/* Module: sfxpfx2.dll
   Function: FUN_5c8b69b0
   Address: 5c8b69b0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5c8b69b0(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_5c8e9404 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5c8e9404);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_5c8e9408 == (code *)0x0) ||
     (iVar2 = (*DAT_5c8e9408)(DAT_5c8e940c,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_5c8e9410;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_5c8e9490 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_5c8e9490 = SetWindowsHookExA(4,(HOOKPROC)&LAB_5c8b68a0,DAT_5c8e9400,dwThreadId);
      bVar1 = true;
      DAT_5c8e9494 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_5c8e9490 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_5c8e9490);
      DAT_5c8e9490 = (HHOOK)0x0;
      DAT_5c8e9494 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


