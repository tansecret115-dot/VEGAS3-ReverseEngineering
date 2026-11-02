/* Module: pncrt.dll
   Function: _callnewh
   Address: 78001040
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _callnewh(size_t _Size)

{
  int iVar1;
  
                    /* 0x1040  180  _callnewh */
  if (DAT_78041a80 != (code *)0x0) {
    iVar1 = (*DAT_78041a80)(_Size);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


