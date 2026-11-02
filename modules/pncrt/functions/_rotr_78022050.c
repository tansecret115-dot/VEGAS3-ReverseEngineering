/* Module: pncrt.dll
   Function: _rotr
   Address: 78022050
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _rotr(uint _Val,int _Shift)

{
  uint uVar1;
  uint uVar2;
  
                    /* 0x22050  422  _rotr */
  for (uVar1 = _Shift & 0x1f; uVar1 != 0; uVar1 = uVar1 - 1) {
    uVar2 = _Val & 1;
    _Val = _Val >> 1;
    if (uVar2 != 0) {
      _Val = _Val | 0x80000000;
    }
  }
  return _Val;
}


