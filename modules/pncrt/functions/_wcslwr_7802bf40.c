/* Module: pncrt.dll
   Function: _wcslwr
   Address: 7802bf40
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl _wcslwr(wchar_t *_String)

{
  wchar_t wVar1;
  size_t sVar2;
  wchar_t *pwVar3;
  bool bVar4;
  
                    /* 0x2bf40  502  _wcslwr */
  pwVar3 = (wchar_t *)0x0;
  if (DAT_78042438 == 0) {
    pwVar3 = _String;
    if (*_String != L'\0') {
      do {
        wVar1 = *_String;
        if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
          *_String = wVar1 + L' ';
        }
        _String = _String + 1;
      } while (*_String != L'\0');
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
      pwVar3 = _String;
      if (*_String != L'\0') {
        do {
          wVar1 = *_String;
          if ((0x40 < (ushort)wVar1) && ((ushort)wVar1 < 0x5b)) {
            *_String = wVar1 + L' ';
          }
          _String = _String + 1;
        } while (*_String != L'\0');
        return pwVar3;
      }
    }
    else {
      sVar2 = FUN_7800d530(DAT_78042438,0x100,_String,(char *)0xffffffff,(LPWSTR)0x0,0,0);
      if (((sVar2 != 0) && (pwVar3 = malloc(sVar2 * 2), pwVar3 != (wchar_t *)0x0)) &&
         (sVar2 = FUN_7800d530(DAT_78042438,0x100,_String,(char *)0xffffffff,pwVar3,sVar2,0),
         sVar2 != 0)) {
        wcscpy(_String,pwVar3);
      }
      if (!bVar4) {
        _unlock(0x13);
        free(pwVar3);
        return _String;
      }
      InterlockedDecrement(&__unguarded_readlc_active);
      free(pwVar3);
    }
  }
  return _String;
}


