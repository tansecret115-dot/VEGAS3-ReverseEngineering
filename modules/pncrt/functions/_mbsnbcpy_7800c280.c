/* Module: pncrt.dll
   Function: _mbsnbcpy
   Address: 7800c280
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsnbcpy(uchar *_Dest,uchar *_Source,size_t _Count)

{
  byte bVar1;
  byte bVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
                    /* 0xc280  370  _mbsnbcpy */
  if (DAT_78042400 == 0) {
    puVar3 = (uchar *)strncpy((char *)_Dest,(char *)_Source,_Count);
    return puVar3;
  }
  _lock(0x19);
  uVar5 = 0;
  pbVar7 = _Dest;
  pbVar6 = _Dest;
  if (_Count != 0) {
    do {
      bVar1 = *_Source;
      uVar5 = _Count - 1;
      bVar2 = *(byte *)((int)&_mbctype + bVar1 + 1);
      *pbVar6 = bVar1;
      if ((bVar2 & 4) == 0) {
        pbVar7 = pbVar6 + 1;
        _Source = _Source + 1;
        if (bVar1 == 0) goto LAB_7800c2fd;
      }
      else {
        pbVar7 = pbVar6 + 1;
        if (uVar5 == 0) {
          *pbVar6 = 0;
          goto LAB_7800c2fd;
        }
        bVar1 = _Source[1];
        uVar5 = _Count - 2;
        *pbVar7 = bVar1;
        pbVar7 = pbVar6 + 2;
        _Source = _Source + 2;
        if (bVar1 == 0) {
          *pbVar6 = 0;
          goto LAB_7800c2fd;
        }
      }
      _Count = uVar5;
      pbVar6 = pbVar7;
    } while (uVar5 != 0);
    uVar5 = 0;
  }
LAB_7800c2fd:
  if (uVar5 != 0) {
    for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
      pbVar7[0] = 0;
      pbVar7[1] = 0;
      pbVar7[2] = 0;
      pbVar7[3] = 0;
      pbVar7 = pbVar7 + 4;
    }
    for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
      *pbVar7 = 0;
      pbVar7 = pbVar7 + 1;
    }
  }
  _unlock(0x19);
  return _Dest;
}


