/* Module: sftrkfx1.dll
   Function: FUN_5cbbf580
   Address: 5cbbf580
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_5cbbf580(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_5cc11504 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_5cc11504);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_5cc11508 == (code *)0x0) ||
     (iVar2 = (*DAT_5cc11508)(DAT_5cc1150c,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_5cc11510;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_5cc11590 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_5cc11590 = SetWindowsHookExA(4,(HOOKPROC)&LAB_5cbbf470,DAT_5cc11500,dwThreadId);
      bVar1 = true;
      DAT_5cc11594 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_5cc11590 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_5cc11590);
      DAT_5cc11590 = (HHOOK)0x0;
      DAT_5cc11594 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


