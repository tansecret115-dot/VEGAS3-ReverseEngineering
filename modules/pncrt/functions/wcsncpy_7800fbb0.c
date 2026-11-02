/* Module: pncrt.dll
   Function: wcsncpy
   Address: 7800fbb0
   Source: Ghidra pseudocode (Stage 10 batch) */


wchar_t * __cdecl wcsncpy(wchar_t *_Dest,wchar_t *_Source,size_t _Count)

{
  wchar_t wVar1;
  uint uVar2;
  uint uVar3;
  wchar_t *pwVar4;
  
                    /* 0xfbb0  755  wcsncpy */
  pwVar4 = _Dest;
  if (_Count != 0) {
    do {
      wVar1 = *_Source;
      _Source = _Source + 1;
      *pwVar4 = wVar1;
      pwVar4 = pwVar4 + 1;
      if (wVar1 == L'\0') break;
      _Count = _Count - 1;
    } while (_Count != 0);
    if ((_Count != 0) && (uVar2 = _Count - 1, uVar2 != 0)) {
      for (uVar3 = uVar2 >> 1; uVar3 != 0; uVar3 = uVar3 - 1) {
        pwVar4[0] = L'\0';
        pwVar4[1] = L'\0';
        pwVar4 = pwVar4 + 2;
      }
      for (uVar2 = (uint)((uVar2 & 1) != 0); uVar2 != 0; uVar2 = uVar2 - 1) {
        *pwVar4 = L'\0';
        pwVar4 = pwVar4 + 1;
      }
    }
  }
  return _Dest;
}


