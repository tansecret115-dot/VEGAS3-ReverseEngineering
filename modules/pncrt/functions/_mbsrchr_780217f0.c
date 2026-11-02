/* Module: pncrt.dll
   Function: _mbsrchr
   Address: 780217f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsrchr(uchar *_Str,uint _Ch)

{
  ushort uVar1;
  uchar *puVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  byte *pbVar6;
  
                    /* 0x217f0  385  _mbsrchr */
  pbVar6 = (byte *)0x0;
  if (DAT_78042400 == 0) {
    puVar2 = (uchar *)strrchr((char *)_Str,_Ch);
    return puVar2;
  }
  _lock(0x19);
  do {
    bVar4 = *_Str;
    if ((*(byte *)((int)&_mbctype + bVar4 + 1) & 4) == 0) {
      pbVar5 = _Str;
      bVar3 = bVar4;
      if (_Ch == bVar4) {
LAB_78021868:
        pbVar6 = pbVar5;
        bVar4 = bVar3;
      }
    }
    else {
      bVar3 = _Str[1];
      pbVar5 = _Str + 1;
      if (bVar3 == 0) {
        bVar4 = bVar3;
        if (pbVar6 == (byte *)0x0) goto LAB_78021868;
      }
      else {
        uVar1 = CONCAT11(bVar4,bVar3);
        bVar4 = bVar3;
        if (_Ch == uVar1) {
          pbVar6 = _Str;
        }
      }
    }
    _Str = pbVar5 + 1;
    if (bVar4 == 0) {
      _unlock(0x19);
      return pbVar6;
    }
  } while( true );
}


