/* Module: pncrt.dll
   Function: _ismbstrail
   Address: 780202f0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbstrail(uchar *_Str,uchar *_Pos)

{
                    /* 0x202f0  316  _ismbstrail */
  if (DAT_78042400 != 0) {
    _lock(0x19);
    if (_Str <= _Pos) {
      while (*_Str != 0) {
        if ((*(byte *)((int)&_mbctype + *_Str + 1) & 4) != 0) {
          _Str = _Str + 1;
          if (_Str == _Pos) {
            _unlock(0x19);
            return -1;
          }
          if (*_Str == 0) break;
        }
        _Str = _Str + 1;
        if (_Pos < _Str) {
          _unlock(0x19);
          return 0;
        }
      }
    }
    _unlock(0x19);
  }
  return 0;
}


