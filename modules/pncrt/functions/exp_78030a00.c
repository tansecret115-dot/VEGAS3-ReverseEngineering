/* Module: pncrt.dll
   Function: exp
   Address: 78030a00
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl exp(double _X)

{
  float10 fVar1;
  
                    /* 0x30a00  596  exp */
  fVar1 = (float10)__ctrandisp1(_X._0_4_,_X._4_4_);
  return (double)fVar1;
}


