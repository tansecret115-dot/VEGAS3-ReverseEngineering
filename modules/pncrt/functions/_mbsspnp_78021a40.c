/* Module: pncrt.dll
   Function: _mbsspnp
   Address: 78021a40
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsspnp(uchar *_Str1,uchar *_Str2)

{
  byte *pbVar1;
  byte bVar2;
  size_t sVar3;
  byte *pbVar4;
  
                    /* 0x21a40  389  _mbsspnp */
  if (DAT_78042400 == 0) {
    sVar3 = strspn((char *)_Str1,(char *)_Str2);
    return (uchar *)((uint)(_Str1 + sVar3) & -(uint)(_Str1[sVar3] != '\0'));
  }
  _lock(0x19);
  if (*_Str1 == '\0') {
LAB_78021ae5:
    _unlock(0x19);
    return (uchar *)(-(uint)(*_Str1 != 0) & (uint)_Str1);
  }
  pbVar4 = _Str2;
  bVar2 = *_Str2;
joined_r0x78021a8b:
  do {
    if (bVar2 != 0) {
      bVar2 = *pbVar4;
      if ((*(byte *)((int)&_mbctype + bVar2 + 1) & 4) == 0) {
        if (bVar2 != *_Str1) goto LAB_78021ab9;
      }
      else if (((bVar2 != *_Str1) || (pbVar4[1] != _Str1[1])) && (pbVar4[1] != 0)) {
        pbVar4 = pbVar4 + 1;
LAB_78021ab9:
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar2 = *pbVar1;
        goto joined_r0x78021a8b;
      }
    }
    if (((*pbVar4 == 0) ||
        (((*(byte *)((int)&_mbctype + *_Str1 + 1) & 4) != 0 &&
         (pbVar4 = _Str1 + 1, _Str1 = _Str1 + 1, *pbVar4 == 0)))) ||
       (pbVar1 = _Str1 + 1, _Str1 = _Str1 + 1, pbVar4 = _Str2, bVar2 = *_Str2, *pbVar1 == 0))
    goto LAB_78021ae5;
  } while( true );
}


