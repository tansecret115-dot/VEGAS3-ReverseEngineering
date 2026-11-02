/* Module: pncrt.dll
   Function: wcslen
   Address: 7800fb40
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl wcslen(wchar_t *_Str)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  
                    /* 0xfb40  752  wcslen */
  wVar1 = *_Str;
  pwVar2 = _Str;
  while (pwVar2 = pwVar2 + 1, wVar1 != L'\0') {
    wVar1 = *pwVar2;
  }
  return ((int)pwVar2 - (int)_Str >> 1) - 1;
}


