/* Module: pncrt.dll
   Function: _mbsicmp
   Address: 7800c4c0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _mbsicmp(uchar *_Str1,uchar *_Str2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  ushort uVar4;
  ushort uVar5;
  BOOL unaff_EDI;
  uint uVar6;
  uint local_4;
  
                    /* 0xc4c0  361  _mbsicmp */
  if (DAT_78042400 == 0) {
    iVar1 = _strcmpi((char *)_Str1,(char *)_Str2);
    return iVar1;
  }
  _lock(0x19);
  do {
    uVar6 = (uint)*_Str1;
    pbVar2 = _Str1 + 1;
    if ((*(byte *)((int)&_mbctype + uVar6 + 1) & 4) == 0) {
      if ((*(byte *)((int)&_mbctype + uVar6 + 1) & 0x10) == 0x10) {
        uVar6 = (uint)(byte)(&_mbcasemap)[uVar6];
      }
    }
    else if (*pbVar2 == 0) {
      uVar6 = 0;
    }
    else {
      iVar1 = __crtLCMapStringA(DAT_78042404,(LPCWSTR)0x200,(DWORD)_Str1,(LPCSTR)0x2,(int)&local_4,
                                (LPSTR)0x2,DAT_78042400,1,unaff_EDI);
      if (iVar1 == 1) {
        uVar6 = local_4 & 0xff;
        pbVar2 = _Str1 + 2;
      }
      else {
        if (iVar1 != 2) goto LAB_7800c625;
        uVar6 = (local_4 & 0xff) * 0x100 + (local_4 >> 8 & 0xff);
        pbVar2 = _Str1 + 2;
      }
    }
    uVar4 = (ushort)*_Str2;
    pbVar3 = _Str2 + 1;
    if ((*(byte *)((int)&_mbctype + uVar4 + 1) & 4) == 0) {
      if ((*(byte *)((int)&_mbctype + uVar4 + 1) & 0x10) == 0x10) {
        uVar4 = (ushort)(byte)(&_mbcasemap)[uVar4];
      }
    }
    else if (*pbVar3 == 0) {
      uVar4 = 0;
    }
    else {
      iVar1 = __crtLCMapStringA(DAT_78042404,(LPCWSTR)0x200,(DWORD)_Str2,(LPCSTR)0x2,(int)&local_4,
                                (LPSTR)0x2,DAT_78042400,1,unaff_EDI);
      if (iVar1 == 1) {
        uVar4 = (ushort)local_4 & 0xff;
        pbVar3 = _Str2 + 2;
      }
      else {
        if (iVar1 != 2) {
LAB_7800c625:
          _unlock(0x19);
          return 0x7fffffff;
        }
        uVar4 = (ushort)local_4 * 0x100 + ((ushort)(local_4 >> 8) & 0xff);
        pbVar3 = _Str2 + 2;
      }
    }
    uVar5 = (ushort)uVar6;
    if (uVar5 != uVar4) {
      _unlock(0x19);
      return (-(uint)(uVar4 < uVar5) & 2) - 1;
    }
    _Str1 = pbVar2;
    _Str2 = pbVar3;
    if (uVar5 == 0) {
      _unlock(0x19);
      return 0;
    }
  } while( true );
}


