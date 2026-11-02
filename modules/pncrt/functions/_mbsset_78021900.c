/* Module: pncrt.dll
   Function: _mbsset
   Address: 78021900
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsset(uchar *_String,uint _Val)

{
  uchar *puVar1;
  uchar uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uchar *puVar6;
  
                    /* 0x21900  387  _mbsset */
  puVar1 = _String;
  if (DAT_78042400 != 0) {
    uVar2 = (uchar)(_Val >> 8);
    if (uVar2 == '\0') {
      uVar2 = *_String;
      while (uVar2 != '\0') {
        *_String = (uchar)_Val;
        puVar6 = _String + 1;
        _String = _String + 1;
        uVar2 = *puVar6;
      }
    }
    else if (*_String != '\0') {
      do {
        *_String = uVar2;
        puVar6 = _String + 1;
        if (*puVar6 == '\0') {
          *_String = ' ';
        }
        else {
          *puVar6 = (uchar)_Val;
          puVar6 = _String + 2;
        }
        _String = puVar6;
      } while (*puVar6 != '\0');
      return puVar1;
    }
    return puVar1;
  }
  uVar3 = 0xffffffff;
  do {
    puVar1 = _String;
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    puVar1 = _String + 1;
    uVar2 = *_String;
    _String = puVar1;
  } while (uVar2 != '\0');
  uVar4 = ~uVar3 - 1;
  puVar6 = puVar1 + -~uVar3;
  for (uVar5 = uVar4 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *(uint *)puVar6 = CONCAT22(CONCAT11((uchar)_Val,(uchar)_Val),CONCAT11((uchar)_Val,(uchar)_Val));
    puVar6 = puVar6 + 4;
  }
  for (uVar4 = uVar4 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar6 = (uchar)_Val;
    puVar6 = puVar6 + 1;
  }
  return puVar1 + -~uVar3;
}


