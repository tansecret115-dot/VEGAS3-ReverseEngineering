/* Module: wavplug.dll
   Function: FUN_5f3b71b0
   Address: 5f3b71b0
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_5f3b71b0(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


