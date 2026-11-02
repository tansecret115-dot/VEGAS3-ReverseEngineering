/* Module: pncrt.dll
   Function: _ismbcl1
   Address: 7801fed0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbcl1(uint _Ch)

{
  int iVar1;
  
                    /* 0x1fed0  306  _ismbcl1 */
  if (DAT_78042400 == 0x3a4) {
    iVar1 = _ismbclegal(_Ch);
    if (((iVar1 != 0) && (0x889e < _Ch)) && (_Ch < 0x9873)) {
      return 1;
    }
  }
  return 0;
}


