/* Module: pncrt.dll
   Function: _mbscmp
   Address: 7800c330
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _mbscmp(uchar *_Str1,uchar *_Str2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
                    /* 0xc330  355  _mbscmp */
  if (DAT_78042400 != 0) {
    _lock(0x19);
    pbVar3 = _Str2;
    while( true ) {
      _Str2._0_2_ = (ushort)*_Str1;
      pbVar5 = _Str1 + 1;
      if ((*(byte *)((int)&_mbctype + (ushort)_Str2 + 1) & 4) != 0) {
        bVar1 = *pbVar5;
        if (bVar1 == 0) {
          _Str2._0_2_ = 0;
        }
        else {
          pbVar5 = _Str1 + 2;
          _Str2._0_2_ = CONCAT11(*_Str1,bVar1);
        }
      }
      uVar2 = (ushort)*pbVar3;
      pbVar4 = pbVar3 + 1;
      if ((*(byte *)((int)&_mbctype + uVar2 + 1) & 4) != 0) {
        bVar1 = *pbVar4;
        if (bVar1 == 0) {
          uVar2 = 0;
        }
        else {
          pbVar4 = pbVar3 + 2;
          uVar2 = CONCAT11(*pbVar3,bVar1);
        }
      }
      if ((ushort)_Str2 != uVar2) break;
      pbVar3 = pbVar4;
      _Str1 = pbVar5;
      if ((ushort)_Str2 == 0) {
        _unlock(0x19);
        return 0;
      }
    }
    _unlock(0x19);
    return (-(uint)(uVar2 < (ushort)_Str2) & 2) - 1;
  }
  while( true ) {
    bVar1 = *_Str1;
    bVar6 = bVar1 < *_Str2;
    if (bVar1 != *_Str2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = _Str1[1];
    bVar6 = bVar1 < _Str2[1];
    if (bVar1 != _Str2[1]) break;
    _Str1 = _Str1 + 2;
    _Str2 = _Str2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar6) - (uint)(bVar6 != 0);
}


