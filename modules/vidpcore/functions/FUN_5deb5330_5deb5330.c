/* Module: vidpcore.dll
   Function: FUN_5deb5330
   Address: 5deb5330
   Source: Ghidra pseudocode (Stage 10 batch) */


LRESULT FUN_5deb5330(int param_1,WPARAM param_2,int param_3)

{
  int iVar1;
  LRESULT LVar2;
  CHAR local_50 [80];
  
  GetCurrentThreadId();
  if (DAT_5df42f70 == (HHOOK)0x0) {
    return 0;
  }
  if (((-1 < param_1) && (DAT_5df42f74 != (LPCSTR)0x0)) && (*(int *)(param_3 + 8) == 1)) {
    local_50[0] = '\0';
    GetClassNameA(*(HWND *)(param_3 + 0xc),local_50,0x50);
    iVar1 = lstrcmpiA(local_50,"#32770");
    if (iVar1 == 0) {
      GetWindowTextA(*(HWND *)(param_3 + 0xc),local_50,0x50);
      iVar1 = lstrcmpA(local_50,DAT_5df42f74);
      if (iVar1 == 0) {
        FUN_5deb9af0(*(undefined4 *)(param_3 + 0xc),0,0,0x8001);
        CallNextHookEx(DAT_5df42f70,param_1,param_2,param_3);
        UnhookWindowsHookEx(DAT_5df42f70);
        DAT_5df42f70 = (HHOOK)0x0;
        DAT_5df42f74 = (LPCSTR)0x0;
        return 0;
      }
    }
  }
  LVar2 = CallNextHookEx(DAT_5df42f70,param_1,param_2,param_3);
  return LVar2;
}


