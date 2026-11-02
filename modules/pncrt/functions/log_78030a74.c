/* Module: pncrt.dll
   Function: log
   Address: 78030a74
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl log(double _X)

{
  undefined4 in_ECX;
  
                    /* 0x30a74  664  log */
                    /* WARNING: Subroutine does not return */
  __fload_withFB(in_ECX,(int)&_X);
}


