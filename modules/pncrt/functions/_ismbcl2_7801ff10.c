/* Module: pncrt.dll
   Function: _ismbcl2
   Address: 7801ff10
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbcl2(uint _Ch)

{
  int iVar1;
  
                    /* 0x1ff10  307  _ismbcl2 */
  if (DAT_78042400 == 0x3a4) {
    iVar1 = _ismbclegal(_Ch);
    if (((iVar1 != 0) && (0x989e < _Ch)) && (_Ch < 0xeaa5)) {
      return 1;
    }
  }
  return 0;
}


