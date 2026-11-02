/* Module: pncrt.dll
   Function: _ismbcl0
   Address: 7801fe90
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbcl0(uint _Ch)

{
  int iVar1;
  
                    /* 0x1fe90  305  _ismbcl0 */
  if (DAT_78042400 == 0x3a4) {
    iVar1 = _ismbclegal(_Ch);
    if ((iVar1 != 0) && (_Ch < 0x889f)) {
      return 1;
    }
  }
  return 0;
}


