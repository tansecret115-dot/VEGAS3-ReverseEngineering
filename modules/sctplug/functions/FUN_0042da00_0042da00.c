/* Module: sctplug.dll
   Function: FUN_0042da00
   Address: 0042da00
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0042da00(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


