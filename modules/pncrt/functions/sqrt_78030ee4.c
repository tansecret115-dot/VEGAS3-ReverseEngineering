/* Module: pncrt.dll
   Function: sqrt
   Address: 78030ee4
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl sqrt(double _X)

{
  undefined4 in_ECX;
  
                    /* 0x30ee4  701  sqrt */
                    /* WARNING: Subroutine does not return */
  __fload_withFB(in_ECX,(int)&_X);
}


