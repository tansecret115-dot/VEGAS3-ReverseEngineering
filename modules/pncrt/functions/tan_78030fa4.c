/* Module: pncrt.dll
   Function: tan
   Address: 78030fa4
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl tan(double _X)

{
  undefined4 in_ECX;
  
                    /* 0x30fa4  728  tan */
                    /* WARNING: Subroutine does not return */
  __fload_withFB(in_ECX,(int)&_X);
}


