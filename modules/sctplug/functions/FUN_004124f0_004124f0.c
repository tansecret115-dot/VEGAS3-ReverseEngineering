/* Module: sctplug.dll
   Function: FUN_004124f0
   Address: 004124f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_004124f0(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_0043cd3c != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_0043cd3c);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_0043cd40 == (code *)0x0) ||
     (iVar2 = (*DAT_0043cd40)(DAT_0043cd44,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_0043cd48;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_0043cdc8 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_0043cdc8 = SetWindowsHookExA(4,(HOOKPROC)&LAB_004123e0,DAT_0043cd38,dwThreadId);
      bVar1 = true;
      DAT_0043cdcc = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_0043cdc8 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_0043cdc8);
      DAT_0043cdc8 = (HHOOK)0x0;
      DAT_0043cdcc = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


