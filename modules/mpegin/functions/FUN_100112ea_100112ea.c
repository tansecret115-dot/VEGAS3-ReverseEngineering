/* Module: mpegin.dll
   Function: FUN_100112ea
   Address: 100112ea
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD * FUN_100112ea(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1001b410);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_1001341f(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1001b410,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100112d7((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_10011345;
      }
    }
    __amsg_exit(0x10);
  }
LAB_10011345:
  SetLastError(dwErrCode);
  return lpTlsValue;
}


