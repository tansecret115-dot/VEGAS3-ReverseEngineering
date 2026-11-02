/* Module: pncrt.dll
   Function: mbtowc
   Address: 78017a20
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl mbtowc(wchar_t *_DstCh,char *_SrcCh,size_t _SrcSizeInBytes)

{
  uint uVar1;
  bool bVar2;
  
                    /* 0x17a20  670  mbtowc */
  InterlockedIncrement(&__unguarded_readlc_active);
  bVar2 = __setlc_active != 0;
  if (bVar2) {
    InterlockedDecrement(&__unguarded_readlc_active);
    _lock(0x13);
  }
  uVar1 = FUN_78017aa0(_DstCh,(byte *)_SrcCh,_SrcSizeInBytes);
  if (!bVar2) {
    InterlockedDecrement(&__unguarded_readlc_active);
    return uVar1;
  }
  _unlock(0x13);
  return uVar1;
}


