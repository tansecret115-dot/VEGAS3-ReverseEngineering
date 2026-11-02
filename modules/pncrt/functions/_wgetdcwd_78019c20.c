/* Module: pncrt.dll
   Function: _wgetdcwd
   Address: 78019c20
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wgetdcwd(int _Drive,wchar_t *_DstBuf,int _SizeInWords)

{
  wchar_t *pwVar1;
  
                    /* 0x19c20  530  _wgetdcwd */
  _lock(0xc);
  pwVar1 = FUN_78019c60(_Drive,_DstBuf,_SizeInWords);
  _unlock(0xc);
  return pwVar1;
}


