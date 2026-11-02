/* Module: pncrt.dll
   Function: acos
   Address: 780306d4
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl acos(double _X)

{
  undefined4 in_ECX;
  
                    /* 0x306d4  576  acos */
                    /* WARNING: Subroutine does not return */
  __fload_withFB(in_ECX,(int)&_X);
}


