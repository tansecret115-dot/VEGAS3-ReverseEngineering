/* Module: pncrt.dll
   Function: cos
   Address: 78030934
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl cos(double _X)

{
  undefined4 in_ECX;
  
                    /* 0x30934  590  cos */
                    /* WARNING: Subroutine does not return */
  __fload_withFB(in_ECX,(int)&_X);
}


