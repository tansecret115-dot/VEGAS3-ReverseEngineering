/* Module: pncrt.dll
   Function: wcspbrk
   Address: 7800fb60
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl wcspbrk(wchar_t *_Str,wchar_t *_Control)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  wchar_t wVar3;
  
                    /* 0xfb60  756  wcspbrk */
  wVar3 = *_Str;
  if (wVar3 != L'\0') {
    wVar1 = *_Control;
    pwVar2 = _Control;
    do {
      while (wVar1 != L'\0') {
        if (wVar1 == wVar3) {
          return _Str;
        }
        wVar1 = pwVar2[1];
        pwVar2 = pwVar2 + 1;
      }
      wVar3 = _Str[1];
      _Str = _Str + 1;
      wVar1 = *_Control;
      pwVar2 = _Control;
    } while (wVar3 != L'\0');
  }
  return (wchar_t *)0x0;
}


