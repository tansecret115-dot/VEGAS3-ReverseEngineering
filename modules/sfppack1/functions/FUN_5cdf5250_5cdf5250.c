/* Module: sfppack1.dll
   Function: FUN_5cdf5250
   Address: 5cdf5250
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5cdf5250(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


