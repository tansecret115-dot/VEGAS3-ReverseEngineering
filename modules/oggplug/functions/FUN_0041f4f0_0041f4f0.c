/* Module: oggplug.dll
   Function: FUN_0041f4f0
   Address: 0041f4f0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0041f4f0(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


