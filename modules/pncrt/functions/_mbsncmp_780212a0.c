/* Module: pncrt.dll
   Function: _mbsncmp
   Address: 780212a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _mbsncmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  
                    /* 0x212a0  376  _mbsncmp */
  if (_MaxCount != 0) {
    if (DAT_78042400 == 0) {
      iVar2 = strncmp((char *)_Str1,(char *)_Str2,_MaxCount);
      return iVar2;
    }
    _lock(0x19);
    pbVar4 = _Str2;
    while( true ) {
      _MaxCount = _MaxCount - 1;
      _Str2._0_2_ = (ushort)*_Str1;
      pbVar6 = _Str1 + 1;
      if ((*(byte *)((int)&_mbctype + (ushort)_Str2 + 1) & 4) != 0) {
        bVar1 = *pbVar6;
        if (bVar1 == 0) {
          _Str2._0_2_ = 0;
        }
        else {
          pbVar6 = _Str1 + 2;
          _Str2._0_2_ = CONCAT11(*_Str1,bVar1);
        }
      }
      uVar3 = (ushort)*pbVar4;
      pbVar5 = pbVar4 + 1;
      if ((*(byte *)((int)&_mbctype + uVar3 + 1) & 4) != 0) {
        bVar1 = *pbVar5;
        if (bVar1 == 0) {
          uVar3 = 0;
        }
        else {
          pbVar5 = pbVar4 + 2;
          uVar3 = CONCAT11(*pbVar4,bVar1);
        }
      }
      if ((ushort)_Str2 != uVar3) {
        _unlock(0x19);
        return (-(uint)(uVar3 < (ushort)_Str2) & 2) - 1;
      }
      if ((ushort)_Str2 == 0) break;
      pbVar4 = pbVar5;
      _Str1 = pbVar6;
      if (_MaxCount == 0) {
        _unlock(0x19);
        return 0;
      }
    }
    _unlock(0x19);
  }
  return 0;
}


