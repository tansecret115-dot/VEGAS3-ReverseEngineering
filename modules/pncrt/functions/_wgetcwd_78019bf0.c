/* Module: pncrt.dll
   Function: _wgetcwd
   Address: 78019bf0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wgetcwd(wchar_t *_DstBuf,int _SizeInWords)

{
  wchar_t *pwVar1;
  
                    /* 0x19bf0  529  _wgetcwd */
  _lock(0xc);
  pwVar1 = FUN_78019c60(0,_DstBuf,_SizeInWords);
  _unlock(0xc);
  return pwVar1;
}


