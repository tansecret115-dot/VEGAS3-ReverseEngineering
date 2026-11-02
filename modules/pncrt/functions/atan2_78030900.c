/* Module: pncrt.dll
   Function: atan2
   Address: 78030900
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl atan2(double _Y,double _X)

{
  float10 fVar1;
  
                    /* 0x30900  580  atan2 */
  fVar1 = (float10)__ctrandisp2(_Y._0_4_,_Y._4_4_,_X._0_4_,_X._4_4_);
  return (double)fVar1;
}


