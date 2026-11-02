/* Module: pncrt.dll
   Function: _mbsninc
   Address: 780216c0
   Source: Ghidra pseudocode (Stage 10 batch) */


uchar * __cdecl _mbsninc(uchar *_Str,size_t _Count)

{
  size_t sVar1;
  
                    /* 0x216c0  382  _mbsninc */
  if (_Str == (uchar *)0x0) {
    return (uchar *)0x0;
  }
  sVar1 = _mbsnbcnt(_Str,_Count);
  return _Str + sVar1;
}


