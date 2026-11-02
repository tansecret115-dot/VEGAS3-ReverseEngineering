/* Module: pncrt.dll
   Function: _wcsrev
   Address: 7802c250
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wcsrev(wchar_t *_Str)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t *pwVar3;
  
                    /* 0x2c250  507  _wcsrev */
  pwVar2 = _Str;
  wVar1 = *_Str;
  pwVar3 = _Str;
  while (wVar1 != L'\0') {
    wVar1 = pwVar3[1];
    pwVar3 = pwVar3 + 1;
  }
  pwVar3 = pwVar3 + -1;
  if (_Str < pwVar3) {
    do {
      wVar1 = *_Str;
      *_Str = *pwVar3;
      *pwVar3 = wVar1;
      _Str = _Str + 1;
      pwVar3 = pwVar3 + -1;
    } while (_Str < pwVar3);
  }
  return pwVar2;
}


