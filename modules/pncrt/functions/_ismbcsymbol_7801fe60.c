/* Module: pncrt.dll
   Function: _ismbcsymbol
   Address: 7801fe60
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbcsymbol(uint _Ch)

{
                    /* 0x1fe60  313  _ismbcsymbol */
  if ((((DAT_78042400 == 0x3a4) && (0x8140 < _Ch)) && (_Ch < 0x81ad)) && (_Ch != 0x817f)) {
    return 1;
  }
  return 0;
}


