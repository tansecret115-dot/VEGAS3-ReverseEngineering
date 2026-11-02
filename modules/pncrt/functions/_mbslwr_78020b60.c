/* Module: pncrt.dll
   Function: _mbslwr
   Address: 78020b60
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbslwr(uchar *_String)

{
  byte *pbVar1;
  byte bVar2;
  uchar *puVar3;
  byte bVar4;
  int iVar5;
  byte *_DwMapFlag;
  BOOL unaff_EDI;
  
                    /* 0x20b60  365  _mbslwr */
  _lock(0x19);
  puVar3 = _String;
  _DwMapFlag = _String;
  if (*_String == '\0') {
    _unlock(0x19);
    return puVar3;
  }
  do {
    bVar4 = *_DwMapFlag;
    bVar2 = *(byte *)((int)&_mbctype + bVar4 + 1);
    if ((bVar2 & 4) == 0) {
      if ((bVar2 & 0x10) == 0x10) {
        bVar4 = (&_mbcasemap)[bVar4];
      }
      *_DwMapFlag = bVar4;
    }
    else {
      iVar5 = __crtLCMapStringA(DAT_78042404,(LPCWSTR)0x100,(DWORD)_DwMapFlag,(LPCSTR)0x2,
                                (int)&_String,(LPSTR)0x2,DAT_78042400,1,unaff_EDI);
      if (iVar5 == 0) {
        _unlock(0x19);
        return (uchar *)0x0;
      }
      *_DwMapFlag = (byte)_String;
      if (1 < iVar5) {
        _DwMapFlag = _DwMapFlag + 1;
        *_DwMapFlag = (byte)((uint)_String >> 8);
      }
    }
    pbVar1 = _DwMapFlag + 1;
    _DwMapFlag = _DwMapFlag + 1;
  } while (*pbVar1 != 0);
  _unlock(0x19);
  return puVar3;
}


