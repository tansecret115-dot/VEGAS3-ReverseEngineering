/* Module: pncrt.dll
   Function: pow
   Address: 78030c19
   Source: Ghidra pseudocode (Stage 10 batch) */


double __cdecl pow(double _X,double _Y)

{
  undefined4 in_ECX;
  
                    /* 0x30c19  679  pow */
                    /* WARNING: Subroutine does not return */
  __fload_withFB(in_ECX,(int)&_Y);
}


