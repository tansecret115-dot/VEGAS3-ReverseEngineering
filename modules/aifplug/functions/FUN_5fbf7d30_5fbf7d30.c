/* Module: aifplug.dll
   Function: FUN_5fbf7d30
   Address: 5fbf7d30
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5fbf7d30(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


