/* Module: pncrt.dll
   Function: _mbctombb
   Address: 780203e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _mbctombb(uint _Ch)

{
  ushort *puVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  
                    /* 0x203e0  349  _mbctombb */
  if (DAT_78042400 != 0x3a4) {
    return _Ch;
  }
  iVar3 = 0;
  puVar2 = &DAT_78040948;
  do {
    if (_Ch == *puVar2) {
      return iVar3 + 0x20;
    }
    puVar2 = puVar2 + 1;
    iVar3 = iVar3 + 1;
  } while ((int)puVar2 < 0x78040a05);
  if ((_Ch < 0x8397) && (iVar3 = 0, DAT_78040a08 != '\0')) {
    puVar2 = &DAT_78040a0a;
    while( true ) {
      iVar4 = _Ch - *puVar2;
      if ((iVar4 == 0) ||
         ((((char)(*puVar2 >> 8) == (char)(_Ch >> 8) && (0 < iVar4)) &&
          (iVar4 - *(char *)((int)puVar2 + -1) < 0)))) break;
      puVar1 = puVar2 + 1;
      puVar2 = puVar2 + 2;
      iVar3 = iVar3 + 1;
      if ((char)*puVar1 == '\0') {
        return _Ch;
      }
    }
    _Ch = (uint)(byte)(&DAT_78040a08)[iVar3 * 4];
  }
  return _Ch;
}


