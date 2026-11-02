/* Module: pncrt.dll
   Function: _mbstok
   Address: 78021ba0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbstok(uchar *_Str,uchar *_Delim)

{
  DWORD *pDVar1;
  uchar *puVar2;
  byte *_Str_00;
  byte *pbVar3;
  
                    /* 0x21ba0  391  _mbstok */
  pDVar1 = FUN_78009cc0();
  if (DAT_78042400 == 0) {
    puVar2 = (uchar *)strtok((char *)_Str,(char *)_Delim);
    return puVar2;
  }
  if ((_Str != (uchar *)0x0) || (_Str = (uchar *)pDVar1[8], _Str != (uchar *)0x0)) {
    _Str_00 = _mbsspnp(_Str,_Delim);
    if (_Str_00 != (byte *)0x0) {
      _lock(0x19);
      if ((*_Str_00 != 0) &&
         (((*(byte *)((int)&_mbctype + *_Str_00 + 1) & 4) == 0 || (_Str_00[1] != 0)))) {
        pbVar3 = _mbspbrk(_Str_00,_Delim);
        if ((pbVar3 != (byte *)0x0) && (*pbVar3 != 0)) {
          if ((*(byte *)((int)&_mbctype + *pbVar3 + 1) & 4) != 0) {
            *pbVar3 = 0;
            pbVar3 = pbVar3 + 1;
          }
          *pbVar3 = 0;
          pDVar1[8] = (DWORD)(pbVar3 + 1);
          _unlock(0x19);
          return _Str_00;
        }
        pDVar1[8] = 0;
        _unlock(0x19);
        return _Str_00;
      }
      _unlock(0x19);
    }
  }
  return (uchar *)0x0;
}


