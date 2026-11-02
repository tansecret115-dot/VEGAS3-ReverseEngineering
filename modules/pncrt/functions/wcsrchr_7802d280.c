/* Module: pncrt.dll
   Function: wcsrchr
   Address: 7802d280
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl wcsrchr(wchar_t *_Str,wchar_t _Ch)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
                    /* 0x2d280  757  wcsrchr */
  wVar1 = *_Str;
  pwVar2 = _Str;
  while (wVar1 != L'\0') {
    wVar1 = pwVar2[1];
    pwVar2 = pwVar2 + 1;
  }
  for (; (pwVar2 != _Str && (*pwVar2 != _Ch)); pwVar2 = pwVar2 + -1) {
  }
  return (wchar_t *)((uint)pwVar2 & (*pwVar2 != _Ch) - 1);
}


