/* Module: pncrt.dll
   Function: wcsstr
   Address: 7802d310
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl wcsstr(wchar_t *_Str,wchar_t *_SubStr)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
                    /* 0x2d310  759  wcsstr */
  wVar1 = *_Str;
  do {
    if (wVar1 == L'\0') {
      return (wchar_t *)0x0;
    }
    pwVar2 = _SubStr;
    if (wVar1 != L'\0') {
      do {
        if ((*pwVar2 == L'\0') ||
           (*(wchar_t *)((int)pwVar2 + ((int)_Str - (int)_SubStr)) != *pwVar2)) break;
        pwVar2 = pwVar2 + 1;
      } while (*(short *)((int)pwVar2 + ((int)_Str - (int)_SubStr)) != 0);
    }
    if (*pwVar2 == L'\0') {
      return _Str;
    }
    wVar1 = _Str[1];
    _Str = _Str + 1;
  } while( true );
}


