/* Module: pncrt.dll
   Function: sinh
   Address: 780309d0
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl sinh(double _X)

{
  float10 fVar1;
  
                    /* 0x309d0  699  sinh */
  fVar1 = (float10)__ctrandisp1(_X._0_4_,_X._4_4_);
  return (double)fVar1;
}


