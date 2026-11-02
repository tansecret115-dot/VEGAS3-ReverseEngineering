/* Module: pncrt.dll
   Function: mbstowcs
   Address: 78017860
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl mbstowcs(wchar_t *_Dest,char *_Source,size_t _MaxCount)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x17860  669  mbstowcs */
  InterlockedIncrement(&__unguarded_readlc_active);
  bVar2 = __setlc_active != 0;
  if (bVar2) {
    InterlockedDecrement(&__unguarded_readlc_active);
    _lock(0x13);
  }
  uVar1 = FUN_780178e0(_Dest,(byte *)_Source,_MaxCount);
  if (!bVar2) {
    InterlockedDecrement(&__unguarded_readlc_active);
    return uVar1;
  }
  _unlock(0x13);
  return uVar1;
}


