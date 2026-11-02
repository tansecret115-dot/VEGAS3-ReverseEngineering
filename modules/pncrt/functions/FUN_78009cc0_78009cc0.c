/* Module: pncrt.dll
   Function: FUN_78009cc0
   Address: 78009cc0
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD * FUN_78009cc0(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_7803d248);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = calloc(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_7803d248,lpTlsValue);
      if (BVar1 != 0) {
        FUN_78009ca0((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        SetLastError(dwErrCode);
        return lpTlsValue;
      }
    }
    _amsg_exit(0x10);
  }
  SetLastError(dwErrCode);
  return lpTlsValue;
}


