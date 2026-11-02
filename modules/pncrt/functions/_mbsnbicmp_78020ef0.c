/* Module: pncrt.dll
   Function: _mbsnbicmp
   Address: 78020ef0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl _mbsnbicmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  byte bVar1;
  size_t sVar2;
  ushort uVar3;
  int iVar4;
  ushort uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
                    /* 0x20ef0  371  _mbsnbicmp */
  if (_MaxCount == 0) {
    return 0;
  }
  if (DAT_78042400 == 0) {
    iVar4 = _strnicmp((char *)_Str1,(char *)_Str2,_MaxCount);
    return iVar4;
  }
  _lock(0x19);
  sVar2 = _MaxCount;
  do {
    _MaxCount = sVar2 - 1;
    uVar3 = (ushort)*_Str1;
    pbVar6 = _Str1 + 1;
    if ((*(byte *)((int)&_mbctype + uVar3 + 1) & 4) == 0) {
      if ((*(byte *)((int)&_mbctype + uVar3 + 1) & 0x10) == 0x10) {
        uVar3 = (ushort)(byte)(&_mbcasemap)[uVar3];
      }
LAB_78020fd4:
      uVar5 = (ushort)*_Str2;
      pbVar7 = _Str2 + 1;
      if ((*(byte *)((int)&_mbctype + uVar5 + 1) & 4) == 0) {
        if ((*(byte *)((int)&_mbctype + uVar5 + 1) & 0x10) == 0x10) {
          uVar5 = (ushort)(byte)(&_mbcasemap)[uVar5];
        }
      }
      else if (_MaxCount == 0) {
        uVar5 = 0;
      }
      else {
        bVar1 = *pbVar7;
        _MaxCount = sVar2 - 2;
        if (bVar1 == 0) {
          uVar5 = 0;
        }
        else {
          pbVar7 = _Str2 + 2;
          uVar5 = CONCAT11(*_Str2,bVar1);
          if ((uVar5 < DAT_78042408) || (DAT_7804240a < uVar5)) {
            if ((DAT_7804240e <= uVar5) && (uVar5 <= DAT_78042410)) {
              uVar5 = uVar5 + (short)_DAT_78042412;
            }
          }
          else {
            uVar5 = uVar5 + (short)_DAT_7804240c;
          }
        }
      }
    }
    else {
      if (_MaxCount != 0) {
        bVar1 = *pbVar6;
        if (bVar1 == 0) {
          uVar3 = 0;
        }
        else {
          pbVar6 = _Str1 + 2;
          uVar3 = CONCAT11(*_Str1,bVar1);
          if ((uVar3 < DAT_78042408) || (DAT_7804240a < uVar3)) {
            if ((DAT_7804240e <= uVar3) && (uVar3 <= DAT_78042410)) {
              uVar3 = uVar3 + (short)_DAT_78042412;
            }
          }
          else {
            uVar3 = uVar3 + (short)_DAT_7804240c;
          }
        }
        goto LAB_78020fd4;
      }
      uVar3 = 0;
      uVar5 = ~-(ushort)((*(byte *)((int)&_mbctype + *_Str2 + 1) & 4) != 0) & (ushort)*_Str2;
      pbVar7 = _Str2;
    }
    if (uVar3 != uVar5) {
      _unlock(0x19);
      return (-(uint)(uVar5 < uVar3) & 2) - 1;
    }
    if (uVar3 == 0) {
      _unlock(0x19);
      return 0;
    }
    _Str1 = pbVar6;
    _Str2 = pbVar7;
    sVar2 = _MaxCount;
    if (_MaxCount == 0) {
      _unlock(0x19);
      return 0;
    }
  } while( true );
}


