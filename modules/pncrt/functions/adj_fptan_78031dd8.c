/* Module: pncrt.dll
   Function: adj_fptan
   Address: 78031dd8
   Source: Ghidra pseudocode (Stage 10 batch) */


/* adj_fptan */

float10 __cdecl adj_fptan(void)

{
  unkbyte10 in_ST0;
  
                    /* 0x31dd8  167  _adj_fptan */
  fptan(in_ST0);
  return (float10)1;
}


