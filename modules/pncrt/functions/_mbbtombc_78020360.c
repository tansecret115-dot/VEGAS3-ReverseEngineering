/* Module: pncrt.dll
   Function: _mbbtombc
   Address: 78020360
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _mbbtombc(uint _Ch)

{
  byte bVar1;
  undefined1 *puVar2;
  int iVar3;
  
                    /* 0x20360  339  _mbbtombc */
  if (DAT_78042400 == 0x3a4) {
    if ((0x1f < _Ch) && (_Ch < 0x7f)) {
      return (uint)*(ushort *)(&DAT_78040908 + _Ch * 2);
    }
    if (_Ch == 0xdc) {
      return 0x838f;
    }
    if ((0xa0 < _Ch) && (_Ch < 0xe0)) {
      iVar3 = 0;
      if (DAT_78040a08 != 0) {
        puVar2 = &DAT_78040a08;
        bVar1 = DAT_78040a08;
        while (_Ch != bVar1) {
          bVar1 = puVar2[4];
          puVar2 = puVar2 + 4;
          iVar3 = iVar3 + 1;
          if (bVar1 == 0) {
            return _Ch;
          }
        }
        _Ch = (uint)(ushort)(&DAT_78040a0a)[iVar3 * 2];
      }
    }
  }
  return _Ch;
}


