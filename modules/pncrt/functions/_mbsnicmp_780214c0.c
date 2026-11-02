/* Module: pncrt.dll
   Function: _mbsnicmp
   Address: 780214c0
   Source: Ghidra pseudocode (Stage 10 batch) */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl _mbsnicmp(uchar *_Str1,uchar *_Str2,size_t _MaxCount)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  ushort uVar7;
  ushort uVar8;
  
                    /* 0x214c0  380  _mbsnicmp */
  if (_MaxCount != 0) {
    if (DAT_78042400 == 0) {
      iVar3 = _strnicmp((char *)_Str1,(char *)_Str2,_MaxCount);
      return iVar3;
    }
    _lock(0x19);
    while( true ) {
      _MaxCount = _MaxCount - 1;
      bVar1 = *_Str1;
      uVar4 = (uint)bVar1;
      pbVar5 = _Str1 + 1;
      if ((*(byte *)((int)&_mbctype + uVar4 + 1) & 4) == 0) {
        if ((*(byte *)((int)&_mbctype + uVar4 + 1) & 0x10) == 0x10) {
          uVar8 = (ushort)(byte)(&_mbcasemap)[uVar4];
        }
        else {
          uVar8 = (ushort)bVar1;
        }
      }
      else {
        bVar2 = *pbVar5;
        if (bVar2 == 0) {
          uVar8 = 0;
        }
        else {
          pbVar5 = _Str1 + 2;
          uVar8 = CONCAT11(bVar1,bVar2);
          if ((uVar8 < DAT_78042408) || (DAT_7804240a < uVar8)) {
            if ((DAT_7804240e <= uVar8) && (uVar8 <= DAT_78042410)) {
              uVar8 = uVar8 + (short)_DAT_78042412;
            }
          }
          else {
            uVar8 = uVar8 + (short)_DAT_7804240c;
          }
        }
      }
      bVar1 = *_Str2;
      uVar4 = (uint)bVar1;
      uVar7 = (ushort)bVar1;
      pbVar6 = _Str2 + 1;
      if ((*(byte *)((int)&_mbctype + uVar4 + 1) & 4) == 0) {
        if ((*(byte *)((int)&_mbctype + uVar4 + 1) & 0x10) == 0x10) {
          uVar7 = (ushort)(byte)(&_mbcasemap)[uVar4];
        }
      }
      else {
        bVar2 = *pbVar6;
        if (bVar2 == 0) {
          uVar7 = 0;
        }
        else {
          pbVar6 = _Str2 + 2;
          uVar7 = CONCAT11(bVar1,bVar2);
          if ((uVar7 < DAT_78042408) || (DAT_7804240a < uVar7)) {
            if ((DAT_7804240e <= uVar7) && (uVar7 <= DAT_78042410)) {
              uVar7 = uVar7 + (short)_DAT_78042412;
            }
          }
          else {
            uVar7 = uVar7 + (short)_DAT_7804240c;
          }
        }
      }
      if (uVar8 != uVar7) {
        _unlock(0x19);
        return (-(uint)(uVar7 < uVar8) & 2) - 1;
      }
      if (uVar8 == 0) break;
      _Str1 = pbVar5;
      _Str2 = pbVar6;
      if (_MaxCount == 0) {
        _unlock(0x19);
        return 0;
      }
    }
    _unlock(0x19);
  }
  return 0;
}


