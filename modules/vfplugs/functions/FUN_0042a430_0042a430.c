/* Module: vfplugs.dll
   Function: FUN_0042a430
   Address: 0042a430
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_0042a430(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_00494a84 != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_00494a84);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_00494a88 == (code *)0x0) ||
     (iVar2 = (*DAT_00494a88)(DAT_00494a8c,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_00494a90;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_00494b10 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_00494b10 = SetWindowsHookExA(4,(HOOKPROC)&LAB_0042a320,DAT_00494a80,dwThreadId);
      bVar1 = true;
      DAT_00494b14 = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_00494b10 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_00494b10);
      DAT_00494b10 = (HHOOK)0x0;
      DAT_00494b14 = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


