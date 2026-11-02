/* Module: pncrt.dll
   Function: sin
   Address: 78030e34
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl sin(double _X)

{
  undefined4 in_ECX;
  
                    /* 0x30e34  698  sin */
                    /* WARNING: Subroutine does not return */
  __fload_withFB(in_ECX,(int)&_X);
}


