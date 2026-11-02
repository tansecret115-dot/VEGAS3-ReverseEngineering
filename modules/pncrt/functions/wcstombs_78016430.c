/* Module: pncrt.dll
   Function: wcstombs
   Address: 78016430
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl wcstombs(char *_Dest,wchar_t *_Source,size_t _MaxCount)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x16430  763  wcstombs */
  InterlockedIncrement(&__unguarded_readlc_active);
  bVar2 = __setlc_active != 0;
  if (bVar2) {
    InterlockedDecrement(&__unguarded_readlc_active);
    _lock(0x13);
  }
  uVar1 = FUN_780164b0(_Dest,_Source,_MaxCount);
  if (!bVar2) {
    InterlockedDecrement(&__unguarded_readlc_active);
    return uVar1;
  }
  _unlock(0x13);
  return uVar1;
}


