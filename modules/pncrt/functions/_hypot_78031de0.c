/* Module: pncrt.dll
   Function: _hypot
   Address: 78031de0
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl _hypot(double _X,double _Y)

{
  float10 fVar1;
  
                    /* 0x31de0  278  _hypot */
  fVar1 = FUN_78031e20(_X._0_4_,_X._4_4_,_Y._0_4_,_Y._4_4_,0x18);
  return (double)fVar1;
}


