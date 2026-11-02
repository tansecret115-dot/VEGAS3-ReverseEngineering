/* Module: mpgmux.dll
   Function: FUN_10011585
   Address: 10011585
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD * FUN_10011585(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_1001a120);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_10012288(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1001a120,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10011572((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_100115e0;
      }
    }
    __amsg_exit(0x10);
  }
LAB_100115e0:
  SetLastError(dwErrCode);
  return lpTlsValue;
}


