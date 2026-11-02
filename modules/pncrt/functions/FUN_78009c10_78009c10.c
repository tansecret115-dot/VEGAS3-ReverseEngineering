/* Module: pncrt.dll
   Function: FUN_78009c10
   Address: 78009c10
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_78009c10(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_78009360();
  DAT_7803d248 = TlsAlloc();
  if (DAT_7803d248 != 0xffffffff) {
    lpTlsValue = calloc(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_7803d248,lpTlsValue);
      if (BVar1 != 0) {
        FUN_78009ca0((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}


