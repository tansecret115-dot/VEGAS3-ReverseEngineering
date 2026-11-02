/* Module: pncrt.dll
   Function: cosh
   Address: 780309da
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl cosh(double _X)

{
  float10 fVar1;
  
                    /* 0x309da  591  cosh */
  fVar1 = (float10)__ctrandisp1(_X._0_4_,_X._4_4_);
  return (double)fVar1;
}


