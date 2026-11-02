/* Module: mpgmux.dll
   Function: __global_unwind2
   Address: 1000e804
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x1000e81c,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


