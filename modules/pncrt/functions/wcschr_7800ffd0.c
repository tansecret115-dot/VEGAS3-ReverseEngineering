/* Module: pncrt.dll
   Function: wcschr
   Address: 7800ffd0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl wcschr(wchar_t *_Str,wchar_t _Ch)

{
  wchar_t *pwVar1;
  wchar_t wVar2;
  
                    /* 0xffd0  746  wcschr */
  wVar2 = *_Str;
  while ((wVar2 != L'\0' && (wVar2 != _Ch))) {
    pwVar1 = _Str + 1;
    _Str = _Str + 1;
    wVar2 = *pwVar1;
  }
  return (wchar_t *)((*_Str != _Ch) - 1 & (uint)_Str);
}


