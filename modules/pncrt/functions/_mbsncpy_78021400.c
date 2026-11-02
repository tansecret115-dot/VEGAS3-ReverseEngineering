/* Module: pncrt.dll
   Function: _mbsncpy
   Address: 78021400
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsncpy(uchar *_Dest,uchar *_Source,size_t _Count)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  uchar *puVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  
                    /* 0x21400  378  _mbsncpy */
  if (DAT_78042400 == 0) {
    puVar4 = (uchar *)strncpy((char *)_Dest,(char *)_Source,_Count);
    return puVar4;
  }
  _lock(0x19);
  uVar6 = 0;
  pbVar7 = _Dest;
  do {
    while( true ) {
      pbVar3 = pbVar7;
      pbVar7 = pbVar3;
      if (_Count == 0) goto LAB_78021475;
      bVar1 = *_Source;
      uVar6 = _Count - 1;
      bVar2 = *(byte *)((int)&_mbctype + bVar1 + 1);
      *pbVar3 = bVar1;
      _Count = uVar6;
      if ((bVar2 & 4) == 0) break;
      bVar1 = _Source[1];
      pbVar3[1] = bVar1;
      pbVar7 = pbVar3 + 2;
      _Source = _Source + 2;
      if (bVar1 == 0) {
        *pbVar3 = 0;
        goto LAB_78021475;
      }
    }
    pbVar7 = pbVar3 + 1;
    _Source = _Source + 1;
  } while (bVar1 != 0);
LAB_78021475:
  if (uVar6 != 0) {
    for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *pbVar7 = 0;
      pbVar7 = pbVar7 + 1;
    }
  }
  _unlock(0x19);
  return _Dest;
}


