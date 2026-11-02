/* Module: pncrt.dll
   Function: _chgsign
   Address: 78032170
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl _chgsign(double _X)

{
                    /* 0x32170  185  _chgsign */
  return (double)(CONCAT44(~_X._4_4_,_X._0_4_) ^ 0x7fffffff00000000);
}


