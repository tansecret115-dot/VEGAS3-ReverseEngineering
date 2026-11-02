/* Module: pncrt.dll
   Function: _mbsnset
   Address: 780216e0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsnset(uchar *_String,uint _Val,size_t _MaxCount)

{
  bool bVar1;
  uchar *puVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  
                    /* 0x216e0  383  _mbsnset */
  bVar1 = false;
  if (DAT_78042400 == 0) {
    puVar2 = (uchar *)_strnset((char *)_String,_Val,_MaxCount);
    return puVar2;
  }
  _lock(0x19);
  bVar3 = (byte)(_Val >> 8);
  pbVar5 = _String;
  if (bVar3 == 0) {
    while (_MaxCount != 0) {
      _MaxCount = _MaxCount - 1;
      if (*pbVar5 == 0) break;
      if ((bVar1) || ((*(byte *)((int)&_mbctype + *pbVar5 + 1) & 4) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      *pbVar5 = (byte)_Val;
      pbVar5 = pbVar5 + 1;
    }
  }
  else {
    while (_MaxCount != 0) {
      _MaxCount = _MaxCount - 1;
      if (*pbVar5 == 0) break;
      if ((bVar1) || ((*(byte *)((int)&_mbctype + *pbVar5 + 1) & 4) == 0)) {
        bVar1 = false;
      }
      else {
        bVar1 = true;
      }
      *pbVar5 = bVar3;
      pbVar4 = pbVar5 + 1;
      if (pbVar5[1] == 0) {
        *pbVar5 = 0x20;
        pbVar5 = pbVar4;
      }
      else if ((bVar1) || ((*(byte *)((int)&_mbctype + pbVar5[1] + 1) & 4) == 0)) {
        bVar1 = false;
        *pbVar4 = (byte)_Val;
        pbVar5 = pbVar5 + 2;
      }
      else {
        bVar1 = true;
        *pbVar4 = (byte)_Val;
        pbVar5 = pbVar5 + 2;
      }
    }
  }
  if ((bVar1) && (*pbVar5 != 0)) {
    *pbVar5 = 0x20;
  }
  _unlock(0x19);
  return _String;
}


