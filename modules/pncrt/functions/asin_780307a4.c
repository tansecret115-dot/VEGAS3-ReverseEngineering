/* Module: pncrt.dll
   Function: asin
   Address: 780307a4
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl asin(double _X)

{
  undefined4 in_ECX;
  
                    /* 0x307a4  578  asin */
                    /* WARNING: Subroutine does not return */
  __fload_withFB(in_ECX,(int)&_X);
}


