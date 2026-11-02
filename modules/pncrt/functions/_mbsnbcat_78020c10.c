/* Module: pncrt.dll
   Function: _mbsnbcat
   Address: 78020c10
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsnbcat(uchar *_Dest,uchar *_Source,size_t _Count)

{
  byte bVar1;
  byte bVar2;
  uchar *puVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  size_t sVar7;
  
                    /* 0x20c10  366  _mbsnbcat */
  if (_Count == 0) {
    return _Dest;
  }
  if (DAT_78042400 == 0) {
    puVar3 = (uchar *)strncat((char *)_Dest,(char *)_Source,_Count);
    return puVar3;
  }
  _lock(0x19);
  bVar1 = *_Dest;
  pbVar5 = _Dest;
  while (bVar1 != 0) {
    bVar1 = pbVar5[1];
    pbVar5 = pbVar5 + 1;
  }
  iVar4 = _mbsbtype(_Dest,(size_t)(pbVar5 + (-1 - (int)_Dest)));
  if (iVar4 == 1) {
    pbVar5 = pbVar5 + -1;
  }
  do {
    sVar7 = _Count - 1;
    bVar1 = *_Source;
    bVar2 = *(byte *)((int)&_mbctype + bVar1 + 1);
    *pbVar5 = bVar1;
    if ((bVar2 & 4) == 0) {
      pbVar6 = pbVar5 + 1;
      _Source = _Source + 1;
      _Count = sVar7;
      if (bVar1 == 0) break;
    }
    else {
      pbVar6 = pbVar5 + 1;
      _Count = _Count - 2;
      if (sVar7 == 0) {
        *pbVar5 = 0;
        break;
      }
      bVar1 = _Source[1];
      *pbVar6 = bVar1;
      pbVar6 = pbVar5 + 2;
      _Source = _Source + 2;
      if (bVar1 == 0) {
        *pbVar5 = 0;
        break;
      }
    }
    pbVar5 = pbVar6;
  } while (_Count != 0);
  iVar4 = _mbsbtype(_Dest,(size_t)(pbVar6 + (-1 - (int)_Dest)));
  if (iVar4 == 1) {
    pbVar6[-1] = 0;
    _unlock(0x19);
    return _Dest;
  }
  *pbVar6 = 0;
  _unlock(0x19);
  return _Dest;
}


