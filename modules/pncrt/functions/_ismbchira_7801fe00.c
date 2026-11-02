/* Module: pncrt.dll
   Function: _ismbchira
   Address: 7801fe00
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbchira(uint _Ch)

{
                    /* 0x1fe00  303  _ismbchira */
  if (((DAT_78042400 == 0x3a4) && (0x829e < _Ch)) && (_Ch < 0x82f2)) {
    return 1;
  }
  return 0;
}


