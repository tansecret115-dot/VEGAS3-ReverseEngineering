/* Module: pncrt.dll
   Function: _mbslen
   Address: 78020af0
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl _mbslen(uchar *_Str)

{
  uchar *puVar1;
  uchar uVar2;
  byte bVar3;
  uint uVar4;
  size_t sVar5;
  
                    /* 0x20af0  364  _mbslen */
  if (DAT_78042400 != 0) {
    _lock(0x19);
    sVar5 = 0;
    bVar3 = *_Str;
    for (; (bVar3 != 0 &&
           (((*(byte *)((int)&_mbctype + bVar3 + 1) & 4) == 0 ||
            (puVar1 = _Str + 1, _Str = _Str + 1, *puVar1 != '\0')))); _Str = _Str + 1) {
      bVar3 = _Str[1];
      sVar5 = sVar5 + 1;
    }
    _unlock(0x19);
    return sVar5;
  }
  uVar4 = 0xffffffff;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    uVar2 = *_Str;
    _Str = _Str + 1;
  } while (uVar2 != '\0');
  return ~uVar4 - 1;
}


