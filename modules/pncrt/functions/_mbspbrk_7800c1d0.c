/* Module: pncrt.dll
   Function: _mbspbrk
   Address: 7800c1d0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbspbrk(uchar *_Str,uchar *_Control)

{
  byte *pbVar1;
  byte bVar2;
  uchar *puVar3;
  byte *pbVar4;
  
                    /* 0xc1d0  384  _mbspbrk */
  if (DAT_78042400 == 0) {
    puVar3 = (uchar *)strpbrk((char *)_Str,(char *)_Control);
    return puVar3;
  }
  _lock(0x19);
  if (*_Str == '\0') {
LAB_7800c269:
    _unlock(0x19);
    return (uchar *)(-(uint)(*_Str != 0) & (uint)_Str);
  }
  pbVar4 = _Control;
  bVar2 = *_Control;
joined_r0x7800c20f:
  do {
    if (bVar2 != 0) {
      bVar2 = *pbVar4;
      if ((*(byte *)((int)&_mbctype + bVar2 + 1) & 4) == 0) {
        if (bVar2 != *_Str) goto LAB_7800c23d;
      }
      else if (((bVar2 != *_Str) || (pbVar4[1] != _Str[1])) && (pbVar4[1] != 0)) {
        pbVar4 = pbVar4 + 1;
LAB_7800c23d:
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar2 = *pbVar1;
        goto joined_r0x7800c20f;
      }
    }
    if (((*pbVar4 != 0) ||
        (((*(byte *)((int)&_mbctype + *_Str + 1) & 4) != 0 &&
         (pbVar4 = _Str + 1, _Str = _Str + 1, *pbVar4 == 0)))) ||
       (pbVar1 = _Str + 1, _Str = _Str + 1, pbVar4 = _Control, bVar2 = *_Control, *pbVar1 == 0))
    goto LAB_7800c269;
  } while( true );
}


