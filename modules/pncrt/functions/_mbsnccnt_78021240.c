/* Module: pncrt.dll
   Function: _mbsnccnt
   Address: 78021240
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl _mbsnccnt(uchar *_Str,size_t _MaxCount)

{
  byte *pbVar1;
  size_t sVar2;
  size_t sVar3;
  
                    /* 0x21240  375  _mbsnccnt */
  _lock(0x19);
  sVar3 = 0;
  while (_MaxCount != 0) {
    if ((*_Str == 0) ||
       ((sVar2 = _MaxCount - 1, (*(byte *)((int)&_mbctype + *_Str + 1) & 4) != 0 &&
        ((sVar2 = _MaxCount - 2, _MaxCount - 1 == 0 ||
         (pbVar1 = _Str + 1, _Str = _Str + 1, *pbVar1 == 0)))))) break;
    sVar3 = sVar3 + 1;
    _Str = _Str + 1;
    _MaxCount = sVar2;
  }
  _unlock(0x19);
  return sVar3;
}


