/* Module: pncrt.dll
   Function: wcscpy
   Address: 7800fb10
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl wcscpy(wchar_t *_Dest,wchar_t *_Source)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
                    /* 0xfb10  749  wcscpy */
  pwVar2 = _Dest;
  wVar1 = *_Source;
  *_Dest = wVar1;
  while (wVar1 != L'\0') {
    _Dest = _Dest + 1;
    _Source = _Source + 1;
    wVar1 = *_Source;
    *_Dest = wVar1;
  }
  return pwVar2;
}


