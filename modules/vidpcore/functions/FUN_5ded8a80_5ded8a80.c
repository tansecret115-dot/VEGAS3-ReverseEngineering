/* Module: vidpcore.dll
   Function: FUN_5ded8a80
   Address: 5ded8a80
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5ded8a80(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


