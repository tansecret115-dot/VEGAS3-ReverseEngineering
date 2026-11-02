/* Module: pncrt.dll
   Function: __isascii
   Address: 78016f50
   Source: Ghidra pseudocode (Stage 10 batch) */


int __cdecl __isascii(int _C)

{
                    /* 0x16f50  103  __isascii */
  return (uint)((uint)_C < 0x80);
}


