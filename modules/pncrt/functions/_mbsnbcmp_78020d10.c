/* Module: pncrt.dll
   Function: _mbsnbcmp
   Address: 78020d10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _mbsnbcmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  byte bVar1;
  int iVar2;
  ushort uVar3;
  size_t sVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  
                    /* 0x20d10  367  _mbsnbcmp */
  if (_MaxCount == 0) {
    return 0;
  }
  if (DAT_78042400 == 0) {
    iVar2 = strncmp((char *)_Str1,(char *)_Str2,_MaxCount);
    return iVar2;
  }
  _lock(0x19);
  pbVar5 = _Str2;
  do {
    sVar4 = _MaxCount - 1;
    _Str2._0_2_ = (ushort)*_Str1;
    pbVar7 = _Str1 + 1;
    if ((*(byte *)((int)&_mbctype + (ushort)_Str2 + 1) & 4) == 0) {
LAB_78020db0:
      uVar3 = (ushort)*pbVar5;
      pbVar6 = pbVar5 + 1;
      if ((*(byte *)((int)&_mbctype + uVar3 + 1) & 4) != 0) {
        if (sVar4 == 0) {
          uVar3 = 0;
        }
        else {
          bVar1 = *pbVar6;
          sVar4 = _MaxCount - 2;
          if (bVar1 == 0) {
            uVar3 = 0;
          }
          else {
            pbVar6 = pbVar5 + 2;
            uVar3 = CONCAT11(*pbVar5,bVar1);
          }
        }
      }
    }
    else {
      if (sVar4 != 0) {
        bVar1 = *pbVar7;
        if (bVar1 == 0) {
          _Str2._0_2_ = 0;
        }
        else {
          pbVar7 = _Str1 + 2;
          _Str2._0_2_ = CONCAT11(*_Str1,bVar1);
        }
        goto LAB_78020db0;
      }
      _Str2._0_2_ = 0;
      uVar3 = ~-(ushort)((*(byte *)((int)&_mbctype + *pbVar5 + 1) & 4) != 0) & (ushort)*pbVar5;
      pbVar6 = pbVar5;
    }
    if ((ushort)_Str2 != uVar3) {
      _unlock(0x19);
      return (-(uint)(uVar3 < (ushort)_Str2) & 2) - 1;
    }
    if ((ushort)_Str2 == 0) {
      _unlock(0x19);
      return 0;
    }
    pbVar5 = pbVar6;
    _Str1 = pbVar7;
    _MaxCount = sVar4;
    if (sVar4 == 0) {
      _unlock(0x19);
      return 0;
    }
  } while( true );
}


