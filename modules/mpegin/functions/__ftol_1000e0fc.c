/* Module: mpegin.dll
   Function: __ftol
   Address: 1000e0fc
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}


