/* Module: pncrt.dll
   Function: _mbctohira
   Address: 78020640
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _mbctohira(uint _Ch)

{
  int iVar1;
  
                    /* 0x20640  346  _mbctohira */
  iVar1 = _ismbckata(_Ch);
  if ((iVar1 != 0) && (_Ch < 0x8394)) {
    if (_Ch < 0x837f) {
      return _Ch - 0xa1;
    }
    _Ch = _Ch - 0xa2;
  }
  return _Ch;
}


