/* Module: pncrt.dll
   Function: _mbsstr
   Address: 78021b00
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsstr(uchar *_Str,uchar *_Substr)

{
  uchar *puVar1;
  uchar uVar2;
  uchar *puVar3;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  
                    /* 0x21b00  390  _mbsstr */
  if (DAT_78042400 == 0) {
    puVar3 = (uchar *)strstr((char *)_Str,(char *)_Substr);
    return puVar3;
  }
  uVar5 = 0xffffffff;
  puVar3 = _Substr;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
  } while (uVar2 != '\0');
  uVar6 = 0xffffffff;
  puVar3 = _Str;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    uVar2 = *puVar3;
    puVar3 = puVar3 + 1;
  } while (uVar2 != '\0');
  puVar3 = _Str + ((~uVar6 - 1) - (~uVar5 - 1));
  if (*_Str != '\0') {
    while (_Str <= puVar3) {
      puVar4 = _Substr;
      if (*_Str != '\0') {
        do {
          if ((*puVar4 == '\0') || (puVar4[(int)_Str - (int)_Substr] != *puVar4)) break;
          puVar1 = puVar4 + ((int)_Str - (int)_Substr) + 1;
          puVar4 = puVar4 + 1;
        } while (*puVar1 != '\0');
      }
      if (*puVar4 == '\0') {
        return _Str;
      }
      _Str = _mbsinc(_Str);
      if (*_Str == '\0') {
        return (uchar *)0x0;
      }
    }
  }
  return (uchar *)0x0;
}


