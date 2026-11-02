/* Module: pncrt.dll
   Function: wcsncat
   Address: 7802d1f0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl wcsncat(wchar_t *_Dest,wchar_t *_Source,size_t _Count)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
                    /* 0x2d1f0  753  wcsncat */
  wVar1 = *_Dest;
  pwVar2 = _Dest;
  while (wVar1 != L'\0') {
    wVar1 = pwVar2[1];
    pwVar2 = pwVar2 + 1;
  }
  do {
    if (_Count == 0) {
      *pwVar2 = L'\0';
      return _Dest;
    }
    _Count = _Count - 1;
    wVar1 = *_Source;
    _Source = _Source + 1;
    *pwVar2 = wVar1;
    pwVar2 = pwVar2 + 1;
  } while (wVar1 != L'\0');
  return _Dest;
}


