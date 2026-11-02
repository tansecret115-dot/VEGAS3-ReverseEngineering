/* Module: pncrt.dll
   Function: wcstok
   Address: 7802d370
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl wcstok(wchar_t *_Str,wchar_t *_Delim)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  DWORD *pDVar3;
  wchar_t wVar4;
  wchar_t *pwVar5;
  
                    /* 0x2d370  761  wcstok */
  pDVar3 = FUN_78009cc0();
  if (_Str == (wchar_t *)0x0) {
    _Str = (wchar_t *)pDVar3[7];
  }
  wVar4 = *_Str;
  if (wVar4 != L'\0') {
    wVar1 = *_Delim;
    pwVar5 = _Delim;
    do {
      while ((wVar1 != L'\0' && (wVar1 != wVar4))) {
        wVar1 = pwVar5[1];
        pwVar5 = pwVar5 + 1;
      }
      if (*pwVar5 == L'\0') break;
      wVar4 = _Str[1];
      _Str = _Str + 1;
      wVar1 = *_Delim;
      pwVar5 = _Delim;
    } while (wVar4 != L'\0');
  }
  wVar4 = *_Str;
  pwVar5 = _Str;
  if (wVar4 != L'\0') {
    wVar1 = *_Delim;
    pwVar2 = _Delim;
    do {
      while ((wVar1 != L'\0' && (wVar1 != wVar4))) {
        wVar1 = pwVar2[1];
        pwVar2 = pwVar2 + 1;
      }
      if (*pwVar2 != L'\0') {
        *pwVar5 = L'\0';
        pwVar5 = pwVar5 + 1;
        break;
      }
      wVar4 = pwVar5[1];
      pwVar5 = pwVar5 + 1;
      wVar1 = *_Delim;
      pwVar2 = _Delim;
    } while (wVar4 != L'\0');
  }
  pDVar3[7] = (DWORD)pwVar5;
  return (wchar_t *)(-(uint)(_Str != pwVar5) & (uint)_Str);
}


