/* Module: pncrt.dll
   Function: _getmbcp
   Address: 7800c1a0
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl _getmbcp(void)

{
                    /* 0xc1a0  266  _getmbcp */
  return -(uint)(DAT_78042844 != 0) & DAT_78042400;
}


