/* Module: pncrt.dll
   Function: _wcsset
   Address: 7802c290
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wcsset(wchar_t *_Str,wchar_t _Val)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
                    /* 0x2c290  508  _wcsset */
  pwVar2 = _Str;
  wVar1 = *_Str;
  while (wVar1 != L'\0') {
    *_Str = _Val;
    _Str = _Str + 1;
    wVar1 = *_Str;
  }
  return pwVar2;
}


