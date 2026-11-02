/* Module: dsetup.dll
   Function: FUN_004034d2
   Address: 004034d2
   Source: Ghidra pseudocode (Stage 10 batch) */


DWORD * FUN_004034d2(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_00408050);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_0040523f(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00408050,lpTlsValue);
      if (BVar1 != 0) {
        FUN_004034bf((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        goto LAB_0040352d;
      }
    }
    __amsg_exit(0x10);
  }
LAB_0040352d:
  SetLastError(dwErrCode);
  return lpTlsValue;
}


