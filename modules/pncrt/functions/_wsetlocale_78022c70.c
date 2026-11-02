/* Module: pncrt.dll
   Function: _wsetlocale
   Address: 78022c70
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wsetlocale(int _Category,wchar_t *_Locale)

{
  size_t sVar1;
  char *_Source;
  char *_Dest;
  
                    /* 0x22c70  548  _wsetlocale */
  _Dest = (char *)0x0;
  if (_Locale != (wchar_t *)0x0) {
    sVar1 = wcslen(_Locale);
    _Dest = malloc(sVar1 + 1);
    if (_Dest == (char *)0x0) {
      return (wchar_t *)0x0;
    }
    sVar1 = wcstombs(_Dest,_Locale,sVar1 + 1);
    if (sVar1 == 0xffffffff) {
      free(_Dest);
      return (wchar_t *)0x0;
    }
  }
  _Source = setlocale(_Category,_Dest);
  free(_Dest);
  if (_Source != (char *)0x0) {
    free(DAT_780425d4);
    sVar1 = mbstowcs((wchar_t *)0x0,_Source,0);
    if (sVar1 != 0xffffffff) {
      DAT_780425d4 = malloc((sVar1 + 1) * 2);
      if (DAT_780425d4 != (wchar_t *)0x0) {
        sVar1 = mbstowcs(DAT_780425d4,_Source,sVar1 + 1);
        if (sVar1 != 0xffffffff) {
          return DAT_780425d4;
        }
        free(DAT_780425d4);
      }
    }
  }
  return (wchar_t *)0x0;
}


