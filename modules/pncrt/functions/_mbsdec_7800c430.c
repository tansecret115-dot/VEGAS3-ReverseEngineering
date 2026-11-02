/* Module: pncrt.dll
   Function: _mbsdec
   Address: 7800c430
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsdec(uchar *_Start,uchar *_Pos)

{
  byte *pbVar1;
  
                    /* 0xc430  359  _mbsdec */
  if (_Pos <= _Start) {
    return (uchar *)0x0;
  }
  if (DAT_78042400 != 0) {
    _lock(0x19);
    if ((*(byte *)((int)&_mbctype + _Pos[-1] + 1) & 4) == 0) {
      pbVar1 = _Pos + -2;
      while ((_Start <= pbVar1 && ((*(byte *)((int)&_mbctype + *pbVar1 + 1) & 4) != 0))) {
        pbVar1 = pbVar1 + -1;
      }
      _unlock(0x19);
      return _Pos + (-1 - ((int)_Pos - (int)pbVar1 & 1U));
    }
    _unlock(0x19);
    return _Pos + -2;
  }
  return _Pos + -1;
}


