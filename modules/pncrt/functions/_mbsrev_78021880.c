/* Module: pncrt.dll
   Function: _mbsrev
   Address: 78021880
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsrev(uchar *_Str)

{
  byte bVar1;
  uchar *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  
                    /* 0x21880  386  _mbsrev */
  if (DAT_78042400 == 0) {
    puVar2 = (uchar *)_strrev((char *)_Str);
    return puVar2;
  }
  _lock(0x19);
  bVar1 = *_Str;
  pbVar4 = _Str;
  while (pbVar3 = pbVar4, bVar1 != 0) {
    pbVar3 = pbVar4 + 1;
    if ((*(byte *)((int)&_mbctype + bVar1 + 1) & 4) != 0) {
      if (*pbVar3 == 0) break;
      bVar1 = *pbVar4;
      *pbVar4 = *pbVar3;
      *pbVar3 = bVar1;
      pbVar3 = pbVar4 + 2;
    }
    pbVar4 = pbVar3;
    bVar1 = *pbVar3;
  }
  pbVar3 = pbVar3 + -1;
  pbVar4 = _Str;
  if (_Str < pbVar3) {
    do {
      bVar1 = *pbVar4;
      *pbVar4 = *pbVar3;
      pbVar4 = pbVar4 + 1;
      *pbVar3 = bVar1;
      pbVar3 = pbVar3 + -1;
    } while (pbVar4 < pbVar3);
  }
  _unlock(0x19);
  return _Str;
}


