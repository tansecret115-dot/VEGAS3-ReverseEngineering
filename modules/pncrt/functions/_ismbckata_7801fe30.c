/* Module: pncrt.dll
   Function: _ismbckata
   Address: 7801fe30
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbckata(uint _Ch)

{
                    /* 0x1fe30  304  _ismbckata */
  if ((((DAT_78042400 == 0x3a4) && (0x833f < _Ch)) && (_Ch < 0x8397)) && (_Ch != 0x837f)) {
    return 1;
  }
  return 0;
}


