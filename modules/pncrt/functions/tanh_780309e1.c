/* Module: pncrt.dll
   Function: tanh
   Address: 780309e1
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl tanh(double _X)

{
  float10 fVar1;
  
                    /* 0x309e1  729  tanh */
  fVar1 = (float10)__ctrandisp1(_X._0_4_,_X._4_4_);
  return (double)fVar1;
}


