/* Module: dsetup.dll
   Function: FUN_0040344d
   Address: 0040344d
   Source: Ghidra pseudocode (Stage 10 batch) */


undefined4 FUN_0040344d(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_00404f49();
  DAT_00408050 = TlsAlloc();
  if (DAT_00408050 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_0040523f(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00408050,lpTlsValue);
      if (BVar1 != 0) {
        FUN_004034bf((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        lpTlsValue[1] = 0xffffffff;
        *lpTlsValue = DVar2;
        return 1;
      }
    }
  }
  return 0;
}


