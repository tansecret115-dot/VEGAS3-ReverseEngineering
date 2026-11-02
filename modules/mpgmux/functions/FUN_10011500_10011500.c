/* Module: mpgmux.dll
   Function: FUN_10011500
   Address: 10011500
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_10011500(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_1000e6f8();
  DAT_1001a120 = TlsAlloc();
  if (DAT_1001a120 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_10012288(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1001a120,lpTlsValue);
      if (BVar1 != 0) {
        FUN_10011572((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}


