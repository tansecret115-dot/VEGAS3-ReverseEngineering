/* Module: pncrt.dll
   Function: _mbsncat
   Address: 78021150
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsncat(uchar *_Dest,uchar *_Source,size_t _Count)

{
  byte bVar1;
  byte bVar2;
  uchar *puVar3;
  int iVar4;
  byte *_Pos;
  byte *pbVar5;
  
                    /* 0x21150  374  _mbsncat */
  if (_Count == 0) {
    return _Dest;
  }
  if (DAT_78042400 == 0) {
    puVar3 = (uchar *)strncat((char *)_Dest,(char *)_Source,_Count);
    return puVar3;
  }
  _lock(0x19);
  bVar1 = *_Dest;
  _Pos = _Dest;
  while (bVar1 != 0) {
    bVar1 = _Pos[1];
    _Pos = _Pos + 1;
  }
  iVar4 = _ismbslead(_Dest,_Pos);
  if (iVar4 != 0) {
    _Pos = _Pos + -1;
  }
  do {
    _Count = _Count - 1;
    bVar1 = *_Source;
    bVar2 = *(byte *)((int)&_mbctype + bVar1 + 1);
    *_Pos = bVar1;
    if ((bVar2 & 4) == 0) {
      pbVar5 = _Pos + 1;
      _Source = _Source + 1;
      if (bVar1 == 0) break;
    }
    else {
      bVar1 = _Source[1];
      _Pos[1] = bVar1;
      pbVar5 = _Pos + 2;
      _Source = _Source + 2;
      if (bVar1 == 0) {
        *_Pos = 0;
        break;
      }
    }
    _Pos = pbVar5;
  } while (_Count != 0);
  iVar4 = _mbsbtype(_Dest,(size_t)(pbVar5 + (-1 - (int)_Dest)));
  if (iVar4 == 1) {
    pbVar5[-1] = 0;
    _unlock(0x19);
    return _Dest;
  }
  *pbVar5 = 0;
  _unlock(0x19);
  return _Dest;
}


