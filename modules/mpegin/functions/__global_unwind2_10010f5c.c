/* Module: mpegin.dll
   Function: __global_unwind2
   Address: 10010f5c
   Source: Ghidra pseudocode (Stage 10 batch) */


/* Library Function - Single Match
    __global_unwind2
   
   Library: Visual Studio */

void __cdecl __global_unwind2(PVOID param_1)

{
  RtlUnwind(param_1,(PVOID)0x10010f74,(PEXCEPTION_RECORD)0x0,(PVOID)0x0);
  return;
}


