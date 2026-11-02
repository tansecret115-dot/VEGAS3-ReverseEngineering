/* Module: pncrt.dll
   Function: _ismbslead
   Address: 78020270
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbslead(uchar *_Str,uchar *_Pos)

{
  byte *pbVar1;
  
                    /* 0x20270  315  _ismbslead */
  if (DAT_78042400 != 0) {
    _lock(0x19);
    if (_Str <= _Pos) {
      while (*_Str != 0) {
        pbVar1 = _Str;
        if ((*(byte *)((int)&_mbctype + *_Str + 1) & 4) != 0) {
          pbVar1 = _Str + 1;
          if (_Str == _Pos) {
            _unlock(0x19);
            return -1;
          }
          if (*pbVar1 == 0) break;
        }
        _Str = pbVar1 + 1;
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


