/* Module: pncrt.dll
   Function: fmod
   Address: 78030a20
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl fmod(double _X,double _Y)

{
  float10 fVar1;
  
                    /* 0x30a20  608  fmod */
  fVar1 = (float10)__ctrandisp2(_X._0_4_,_X._4_4_,_Y._0_4_,_Y._4_4_);
  return (double)fVar1;
}


