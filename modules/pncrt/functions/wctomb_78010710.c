/* Module: pncrt.dll
   Function: wctomb
   Address: 78010710
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl wctomb(char *_MbCh,wchar_t _WCh)

{
  int iVar1;
  bool bVar2;
  
                    /* 0x10710  766  wctomb */
  InterlockedIncrement(&__unguarded_readlc_active);
  bVar2 = __setlc_active != 0;
  if (bVar2) {
    InterlockedDecrement(&__unguarded_readlc_active);
    _lock(0x13);
  }
  iVar1 = FUN_78010780(_MbCh,_WCh);
  if (!bVar2) {
    InterlockedDecrement(&__unguarded_readlc_active);
    return iVar1;
  }
  _unlock(0x13);
  return iVar1;
}


