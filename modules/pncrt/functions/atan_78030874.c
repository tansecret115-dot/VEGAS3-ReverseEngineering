/* Module: pncrt.dll
   Function: atan
   Address: 78030874
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl atan(double _X)

{
  undefined4 in_ECX;
  
                    /* 0x30874  579  atan */
                    /* WARNING: Subroutine does not return */
  __fload_withFB(in_ECX,(int)&_X);
}


