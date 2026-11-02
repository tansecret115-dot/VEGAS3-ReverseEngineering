/* Module: vfplugs.dll
   Function: FUN_0044ed10
   Address: 0044ed10
   Source: Ghidra pseudocode (Stage 10 batch) */


uint FUN_0044ed10(void)

{
  BOOL BVar1;
  LARGE_INTEGER local_8;
  
  BVar1 = QueryPerformanceFrequency(&local_8);
  return -(uint)(BVar1 != 0) & local_8.s.LowPart;
}


