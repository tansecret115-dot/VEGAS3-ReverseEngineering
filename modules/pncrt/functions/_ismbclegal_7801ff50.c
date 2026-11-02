/* Module: pncrt.dll
   Function: _ismbclegal
   Address: 7801ff50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _ismbclegal(uint _Ch)

{
                    /* 0x1ff50  308  _ismbclegal */
  if (((*(byte *)((int)&_mbctype + (_Ch >> 8 & 0xff) + 1) & 4) != 0) &&
     ((*(byte *)((int)&_mbctype + (_Ch & 0xff) + 1) & 8) != 0)) {
    return 1;
  }
  return 0;
}


