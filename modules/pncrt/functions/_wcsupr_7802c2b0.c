/* Module: pncrt.dll
   Function: _wcsupr
   Address: 7802c2b0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wcsupr(wchar_t *_Str)

{
  wchar_t wVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  bool bVar4;
  
                    /* 0x2c2b0  509  _wcsupr */
  pwVar3 = (wchar_t *)0x0;
  if (DAT_78042438 == 0) {
    pwVar3 = _Str;
    if (*_Str != L'\0') {
      do {
        wVar1 = *_Str;
        if ((0x60 < (ushort)wVar1) && ((ushort)wVar1 < 0x7b)) {
          *_Str = wVar1 + L'￠';
        }
        _Str = _Str + 1;
      } while (*_Str != L'\0');
      return pwVar3;
    }
  }
  else {
    InterlockedIncrement(&__unguarded_readlc_active);
    bVar4 = __setlc_active == 0;
    if (!bVar4) {
      InterlockedDecrement(&__unguarded_readlc_active);
      _lock(0x13);
    }
    if (DAT_78042438 == 0) {
      if (bVar4) {
        InterlockedDecrement(&__unguarded_readlc_active);
      }
      else {
        _unlock(0x13);
      }
      pwVar3 = _Str;
      if (*_Str != L'\0') {
        do {
          wVar1 = *_Str;
          if ((0x60 < (ushort)wVar1) && ((ushort)wVar1 < 0x7b)) {
            *_Str = wVar1 + L'￠';
          }
          _Str = _Str + 1;
        } while (*_Str != L'\0');
        return pwVar3;
      }
    }
    else {
      sVar2 = FUN_7800d530(DAT_78042438,0x200,_Str,(char *)0xffffffff,(LPWSTR)0x0,0,0);
      if (((sVar2 != 0) && (pwVar3 = malloc(sVar2 * 2), pwVar3 != (wchar_t *)0x0)) &&
         (sVar2 = FUN_7800d530(DAT_78042438,0x200,_Str,(char *)0xffffffff,pwVar3,sVar2,0),
         sVar2 != 0)) {
        wcscpy(_Str,pwVar3);
      }
      if (!bVar4) {
        _unlock(0x13);
        free(pwVar3);
        return _Str;
      }
      InterlockedDecrement(&__unguarded_readlc_active);
      free(pwVar3);
    }
  }
  return _Str;
}


