/* Module: pncrt.dll
   Function: ftol
   Address: 78033230
   Source: Ghidra pseudocode (Stage 10 batch) */


/* ftol */

longlong __cdecl ftol(void)

{
  float10 in_ST0;
  
                    /* 0x33230  251  _ftol */
  return (longlong)ROUND(in_ST0);
}


