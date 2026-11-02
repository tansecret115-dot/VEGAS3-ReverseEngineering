/* Module: mpegin.dll
   Function: FUN_10011265
   Address: 10011265
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_10011265(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_10010e50();
  DAT_1001b410 = TlsAlloc();
  if (DAT_1001b410 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_1001341f(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_1001b410,lpTlsValue);
      if (BVar1 != 0) {
        FUN_100112d7((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}


