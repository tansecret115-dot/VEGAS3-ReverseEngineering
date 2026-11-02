/* Module: stl2plg.dll
   Function: FUN_00425a90
   Address: 00425a90
   Source: Ghidra pseudocode (Stage 10 batch) */


int FUN_00425a90(HWND param_1,LPCSTR param_2,LPCSTR param_3,UINT param_4)

{
  bool bVar1;
  int iVar2;
  DWORD dwThreadId;
  
  GetCurrentThreadId();
  if (param_1 == (HWND)0x0) {
    if (DAT_0047362c != (HWND)0x0) {
      param_1 = GetLastActivePopup(DAT_0047362c);
    }
  }
  else if (param_1 == (HWND)0xffffffff) {
    param_1 = (HWND)0x0;
  }
  if ((DAT_00473630 == (code *)0x0) ||
     (iVar2 = (*DAT_00473630)(DAT_00473634,param_1,param_2,param_3,param_4), iVar2 == -1)) {
    if (param_3 == (LPCSTR)0x0) {
      param_3 = &DAT_00473638;
    }
    bVar1 = false;
    if ((param_4 != 0x1010) && (DAT_004736b8 == (HHOOK)0x0)) {
      dwThreadId = GetCurrentThreadId();
      DAT_004736b8 = SetWindowsHookExA(4,(HOOKPROC)&LAB_00425980,DAT_00473628,dwThreadId);
      bVar1 = true;
      DAT_004736bc = param_3;
    }
    iVar2 = MessageBoxA(param_1,param_2,param_3,param_4);
    if ((bVar1) && (DAT_004736b8 != (HHOOK)0x0)) {
      UnhookWindowsHookEx(DAT_004736b8);
      DAT_004736b8 = (HHOOK)0x0;
      DAT_004736bc = (LPCSTR)0x0;
    }
  }
  return iVar2;
}


