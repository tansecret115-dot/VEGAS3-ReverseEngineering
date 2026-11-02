/* Module: pncrt.dll
   Function: wcscat
   Address: 7800fad0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl wcscat(wchar_t *_Dest,wchar_t *_Source)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
                    /* 0xfad0  745  wcscat */
  pwVar2 = _Dest;
  wVar1 = *_Dest;
  while (wVar1 != L'\0') {
    _Dest = _Dest + 1;
    wVar1 = *_Dest;
  }
  wVar1 = *_Source;
  *_Dest = wVar1;
  while (wVar1 != L'\0') {
    _Source = _Source + 1;
    _Dest = _Dest + 1;
    wVar1 = *_Source;
    *_Dest = wVar1;
  }
  return pwVar2;
}


