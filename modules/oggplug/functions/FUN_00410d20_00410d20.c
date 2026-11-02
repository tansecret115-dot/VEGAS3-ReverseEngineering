/* Module: oggplug.dll
   Function: FUN_00410d20
   Address: 00410d20
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00410d20(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_00510ea4 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_00510ea4);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_00510ea8 == (code *)0x0) ||
     (iVar2 = (*DAT_00510ea8)(DAT_00510eac,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_00510eb0;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_00510f30 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_00510f30 = SetWindowsHookExA(4,(HOOKPROC)&LAB_00410c10,DAT_00510ea0,dwThreadId);
      bVar1 = true;
      DAT_00510f34 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_00510f30 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_00510f30);
      DAT_00510f30 = (HHOOK)0x0;
      DAT_00510f34 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


