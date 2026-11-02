/* Module: pncrt.dll
   Function: _mbsbtype
   Address: 780207f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _mbsbtype(uchar *_Str,size_t _Pos)

{
  uchar _Ch;
  int _CType;
  
                    /* 0x207f0  352  _mbsbtype */
  if (DAT_78042400 == 0) {
    return 0;
  }
  _lock(0x19);
  _CType = -1;
  _Ch = *_Str;
  while( true ) {
    if (_Ch == '\0') {
      _unlock(0x19);
      return -1;
    }
    _Str = _Str + 1;
    _CType = _mbbtype(_Ch,_CType);
    if (_Pos == 0) break;
    _Ch = *_Str;
    _Pos = _Pos - 1;
  }
  _unlock(0x19);
  return _CType;
}


