/* Module: pncrt.dll
   Function: _wcsdup
   Address: 7800fbf0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wcsdup(wchar_t *_Str)

{
  size_t sVar1;
  wchar_t *pwVar2;
  
                    /* 0xfbf0  499  _wcsdup */
  if (_Str != (wchar_t *)0x0) {
    sVar1 = wcslen(_Str);
    pwVar2 = malloc(sVar1 * 2 + 2);
    if (pwVar2 != (wchar_t *)0x0) {
      pwVar2 = wcscpy(pwVar2,_Str);
      return pwVar2;
    }
  }
  return (wchar_t *)0x0;
}


