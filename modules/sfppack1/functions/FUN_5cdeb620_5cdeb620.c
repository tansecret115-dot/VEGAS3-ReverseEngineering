/* Module: sfppack1.dll
   Function: FUN_5cdeb620
   Address: 5cdeb620
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_5cdeb620(int param_1,WPARAM param_2,int param_3)

{
  int iVar1;
  LRESULT LVar2;
  CHAR local_50 [80];
  
  GetCurrentThreadId();
  if (DAT_5ce238c0 == (HHOOK)0x0) {
    return 0;
  }
  if (((-1 < param_1) && (DAT_5ce238c4 != (LPCSTR)0x0)) && (*(int *)(param_3 + 8) == 1)) {
    local_50[0] = '\0';
    GetClassNameA(*(HWND *)(param_3 + 0xc),local_50,0x50);
    iVar1 = lstrcmpiA(local_50,"#32770");
    if (iVar1 == 0) {
      GetWindowTextA(*(HWND *)(param_3 + 0xc),local_50,0x50);
      iVar1 = lstrcmpA(local_50,DAT_5ce238c4);
      if (iVar1 == 0) {
        FUN_5cdedff0(*(HWND *)(param_3 + 0xc),(HWND)0x0,(int *)0x0,0x8001);
        CallNextHookEx(DAT_5ce238c0,param_1,param_2,param_3);
        UnhookWindowsHookEx(DAT_5ce238c0);
        DAT_5ce238c0 = (HHOOK)0x0;
        DAT_5ce238c4 = (LPCSTR)0x0;
        return 0;
      }
    }
  }
  LVar2 = CallNextHookEx(DAT_5ce238c0,param_1,param_2,param_3);
  return LVar2;
}


