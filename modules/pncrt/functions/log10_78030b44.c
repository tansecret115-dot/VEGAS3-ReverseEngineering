/* Module: pncrt.dll
   Function: log10
   Address: 78030b44
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl log10(double _X)

{
  undefined4 in_ECX;
  
                    /* 0x30b44  665  log10 */
                    /* WARNING: Subroutine does not return */
  __fload_withFB(in_ECX,(int)&_X);
}


