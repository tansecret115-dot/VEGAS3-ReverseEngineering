/* Module: pncrt.dll
   Function: _mbscspn
   Address: 78020990
   Source: Ghidra pseudocode (Stage 10 batch) */


size_t __cdecl _mbscspn(uchar *_Str,uchar *_Control)

{
  byte *pbVar1;
  byte bVar2;
  size_t sVar3;
  byte *pbVar4;
  byte *pbVar5;
  
                    /* 0x20990  358  _mbscspn */
  if (DAT_78042400 == 0) {
    sVar3 = strcspn((char *)_Str,(char *)_Control);
    return sVar3;
  }
  _lock(0x19);
  pbVar5 = _Str;
  if (*_Str == '\0') {
LAB_78020a2e:
    _unlock(0x19);
    return (int)pbVar5 - (int)_Str;
  }
  pbVar4 = _Control;
  bVar2 = *_Control;
joined_r0x780209d1:
  do {
    if (bVar2 != 0) {
      bVar2 = *pbVar4;
      if ((*(byte *)((int)&_mbctype + bVar2 + 1) & 4) == 0) {
        if (bVar2 != *pbVar5) goto LAB_780209ff;
      }
      else if (((bVar2 != *pbVar5) || (pbVar4[1] != pbVar5[1])) && (pbVar4[1] != 0)) {
        pbVar4 = pbVar4 + 1;
LAB_780209ff:
        pbVar1 = pbVar4 + 1;
        pbVar4 = pbVar4 + 1;
        bVar2 = *pbVar1;
        goto joined_r0x780209d1;
      }
    }
    if (((*pbVar4 != 0) ||
        (((*(byte *)((int)&_mbctype + *pbVar5 + 1) & 4) != 0 &&
         (pbVar4 = pbVar5 + 1, pbVar5 = pbVar5 + 1, *pbVar4 == 0)))) ||
       (pbVar1 = pbVar5 + 1, pbVar5 = pbVar5 + 1, pbVar4 = _Control, bVar2 = *_Control, *pbVar1 == 0
       )) goto LAB_78020a2e;
  } while( true );
}


