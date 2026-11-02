/* Module: pncrt.dll
   Function: _mbctokata
   Address: 78020680
   Source: Ghidra pseudocode (Stage 10 batch) */


uint __cdecl _mbctokata(uint _Ch)

{
  int iVar1;
  uint uVar2;
  
                    /* 0x20680  347  _mbctokata */
  iVar1 = _ismbchira(_Ch);
  uVar2 = _Ch;
  if ((iVar1 != 0) && (uVar2 = _Ch + 0xa1, 0x837e < uVar2)) {
    uVar2 = _Ch + 0xa2;
  }
  return uVar2;
}


