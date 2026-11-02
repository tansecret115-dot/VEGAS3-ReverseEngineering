/* Module: pncrt.dll
   Function: _mbsnbset
   Address: 780210c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsnbset(uchar *_String,uint _Val,size_t _MaxCount)

{
  uchar uVar1;
  uchar *puVar2;
  size_t sVar3;
  
                    /* 0x210c0  373  _mbsnbset */
  if (DAT_78042400 == 0) {
    puVar2 = (uchar *)_strnset((char *)_String,_Val,_MaxCount);
    return puVar2;
  }
  uVar1 = (uchar)(_Val >> 8);
  puVar2 = _String;
  if (uVar1 == '\0') {
    for (; (_MaxCount != 0 && (_MaxCount = _MaxCount - 1, *puVar2 != '\0')); puVar2 = puVar2 + 1) {
      *puVar2 = (uchar)_Val;
    }
  }
  else if (_MaxCount != 0) {
    while (*puVar2 != '\0') {
      sVar3 = _MaxCount - 2;
      if ((_MaxCount == 1) || (puVar2[1] == '\0')) {
        *puVar2 = ' ';
        return _String;
      }
      *puVar2 = uVar1;
      puVar2[1] = (uchar)_Val;
      puVar2 = puVar2 + 2;
      _MaxCount = sVar3;
      if (sVar3 == 0) {
        return _String;
      }
    }
  }
  return _String;
}


