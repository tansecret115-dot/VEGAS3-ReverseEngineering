/* Module: pncrt.dll
   Function: _mbschr
   Address: 78016ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbschr(uchar *_Str,uint _Ch)

{
  byte bVar1;
  uint uVar2;
  uchar *puVar3;
  
                    /* 0x16ba0  354  _mbschr */
  if (DAT_78042400 == 0) {
    puVar3 = (uchar *)strchr((char *)_Str,_Ch);
    return puVar3;
  }
  _lock(0x19);
  bVar1 = *_Str;
  while (uVar2 = (uint)bVar1, bVar1 != 0) {
    if ((*(byte *)((int)&_mbctype + uVar2 + 1) & 4) == 0) {
      puVar3 = _Str;
      if (_Ch == uVar2) break;
    }
    else {
      puVar3 = _Str + 1;
      if (_Str[1] == '\0') {
        _unlock(0x19);
        return (uchar *)0x0;
      }
      if (_Ch == CONCAT11(bVar1,_Str[1])) {
        _unlock(0x19);
        return _Str;
      }
    }
    _Str = puVar3 + 1;
    bVar1 = puVar3[1];
  }
  _unlock(0x19);
  return (uchar *)((_Ch != uVar2) - 1 & (uint)_Str);
}


