/* Module: pncrt.dll
   Function: _rotl
   Address: 78022000
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _rotl(uint _Val,int _Shift)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0x22000  421  _rotl */
  for (uVar1 = _Shift & 0x1f; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = _Val & 0x80000000;
    _Val = _Val << 1;
    if (uVar2 != 0) {
      _Val = _Val | 1;
    }
  }
  return _Val;
}


