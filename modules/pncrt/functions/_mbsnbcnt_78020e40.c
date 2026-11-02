/* Module: pncrt.dll
   Function: _mbsnbcnt
   Address: 78020e40
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl _mbsnbcnt(uchar *_Str,size_t _MaxCount)

{
  byte *pbVar1;
  byte *pbVar2;
  
                    /* 0x20e40  368  _mbsnbcnt */
  _lock(0x19);
  pbVar2 = _Str;
  if (_MaxCount != 0) {
    while( true ) {
      _MaxCount = _MaxCount - 1;
      if ((*pbVar2 == 0) ||
         ((pbVar1 = pbVar2, (*(byte *)((int)&_mbctype + *pbVar2 + 1) & 4) != 0 &&
          (pbVar1 = pbVar2 + 1, pbVar2[1] == 0)))) break;
      pbVar2 = pbVar1 + 1;
      if (_MaxCount == 0) {
        _unlock(0x19);
        return (int)(pbVar1 + 1) - (int)_Str;
      }
    }
  }
  _unlock(0x19);
  return (int)pbVar2 - (int)_Str;
}


