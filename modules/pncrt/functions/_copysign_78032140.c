/* Module: pncrt.dll
   Function: _copysign
   Address: 78032140
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl _copysign(double _Number,double _Sign)

{
                    /* 0x32140  194  _copysign */
  return (double)CONCAT44((_Sign._4_4_ ^ _Number._4_4_) & 0x7fffffff ^ _Sign._4_4_,_Number._0_4_);
}


