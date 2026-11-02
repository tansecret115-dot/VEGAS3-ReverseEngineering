/* Module: pncrt.dll
   Function: iswascii
   Address: 780177d0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl iswascii(wint_t _C)

{
                    /* 0x177d0  647  iswascii */
  return (uint)(_C < 0x80);
}


