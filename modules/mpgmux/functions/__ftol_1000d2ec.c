/* Module: mpgmux.dll
   Function: __ftol
   Address: 1000d2ec
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    __ftol
   
   Library: Visual Studio */

longlong __ftol(void)

{
  float10 in_ST0;
  
  return (longlong)ROUND(in_ST0);
}


